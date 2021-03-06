#ifndef DI_SYSTEMS_INPUT_GESTURE_HPP_
#define DI_SYSTEMS_INPUT_GESTURE_HPP_

#include <array>
#include <cstddef>
#include <cstdint>
#include <string>

#include <SDL2/SDL_gesture.h>
#include <SDL2/SDL_rwops.h>

namespace di
{
struct gesture
{
  void save(const std::string& filename) const
  {
    if (filename.empty()) return;
    const auto stream = SDL_RWFromFile(filename.c_str(), "wb");
    SDL_SaveDollarTemplate(id, stream);
    SDL_FreeRW(stream);
  }

  std::int64_t         id          ;
  std::array<float, 2> position    ;
  float                error       ;
  std::size_t          finger_count;
};
}

#endif
