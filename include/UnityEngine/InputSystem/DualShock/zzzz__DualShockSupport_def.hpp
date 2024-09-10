#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/DualShock/DualShockSupport.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DualShockSupport)
// Forward declare root types
namespace UnityEngine::InputSystem::DualShock {
class DualShockSupport;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::DualShock::DualShockSupport);
// Type: UnityEngine.InputSystem.DualShock::DualShockSupport
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::DualShock {
// Is value type: false
// CS Name: ::UnityEngine.InputSystem.DualShock::DualShockSupport*
class CORDL_TYPE DualShockSupport : public ::System::Object {
public:
// Declarations
/// @brief Method Initialize, addr 0x4573a84, size 0x70, virtual false, abstract: false, final false
static inline void Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DualShockSupport() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DualShockSupport", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DualShockSupport(DualShockSupport && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DualShockSupport", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DualShockSupport(DualShockSupport const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::DualShock::DualShockSupport, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::DualShock
NEED_NO_BOX(::UnityEngine::InputSystem::DualShock::DualShockSupport);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::DualShock::DualShockSupport*, "UnityEngine.InputSystem.DualShock", "DualShockSupport");
