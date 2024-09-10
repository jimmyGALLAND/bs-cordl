#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Interactions/SlowTapInteraction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(SlowTapInteraction)
namespace UnityEngine::InputSystem {
class IInputInteraction;
}
namespace UnityEngine::InputSystem {
struct InputInteractionContext;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Interactions {
class SlowTapInteraction;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Interactions::SlowTapInteraction);
// Type: UnityEngine.InputSystem.Interactions::SlowTapInteraction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Interactions {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.Interactions::SlowTapInteraction*
class CORDL_TYPE SlowTapInteraction : public ::System::Object {
public:
// Declarations
/// @brief Field duration, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_duration, put=__cordl_internal_set_duration)) float_t  duration;

 __declspec(property(get=get_durationOrDefault)) float_t  durationOrDefault;

/// @brief Field m_SlowTapStartTime, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SlowTapStartTime, put=__cordl_internal_set_m_SlowTapStartTime)) double_t  m_SlowTapStartTime;

/// @brief Field pressPoint, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_pressPoint, put=__cordl_internal_set_pressPoint)) float_t  pressPoint;

 __declspec(property(get=get_pressPointOrDefault)) float_t  pressPointOrDefault;

/// @brief Convert operator to "::UnityEngine::InputSystem::IInputInteraction"
constexpr operator  ::UnityEngine::InputSystem::IInputInteraction*() noexcept;

static inline ::UnityEngine::InputSystem::Interactions::SlowTapInteraction* New_ctor() ;

/// @brief Method Process, addr 0x44d3af0, size 0x160, virtual true, abstract: false, final true
inline void Process(ByRef<::UnityEngine::InputSystem::InputInteractionContext>  context) ;

/// @brief Method Reset, addr 0x44d3c50, size 0x8, virtual true, abstract: false, final true
inline void Reset() ;

constexpr float_t const& __cordl_internal_get_duration() const;

constexpr float_t& __cordl_internal_get_duration() ;

constexpr double_t const& __cordl_internal_get_m_SlowTapStartTime() const;

constexpr double_t& __cordl_internal_get_m_SlowTapStartTime() ;

constexpr float_t const& __cordl_internal_get_pressPoint() const;

constexpr float_t& __cordl_internal_get_pressPoint() ;

constexpr void __cordl_internal_set_duration(float_t  value) ;

constexpr void __cordl_internal_set_m_SlowTapStartTime(double_t  value) ;

constexpr void __cordl_internal_set_pressPoint(float_t  value) ;

/// @brief Method .ctor, addr 0x44d3c58, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_durationOrDefault, addr 0x44d3a28, size 0x70, virtual false, abstract: false, final false
inline float_t get_durationOrDefault() ;

/// @brief Method get_pressPointOrDefault, addr 0x44d3a98, size 0x58, virtual false, abstract: false, final false
inline float_t get_pressPointOrDefault() ;

/// @brief Convert to "::UnityEngine::InputSystem::IInputInteraction"
constexpr ::UnityEngine::InputSystem::IInputInteraction* i___UnityEngine__InputSystem__IInputInteraction() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SlowTapInteraction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SlowTapInteraction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SlowTapInteraction(SlowTapInteraction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SlowTapInteraction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SlowTapInteraction(SlowTapInteraction const& ) = delete;

/// @brief Field duration, offset: 0x10, size: 0x4, def value: None
 float_t  ___duration;

/// @brief Field pressPoint, offset: 0x14, size: 0x4, def value: None
 float_t  ___pressPoint;

/// @brief Field m_SlowTapStartTime, offset: 0x18, size: 0x8, def value: None
 double_t  ___m_SlowTapStartTime;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Interactions::SlowTapInteraction, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::SlowTapInteraction, ___duration) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::SlowTapInteraction, ___pressPoint) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::Interactions::SlowTapInteraction, ___m_SlowTapStartTime) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine::InputSystem::Interactions
NEED_NO_BOX(::UnityEngine::InputSystem::Interactions::SlowTapInteraction);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Interactions::SlowTapInteraction*, "UnityEngine.InputSystem.Interactions", "SlowTapInteraction");
