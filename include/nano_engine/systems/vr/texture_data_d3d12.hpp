#ifndef NANO_ENGINE_SYSTEMS_VR_TEXTURE_DATA_D3D12_HPP_
#define NANO_ENGINE_SYSTEMS_VR_TEXTURE_DATA_D3D12_HPP_

#include <cstdint>

#include <openvr.h>

namespace ne
{
struct texture_data_d3d12
{
  ID3D12Resource*     resource     ;
  ID3D12CommandQueue* command_queue;
  std::uint32_t       node_mask    ;
};
}

#endif