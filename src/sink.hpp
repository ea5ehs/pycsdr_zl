#pragma once

#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <csdr/sink.hpp>

#include "buffer.h"
#include "reader.hpp"

struct Sink: PyObject {
    PyObject* inputFormat;
    Reader* reader;
    Csdr::UntypedSink* sink;
};

PyObject* Sink_setReader(Sink* self, PyObject* args, PyObject* kwds);

extern PyType_Spec SinkSpec;