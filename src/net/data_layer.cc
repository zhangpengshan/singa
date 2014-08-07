// Copyright © 2014 Wei Wang. All Rights Reserved.
// 2014-07-15 11:11
#include <glog/logging.h>
#include "net/data_layer.h"
#include "net/trainer.h"

namespace lapis {

const std::string DataLayer::kType = "DataLayer";

void DataLayer::Init(const LayerProto &proto) {
  Layer::Init(proto);
  data_source_name_ = proto.data_source();
  data_source_ = nullptr;
  mirror_=proto.mirror();
  cropsize_=proto.cropsize();
}

void DataLayer::ToProto(LayerProto *layer_proto) {
  Layer::ToProto(layer_proto);
  layer_proto->set_data_source(data_source_name_);
}

void DataLayer::SetupDataSource(int batchsize,
                                const std::vector<DataSource *> &sources) {
  batchsize_=batchsize;
  for (auto *source : sources) {
    if (source->name() == data_source_name_) {
      data_source_ = source;
      break;
    }
  }
  CHECK(data_source_ != nullptr) << "Cannot find data source: " << name_;
}

void DataLayer::Setup(const char flag) {
  width_=data_source_->width();
  height_=data_source_->height();
  channels_=data_source_->channels();
  VLOG(2)<<"DataLayer: "<<name_<<" cropsize "<<cropsize_;
  if(cropsize_){
    data_.Resize(batchsize_, channels_,cropsize_, cropsize_, AllocData(flag));
    tmp_.Resize(batchsize_,channels_,width_, height_, AllocData(flag));
    VLOG(2)<<" shape before crop "<<tmp_.tostring()
      <<" shape after crop "<<data_.tostring();
  }
  else {
    data_.Resize(batchsize_,channels_, height_,width_,AllocData(flag));
    VLOG(2) <<" shape "<<data_.tostring();
  }
}

void DataLayer::Forward() {
  VLOG(3)<<name_;
  for(auto* edge: in_edges_) {
    edge->Forward(edge->OtherSide(this)->feature(edge), nullptr,true);
  }
  if(cropsize_)
    data_source_->GetData(&tmp_);
  else
    data_source_->GetData(&data_);
  if (cropsize_) {
    float* data_dptr=data_.dptr;
    float* tmp_dptr=tmp_.dptr;
    for (int itemid = 0; itemid < batchsize_; ++itemid) {
      // get a blob
      int h_off, w_off;
      // We only do random crop when we do training.
      if (Trainer::phase == Phase::kTrain) {
        h_off = rand() % (height_ - cropsize_);
        w_off = rand() % (width_ - cropsize_);
      } else {
        h_off = (height_ - cropsize_) / 2;
        w_off = (width_ - cropsize_) / 2;
      }
      // NOLINT_NEXT_LINE(runtime/threadsafe_fn)
      if (mirror_ && rand() % 2) {
        // Copy mirrored version
        for (int c = 0; c < channels_; ++c) {
          for (int h = 0; h < cropsize_; ++h) {
            for (int w = 0; w < cropsize_; ++w) {
              data_dptr[((itemid * channels_ + c) * cropsize_ + h) * cropsize_
                + cropsize_ - 1 - w] = tmp_dptr[(c * height_ + h + h_off) * width_
                + w + w_off];
            }
          }
        }
      } else {
        // Normal copy
        for (int c = 0; c < channels_; ++c) {
          for (int h = 0; h < cropsize_; ++h) {
            for (int w = 0; w < cropsize_; ++w) {
              data_dptr[((itemid * channels_+ c) * cropsize_+ h) * cropsize_+ w]
                = tmp_dptr[(c * height_+ h + h_off) * width_
                + w + w_off];
            }
          }
        }
      }
    }
  }
}

void DataLayer::Backward() {
  VLOG(3)<<name_;
  for (Edge *edge : out_edges_) {
    Layer *layer = edge->OtherSide(this);
    edge->Backward(layer->feature(edge), layer->gradient(edge), data_,
                   nullptr, true);
  }
}
}  // namespace lapis
