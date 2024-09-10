#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersValueSettingsOffsets.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_def.hpp"
CORDL_MODULE_EXPORT(VRControllersValueSettingsOffsets)
namespace GlobalNamespace {
class SettingsManager;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class VRControllersValueSettingsOffsets;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VRControllersValueSettingsOffsets);
// Type: ::VRControllersValueSettingsOffsets
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VRControllersValueSettingsOffsets*
class CORDL_TYPE VRControllersValueSettingsOffsets : public ::GlobalNamespace::VRControllerTransformOffset {
public:
// Declarations
/// @brief Field _settingsManager, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsManager, put=__cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager*  _settingsManager;

 __declspec(property(get=get_positionOffset)) ::UnityEngine::Vector3  positionOffset;

 __declspec(property(get=get_rotationOffset)) ::UnityEngine::Vector3  rotationOffset;

static inline ::GlobalNamespace::VRControllersValueSettingsOffsets* New_ctor() ;

constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SettingsManager*> const& __cordl_internal_get__settingsManager() const;

constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager*  value) ;

/// @brief Method .ctor, addr 0x26b3590, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_positionOffset, addr 0x26b3548, size 0x24, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_positionOffset() ;

/// @brief Method get_rotationOffset, addr 0x26b356c, size 0x24, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 get_rotationOffset() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VRControllersValueSettingsOffsets() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VRControllersValueSettingsOffsets", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VRControllersValueSettingsOffsets(VRControllersValueSettingsOffsets const& ) = delete;

/// @brief Field _settingsManager, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::SettingsManager*  ____settingsManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VRControllersValueSettingsOffsets, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VRControllersValueSettingsOffsets, ____settingsManager) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VRControllersValueSettingsOffsets);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VRControllersValueSettingsOffsets*, "", "VRControllersValueSettingsOffsets");
