/*
 * Copyright (c) 2020-2022, NVIDIA CORPORATION.  All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "src/fastertransformer/utils/cublasAlgoMap.h"
#include "src/fastertransformer/utils/cuda_bf16_wrapper.h"
#include "src/fastertransformer/utils/cuda_utils.h"
#include "src/fastertransformer/utils/gemm_test/gemm_func.h"

#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <cuda_fp16.h>
#include <cuda_profiler_api.h>
#include <map>
#include <sys/time.h>
#include <unistd.h>
#include <vector>

namespace fastertransformer {

template<typename T>
void generate_encoder_gemm_config(int   batch_size,
                                  int   seq_len,
                                  int   head_num,
                                  int   size_per_head,
                                  void* buffer,
                                  bool  isAppend         = true,
                                  int   tensor_para_size = 1);

}  // namespace fastertransformer
