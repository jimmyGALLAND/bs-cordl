#pragma once
// IWYU pragma private; include "UnityEngine/RenderTexture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RenderTexture)
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
struct RenderTextureMemoryless;
}
namespace UnityEngine {
struct RenderTextureReadWrite;
}
namespace UnityEngine {
struct VRTextureUsage;
}
// Forward declare root types
namespace UnityEngine {
class RenderTexture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::RenderTexture);
// Type: UnityEngine::RenderTexture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::RenderTexture*
class CORDL_TYPE RenderTexture : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_antiAliasing, put=set_antiAliasing)) int32_t  antiAliasing;

 __declspec(property(get=get_colorBuffer)) ::UnityEngine::RenderBuffer  colorBuffer;

 __declspec(property(get=get_depthBuffer)) ::UnityEngine::RenderBuffer  depthBuffer;

 __declspec(property(get=get_depthStencilFormat, put=set_depthStencilFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat;

 __declspec(property(get=get_descriptor)) ::UnityEngine::RenderTextureDescriptor  descriptor;

 __declspec(property(put=set_dimension)) ::UnityEngine::Rendering::TextureDimension  dimension;

 __declspec(property(get=get_format)) ::UnityEngine::RenderTextureFormat  format;

 __declspec(property(get=get_graphicsFormat, put=set_graphicsFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  graphicsFormat;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_sRGB)) bool  sRGB;

 __declspec(property(put=set_useMipMap)) bool  useMipMap;

 __declspec(property(get=get_vrUsage)) ::UnityEngine::VRTextureUsage  vrUsage;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

/// @brief Method Create, addr 0x4805140, size 0x3c, virtual false, abstract: false, final false
inline bool Create() ;

/// @brief Method DiscardContents, addr 0x48050fc, size 0x44, virtual false, abstract: false, final false
inline void DiscardContents() ;

/// @brief Method DiscardContents, addr 0x48050a8, size 0x54, virtual false, abstract: false, final false
inline void DiscardContents(bool  discardColor, bool  discardDepth) ;

/// @brief Method GetActive, addr 0x4804e64, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetActive() ;

/// @brief Method GetColorBuffer, addr 0x4804f2c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetColorBuffer() ;

/// @brief Method GetColorBuffer_Injected, addr 0x4804f80, size 0x44, virtual false, abstract: false, final false
inline void GetColorBuffer_Injected(ByRef<::UnityEngine::RenderBuffer>  ret) ;

/// @brief Method GetColorFormat, addr 0x4804a08, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetColorFormat(bool  suppressWarnings) ;

/// @brief Method GetCompatibleFormat, addr 0x48065b4, size 0x154, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetCompatibleFormat(::UnityEngine::RenderTextureFormat  renderTextureFormat, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetDefaultColorFormat, addr 0x4805be8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultColorFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDefaultDepthStencilFormat, addr 0x4805c10, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat(::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  depth) ;

/// @brief Method GetDepthBuffer, addr 0x4804fc4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer GetDepthBuffer() ;

/// @brief Method GetDepthBuffer_Injected, addr 0x4805018, size 0x44, virtual false, abstract: false, final false
inline void GetDepthBuffer_Injected(ByRef<::UnityEngine::RenderBuffer>  ret) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x48060e0, size 0x84, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x4806794, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x4806708, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetDepthStencilFormatLegacy, addr 0x4806714, size 0x80, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDepthStencilFormatLegacy(int32_t  depthBits, bool  requestedShadowMap) ;

/// @brief Method GetDescriptor, addr 0x4804cec, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor GetDescriptor() ;

/// @brief Method GetDescriptor_Injected, addr 0x48052fc, size 0x44, virtual false, abstract: false, final false
inline void GetDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor>  ret) ;

/// @brief Method GetTemporary, addr 0x48067a8, size 0x80, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporary, addr 0x4806b2c, size 0x34, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height) ;

/// @brief Method GetTemporary, addr 0x4806afc, size 0x30, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer) ;

/// @brief Method GetTemporary, addr 0x4806ad0, size 0x2c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method GetTemporary, addr 0x4806aa8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method GetTemporary, addr 0x4806a84, size 0x24, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing) ;

/// @brief Method GetTemporary, addr 0x4806a64, size 0x20, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode) ;

/// @brief Method GetTemporary, addr 0x4806a48, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage) ;

/// @brief Method GetTemporary, addr 0x48069bc, size 0x8c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary(int32_t  width, int32_t  height, int32_t  depthBuffer, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage, bool  useDynamicScale) ;

/// @brief Method GetTemporaryImpl, addr 0x4806848, size 0x98, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporaryImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, int32_t  antiAliasing, ::UnityEngine::RenderTextureMemoryless  memorylessMode, ::UnityEngine::VRTextureUsage  vrUsage, bool  useDynamicScale) ;

/// @brief Method GetTemporary_Internal, addr 0x4805340, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method GetTemporary_Internal_Injected, addr 0x480537c, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> GetTemporary_Internal_Injected(ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method Initialize, addr 0x480629c, size 0x1e0, virtual false, abstract: false, final false
inline void Initialize(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite, int32_t  mipCount) ;

/// @brief Method Internal_Create, addr 0x4805238, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method IsCreated, addr 0x48051b8, size 0x3c, virtual false, abstract: false, final false
inline bool IsCreated() ;

static inline ::UnityEngine::RenderTexture* New_ctor() ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

static inline ::UnityEngine::RenderTexture* New_ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

static inline ::UnityEngine::RenderTexture* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method Release, addr 0x480517c, size 0x3c, virtual false, abstract: false, final false
inline void Release() ;

/// @brief Method ReleaseTemporary, addr 0x48053b8, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseTemporary(::UnityEngine::RenderTexture*  temp) ;

/// @brief Method SetActive, addr 0x4804e8c, size 0x3c, virtual false, abstract: false, final false
static inline void SetActive(::UnityEngine::RenderTexture*  rt) ;

/// @brief Method SetColorFormat, addr 0x4804a4c, size 0x44, virtual false, abstract: false, final false
inline void SetColorFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method SetMipMapCount, addr 0x480505c, size 0x44, virtual false, abstract: false, final false
inline void SetMipMapCount(int32_t  count) ;

/// @brief Method SetRenderTextureDescriptor, addr 0x4805274, size 0x44, virtual false, abstract: false, final false
inline void SetRenderTextureDescriptor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method SetRenderTextureDescriptor_Injected, addr 0x48052b8, size 0x44, virtual false, abstract: false, final false
inline void SetRenderTextureDescriptor_Injected(ByRef<::UnityEngine::RenderTextureDescriptor>  desc) ;

/// @brief Method SetSRGBReadWrite, addr 0x48051f4, size 0x44, virtual false, abstract: false, final false
inline void SetSRGBReadWrite(bool  srgb) ;

/// @brief Method ValidateRenderTextureDesc, addr 0x4805540, size 0x3e8, virtual false, abstract: false, final false
static inline void ValidateRenderTextureDesc(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method .ctor, addr 0x48053f4, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x4805448, size 0xf8, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTextureDescriptor  desc) ;

/// @brief Method .ctor, addr 0x4805928, size 0x168, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::RenderTexture*  textureToCopy) ;

/// @brief Method .ctor, addr 0x4806164, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat) ;

/// @brief Method .ctor, addr 0x4805c38, size 0x204, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  colorFormat, ::UnityEngine::Experimental::Rendering::GraphicsFormat  depthStencilFormat, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x48065ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth) ;

/// @brief Method .ctor, addr 0x4805b14, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format) ;

/// @brief Method .ctor, addr 0x4805e3c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method .ctor, addr 0x4805ecc, size 0x214, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x480647c, size 0x90, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format) ;

/// @brief Method .ctor, addr 0x480650c, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x48061f4, size 0xa8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::UnityEngine::RenderTextureReadWrite  readWrite) ;

/// @brief Method get_active, addr 0x4804ec8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> get_active() ;

/// @brief Method get_antiAliasing, addr 0x4804de4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_antiAliasing() ;

/// @brief Method get_colorBuffer, addr 0x48050a0, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_colorBuffer() ;

/// @brief Method get_depthBuffer, addr 0x48050a4, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::RenderBuffer get_depthBuffer() ;

/// @brief Method get_depthStencilFormat, addr 0x4804d64, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_depthStencilFormat() ;

/// @brief Method get_descriptor, addr 0x4805a90, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureDescriptor get_descriptor() ;

/// @brief Method get_format, addr 0x4804bd0, size 0x11c, virtual false, abstract: false, final false
inline ::UnityEngine::RenderTextureFormat get_format() ;

/// @brief Method get_graphicsFormat, addr 0x4804a90, size 0x40, virtual false, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_graphicsFormat() ;

/// @brief Method get_height, addr 0x4804944, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_sRGB, addr 0x4804b58, size 0x3c, virtual false, abstract: false, final false
inline bool get_sRGB() ;

/// @brief Method get_vrUsage, addr 0x4804b94, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::VRTextureUsage get_vrUsage() ;

/// @brief Method get_width, addr 0x48048c4, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method set_active, addr 0x4804ef0, size 0x3c, virtual false, abstract: false, final false
static inline void set_active(::UnityEngine::RenderTexture*  value) ;

/// @brief Method set_antiAliasing, addr 0x4804e20, size 0x44, virtual false, abstract: false, final false
inline void set_antiAliasing(int32_t  value) ;

/// @brief Method set_depthStencilFormat, addr 0x4804da0, size 0x44, virtual false, abstract: false, final false
inline void set_depthStencilFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_dimension, addr 0x48049c4, size 0x44, virtual true, abstract: false, final false
inline void set_dimension(::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_graphicsFormat, addr 0x4804ad0, size 0x44, virtual false, abstract: false, final false
inline void set_graphicsFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  value) ;

/// @brief Method set_height, addr 0x4804980, size 0x44, virtual true, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_useMipMap, addr 0x4804b14, size 0x44, virtual false, abstract: false, final false
inline void set_useMipMap(bool  value) ;

/// @brief Method set_width, addr 0x4804900, size 0x44, virtual true, abstract: false, final false
inline void set_width(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RenderTexture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RenderTexture(RenderTexture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RenderTexture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RenderTexture(RenderTexture const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::RenderTexture, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RenderTexture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RenderTexture*, "UnityEngine", "RenderTexture");
