#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Android/AndroidRelativeHumidity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/zzzz__HumiditySensor_def.hpp"
CORDL_MODULE_EXPORT(AndroidRelativeHumidity)
// Forward declare root types
namespace UnityEngine::InputSystem::Android {
class AndroidRelativeHumidity;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity);
// Type: UnityEngine.InputSystem.Android::AndroidRelativeHumidity
// SizeInfo { instance_size: 376, native_size: -1, calculated_instance_size: 376, calculated_native_size: 376, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Android {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Android::AndroidRelativeHumidity*
class CORDL_TYPE AndroidRelativeHumidity : public ::UnityEngine::InputSystem::HumiditySensor {
public:
// Declarations
static inline ::UnityEngine::InputSystem::Android::AndroidRelativeHumidity* New_ctor() ;

/// @brief Method .ctor, addr 0x4573b6c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AndroidRelativeHumidity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AndroidRelativeHumidity(AndroidRelativeHumidity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AndroidRelativeHumidity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AndroidRelativeHumidity(AndroidRelativeHumidity const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Android::AndroidRelativeHumidity, 0x178>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::Android
NEED_NO_BOX(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Android::AndroidRelativeHumidity*, "UnityEngine.InputSystem.Android", "AndroidRelativeHumidity");
