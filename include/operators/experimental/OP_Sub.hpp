// This file is part of VisionCPP, a lightweight C++ template library
// for computer vision and image processing.
//
// Copyright (C) 2016 Codeplay Software Limited. All Rights Reserved.
//
// Contact: visioncpp@codeplay.com
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/// \file OP_Sub.hpp
/// \brief It calculates the difference between 2 images

namespace visioncpp {
/// \struct OP_Sub
/// \brief This functor subtracts 2 images
struct OP_Sub {
  /// \brief This functor subtracts 2 images
  /// \param t1 - First image
  /// \param t2 - Second image
  /// \return float - Return the difference (t1 - t2)
  template <typename T1, typename T2>
  float operator()(T1 t1, T2 t2) {
    return t1 - t2;
  }
};
}
