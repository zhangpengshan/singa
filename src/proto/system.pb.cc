// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: system.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "system.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace lapis {

namespace {

const ::google::protobuf::Descriptor* SystemProto_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemProto_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_system_2eproto() {
  protobuf_AddDesc_system_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "system.proto");
  GOOGLE_CHECK(file != NULL);
  SystemProto_descriptor_ = file->message_type(0);
  static const int SystemProto_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, coordinator_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, worker_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, worker_end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, memory_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, memory_end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, disk_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, disk_end_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, standalone_),
  };
  SystemProto_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SystemProto_descriptor_,
      SystemProto::default_instance_,
      SystemProto_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemProto, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SystemProto));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_system_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SystemProto_descriptor_, &SystemProto::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_system_2eproto() {
  delete SystemProto::default_instance_;
  delete SystemProto_reflection_;
}

void protobuf_AddDesc_system_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\014system.proto\022\005lapis\"\313\001\n\013SystemProto\022\026\n"
    "\013coordinator\030\001 \002(\005:\0010\022\027\n\014worker_start\030\002 "
    "\002(\005:\0011\022\025\n\nworker_end\030\003 \002(\005:\0011\022\027\n\014memory_"
    "start\030\004 \001(\005:\0011\022\025\n\nmemory_end\030\005 \001(\005:\0011\022\025\n"
    "\ndisk_start\030\006 \001(\005:\0011\022\023\n\010disk_end\030\007 \001(\005:\001"
    "1\022\030\n\nstandalone\030\010 \001(\010:\004true", 227);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "system.proto", &protobuf_RegisterTypes);
  SystemProto::default_instance_ = new SystemProto();
  SystemProto::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_system_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_system_2eproto {
  StaticDescriptorInitializer_system_2eproto() {
    protobuf_AddDesc_system_2eproto();
  }
} static_descriptor_initializer_system_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int SystemProto::kCoordinatorFieldNumber;
const int SystemProto::kWorkerStartFieldNumber;
const int SystemProto::kWorkerEndFieldNumber;
const int SystemProto::kMemoryStartFieldNumber;
const int SystemProto::kMemoryEndFieldNumber;
const int SystemProto::kDiskStartFieldNumber;
const int SystemProto::kDiskEndFieldNumber;
const int SystemProto::kStandaloneFieldNumber;
#endif  // !_MSC_VER

SystemProto::SystemProto()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void SystemProto::InitAsDefaultInstance() {
}

SystemProto::SystemProto(const SystemProto& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void SystemProto::SharedCtor() {
  _cached_size_ = 0;
  coordinator_ = 0;
  worker_start_ = 1;
  worker_end_ = 1;
  memory_start_ = 1;
  memory_end_ = 1;
  disk_start_ = 1;
  disk_end_ = 1;
  standalone_ = true;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SystemProto::~SystemProto() {
  SharedDtor();
}

void SystemProto::SharedDtor() {
  if (this != default_instance_) {
  }
}

void SystemProto::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemProto::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemProto_descriptor_;
}

const SystemProto& SystemProto::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_system_2eproto();
  return *default_instance_;
}

SystemProto* SystemProto::default_instance_ = NULL;

SystemProto* SystemProto::New() const {
  return new SystemProto;
}

void SystemProto::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    coordinator_ = 0;
    worker_start_ = 1;
    worker_end_ = 1;
    memory_start_ = 1;
    memory_end_ = 1;
    disk_start_ = 1;
    disk_end_ = 1;
    standalone_ = true;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SystemProto::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 coordinator = 1 [default = 0];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &coordinator_)));
          set_has_coordinator();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_worker_start;
        break;
      }

      // required int32 worker_start = 2 [default = 1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_worker_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &worker_start_)));
          set_has_worker_start();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_worker_end;
        break;
      }

      // required int32 worker_end = 3 [default = 1];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_worker_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &worker_end_)));
          set_has_worker_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(32)) goto parse_memory_start;
        break;
      }

      // optional int32 memory_start = 4 [default = 1];
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_memory_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &memory_start_)));
          set_has_memory_start();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(40)) goto parse_memory_end;
        break;
      }

      // optional int32 memory_end = 5 [default = 1];
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_memory_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &memory_end_)));
          set_has_memory_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(48)) goto parse_disk_start;
        break;
      }

      // optional int32 disk_start = 6 [default = 1];
      case 6: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_disk_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &disk_start_)));
          set_has_disk_start();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(56)) goto parse_disk_end;
        break;
      }

      // optional int32 disk_end = 7 [default = 1];
      case 7: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_disk_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &disk_end_)));
          set_has_disk_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(64)) goto parse_standalone;
        break;
      }

      // optional bool standalone = 8 [default = true];
      case 8: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_standalone:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &standalone_)));
          set_has_standalone();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void SystemProto::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required int32 coordinator = 1 [default = 0];
  if (has_coordinator()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->coordinator(), output);
  }

  // required int32 worker_start = 2 [default = 1];
  if (has_worker_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->worker_start(), output);
  }

  // required int32 worker_end = 3 [default = 1];
  if (has_worker_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->worker_end(), output);
  }

  // optional int32 memory_start = 4 [default = 1];
  if (has_memory_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->memory_start(), output);
  }

  // optional int32 memory_end = 5 [default = 1];
  if (has_memory_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->memory_end(), output);
  }

  // optional int32 disk_start = 6 [default = 1];
  if (has_disk_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->disk_start(), output);
  }

  // optional int32 disk_end = 7 [default = 1];
  if (has_disk_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(7, this->disk_end(), output);
  }

  // optional bool standalone = 8 [default = true];
  if (has_standalone()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(8, this->standalone(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* SystemProto::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required int32 coordinator = 1 [default = 0];
  if (has_coordinator()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->coordinator(), target);
  }

  // required int32 worker_start = 2 [default = 1];
  if (has_worker_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->worker_start(), target);
  }

  // required int32 worker_end = 3 [default = 1];
  if (has_worker_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->worker_end(), target);
  }

  // optional int32 memory_start = 4 [default = 1];
  if (has_memory_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->memory_start(), target);
  }

  // optional int32 memory_end = 5 [default = 1];
  if (has_memory_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->memory_end(), target);
  }

  // optional int32 disk_start = 6 [default = 1];
  if (has_disk_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->disk_start(), target);
  }

  // optional int32 disk_end = 7 [default = 1];
  if (has_disk_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(7, this->disk_end(), target);
  }

  // optional bool standalone = 8 [default = true];
  if (has_standalone()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(8, this->standalone(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int SystemProto::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 coordinator = 1 [default = 0];
    if (has_coordinator()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->coordinator());
    }

    // required int32 worker_start = 2 [default = 1];
    if (has_worker_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->worker_start());
    }

    // required int32 worker_end = 3 [default = 1];
    if (has_worker_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->worker_end());
    }

    // optional int32 memory_start = 4 [default = 1];
    if (has_memory_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->memory_start());
    }

    // optional int32 memory_end = 5 [default = 1];
    if (has_memory_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->memory_end());
    }

    // optional int32 disk_start = 6 [default = 1];
    if (has_disk_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->disk_start());
    }

    // optional int32 disk_end = 7 [default = 1];
    if (has_disk_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->disk_end());
    }

    // optional bool standalone = 8 [default = true];
    if (has_standalone()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SystemProto::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SystemProto* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SystemProto*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SystemProto::MergeFrom(const SystemProto& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_coordinator()) {
      set_coordinator(from.coordinator());
    }
    if (from.has_worker_start()) {
      set_worker_start(from.worker_start());
    }
    if (from.has_worker_end()) {
      set_worker_end(from.worker_end());
    }
    if (from.has_memory_start()) {
      set_memory_start(from.memory_start());
    }
    if (from.has_memory_end()) {
      set_memory_end(from.memory_end());
    }
    if (from.has_disk_start()) {
      set_disk_start(from.disk_start());
    }
    if (from.has_disk_end()) {
      set_disk_end(from.disk_end());
    }
    if (from.has_standalone()) {
      set_standalone(from.standalone());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SystemProto::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemProto::CopyFrom(const SystemProto& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SystemProto::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void SystemProto::Swap(SystemProto* other) {
  if (other != this) {
    std::swap(coordinator_, other->coordinator_);
    std::swap(worker_start_, other->worker_start_);
    std::swap(worker_end_, other->worker_end_);
    std::swap(memory_start_, other->memory_start_);
    std::swap(memory_end_, other->memory_end_);
    std::swap(disk_start_, other->disk_start_);
    std::swap(disk_end_, other->disk_end_);
    std::swap(standalone_, other->standalone_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SystemProto::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemProto_descriptor_;
  metadata.reflection = SystemProto_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace lapis

// @@protoc_insertion_point(global_scope)
