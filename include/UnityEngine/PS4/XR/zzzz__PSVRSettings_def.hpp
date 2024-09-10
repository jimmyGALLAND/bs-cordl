#pragma once
// IWYU pragma private; include "UnityEngine/PS4/XR/PSVRSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(PSVRSettings)
// Forward declare root types
namespace UnityEngine::PS4::XR {
class PSVRSettings;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::PS4::XR::PSVRSettings);
// Type: UnityEngine.PS4.XR::PSVRSettings
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::PS4::XR {
// Is value type: false
// CS Name: ::UnityEngine.PS4.XR::PSVRSettings*
class CORDL_TYPE PSVRSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
static inline ::UnityEngine::PS4::XR::PSVRSettings* New_ctor() ;

/// @brief Method .ctor, addr 0x47a721c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PSVRSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PSVRSettings(PSVRSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PSVRSettings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PSVRSettings(PSVRSettings const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::PS4::XR::PSVRSettings, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::PS4::XR
NEED_NO_BOX(::UnityEngine::PS4::XR::PSVRSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PS4::XR::PSVRSettings*, "UnityEngine.PS4.XR", "PSVRSettings");
