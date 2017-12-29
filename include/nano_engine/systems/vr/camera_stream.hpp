#ifndef NANO_ENGINE_SYSTEMS_VR_CAMERA_STREAM_HPP_
#define NANO_ENGINE_SYSTEMS_VR_CAMERA_STREAM_HPP_

#include <cstddef>
#include <cstdint>
#include <utility>
#include <vector>

#include <openvr.h>

#include <nano_engine/systems/vr/camera_frame_header.hpp>
#include <nano_engine/systems/vr/camera_frame_type.hpp>

class ID3D11Device;
class ID3D11ShaderResourceView;

namespace ne
{
class camera_stream
{
public:
  explicit camera_stream  (const std::uint64_t& id, const camera_frame_type type = camera_frame_type::distorted) : id_(id), type_(type)
  {
    
  }
  camera_stream           (const camera_stream&  that) = default;
  camera_stream           (      camera_stream&& temp) = default;
  virtual ~camera_stream  ()
  {
    vr::VRTrackedCamera()->ReleaseVideoStreamingService(id_);
  }
  camera_stream& operator=(const camera_stream&  that) = default;
  camera_stream& operator=(      camera_stream&& temp) = default;

  camera_frame_header                                  header            () const
  {
    vr::CameraVideoStreamFrameHeader_t header;
    vr::VRTrackedCamera()->GetVideoStreamFrameBuffer(id_, static_cast<vr::EVRTrackedCameraFrameType>(type_), nullptr, 0, &header, sizeof vr::CameraVideoStreamFrameHeader_t);
    return
    {
      static_cast<camera_frame_type>(header.eFrameType),
      {
        static_cast<std::size_t>(header.nWidth), 
        static_cast<std::size_t>(header.nHeight)
      },
      static_cast<std::size_t>(header.nBytesPerPixel),
      static_cast<std::size_t>(header.nFrameSequence)
    };
  }
  std::vector<std::uint8_t>                            buffer            () const
  {
    auto header_info = header();
    std::vector<std::uint8_t> buffer(header_info.size[0] * header_info.size[1] * header_info.bytes_per_pixel);
    vr::VRTrackedCamera()->GetVideoStreamFrameBuffer(id_, static_cast<vr::EVRTrackedCameraFrameType>(type_), buffer.data(), buffer.size(), nullptr, 0);
    return buffer;
  }
  std::pair<ID3D11Device*, ID3D11ShaderResourceView**> d3d11_texture_data() const
  {
    std::pair<ID3D11Device*, ID3D11ShaderResourceView**> texture_data;
    vr::VRTrackedCamera()->GetVideoStreamTextureD3D11(id_, static_cast<vr::EVRTrackedCameraFrameType>(type_), texture_data.first, reinterpret_cast<void**>(texture_data.second), nullptr, 0);
    return texture_data;
  }
  std::uint32_t                                        opengl_texture_id () const
  {
    std::uint32_t id;
    vr::VRTrackedCamera()->GetVideoStreamTextureGL(id_, static_cast<vr::EVRTrackedCameraFrameType>(type_), &id, nullptr, 0);
    return        id;
  }

protected:
  std::uint64_t     id_  ;
  camera_frame_type type_;
};
}

#endif