#pragma once
// IWYU pragma private; include "UnityEngine/Texture2D.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2D)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
// Forward declare root types
namespace UnityEngine {
struct __Texture2D__EXRFlags;
}
namespace UnityEngine {
class Texture2D;
}
// Write type traits
MARK_VAL_T(::UnityEngine::__Texture2D__EXRFlags);
MARK_REF_PTR_T(::UnityEngine::Texture2D);
// Type: ::EXRFlags
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::Texture2D::EXRFlags
struct CORDL_TYPE __Texture2D__EXRFlags {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct ____Texture2D__EXRFlags_Unwrapped
enum struct ____Texture2D__EXRFlags_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_OutputAsFloat = static_cast<int32_t>(0x1),
__E_CompressZIP = static_cast<int32_t>(0x2),
__E_CompressRLE = static_cast<int32_t>(0x4),
__E_CompressPIZ = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator ____Texture2D__EXRFlags_Unwrapped () const noexcept {
return static_cast<____Texture2D__EXRFlags_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr __Texture2D__EXRFlags() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr __Texture2D__EXRFlags(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field CompressPIZ value: static_cast<int32_t>(0x8)
static ::UnityEngine::__Texture2D__EXRFlags const CompressPIZ;

/// @brief Field CompressRLE value: static_cast<int32_t>(0x4)
static ::UnityEngine::__Texture2D__EXRFlags const CompressRLE;

/// @brief Field CompressZIP value: static_cast<int32_t>(0x2)
static ::UnityEngine::__Texture2D__EXRFlags const CompressZIP;

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::UnityEngine::__Texture2D__EXRFlags const None;

/// @brief Field OutputAsFloat value: static_cast<int32_t>(0x1)
static ::UnityEngine::__Texture2D__EXRFlags const OutputAsFloat;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::__Texture2D__EXRFlags, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::__Texture2D__EXRFlags, value__) == 0x0, "Offset mismatch!");

} // namespace end def UnityEngine
// Type: UnityEngine::Texture2D
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Texture2D*
class CORDL_TYPE Texture2D : public ::UnityEngine::Texture {
public:
// Declarations
using EXRFlags = ::UnityEngine::__Texture2D__EXRFlags;

 __declspec(property(get=get_activeMipmapLimit)) int32_t  activeMipmapLimit;

 __declspec(property(get=get_calculatedMipmapLevel)) int32_t  calculatedMipmapLevel;

 __declspec(property(get=get_desiredMipmapLevel)) int32_t  desiredMipmapLevel;

 __declspec(property(get=get_format)) ::UnityEngine::TextureFormat  format;

 __declspec(property(get=get_ignoreMipmapLimit, put=set_ignoreMipmapLimit)) bool  ignoreMipmapLimit;

 __declspec(property(get=get_isPreProcessed)) bool  isPreProcessed;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_loadAllMips, put=set_loadAllMips)) bool  loadAllMips;

 __declspec(property(get=get_loadedMipmapLevel)) int32_t  loadedMipmapLevel;

 __declspec(property(get=get_loadingMipmapLevel)) int32_t  loadingMipmapLevel;

 __declspec(property(get=get_minimumMipmapLevel, put=set_minimumMipmapLevel)) int32_t  minimumMipmapLevel;

 __declspec(property(get=get_mipmapLimitGroup)) ::StringW  mipmapLimitGroup;

 __declspec(property(get=get_requestedMipmapLevel, put=set_requestedMipmapLevel)) int32_t  requestedMipmapLevel;

 __declspec(property(get=get_streamingMipmaps)) bool  streamingMipmaps;

 __declspec(property(get=get_streamingMipmapsPriority)) int32_t  streamingMipmapsPriority;

 __declspec(property(get=get_vtOnly)) bool  vtOnly;

/// @brief Method Apply, addr 0x48011c0, size 0xc, virtual false, abstract: false, final false
inline void Apply() ;

/// @brief Method Apply, addr 0x48011b4, size 0xc, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps) ;

/// @brief Method Apply, addr 0x4801128, size 0x8c, virtual false, abstract: false, final false
inline void Apply(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ApplyImpl, addr 0x47feedc, size 0x54, virtual false, abstract: false, final false
inline void ApplyImpl(bool  updateMipmaps, bool  makeNoLongerReadable) ;

/// @brief Method ClearMinimumMipmapLevel, addr 0x47ffab0, size 0x3c, virtual false, abstract: false, final false
inline void ClearMinimumMipmapLevel() ;

/// @brief Method ClearRequestedMipmapLevel, addr 0x47ffa38, size 0x3c, virtual false, abstract: false, final false
inline void ClearRequestedMipmapLevel() ;

/// @brief Method Compress, addr 0x47fec90, size 0x44, virtual false, abstract: false, final false
inline void Compress(bool  highQuality) ;

/// @brief Method CreateExternalTexture, addr 0x4800908, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> CreateExternalTexture(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  mipChain, bool  linear, ::System::IntPtr  nativeTex) ;

/// @brief Method GenerateAtlas, addr 0x4801488, size 0x1bc, virtual false, abstract: false, final false
static inline bool GenerateAtlas(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  sizes, int32_t  padding, int32_t  atlasSize, ::System::Collections::Generic::List_1<::UnityEngine::Rect>*  results) ;

/// @brief Method GenerateAtlasImpl, addr 0x47ff6b8, size 0x5c, virtual false, abstract: false, final false
static inline void GenerateAtlasImpl(::ArrayW<::UnityEngine::Vector2,::Array<::UnityEngine::Vector2>*>  sizes, int32_t  padding, int32_t  atlasSize, ByRef<::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*>>  rect) ;

/// @brief Method GetPixel, addr 0x4800cf4, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y) ;

/// @brief Method GetPixel, addr 0x4800d60, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixel(int32_t  x, int32_t  y, int32_t  mipLevel) ;

/// @brief Method GetPixelBilinear, addr 0x4800dd8, size 0x68, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinear, addr 0x4800e40, size 0x74, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinear(float_t  u, float_t  v, int32_t  mipLevel) ;

/// @brief Method GetPixelBilinearImpl, addr 0x47ff178, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelBilinearImpl(int32_t  image, int32_t  mip, float_t  u, float_t  v) ;

/// @brief Method GetPixelBilinearImpl_Injected, addr 0x47ff200, size 0x74, virtual false, abstract: false, final false
inline void GetPixelBilinearImpl_Injected(int32_t  image, int32_t  mip, float_t  u, float_t  v, ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetPixelData(int32_t  mipLevel) ;

/// @brief Method GetPixelImpl, addr 0x47ff07c, size 0x88, virtual false, abstract: false, final false
inline ::UnityEngine::Color GetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y) ;

/// @brief Method GetPixelImpl_Injected, addr 0x47ff104, size 0x74, virtual false, abstract: false, final false
inline void GetPixelImpl_Injected(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ByRef<::UnityEngine::Color>  ret) ;

/// @brief Method GetPixels, addr 0x4801868, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels() ;

/// @brief Method GetPixels, addr 0x48017dc, size 0x8c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  miplevel) ;

/// @brief Method GetPixels, addr 0x47ffcb8, size 0x70, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight) ;

/// @brief Method GetPixels, addr 0x47ffc44, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> GetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, int32_t  miplevel) ;

/// @brief Method GetPixels32, addr 0x47ffd6c, size 0x40, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32() ;

/// @brief Method GetPixels32, addr 0x47ffd28, size 0x44, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*> GetPixels32(int32_t  miplevel) ;

/// @brief Method GetRawImageDataSize, addr 0x47ff67c, size 0x3c, virtual false, abstract: false, final false
inline uint64_t GetRawImageDataSize() ;

/// @brief Method GetRawTextureData, addr 0x47ffc08, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetRawTextureData() ;

/// @brief Method GetRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::Unity::Collections::NativeArray_1<T> GetRawTextureData() ;

/// @brief Method GetWritableImageData, addr 0x47ff638, size 0x44, virtual false, abstract: false, final false
inline ::System::IntPtr GetWritableImageData(int32_t  frame) ;

/// @brief Method Internal_Create, addr 0x47fed70, size 0xf4, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method Internal_CreateImpl, addr 0x47fecd4, size 0x9c, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2D*  mono, int32_t  w, int32_t  h, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method IsRequestedMipmapLevelLoaded, addr 0x47ffa74, size 0x3c, virtual false, abstract: false, final false
inline bool IsRequestedMipmapLevelLoaded() ;

/// @brief Method LoadRawTextureData, addr 0x4801000, size 0x128, virtual false, abstract: false, final false
inline void LoadRawTextureData(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method LoadRawTextureData, addr 0x4800eb4, size 0x14c, virtual false, abstract: false, final false
inline void LoadRawTextureData(::System::IntPtr  data, int32_t  size) ;

/// @brief Method LoadRawTextureData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void LoadRawTextureData(::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method LoadRawTextureDataImpl, addr 0x47ff4b8, size 0x54, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImpl(::System::IntPtr  data, uint64_t  size) ;

/// @brief Method LoadRawTextureDataImplArray, addr 0x47ff50c, size 0x44, virtual false, abstract: false, final false
inline bool LoadRawTextureDataImplArray(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

static inline ::UnityEngine::Texture2D* New_ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method PackTextures, addr 0x47ffe78, size 0x5c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding) ;

/// @brief Method PackTextures, addr 0x47ffe18, size 0x60, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding, int32_t  maximumAtlasSize) ;

/// @brief Method PackTextures, addr 0x47ffdac, size 0x6c, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Rect,::Array<::UnityEngine::Rect>*> PackTextures(::ArrayW<::UnityEngine::Texture2D*,::Array<::UnityEngine::Texture2D*>*>  textures, int32_t  padding, int32_t  maximumAtlasSize, bool  makeNoLongerReadable) ;

/// @brief Method ReadPixels, addr 0x4801480, size 0x8, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY) ;

/// @brief Method ReadPixels, addr 0x48013e0, size 0xa0, virtual false, abstract: false, final false
inline void ReadPixels(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl, addr 0x47ff34c, size 0x74, virtual false, abstract: false, final false
inline void ReadPixelsImpl(::UnityEngine::Rect  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method ReadPixelsImpl_Injected, addr 0x47ff3c0, size 0x6c, virtual false, abstract: false, final false
inline void ReadPixelsImpl_Injected(ByRef<::UnityEngine::Rect>  source, int32_t  destX, int32_t  destY, bool  recalculateMipMaps) ;

/// @brief Method Reinitialize, addr 0x48011cc, size 0x8c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height) ;

/// @brief Method Reinitialize, addr 0x48012c4, size 0xa4, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method Reinitialize, addr 0x4801258, size 0x6c, virtual false, abstract: false, final false
inline bool Reinitialize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeImpl, addr 0x47fef30, size 0x54, virtual false, abstract: false, final false
inline bool ReinitializeImpl(int32_t  width, int32_t  height) ;

/// @brief Method ReinitializeWithFormatImpl, addr 0x47ff274, size 0x6c, virtual false, abstract: false, final false
inline bool ReinitializeWithFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method ReinitializeWithTextureFormatImpl, addr 0x47ff2e0, size 0x6c, virtual false, abstract: false, final false
inline bool ReinitializeWithTextureFormatImpl(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  hasMipMap) ;

/// @brief Method Resize, addr 0x4801368, size 0x4, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height) ;

/// @brief Method Resize, addr 0x48013d8, size 0x8, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, bool  hasMipMap) ;

/// @brief Method Resize, addr 0x480136c, size 0x6c, virtual false, abstract: false, final false
inline bool Resize(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, bool  hasMipMap) ;

/// @brief Method SetAllPixels32, addr 0x47ffb30, size 0x54, virtual false, abstract: false, final false
inline void SetAllPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetBlockOfPixels32, addr 0x47ffb84, size 0x84, virtual false, abstract: false, final false
inline void SetBlockOfPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixel, addr 0x4800a14, size 0x9c, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixel, addr 0x4800ab0, size 0xa8, virtual false, abstract: false, final false
inline void SetPixel(int32_t  x, int32_t  y, ::UnityEngine::Color  color, int32_t  mipLevel) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::ArrayW<T,::Array<T>*>  data, int32_t  mipLevel, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetPixelData(::Unity::Collections::NativeArray_1<T>  data, int32_t  mipLevel, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImpl, addr 0x47ff5c4, size 0x74, virtual false, abstract: false, final false
inline bool SetPixelDataImpl(::System::IntPtr  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelDataImplArray, addr 0x47ff550, size 0x74, virtual false, abstract: false, final false
inline bool SetPixelDataImplArray(::System::Array*  data, int32_t  mipLevel, int32_t  elementSize, int32_t  dataArraySize, int32_t  sourceDataStartIndex) ;

/// @brief Method SetPixelImpl, addr 0x47fef84, size 0x84, virtual false, abstract: false, final false
inline void SetPixelImpl(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ::UnityEngine::Color  color) ;

/// @brief Method SetPixelImpl_Injected, addr 0x47ff008, size 0x74, virtual false, abstract: false, final false
inline void SetPixelImpl_Injected(int32_t  image, int32_t  mip, int32_t  x, int32_t  y, ByRef<::UnityEngine::Color>  color) ;

/// @brief Method SetPixels, addr 0x4800c98, size 0x5c, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x4800c20, size 0x78, virtual false, abstract: false, final false
inline void SetPixels(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels, addr 0x4800c18, size 0x8, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors) ;

/// @brief Method SetPixels, addr 0x4800b58, size 0xc0, virtual false, abstract: false, final false
inline void SetPixels(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x4801698, size 0x48, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method SetPixels32, addr 0x4801644, size 0x54, virtual false, abstract: false, final false
inline void SetPixels32(::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixels32, addr 0x4801764, size 0x78, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors) ;

/// @brief Method SetPixels32, addr 0x48016e0, size 0x84, virtual false, abstract: false, final false
inline void SetPixels32(int32_t  x, int32_t  y, int32_t  blockWidth, int32_t  blockHeight, ::ArrayW<::UnityEngine::Color32,::Array<::UnityEngine::Color32>*>  colors, int32_t  miplevel) ;

/// @brief Method SetPixelsImpl, addr 0x47ff42c, size 0x8c, virtual false, abstract: false, final false
inline void SetPixelsImpl(int32_t  x, int32_t  y, int32_t  w, int32_t  h, ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  pixel, int32_t  miplevel, int32_t  frame) ;

/// @brief Method UpdateExternalTexture, addr 0x47ffaec, size 0x44, virtual false, abstract: false, final false
inline void UpdateExternalTexture(::System::IntPtr  nativeTex) ;

/// @brief Method ValidateFormat, addr 0x47fffb4, size 0x12c, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x47ffed4, size 0xe0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x480086c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height) ;

/// @brief Method .ctor, addr 0x48001d4, size 0x4c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x48002c4, size 0x68, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x480032c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x4800220, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x48000e0, size 0xf4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount, ::System::IntPtr  nativeTex, ::StringW  mipmapLimitGroupName) ;

/// @brief Method .ctor, addr 0x48003a0, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x48003cc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  mipCount, ::StringW  mipmapLimitGroupName, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x48007b0, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x4800624, size 0xc0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x48006e4, size 0xcc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x4800598, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x48005c4, size 0x2c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x48005f0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method .ctor, addr 0x48003f4, size 0x1a4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, ::System::IntPtr  nativeTex, bool  createUninitialized, bool  ignoreMipmapLimit, ::StringW  mipmapLimitGroupName) ;

/// @brief Method get_activeMipmapLimit, addr 0x47feb64, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_activeMipmapLimit() ;

/// @brief Method get_blackTexture, addr 0x47febc8, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_blackTexture() ;

/// @brief Method get_calculatedMipmapLevel, addr 0x47ff948, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_calculatedMipmapLevel() ;

/// @brief Method get_desiredMipmapLevel, addr 0x47ff984, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_desiredMipmapLevel() ;

/// @brief Method get_format, addr 0x47fea6c, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TextureFormat get_format() ;

/// @brief Method get_grayTexture, addr 0x47fec18, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_grayTexture() ;

/// @brief Method get_ignoreMipmapLimit, addr 0x47feaa8, size 0x3c, virtual false, abstract: false, final false
inline bool get_ignoreMipmapLimit() ;

/// @brief Method get_isPreProcessed, addr 0x47ff714, size 0x3c, virtual false, abstract: false, final false
inline bool get_isPreProcessed() ;

/// @brief Method get_isReadable, addr 0x47fee64, size 0x3c, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_linearGrayTexture, addr 0x47fec40, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_linearGrayTexture() ;

/// @brief Method get_loadAllMips, addr 0x47ff8c8, size 0x3c, virtual false, abstract: false, final false
inline bool get_loadAllMips() ;

/// @brief Method get_loadedMipmapLevel, addr 0x47ff9fc, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_loadedMipmapLevel() ;

/// @brief Method get_loadingMipmapLevel, addr 0x47ff9c0, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_loadingMipmapLevel() ;

/// @brief Method get_minimumMipmapLevel, addr 0x47ff848, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_minimumMipmapLevel() ;

/// @brief Method get_mipmapLimitGroup, addr 0x47feb28, size 0x3c, virtual false, abstract: false, final false
inline ::StringW get_mipmapLimitGroup() ;

/// @brief Method get_normalTexture, addr 0x47fec68, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_normalTexture() ;

/// @brief Method get_redTexture, addr 0x47febf0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_redTexture() ;

/// @brief Method get_requestedMipmapLevel, addr 0x47ff7c8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_requestedMipmapLevel() ;

/// @brief Method get_streamingMipmaps, addr 0x47ff750, size 0x3c, virtual false, abstract: false, final false
inline bool get_streamingMipmaps() ;

/// @brief Method get_streamingMipmapsPriority, addr 0x47ff78c, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_streamingMipmapsPriority() ;

/// @brief Method get_vtOnly, addr 0x47feea0, size 0x3c, virtual false, abstract: false, final false
inline bool get_vtOnly() ;

/// @brief Method get_whiteTexture, addr 0x47feba0, size 0x28, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture2D> get_whiteTexture() ;

/// @brief Method set_ignoreMipmapLimit, addr 0x47feae4, size 0x44, virtual false, abstract: false, final false
inline void set_ignoreMipmapLimit(bool  value) ;

/// @brief Method set_loadAllMips, addr 0x47ff904, size 0x44, virtual false, abstract: false, final false
inline void set_loadAllMips(bool  value) ;

/// @brief Method set_minimumMipmapLevel, addr 0x47ff884, size 0x44, virtual false, abstract: false, final false
inline void set_minimumMipmapLevel(int32_t  value) ;

/// @brief Method set_requestedMipmapLevel, addr 0x47ff804, size 0x44, virtual false, abstract: false, final false
inline void set_requestedMipmapLevel(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2D() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2D(Texture2D && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2D", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2D(Texture2D const& ) = delete;

/// @brief Field streamingMipmapsPriorityMax offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMax{static_cast<int32_t>(0x7f)};

/// @brief Field streamingMipmapsPriorityMin offset 0xffffffff size 0x4
static constexpr int32_t  streamingMipmapsPriorityMin{static_cast<int32_t>(0xffffff80)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2D, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::__Texture2D__EXRFlags, "UnityEngine", "Texture2D/EXRFlags");
NEED_NO_BOX(::UnityEngine::Texture2D);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2D*, "UnityEngine", "Texture2D");
