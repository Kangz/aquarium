//
// Copyright (c) 2019 The Aquarium Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// ProgramGL.h: Defines Program wrapper of OpenGL.
// Load shaders from folder shaders/opengl.
// Compiles OpenGL shaders and check if compiled success.
// Apply Buffers, Textures and Uniforms to program.

#pragma once
#ifndef PROGRAMGL_H
#define PROGRAMGL_H 1

#include <string>
#include <unordered_map>

#include "BufferGL.h"
#include "ContextGL.h"
#include "TextureGL.h"

#include "../Aquarium.h"
#include "../Program.h"

class ProgramGL : public Program
{
public:
    ProgramGL() {}
    ProgramGL(ContextGL *, std::string mVId, std::string mFId);
    ~ProgramGL() override;

    void setProgram() override;
    GLuint getProgramId() const { return mProgramId; }
    GLuint getVAOId() { return mVAO; }
    void loadProgram();

  private:
    GLuint mProgramId;
    GLuint mVAO;

    ContextGL *mContext;
};

#endif

