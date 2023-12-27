#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Texture)
namespace UnityEngine {
struct ColorSpace;
}
namespace UnityEngine {
struct TextureWrapMode;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
class UnityException;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine::Experimental::Rendering {
struct FormatUsage;
}
namespace UnityEngine {
struct FilterMode;
}
// Forward declare root types
namespace UnityEngine {
class Texture;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Texture);
// Type: UnityEngine::Texture
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10200))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10071))
// CS Name: ::UnityEngine::Texture*
class CORDL_TYPE Texture : public ::UnityEngine::Object {
public:
  // Declarations
  /// @brief Field GenerateAllMips, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_GenerateAllMips, put = setStaticF_GenerateAllMips)) int32_t GenerateAllMips;

  __declspec(property(get = get_mipmapCount)) int32_t mipmapCount;

  __declspec(property(get = get_width, put = set_width)) int32_t width;

  __declspec(property(get = get_height, put = set_height)) int32_t height;

  __declspec(property(put = set_dimension))::UnityEngine::Rendering::TextureDimension dimension;

  __declspec(property(get = get_isReadable)) bool isReadable;

  __declspec(property(get = get_wrapMode, put = set_wrapMode))::UnityEngine::TextureWrapMode wrapMode;

  __declspec(property(get = get_filterMode, put = set_filterMode))::UnityEngine::FilterMode filterMode;

  __declspec(property(get = get_anisoLevel, put = set_anisoLevel)) int32_t anisoLevel;

  __declspec(property(get = get_texelSize))::UnityEngine::Vector2 texelSize;

  __declspec(property(get = get_activeTextureColorSpace))::UnityEngine::ColorSpace activeTextureColorSpace;

  static inline void setStaticF_GenerateAllMips(int32_t value);

  static inline int32_t getStaticF_GenerateAllMips();

  static inline ::UnityEngine::Texture* New_ctor();

  /// @brief Method .ctor addr 0x2cad540 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method get_mipmapCount addr 0x2cad598 size 0x3c virtual false final false
  inline int32_t get_mipmapCount();

  /// @brief Method GetDataWidth addr 0x2cad5d4 size 0x3c virtual false final false
  inline int32_t GetDataWidth();

  /// @brief Method GetDataHeight addr 0x2cad610 size 0x3c virtual false final false
  inline int32_t GetDataHeight();

  /// @brief Method get_width addr 0x2cad64c size 0x3c virtual true final false
  inline int32_t get_width();

  /// @brief Method set_width addr 0x2cad688 size 0x40 virtual true final false
  inline void set_width(int32_t value);

  /// @brief Method get_height addr 0x2cad6c8 size 0x3c virtual true final false
  inline int32_t get_height();

  /// @brief Method set_height addr 0x2cad704 size 0x40 virtual true final false
  inline void set_height(int32_t value);

  /// @brief Method set_dimension addr 0x2cad744 size 0x40 virtual true final false
  inline void set_dimension(::UnityEngine::Rendering::TextureDimension value);

  /// @brief Method get_isReadable addr 0x2cad784 size 0x3c virtual true final false
  inline bool get_isReadable();

  /// @brief Method get_wrapMode addr 0x2cad7c0 size 0x3c virtual false final false
  inline ::UnityEngine::TextureWrapMode get_wrapMode();

  /// @brief Method set_wrapMode addr 0x2cad7fc size 0x44 virtual false final false
  inline void set_wrapMode(::UnityEngine::TextureWrapMode value);

  /// @brief Method get_filterMode addr 0x2cad840 size 0x3c virtual false final false
  inline ::UnityEngine::FilterMode get_filterMode();

  /// @brief Method set_filterMode addr 0x2cad87c size 0x44 virtual false final false
  inline void set_filterMode(::UnityEngine::FilterMode value);

  /// @brief Method get_anisoLevel addr 0x2cad8c0 size 0x3c virtual false final false
  inline int32_t get_anisoLevel();

  /// @brief Method set_anisoLevel addr 0x2cad8fc size 0x44 virtual false final false
  inline void set_anisoLevel(int32_t value);

  /// @brief Method get_texelSize addr 0x2cad940 size 0x4c virtual false final false
  inline ::UnityEngine::Vector2 get_texelSize();

  /// @brief Method GetNativeTexturePtr addr 0x2cad9d0 size 0x3c virtual false final false
  inline void* GetNativeTexturePtr();

  /// @brief Method Internal_GetActiveTextureColorSpace addr 0x2cada0c size 0x3c virtual false final false
  inline int32_t Internal_GetActiveTextureColorSpace();

  /// @brief Method get_activeTextureColorSpace addr 0x2cada48 size 0x48 virtual false final false
  inline ::UnityEngine::ColorSpace get_activeTextureColorSpace();

  /// @brief Method GetPixelDataSize addr 0x2cada90 size 0x54 virtual false final false
  inline uint64_t GetPixelDataSize(int32_t mipLevel, int32_t element);

  /// @brief Method GetPixelDataOffset addr 0x2cadae4 size 0x54 virtual false final false
  inline uint64_t GetPixelDataOffset(int32_t mipLevel, int32_t element);

  /// @brief Method ValidateFormat addr 0x2cadb38 size 0x1b8 virtual false final false
  inline bool ValidateFormat(::UnityEngine::TextureFormat format);

  /// @brief Method ValidateFormat addr 0x2cadcf0 size 0x1b0 virtual false final false
  inline bool ValidateFormat(::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::FormatUsage usage);

  /// @brief Method CreateNonReadableException addr 0x2cadea0 size 0xa4 virtual false final false
  inline ::UnityEngine::UnityException* CreateNonReadableException(::UnityEngine::Texture* t);

  /// @brief Method CreateNativeArrayLengthOverflowException addr 0x2cadf44 size 0x74 virtual false final false
  inline ::UnityEngine::UnityException* CreateNativeArrayLengthOverflowException();

  /// @brief Method get_texelSize_Injected addr 0x2cad98c size 0x44 virtual false final false
  inline void get_texelSize_Injected(ByRef<::UnityEngine::Vector2> ret);

  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Texture(Texture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Texture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Texture(Texture const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Texture();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Texture, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::Texture);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Texture*, "UnityEngine", "Texture");
