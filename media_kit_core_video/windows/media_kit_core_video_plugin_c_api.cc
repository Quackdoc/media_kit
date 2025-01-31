// This file is a part of media_kit
// (https://github.com/alexmercerind/media_kit).
//
// Copyright © 2021 & onwards, Hitesh Kumar Saini <saini123hitesh@gmail.com>.
// All rights reserved.
// Use of this source code is governed by MIT license that can be found in the
// LICENSE file.
#include "include/media_kit_core_video/media_kit_core_video_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "media_kit_core_video_plugin.h"

void MediaKitCoreVideoPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  media_kit_core_video::MediaKitCoreVideoPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
