#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ReloadDataEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
CORDL_MODULE_EXPORT(HEU_ReloadDataEvent)
namespace HoudiniEngineUnity {
class HEU_ReloadEventData;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ReloadDataEvent;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ReloadDataEvent);
// Type: HoudiniEngineUnity::HEU_ReloadDataEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_ReloadDataEvent*
class CORDL_TYPE HEU_ReloadDataEvent : public ::UnityEngine::Events::UnityEvent_1<::HoudiniEngineUnity::HEU_ReloadEventData*> {
public:
// Declarations
static inline ::HoudiniEngineUnity::HEU_ReloadDataEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x3982b04, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HEU_ReloadDataEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadDataEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_ReloadDataEvent(HEU_ReloadDataEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_ReloadDataEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_ReloadDataEvent(HEU_ReloadDataEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ReloadDataEvent, 0x30>, "Size mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ReloadDataEvent);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ReloadDataEvent*, "HoudiniEngineUnity", "HEU_ReloadDataEvent");
