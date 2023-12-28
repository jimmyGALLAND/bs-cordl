#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "LIV/SDK/Unity/zzzz__TEXTURE_COLOR_SPACE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_DEVICE_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_FORMAT_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_ID_def.hpp"
#include "LIV/SDK/Unity/zzzz__TEXTURE_TYPE_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SDKTexture)
namespace LIV::SDK::Unity {
struct TEXTURE_DEVICE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_TYPE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_ID;
}
namespace LIV::SDK::Unity {
struct TEXTURE_COLOR_SPACE;
}
namespace LIV::SDK::Unity {
struct TEXTURE_FORMAT;
}
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKTexture;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKTexture);
// Type: LIV.SDK.Unity::SDKTexture
// SizeInfo { instance_size: 56, native_size: 56, calculated_instance_size: 56, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15102)), TypeDefinitionIndex(TypeDefinitionIndex(15105)), TypeDefinitionIndex(TypeDefinitionIndex(15103)),
// TypeDefinitionIndex(TypeDefinitionIndex(15104)), TypeDefinitionIndex(TypeDefinitionIndex(2603)), TypeDefinitionIndex(TypeDefinitionIndex(15106))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(15118)) CS Name: ::LIV.SDK.Unity::SDKTexture
struct CORDL_TYPE SDKTexture {
public:
  // Declarations
  /// @brief Method get_empty addr 0x220f644 size 0x5c virtual false final false
  static inline ::LIV::SDK::Unity::SDKTexture get_empty();

  /// @brief Method ToString addr 0x221591c size 0x3a4 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "id", ty: "::LIV::SDK::Unity::TEXTURE_ID", modifiers: "", def_value: None }, CppParam { name: "texturePtr", ty: "void*", modifiers: "", def_value: None },
  // CppParam { name: "SharedHandle", ty: "void*", modifiers: "", def_value: None }, CppParam { name: "device", ty: "::LIV::SDK::Unity::TEXTURE_DEVICE", modifiers: "", def_value: None }, CppParam {
  // name: "dummy", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::LIV::SDK::Unity::TEXTURE_TYPE", modifiers: "", def_value: None }, CppParam { name: "format", ty:
  // "::LIV::SDK::Unity::TEXTURE_FORMAT", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "::LIV::SDK::Unity::TEXTURE_COLOR_SPACE", modifiers: "", def_value: None }, CppParam {
  // name: "width", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "height", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SDKTexture(::LIV::SDK::Unity::TEXTURE_ID id, void* texturePtr, void* SharedHandle, ::LIV::SDK::Unity::TEXTURE_DEVICE device, int32_t dummy, ::LIV::SDK::Unity::TEXTURE_TYPE type,
                       ::LIV::SDK::Unity::TEXTURE_FORMAT format, ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace, int32_t width, int32_t height) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SDKTexture();

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_ID id;

  /// @brief Field texturePtr, offset: 0x8, size: 0x8, def value: None
  void* texturePtr;

  /// @brief Field SharedHandle, offset: 0x10, size: 0x8, def value: None
  void* SharedHandle;

  /// @brief Field device, offset: 0x18, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_DEVICE device;

  /// @brief Field dummy, offset: 0x1c, size: 0x4, def value: None
  int32_t dummy;

  /// @brief Field type, offset: 0x20, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_TYPE type;

  /// @brief Field format, offset: 0x24, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_FORMAT format;

  /// @brief Field colorSpace, offset: 0x28, size: 0x4, def value: None
  ::LIV::SDK::Unity::TEXTURE_COLOR_SPACE colorSpace;

  /// @brief Field width, offset: 0x2c, size: 0x4, def value: None
  int32_t width;

  /// @brief Field height, offset: 0x30, size: 0x4, def value: None
  int32_t height;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKTexture, 0x38>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKTexture, "LIV.SDK.Unity", "SDKTexture");
