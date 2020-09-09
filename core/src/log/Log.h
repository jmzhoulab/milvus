// Copyright (C) 2019-2020 Zilliz. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance
// with the License. You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software distributed under the License
// is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express
// or implied. See the License for the specific language governing permissions and limitations under the License.

#pragma once

#include <string>

#include "easyloggingpp/easylogging++.h"

namespace milvus {

/*
 * Please use LOG_MODULE_LEVEL_C macro in member function of class
 * and LOG_MODULE_LEVEL_ macro in other functions.
 */

/////////////////////////////////////////////////////////////////////////////////////////////////
#define SERVER_MODULE_NAME "SERVER"
#define SERVER_MODULE_CLASS_FUNCTION \
    LogOut("[%s][%s::%s][%s] ", SERVER_MODULE_NAME, (typeid(*this).name()), __FUNCTION__, GetThreadName().c_str())
#define SERVER_MODULE_FUNCTION LogOut("[%s][%s][%s] ", SERVER_MODULE_NAME, __FUNCTION__, GetThreadName().c_str())

#define LOG_SERVER_TRACE_C LOG(TRACE) << SERVER_MODULE_CLASS_FUNCTION
#define LOG_SERVER_DEBUG_C LOG(DEBUG) << SERVER_MODULE_CLASS_FUNCTION
#define LOG_SERVER_INFO_C LOG(INFO) << SERVER_MODULE_CLASS_FUNCTION
#define LOG_SERVER_WARNING_C LOG(WARNING) << SERVER_MODULE_CLASS_FUNCTION
#define LOG_SERVER_ERROR_C LOG(ERROR) << SERVER_MODULE_CLASS_FUNCTION
#define LOG_SERVER_FATAL_C LOG(FATAL) << SERVER_MODULE_CLASS_FUNCTION

#define LOG_SERVER_TRACE_ LOG(TRACE) << SERVER_MODULE_FUNCTION
#define LOG_SERVER_DEBUG_ LOG(DEBUG) << SERVER_MODULE_FUNCTION
#define LOG_SERVER_INFO_ LOG(INFO) << SERVER_MODULE_FUNCTION
#define LOG_SERVER_WARNING_ LOG(WARNING) << SERVER_MODULE_FUNCTION
#define LOG_SERVER_ERROR_ LOG(ERROR) << SERVER_MODULE_FUNCTION
#define LOG_SERVER_FATAL_ LOG(FATAL) << SERVER_MODULE_FUNCTION

/////////////////////////////////////////////////////////////////////////////////////////////////
#define ENGINE_MODULE_NAME "ENGINE"
#define ENGINE_MODULE_CLASS_FUNCTION \
    LogOut("[%s][%s::%s][%s] ", ENGINE_MODULE_NAME, (typeid(*this).name()), __FUNCTION__, GetThreadName().c_str())
#define ENGINE_MODULE_FUNCTION LogOut("[%s][%s][%s] ", ENGINE_MODULE_NAME, __FUNCTION__, GetThreadName().c_str())

#define LOG_ENGINE_TRACE_C LOG(TRACE) << ENGINE_MODULE_CLASS_FUNCTION
#define LOG_ENGINE_DEBUG_C LOG(DEBUG) << ENGINE_MODULE_CLASS_FUNCTION
#define LOG_ENGINE_INFO_C LOG(INFO) << ENGINE_MODULE_CLASS_FUNCTION
#define LOG_ENGINE_WARNING_C LOG(WARNING) << ENGINE_MODULE_CLASS_FUNCTION
#define LOG_ENGINE_ERROR_C LOG(ERROR) << ENGINE_MODULE_CLASS_FUNCTION
#define LOG_ENGINE_FATAL_C LOG(FATAL) << ENGINE_MODULE_CLASS_FUNCTION

#define LOG_ENGINE_TRACE_ LOG(TRACE) << ENGINE_MODULE_FUNCTION
#define LOG_ENGINE_DEBUG_ LOG(DEBUG) << ENGINE_MODULE_FUNCTION
#define LOG_ENGINE_INFO_ LOG(INFO) << ENGINE_MODULE_FUNCTION
#define LOG_ENGINE_WARNING_ LOG(WARNING) << ENGINE_MODULE_FUNCTION
#define LOG_ENGINE_ERROR_ LOG(ERROR) << ENGINE_MODULE_FUNCTION
#define LOG_ENGINE_FATAL_ LOG(FATAL) << ENGINE_MODULE_FUNCTION

/////////////////////////////////////////////////////////////////////////////////////////////////
#define WRAPPER_MODULE_NAME "WRAPPER"
#define WRAPPER_MODULE_CLASS_FUNCTION \
    LogOut("[%s][%s::%s][%s] ", WRAPPER_MODULE_NAME, (typeid(*this).name()), __FUNCTION__, GetThreadName().c_str())
#define WRAPPER_MODULE_FUNCTION LogOut("[%s][%s][%s] ", WRAPPER_MODULE_NAME, __FUNCTION__, GetThreadName().c_str())

#define LOG_WRAPPER_TRACE_C LOG(TRACE) << WRAPPER_MODULE_CLASS_FUNCTION
#define LOG_WRAPPER_DEBUG_C LOG(DEBUG) << WRAPPER_MODULE_CLASS_FUNCTION
#define LOG_WRAPPER_INFO_C LOG(INFO) << WRAPPER_MODULE_CLASS_FUNCTION
#define LOG_WRAPPER_WARNING_C LOG(WARNING) << WRAPPER_MODULE_CLASS_FUNCTION
#define LOG_WRAPPER_ERROR_C LOG(ERROR) << WRAPPER_MODULE_CLASS_FUNCTION
#define LOG_WRAPPER_FATAL_C LOG(FATAL) << WRAPPER_MODULE_CLASS_FUNCTION

#define LOG_WRAPPER_TRACE_ LOG(TRACE) << WRAPPER_MODULE_FUNCTION
#define LOG_WRAPPER_DEBUG_ LOG(DEBUG) << WRAPPER_MODULE_FUNCTION
#define LOG_WRAPPER_INFO_ LOG(INFO) << WRAPPER_MODULE_FUNCTION
#define LOG_WRAPPER_WARNING_ LOG(WARNING) << WRAPPER_MODULE_FUNCTION
#define LOG_WRAPPER_ERROR_ LOG(ERROR) << WRAPPER_MODULE_FUNCTION
#define LOG_WRAPPER_FATAL_ LOG(FATAL) << WRAPPER_MODULE_FUNCTION

/////////////////////////////////////////////////////////////////////////////////////////////////
#define STORAGE_MODULE_NAME "STORAGE"
#define STORAGE_MODULE_CLASS_FUNCTION \
    LogOut("[%s][%s::%s][%s] ", STORAGE_MODULE_NAME, (typeid(*this).name()), __FUNCTION__, GetThreadName().c_str())
#define STORAGE_MODULE_FUNCTION LogOut("[%s][%s][%s] ", STORAGE_MODULE_NAME, __FUNCTION__, GetThreadName().c_str())

#define LOG_STORAGE_TRACE_C LOG(TRACE) << STORAGE_MODULE_CLASS_FUNCTION
#define LOG_STORAGE_DEBUG_C LOG(DEBUG) << STORAGE_MODULE_CLASS_FUNCTION
#define LOG_STORAGE_INFO_C LOG(INFO) << STORAGE_MODULE_CLASS_FUNCTION
#define LOG_STORAGE_WARNING_C LOG(WARNING) << STORAGE_MODULE_CLASS_FUNCTION
#define LOG_STORAGE_ERROR_C LOG(ERROR) << STORAGE_MODULE_CLASS_FUNCTION
#define LOG_STORAGE_FATAL_C LOG(FATAL) << STORAGE_MODULE_CLASS_FUNCTION

#define LOG_STORAGE_TRACE_ LOG(TRACE) << STORAGE_MODULE_FUNCTION
#define LOG_STORAGE_DEBUG_ LOG(DEBUG) << STORAGE_MODULE_FUNCTION
#define LOG_STORAGE_INFO_ LOG(INFO) << STORAGE_MODULE_FUNCTION
#define LOG_STORAGE_WARNING_ LOG(WARNING) << STORAGE_MODULE_FUNCTION
#define LOG_STORAGE_ERROR_ LOG(ERROR) << STORAGE_MODULE_FUNCTION
#define LOG_STORAGE_FATAL_ LOG(FATAL) << STORAGE_MODULE_FUNCTION

/////////////////////////////////////////////////////////////////////////////////////////////////
#define WAL_MODULE_NAME "WAL"
#define WAL_MODULE_CLASS_FUNCTION \
    LogOut("[%s][%s::%s][%s] ", WAL_MODULE_NAME, (typeid(*this).name()), __FUNCTION__, GetThreadName().c_str())
#define WAL_MODULE_FUNCTION LogOut("[%s][%s][%s] ", WAL_MODULE_NAME, __FUNCTION__, GetThreadName().c_str())

#define LOG_WAL_TRACE_C LOG(TRACE) << WAL_MODULE_CLASS_FUNCTION
#define LOG_WAL_DEBUG_C LOG(DEBUG) << WAL_MODULE_CLASS_FUNCTION
#define LOG_WAL_INFO_C LOG(INFO) << WAL_MODULE_CLASS_FUNCTION
#define LOG_WAL_WARNING_C LOG(WARNING) << WAL_MODULE_CLASS_FUNCTION
#define LOG_WAL_ERROR_C LOG(ERROR) << WAL_MODULE_CLASS_FUNCTION
#define LOG_WAL_FATAL_C LOG(FATAL) << WAL_MODULE_CLASS_FUNCTION

#define LOG_WAL_TRACE_ LOG(TRACE) << WAL_MODULE_FUNCTION
#define LOG_WAL_DEBUG_ LOG(DEBUG) << WAL_MODULE_FUNCTION
#define LOG_WAL_INFO_ LOG(INFO) << WAL_MODULE_FUNCTION
#define LOG_WAL_WARNING_ LOG(WARNING) << WAL_MODULE_FUNCTION
#define LOG_WAL_ERROR_ LOG(ERROR) << WAL_MODULE_FUNCTION
#define LOG_WAL_FATAL_ LOG(FATAL) << WAL_MODULE_FUNCTION

/////////////////////////////////////////////////////////////////////////////////////////////////////
std::string
LogOut(const char* pattern, ...);

void
SetThreadName(const std::string& name);

std::string
GetThreadName();

}  // namespace milvus