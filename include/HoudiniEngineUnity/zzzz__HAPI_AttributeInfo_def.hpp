#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeTypeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AttributeInfo)
namespace HoudiniEngineUnity {
struct HAPI_AttributeOwner;
}
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_AttributeTypeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AttributeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AttributeInfo);
// Type: HoudiniEngineUnity::HAPI_AttributeInfo
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9703)), TypeDefinitionIndex(TypeDefinitionIndex(9707)), TypeDefinitionIndex(TypeDefinitionIndex(9708))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9741))
// CS Name: ::HoudiniEngineUnity::HAPI_AttributeInfo
struct CORDL_TYPE HAPI_AttributeInfo {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2191e84 size 0x20 virtual false final false
  inline void _ctor(::StringW ignored);

  // Ctor Parameters [CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "owner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner", modifiers: "", def_value: None
  // }, CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "originalOwner", ty: "::HoudiniEngineUnity::HAPI_AttributeOwner",
  // modifiers: "", def_value: None }, CppParam { name: "count", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "totalArrayElements", ty: "int64_t", modifiers: "", def_value: None }, CppParam { name: "typeInfo", ty: "::HoudiniEngineUnity::HAPI_AttributeTypeInfo", modifiers: "", def_value:
  // None }]
  constexpr HAPI_AttributeInfo(bool exists, ::HoudiniEngineUnity::HAPI_AttributeOwner owner, ::HoudiniEngineUnity::HAPI_StorageType storage, ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner,
                               int32_t count, int32_t tupleSize, int64_t totalArrayElements, ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_AttributeInfo();

  /// @brief Field exists, offset: 0x0, size: 0x1, def value: None
  bool exists;

  /// @brief Field owner, offset: 0x4, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeOwner owner;

  /// @brief Field storage, offset: 0x8, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_StorageType storage;

  /// @brief Field originalOwner, offset: 0xc, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeOwner originalOwner;

  /// @brief Field count, offset: 0x10, size: 0x4, def value: None
  int32_t count;

  /// @brief Field tupleSize, offset: 0x14, size: 0x4, def value: None
  int32_t tupleSize;

  /// @brief Field totalArrayElements, offset: 0x18, size: 0x8, def value: None
  int64_t totalArrayElements;

  /// @brief Field typeInfo, offset: 0x20, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_AttributeTypeInfo typeInfo;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AttributeInfo, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AttributeInfo, "HoudiniEngineUnity", "HAPI_AttributeInfo");
