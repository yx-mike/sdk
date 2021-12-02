/*
 * Copyright (c) 2021 WD, the Dart project authors.  Please see the AUTHORS file
 * for details. All rights reserved. Use of this source code is governed by a
 * BSD-style license that can be found in the LICENSE file.
 */

#ifndef RUNTIME_INCLUDE_DART_WDEXT_API_H_
#define RUNTIME_INCLUDE_DART_WDEXT_API_H_

#include "dart_api.h" /* NOLINT */

/*
 * ==========================================
 * Message sending/receiving from native code
 * ==========================================
 */

/**
 * 可以参考vm-service的 class MemoryUsage的注释
 */
typedef struct {
  const char* name;  // isolate name
  int64_t heapUsage;  // The current heap memory usage in bytes.
  int64_t heapCapacity;  // The total capacity of the heap in bytes.
  int64_t externalUsage;  // The amount of non-Dart memory that is retained by Dart objects
} Dart_IsolateMemoryInfo;

/**
 * 读取dart使用内存的情况
 */
DART_EXPORT Dart_IsolateMemoryInfo Dart_QueryMainIsolateMemory();

/**
 * 读取dart使用内存的情况
 */
DART_EXPORT Dart_IsolateMemoryInfo Dart_QuerySystemIsolateMemory();

#endif /* INCLUDE_DART_WDEXT_API_H_ */ /* NOLINT */
