#pragma once
// IWYU pragma private; include "UnityEngine/Behaviour.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
CORDL_MODULE_EXPORT(Behaviour)
// Forward declare root types
namespace UnityEngine {
class Behaviour;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Behaviour);
// Type: UnityEngine::Behaviour
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::Behaviour*
class CORDL_TYPE Behaviour : public ::UnityEngine::Component {
public:
// Declarations
 __declspec(property(get=get_enabled, put=set_enabled)) bool  enabled;

 __declspec(property(get=get_isActiveAndEnabled)) bool  isActiveAndEnabled;

static inline ::UnityEngine::Behaviour* New_ctor() ;

/// @brief Method .ctor, addr 0x4816350, size 0x4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_enabled, addr 0x4816294, size 0x3c, virtual false, abstract: false, final false
inline bool get_enabled() ;

/// @brief Method get_isActiveAndEnabled, addr 0x4816314, size 0x3c, virtual false, abstract: false, final false
inline bool get_isActiveAndEnabled() ;

/// @brief Method set_enabled, addr 0x48162d0, size 0x44, virtual false, abstract: false, final false
inline void set_enabled(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Behaviour() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Behaviour(Behaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Behaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Behaviour(Behaviour const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Behaviour, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::Behaviour);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Behaviour*, "UnityEngine", "Behaviour");
