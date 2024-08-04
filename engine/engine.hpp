#ifndef ENGINE_HPP
#define ENGINE_HPP

#include <string>
namespace ENGINE {
  //window information
  inline int screenX = 0;
  inline int screenY = 0;

  //addresses
  inline uintptr_t localPlayer;

  inline uintptr_t pLocalPitch;
  inline uintptr_t pLocalYaw;
  inline uintptr_t viewMatrix;
};

#endif
