#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(StandardGameplayInstaller)
namespace GlobalNamespace {
class StandardGameplaySceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class StandardGameplayInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::StandardGameplayInstaller);
// Type: ::StandardGameplayInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5403))
// CS Name: ::StandardGameplayInstaller*
class CORDL_TYPE StandardGameplayInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _standardSceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__standardSceneSetupData, put = __set__standardSceneSetupData))::GlobalNamespace::StandardGameplaySceneSetupData* _standardSceneSetupData;

  constexpr ::GlobalNamespace::StandardGameplaySceneSetupData*& __get__standardSceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::StandardGameplaySceneSetupData*> const& __get__standardSceneSetupData() const;

  constexpr void __set__standardSceneSetupData(::GlobalNamespace::StandardGameplaySceneSetupData* value);

  /// @brief Method InstallBindings addr 0x22731f4 size 0x370 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::StandardGameplayInstaller* New_ctor();

  /// @brief Method .ctor addr 0x2273564 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StandardGameplayInstaller(StandardGameplayInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StandardGameplayInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StandardGameplayInstaller(StandardGameplayInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StandardGameplayInstaller();

public:
  /// @brief Field _standardSceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::StandardGameplaySceneSetupData* ____standardSceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::StandardGameplayInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::StandardGameplayInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::StandardGameplayInstaller*, "", "StandardGameplayInstaller");
