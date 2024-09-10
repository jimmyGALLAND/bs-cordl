#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidProximity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__ProximitySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidProximity)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidProximity;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidProximity);
// Type: UnityEngine.InputSystem.Android::AndroidProximity
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidProximity*
class CORDL_TYPE AndroidProximity : public ::UnityEngine::InputSystem::ProximitySensor {
public:
// Declarations
static inline ::UnityEngine::InputSystem::Android::AndroidProximity* New_ctor() ;

/// @brief Method .ctor, addr 0x4573b4c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidProximity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidProximity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidProximity(AndroidProximity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidProximity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidProximity(AndroidProximity const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidProximity, 0x178>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidProximity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidProximity*, "UnityEngine.InputSystem.Android", "AndroidProximity");
