/*
 * Copyright (C) 2017-2020 Intel Corporation
 *
 * SPDX-License-Identifier: MIT
 *
 */

#include "opencl/source/program/create.inl"

#include "opencl/source/program/program.h"

namespace NEO {

namespace ProgramFunctions {
CreateFromILFunc createFromIL = Program::createFromIL<Program>;
} // namespace ProgramFunctions

template Program *Program::create<Program>(Context *, const ClDeviceVector &, const size_t *, const unsigned char **, cl_int *, cl_int &);
template Program *Program::create<Program>(cl_context, cl_uint, const char **, const size_t *, cl_int &);
template Program *Program::create<Program>(const char *, Context *, const ClDeviceVector &, bool, cl_int *);
template Program *Program::createFromIL<Program>(Context *, const void *, size_t length, cl_int &);
template Program *Program::createFromGenBinary<Program>(ExecutionEnvironment &executionEnvironment, Context *context, const void *binary, size_t size, bool isBuiltIn, cl_int *errcodeRet, Device *device);
} // namespace NEO
