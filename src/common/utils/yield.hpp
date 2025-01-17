/*
 Copyright 2016-2019 Intel Corporation
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
     http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
*/

#pragma once

#include <immintrin.h>
#include <sched.h>
#include <time.h>

enum ccl_yield_type
{
    ccl_yield_none,
    ccl_yield_pause,
    ccl_yield_sleep,
    ccl_yield_sched_yield,

    ccl_yield_last_value
};

void ccl_yield(ccl_yield_type yield_type);
const char* ccl_yield_type_to_str(ccl_yield_type type);
