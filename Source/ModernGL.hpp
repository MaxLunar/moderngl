#pragma once

#include "Common.hpp"

const int ENABLE_NOTHING = 0x00;
const int ENABLE_BLEND = 0x01;
const int ENABLE_CULL_FACE = 0x02;
const int ENABLE_DEPTH_TEST = 0x04;
const int ENABLE_MULTISAMPLE = 0x08;
const int ENABLE_ALL = 0x0F;

extern PyObject * ModuleError;
extern PyObject * ModuleRangeError;
extern PyObject * ModuleCompileError;
extern PyObject * ModuleInvalidFormat;
extern PyObject * ModuleAttributeNotFound;
extern PyObject * ModuleNotInitialized;
extern PyObject * ModuleNotSupported;

extern bool initialized;

extern int defaultTextureUnit;
extern int defaultVertexArray;
extern int defaultFramebuffer;

extern int activeProgram;
extern int activeFramebuffer;

extern int activeViewportWidth;
extern int activeViewportHeight;
extern int versionNumber;

extern int maxTextureUnits;
