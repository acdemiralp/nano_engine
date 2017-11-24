#ifndef NANO_ENGINE_SYSTEMS_INPUT_GAME_CONTROLLER_INFO_HPP_
#define NANO_ENGINE_SYSTEMS_INPUT_GAME_CONTROLLER_INFO_HPP_

#include <algorithm>
#include <vector>

#include <SDL2/SDL_gamecontroller.h>

#include <nano_engine/systems/input/joystick_info.hpp>

namespace ne
{
using game_controller_info = joystick_info;

inline std::vector<game_controller_info> game_controller_infos()
{
  auto game_controller_infos = joystick_infos();
  game_controller_infos.erase(std::remove_if(game_controller_infos.begin(), game_controller_infos.end(), 
  [ ] (const game_controller_info& game_controller_info)
  {
    return !static_cast<bool>(SDL_IsGameController(game_controller_info.index));
  }), game_controller_infos.end());
  return game_controller_infos;
}
}

#endif
