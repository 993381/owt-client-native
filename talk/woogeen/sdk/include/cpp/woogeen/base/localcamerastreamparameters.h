/*
 * Copyright © 2015 Intel Corporation. All Rights Reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO
 * EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF
 * ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */


#ifndef WOOGEEN_BASE_LOCALCAMERASTREAMPARAMETERS_H_
#define WOOGEEN_BASE_LOCALCAMERASTREAMPARAMETERS_H_

#include <string>

namespace woogeen {
namespace base{

class LocalCameraStreamParameters final {
 public:
  LocalCameraStreamParameters(bool video_enabled, bool audio_enabled);
  void CameraId(std::string& camera_id);
  void StreamName(std::string& stream_name);
  void Resolution(int width, int height);
  void Fps(int fps);
  std::string CameraId() { return camera_id_; }
  std::string StreamName() { return stream_name_; }
  int ResolutionWidth() { return resolution_width_; }
  int ResolutionHeight() { return resolution_height_; }
  int Fps() { return fps_; }
  bool VideoEnabled() { return video_enabled_; }
  bool AudioEnabled() { return audio_enabled_; }

 private:
  std::string camera_id_;
  std::string stream_name_;
  int resolution_width_;
  int resolution_height_;
  int fps_;
  bool video_enabled_;
  bool audio_enabled_;
};
}
}

#endif  // WOOGEEN_BASE_LOCALCAMERASTREAMPARAMETERS_H_
