// Copyright © 2014 Wei Wang. All Rights Reserved.
// 2014-06-28 14:41

/**
 * This file is the main entrance of the program.
 * It registers user defined classes, e.g., data source, edge and layer
 * classes and start either the worker or coordinator.
 */

#include <gflags/gflags.h>
#include <glog/logging.h>
#include "utils/global_context.h"
#include "worker/worker.h"
#include "coordinator/coordinator.h"
#include "model_controller/model.h"


DEFINE_string(system_conf, "system.conf", "configuration file for node roles");
DEFINE_string(model_conf, "model.conf", "DL model configuration file");

int main(int argc, char **argv) {
  google::InitGoogleLogging(argv[0]);
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  // Note you can register you own layer/edge/datasource here
  //
  // TODO(all) Init memory servers here?

  // Init GlobalContext
  lapis::GlobalContext::Get()->Init(FLAGS_system_conf, FLAGS_model_conf);
  lapis::ModelController mc;
  mc.Init();
  // There are two type of working units: coordinator, worker
  if (mc.iscoordinator()) {
    lapis::Coordinator coordinator(&mc);
    coordinator.Run();
  } else {
    lapis::Worker worker(&mc);
    worker.Run();
  }
  return 0;
}
