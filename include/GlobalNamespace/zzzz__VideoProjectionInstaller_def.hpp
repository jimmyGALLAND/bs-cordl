#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__MonoInstaller_def.hpp"
CORDL_MODULE_EXPORT(VideoProjectionInstaller)
namespace GlobalNamespace {
class EnvironmentSceneSetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class VideoProjectionInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VideoProjectionInstaller);
// Type: ::VideoProjectionInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11138))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4981))
// CS Name: ::VideoProjectionInstaller*
class CORDL_TYPE VideoProjectionInstaller : public ::Zenject::MonoInstaller {
public:
  // Declarations
  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __get__sceneSetupData, put = __set__sceneSetupData))::GlobalNamespace::EnvironmentSceneSetupData* _sceneSetupData;

  constexpr ::GlobalNamespace::EnvironmentSceneSetupData*& __get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::EnvironmentSceneSetupData*> const& __get__sceneSetupData() const;

  constexpr void __set__sceneSetupData(::GlobalNamespace::EnvironmentSceneSetupData* value);

  /// @brief Method InstallBindings addr 0x23b3b40 size 0xc4 virtual true final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::VideoProjectionInstaller* New_ctor();

  /// @brief Method .ctor addr 0x23b3c04 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VideoProjectionInstaller(VideoProjectionInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VideoProjectionInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VideoProjectionInstaller(VideoProjectionInstaller const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VideoProjectionInstaller();

public:
  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::EnvironmentSceneSetupData* ____sceneSetupData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VideoProjectionInstaller, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VideoProjectionInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VideoProjectionInstaller*, "", "VideoProjectionInstaller");
