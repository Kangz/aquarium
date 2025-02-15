//
// Copyright (c) 2019 The Aquarium Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
#pragma once
#include <string>
#include <vector>

#include "Aquarium.h"

class ResourceHelper
{
  public:
    ResourceHelper() {}
    ResourceHelper(const std::string &mBackendName,
                   const std::string &mShaderVersion,
                   BACKENDTYPE backendType);
    void getSkyBoxUrls(std::vector<std::string> *skyUrls) const;
    const std::string &getPropPlacementPath() const { return mPropPlacementPath; }
    const std::string &getImagePath() const { return mImagePath; }
    std::string getModelPath(const std::string &modelName) const;
    const std::string &getProgramPath() const;
    const std::string &getBackendName() const { return mBackendName; }
    const std::string &getShaderVersion() const { return mShaderVersion; }
    const std::string &getRendererInfo() const;
    void setRenderer(const std::string &renderer);

  private:
    std::string mPath;
    std::string mImagePath;
    std::string mProgramPath;
    std::string mPropPlacementPath;
    std::string mModelPath;

    std::string mBackendName;
    BACKENDTYPE mBackendType;
    std::string mBackendTypeStr;

    std::string mShaderVersion;

    std::string mRenderer;
    std::string mRendererInfo;
};
