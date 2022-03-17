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
 * 读取dart使用内存的情况
 */
DART_EXPORT char* Dart_QueryMainIsolateMemory();

/**
 * 读取dart使用内存的情况
 */
DART_EXPORT char* Dart_QueryAllIsolateMemory();

/**
 * gc
 */
DART_EXPORT void Dart_FullGCMainIsolate();

#endif /* INCLUDE_DART_WDEXT_API_H_ */ /* NOLINT */
