//===-- Definition of type __qsortrcompare_t ------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIBC_TYPES___QSORTRCOMPARE_T_H
#define LLVM_LIBC_TYPES___QSORTRCOMPARE_T_H

typedef int (*__qsortrcompare_t)(const void *, const void *, void *);

#endif // LLVM_LIBC_TYPES___QSORTRCOMPARE_T_H
