#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__Installer_3_def.hpp"
CORDL_MODULE_EXPORT(PlatformInstaller)
namespace GlobalNamespace {
class AppInitSetupData;
}
namespace GlobalNamespace {
class MockPlatformAdditionalContentModelInitialDataSO;
}
// Forward declare root types
namespace GlobalNamespace {
class PlatformInstaller;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformInstaller);
// Type: ::PlatformInstaller
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlatformInstaller*
class CORDL_TYPE PlatformInstaller
    : public ::Zenject::Installer_3<::GlobalNamespace::AppInitSetupData*, ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>, ::GlobalNamespace::PlatformInstaller*> {
public:
  // Declarations
  /// @brief Field _isTest, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isTest, put = __cordl_internal_set__isTest)) bool _isTest;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__mockPlatformAdditionalContentModelInitialData, put = __cordl_internal_set__mockPlatformAdditionalContentModelInitialData))::UnityW<
      ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> _mockPlatformAdditionalContentModelInitialData;

  /// @brief Method BindAchievementsHandler, addr 0x250be5c, size 0x7c, virtual false, abstract: false, final false
  inline void BindAchievementsHandler();

  /// @brief Method BindAdditionalContentModel, addr 0x250bed8, size 0x74, virtual false, abstract: false, final false
  inline void BindAdditionalContentModel();

  /// @brief Method BindAnalyticsModel, addr 0x250bdc0, size 0x9c, virtual false, abstract: false, final false
  inline void BindAnalyticsModel();

  /// @brief Method BindBeatmapDataAssetFileModel, addr 0x250bf4c, size 0x7c, virtual false, abstract: false, final false
  inline void BindBeatmapDataAssetFileModel();

  /// @brief Method BindMockPlatformAdditionalContentModel, addr 0x250bfc8, size 0x9c, virtual false, abstract: false, final false
  inline void BindMockPlatformAdditionalContentModel();

  /// @brief Method BindPlatformUserModel, addr 0x250bce4, size 0xdc, virtual false, abstract: false, final false
  inline void BindPlatformUserModel();

  /// @brief Method InstallBindings, addr 0x250bcb4, size 0x30, virtual true, abstract: false, final false
  inline void InstallBindings();

  static inline ::GlobalNamespace::PlatformInstaller* New_ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData,
                                                               ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

  constexpr bool const& __cordl_internal_get__isTest() const;

  constexpr bool& __cordl_internal_get__isTest();

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> const& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData() const;

  constexpr ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO>& __cordl_internal_get__mockPlatformAdditionalContentModelInitialData();

  constexpr void __cordl_internal_set__isTest(bool value);

  constexpr void __cordl_internal_set__mockPlatformAdditionalContentModelInitialData(::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> value);

  /// @brief Method .ctor, addr 0x250bc3c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::AppInitSetupData* appInitSetupData, ::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO* mockPlatformAdditionalContentModelInitialData);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlatformInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlatformInstaller(PlatformInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlatformInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlatformInstaller(PlatformInstaller const&) = delete;

  /// @brief Field _isTest, offset: 0x18, size: 0x1, def value: None
  bool ____isTest;

  /// @brief Field _mockPlatformAdditionalContentModelInitialData, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MockPlatformAdditionalContentModelInitialDataSO> ____mockPlatformAdditionalContentModelInitialData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformInstaller, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____isTest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlatformInstaller, ____mockPlatformAdditionalContentModelInitialData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformInstaller*, "", "PlatformInstaller");
