// NOTE: Assertions have been autogenerated by utils/update_cc_test_checks.py
// REQUIRES: aarch64-registered-target
// RUN: %clang_cc1 -fclang-abi-compat=latest -triple aarch64 -target-feature +sve -disable-O0-optnone -Werror -Wall -emit-llvm -o - %s | opt -S -passes=mem2reg,tailcallelim | FileCheck %s
// RUN: %clang_cc1 -fclang-abi-compat=latest -triple aarch64 -target-feature +sve -disable-O0-optnone -Werror -Wall -emit-llvm -o - -x c++ %s | opt -S -passes=mem2reg,tailcallelim | FileCheck %s -check-prefix=CPP-CHECK
// RUN: %clang_cc1 -fclang-abi-compat=latest -triple aarch64 -target-feature +sve -S -disable-O0-optnone -Werror -Wall -o /dev/null %s
#include <arm_sve.h>

// CHECK-LABEL: @test_svcntp_b8(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv16i1(<vscale x 16 x i1> [[PG:%.*]], <vscale x 16 x i1> [[OP:%.*]])
// CHECK-NEXT:    ret i64 [[TMP0]]
//
// CPP-CHECK-LABEL: @_Z14test_svcntp_b8u10__SVBool_tS_(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv16i1(<vscale x 16 x i1> [[PG:%.*]], <vscale x 16 x i1> [[OP:%.*]])
// CPP-CHECK-NEXT:    ret i64 [[TMP0]]
//
uint64_t test_svcntp_b8(svbool_t pg, svbool_t op)
{
  return svcntp_b8(pg, op);
}

// CHECK-LABEL: @test_svcntp_b16(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv8i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 8 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv8i1(<vscale x 16 x i1> [[OP:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv8i1(<vscale x 8 x i1> [[TMP0]], <vscale x 8 x i1> [[TMP1]])
// CHECK-NEXT:    ret i64 [[TMP2]]
//
// CPP-CHECK-LABEL: @_Z15test_svcntp_b16u10__SVBool_tS_(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 8 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv8i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 8 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv8i1(<vscale x 16 x i1> [[OP:%.*]])
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv8i1(<vscale x 8 x i1> [[TMP0]], <vscale x 8 x i1> [[TMP1]])
// CPP-CHECK-NEXT:    ret i64 [[TMP2]]
//
uint64_t test_svcntp_b16(svbool_t pg, svbool_t op)
{
  return svcntp_b16(pg, op);
}

// CHECK-LABEL: @test_svcntp_b32(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[OP:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv4i1(<vscale x 4 x i1> [[TMP0]], <vscale x 4 x i1> [[TMP1]])
// CHECK-NEXT:    ret i64 [[TMP2]]
//
// CPP-CHECK-LABEL: @_Z15test_svcntp_b32u10__SVBool_tS_(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 4 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv4i1(<vscale x 16 x i1> [[OP:%.*]])
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv4i1(<vscale x 4 x i1> [[TMP0]], <vscale x 4 x i1> [[TMP1]])
// CPP-CHECK-NEXT:    ret i64 [[TMP2]]
//
uint64_t test_svcntp_b32(svbool_t pg, svbool_t op)
{
  return svcntp_b32(pg, op);
}

// CHECK-LABEL: @test_svcntp_b64(
// CHECK-NEXT:  entry:
// CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[OP:%.*]])
// CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv2i1(<vscale x 2 x i1> [[TMP0]], <vscale x 2 x i1> [[TMP1]])
// CHECK-NEXT:    ret i64 [[TMP2]]
//
// CPP-CHECK-LABEL: @_Z15test_svcntp_b64u10__SVBool_tS_(
// CPP-CHECK-NEXT:  entry:
// CPP-CHECK-NEXT:    [[TMP0:%.*]] = tail call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[PG:%.*]])
// CPP-CHECK-NEXT:    [[TMP1:%.*]] = tail call <vscale x 2 x i1> @llvm.aarch64.sve.convert.from.svbool.nxv2i1(<vscale x 16 x i1> [[OP:%.*]])
// CPP-CHECK-NEXT:    [[TMP2:%.*]] = tail call i64 @llvm.aarch64.sve.cntp.nxv2i1(<vscale x 2 x i1> [[TMP0]], <vscale x 2 x i1> [[TMP1]])
// CPP-CHECK-NEXT:    ret i64 [[TMP2]]
//
uint64_t test_svcntp_b64(svbool_t pg, svbool_t op)
{
  return svcntp_b64(pg, op);
}
