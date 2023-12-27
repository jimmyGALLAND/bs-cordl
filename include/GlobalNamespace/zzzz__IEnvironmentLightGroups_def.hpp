#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IEnvironmentLightGroups)
namespace GlobalNamespace {
class ILightGroup;
}
// Forward declare root types
namespace GlobalNamespace {
class IEnvironmentLightGroups;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IEnvironmentLightGroups);
// Type: ::IEnvironmentLightGroups
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4183))
// CS Name: ::IEnvironmentLightGroups*
class CORDL_TYPE IEnvironmentLightGroups {
public:
  // Declarations
  /// @brief Method GetDataForGroup addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::ILightGroup* GetDataForGroup(int32_t groupId);

  /// @brief Method Sort addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Sort();

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentLightGroups", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IEnvironmentLightGroups(IEnvironmentLightGroups&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IEnvironmentLightGroups", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IEnvironmentLightGroups(IEnvironmentLightGroups const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IEnvironmentLightGroups);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IEnvironmentLightGroups*, "", "IEnvironmentLightGroups");
