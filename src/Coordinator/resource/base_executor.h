// Copyright 2020 The 9nFL Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License. 

#ifndef RESOURCE_BASE_EXECUTOR_H
#define RESOURCE_BASE_EXECUTOR_H

#include <memory>
#include <string>
#include "gflags/gflags.h"
#include "common/util.h"

namespace resource {

class BaseExecutor {
 public:
  BaseExecutor() {}
  virtual ~BaseExecutor() {}
  virtual bool Init() = 0;

  std::shared_ptr<grpc::Channel> GetChannel() {
    return channel_;
  }
 protected:
  std::shared_ptr<grpc::Channel> channel_;
};

}  // namespace resource
#endif