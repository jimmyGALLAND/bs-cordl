#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UsedByNativeCodeAttribute)
// Forward declare root types
namespace UnityEngine::Scripting {
class UsedByNativeCodeAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
// Type: UnityEngine.Scripting::UsedByNativeCodeAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Scripting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16010))
// CS Name: ::UnityEngine.Scripting::UsedByNativeCodeAttribute*
class CORDL_TYPE UsedByNativeCodeAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field <Name>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__Name_k__BackingField, put = __set__Name_k__BackingField))::StringW _Name_k__BackingField;

  __declspec(property(put = set_Name))::StringW Name;

  constexpr ::StringW& __get__Name_k__BackingField();

  constexpr ::StringW const& __get__Name_k__BackingField() const;

  constexpr void __set__Name_k__BackingField(::StringW value);

  static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor();

  /// @brief Method .ctor addr 0x2d18194 size 0x8 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::Scripting::UsedByNativeCodeAttribute* New_ctor(::StringW name);

  /// @brief Method .ctor addr 0x2d1819c size 0x28 virtual false final false
  inline void _ctor(::StringW name);

  /// @brief Method set_Name addr 0x2d181c4 size 0x8 virtual false final false
  inline void set_Name(::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UsedByNativeCodeAttribute(UsedByNativeCodeAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UsedByNativeCodeAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UsedByNativeCodeAttribute(UsedByNativeCodeAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UsedByNativeCodeAttribute();

public:
  /// @brief Field <Name>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Name_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Scripting::UsedByNativeCodeAttribute, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Scripting
NEED_NO_BOX(::UnityEngine::Scripting::UsedByNativeCodeAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Scripting::UsedByNativeCodeAttribute*, "UnityEngine.Scripting", "UsedByNativeCodeAttribute");
