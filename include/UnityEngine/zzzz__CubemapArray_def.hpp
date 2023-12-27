#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Texture_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CubemapArray)
namespace UnityEngine::Experimental::Rendering {
struct DefaultFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct TextureCreationFlags;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
// Forward declare root types
namespace UnityEngine {
class CubemapArray;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::CubemapArray);
// Type: UnityEngine::CubemapArray
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10071))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10077))
// CS Name: ::UnityEngine::CubemapArray*
class CORDL_TYPE CubemapArray : public ::UnityEngine::Texture {
public:
  // Declarations
  __declspec(property(get = get_isReadable)) bool isReadable;

  /// @brief Method get_isReadable addr 0x2cb25c4 size 0x3c virtual true final false
  inline bool get_isReadable();

  /// @brief Method Internal_CreateImpl addr 0x2cb2600 size 0x74 virtual false final false
  static inline bool Internal_CreateImpl(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                         ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method Internal_Create addr 0x2cb2674 size 0xc8 virtual false final false
  static inline void Internal_Create(::UnityEngine::CubemapArray* mono, int32_t ext, int32_t count, int32_t mipCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                     ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2cb273c size 0x4c virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::DefaultFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  /// @brief Method .ctor addr 0x2cb2788 size 0x90 virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format,
                                                      ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags, int32_t mipCount);

  /// @brief Method .ctor addr 0x2cb2818 size 0xd0 virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::Experimental::Rendering::GraphicsFormat format, ::UnityEngine::Experimental::Rendering::TextureCreationFlags flags,
                    int32_t mipCount);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  /// @brief Method .ctor addr 0x2cb2940 size 0x138 virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, int32_t mipCount, bool linear);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  /// @brief Method .ctor addr 0x2cb2a78 size 0x14 virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain, bool linear);

  static inline ::UnityEngine::CubemapArray* New_ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method .ctor addr 0x2cb2a8c size 0x14 virtual false final false
  inline void _ctor(int32_t width, int32_t cubemapCount, ::UnityEngine::TextureFormat textureFormat, bool mipChain);

  /// @brief Method ValidateIsNotCrunched addr 0x2cb28e8 size 0x58 virtual false final false
  static inline void ValidateIsNotCrunched(::UnityEngine::Experimental::Rendering::TextureCreationFlags flags);

  // Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CubemapArray(CubemapArray&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CubemapArray", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CubemapArray(CubemapArray const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CubemapArray();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::CubemapArray, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::CubemapArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CubemapArray*, "UnityEngine", "CubemapArray");
