#pragma once
// IWYU pragma private; include "Oculus/Platform/PartyUpdateAction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PartyUpdateAction)
// Forward declare root types
namespace Oculus::Platform {
struct PartyUpdateAction;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::PartyUpdateAction);
// Type: Oculus.Platform::PartyUpdateAction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: true
// CS Name: ::Oculus.Platform::PartyUpdateAction
struct CORDL_TYPE PartyUpdateAction {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PartyUpdateAction_Unwrapped
enum struct __PartyUpdateAction_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Join = static_cast<int32_t>(0x1),
__E_Leave = static_cast<int32_t>(0x2),
__E_Invite = static_cast<int32_t>(0x3),
__E_Uninvite = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PartyUpdateAction_Unwrapped () const noexcept {
return static_cast<__PartyUpdateAction_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PartyUpdateAction() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PartyUpdateAction(int32_t  value__) noexcept;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

/// @brief Field Invite value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::PartyUpdateAction const Invite;

/// @brief Field Join value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::PartyUpdateAction const Join;

/// @brief Field Leave value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::PartyUpdateAction const Leave;

/// @brief Field Uninvite value: static_cast<int32_t>(0x4)
static ::Oculus::Platform::PartyUpdateAction const Uninvite;

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::PartyUpdateAction const Unknown;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::PartyUpdateAction, 0x4>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::PartyUpdateAction, value__) == 0x0, "Offset mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::PartyUpdateAction, "Oculus.Platform", "PartyUpdateAction");
