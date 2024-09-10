#pragma once
// IWYU pragma private; include "GlobalNamespace/FloatFxGroupEffectTarget.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FloatFxGroupEffectTarget)
// Forward declare root types
namespace GlobalNamespace {
class FloatFxGroupEffectTarget;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::FloatFxGroupEffectTarget);
// Type: ::FloatFxGroupEffectTarget
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::FloatFxGroupEffectTarget*
class CORDL_TYPE FloatFxGroupEffectTarget : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::FloatFxGroupEffectTarget* New_ctor() ;

/// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void SetValue(int32_t  groupId, int32_t  elementId, float_t  value) ;

/// @brief Method TriggerValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void TriggerValue(int32_t  groupId, int32_t  elementId, float_t  value) ;

/// @brief Method .ctor, addr 0x3af8ef8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FloatFxGroupEffectTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FloatFxGroupEffectTarget(FloatFxGroupEffectTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FloatFxGroupEffectTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FloatFxGroupEffectTarget(FloatFxGroupEffectTarget const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::FloatFxGroupEffectTarget, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::FloatFxGroupEffectTarget);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::FloatFxGroupEffectTarget*, "", "FloatFxGroupEffectTarget");
