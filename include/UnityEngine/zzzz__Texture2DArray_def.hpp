#pragma once
// IWYU pragma private; include "UnityEngine/Texture2DArray.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture2DArray)
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
struct TextureColorSpace;
}
namespace UnityEngine {
struct TextureFormat;
}
// Forward declare root types
namespace UnityEngine {
class Texture2DArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture2DArray);
// Type: UnityEngine::Texture2DArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Texture2DArray*
class CORDL_TYPE Texture2DArray : public ::UnityEngine::Texture {
public:
// Declarations
 __declspec(property(get=get_isReadable)) bool  isReadable;

/// @brief Method Internal_Create, addr 0x480374c, size 0xdc, virtual false, abstract: false, final false
static inline void Internal_Create(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method Internal_CreateImpl, addr 0x48036c0, size 0x8c, virtual false, abstract: false, final false
static inline bool Internal_CreateImpl(::UnityEngine::Texture2DArray*  mono, int32_t  w, int32_t  h, int32_t  d, int32_t  mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::TextureColorSpace  colorSpace, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

static inline ::UnityEngine::Texture2DArray* New_ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method ValidateFormat, addr 0x4803908, size 0x12c, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateFormat, addr 0x4803828, size 0xe0, virtual false, abstract: false, final false
inline bool ValidateFormat(::UnityEngine::TextureFormat  format, int32_t  width, int32_t  height) ;

/// @brief Method ValidateIsNotCrunched, addr 0x4803c34, size 0x54, virtual false, abstract: false, final false
static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x4803a34, size 0x54, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x4803b28, size 0x10c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::DefaultFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x4803a88, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags) ;

/// @brief Method .ctor, addr 0x4803c88, size 0xec, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags  flags, int32_t  mipCount) ;

/// @brief Method .ctor, addr 0x4804090, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain) ;

/// @brief Method .ctor, addr 0x4803fcc, size 0xc4, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear) ;

/// @brief Method .ctor, addr 0x4803f10, size 0xbc, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, bool  mipChain, bool  linear, bool  createUninitialized) ;

/// @brief Method .ctor, addr 0x4803ef0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear) ;

/// @brief Method .ctor, addr 0x4803d74, size 0x17c, virtual false, abstract: false, final false
inline void _ctor(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::TextureFormat  textureFormat, int32_t  mipCount, bool  linear, bool  createUninitialized) ;

/// @brief Method get_allSlices, addr 0x480365c, size 0x28, virtual false, abstract: false, final false
static inline int32_t get_allSlices() ;

/// @brief Method get_isReadable, addr 0x4803684, size 0x3c, virtual true, abstract: false, final false
inline bool get_isReadable() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Texture2DArray() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Texture2DArray(Texture2DArray && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Texture2DArray", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Texture2DArray(Texture2DArray const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture2DArray, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Texture2DArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture2DArray*, "UnityEngine", "Texture2DArray");
