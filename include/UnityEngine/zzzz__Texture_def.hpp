#pragma once
// IWYU pragma private; include "UnityEngine/Texture.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct FilterMode;
}
namespace UnityEngine {
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture);
// Type: UnityEngine::Texture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Texture*
class CORDL_TYPE Texture : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Field GenerateAllMips, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_GenerateAllMips, put=setStaticF_GenerateAllMips)) int32_t  GenerateAllMips;

 __declspec(property(get=get_activeTextureColorSpace)) ::UnityEngine::ColorSpace  activeTextureColorSpace;

 __declspec(property(get=get_anisoLevel, put=set_anisoLevel)) int32_t  anisoLevel;

 __declspec(property(put=set_dimension)) ::UnityEngine::Rendering::TextureDimension  dimension;

 __declspec(property(get=get_filterMode, put=set_filterMode)) ::UnityEngine::FilterMode  filterMode;

 __declspec(property(get=get_height, put=set_height)) int32_t  height;

 __declspec(property(get=get_isReadable)) bool  isReadable;

 __declspec(property(get=get_mipmapCount)) int32_t  mipmapCount;

 __declspec(property(get=get_texelSize)) ::UnityEngine::Vector2  texelSize;

 __declspec(property(get=get_width, put=set_width)) int32_t  width;

 __declspec(property(get=get_wrapMode, put=set_wrapMode)) ::UnityEngine::TextureWrapMode  wrapMode;

/// @brief Method CreateNativeArrayLengthOverflowException, addr 0x47fe9b4, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException() ;

/// @brief Method CreateNonReadableException, addr 0x47fe914, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture*  t) ;

/// @brief Method GetDataHeight, addr 0x47fe010, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetDataHeight() ;

/// @brief Method GetDataWidth, addr 0x47fdfd4, size 0x3c, virtual false, abstract: false, final false
inline int32_t GetDataWidth() ;

/// @brief Method GetNativeTexturePtr, addr 0x47fe3b8, size 0x3c, virtual false, abstract: false, final false
inline ::System::IntPtr GetNativeTexturePtr() ;

/// @brief Method GetPixelDataOffset, addr 0x47fe4cc, size 0x54, virtual false, abstract: false, final false
inline uint64_t GetPixelDataOffset(int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetPixelDataSize, addr 0x47fe478, size 0x54, virtual false, abstract: false, final false
inline uint64_t GetPixelDataSize(int32_t  mipLevel, int32_t  element) ;

/// @brief Method GetTextureColorSpace, addr 0x47fe52c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

/// @brief Method GetTextureColorSpace, addr 0x47fe520, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::TextureColorSpace GetTextureColorSpace(bool  linear) ;

/// @brief Method Internal_GetActiveTextureColorSpace, addr 0x47fe3f4, size 0x3c, virtual false, abstract: false, final false
inline int32_t Internal_GetActiveTextureColorSpace() ;

static inline ::UnityEngine::Texture* New_ctor() ;

/// @brief Method ValidateFormat, addr 0x47fe754, size 0x1c0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::FormatUsage  usage) ;

/// @brief Method ValidateFormat, addr 0x47fe58c, size 0x1c8, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format) ;

/// @brief Method .ctor, addr 0x47fdf40, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF_GenerateAllMips() ;

/// @brief Method get_activeTextureColorSpace, addr 0x47fe430, size 0x48, virtual false, abstract: false, final false
inline ::UnityEngine::ColorSpace get_activeTextureColorSpace() ;

/// @brief Method get_anisoLevel, addr 0x47fe2a8, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_anisoLevel() ;

/// @brief Method get_filterMode, addr 0x47fe228, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::FilterMode get_filterMode() ;

/// @brief Method get_height, addr 0x47fe0c0, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_height() ;

/// @brief Method get_isReadable, addr 0x47fe16c, size 0x3c, virtual true, abstract: false, final false
inline bool get_isReadable() ;

/// @brief Method get_mipmapCount, addr 0x47fdf98, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_mipmapCount() ;

/// @brief Method get_texelSize, addr 0x47fe328, size 0x4c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_texelSize() ;

/// @brief Method get_texelSize_Injected, addr 0x47fe374, size 0x44, virtual false, abstract: false, final false
inline void get_texelSize_Injected(ByRef<::UnityEngine::Vector2>  ret) ;

/// @brief Method get_width, addr 0x47fe04c, size 0x3c, virtual true, abstract: false, final false
inline int32_t get_width() ;

/// @brief Method get_wrapMode, addr 0x47fe1a8, size 0x3c, virtual false, abstract: false, final false
inline ::UnityEngine::TextureWrapMode get_wrapMode() ;

static inline void setStaticF_GenerateAllMips(int32_t  value) ;

/// @brief Method set_anisoLevel, addr 0x47fe2e4, size 0x44, virtual false, abstract: false, final false
inline void set_anisoLevel(int32_t  value) ;

/// @brief Method set_dimension, addr 0x47fe134, size 0x38, virtual true, abstract: false, final false
inline void set_dimension(::UnityEngine::Rendering::TextureDimension  value) ;

/// @brief Method set_filterMode, addr 0x47fe264, size 0x44, virtual false, abstract: false, final false
inline void set_filterMode(::UnityEngine::FilterMode  value) ;

/// @brief Method set_height, addr 0x47fe0fc, size 0x38, virtual true, abstract: false, final false
inline void set_height(int32_t  value) ;

/// @brief Method set_width, addr 0x47fe088, size 0x38, virtual true, abstract: false, final false
inline void set_width(int32_t  value) ;

/// @brief Method set_wrapMode, addr 0x47fe1e4, size 0x44, virtual false, abstract: false, final false
inline void set_wrapMode(::UnityEngine::TextureWrapMode  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture(Texture && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture(Texture const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture*, "UnityEngine", "Texture");
