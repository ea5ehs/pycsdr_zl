#pragma once

#define PY_SSIZE_T_CLEAN
#include <Python.h>

PyTypeObject* getFormatType();

#define FORMAT_TYPE getFormatType()

PyObject* getFormat(const char* name);

#define FORMAT_CHAR getFormat("CHAR")
#define FORMAT_SHORT getFormat("SHORT")
#define FORMAT_FLOAT getFormat("FLOAT")
#define FORMAT_COMPLEX_FLOAT getFormat("COMPLEX_FLOAT")