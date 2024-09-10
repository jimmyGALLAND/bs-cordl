#pragma once
// IWYU pragma private; include "GlobalNamespace/NoVRInputModule.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(NoVRInputModule)
namespace GlobalNamespace {
class IVRInputModule;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class NoVRInputModule;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoVRInputModule);
// Type: ::NoVRInputModule
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoVRInputModule*
class CORDL_TYPE NoVRInputModule : public ::System::Object {
public:
// Declarations
/// @brief Field onProcessMousePressEvent, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_onProcessMousePressEvent, put=__cordl_internal_set_onProcessMousePressEvent)) ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  onProcessMousePressEvent;

/// @brief Field pointerDidClickEvent, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_pointerDidClickEvent, put=__cordl_internal_set_pointerDidClickEvent)) ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  pointerDidClickEvent;

/// @brief Convert operator to "::GlobalNamespace::IVRInputModule"
constexpr operator  ::GlobalNamespace::IVRInputModule*() noexcept;

static inline ::GlobalNamespace::NoVRInputModule* New_ctor() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_onProcessMousePressEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::GameObject>>*> const& __cordl_internal_get_onProcessMousePressEvent() const;

constexpr ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*& __cordl_internal_get_pointerDidClickEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*> const& __cordl_internal_get_pointerDidClickEvent() const;

constexpr void __cordl_internal_set_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Method .ctor, addr 0x4a565f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_onProcessMousePressEvent, addr 0x4a56334, size 0xb0, virtual true, abstract: false, final true
inline void add_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method add_pointerDidClickEvent, addr 0x4a56494, size 0xb0, virtual true, abstract: false, final true
inline void add_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

/// @brief Convert to "::GlobalNamespace::IVRInputModule"
constexpr ::GlobalNamespace::IVRInputModule* i___GlobalNamespace__IVRInputModule() noexcept;

/// @brief Method remove_onProcessMousePressEvent, addr 0x4a563e4, size 0xb0, virtual true, abstract: false, final true
inline void remove_onProcessMousePressEvent(::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

/// @brief Method remove_pointerDidClickEvent, addr 0x4a56544, size 0xb0, virtual true, abstract: false, final true
inline void remove_pointerDidClickEvent(::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NoVRInputModule() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NoVRInputModule", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NoVRInputModule(NoVRInputModule && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NoVRInputModule", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NoVRInputModule(NoVRInputModule const& ) = delete;

/// @brief Field onProcessMousePressEvent, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::GameObject>>*  ___onProcessMousePressEvent;

/// @brief Field pointerDidClickEvent, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::EventSystems::PointerEventData*>*  ___pointerDidClickEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoVRInputModule, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::NoVRInputModule, ___onProcessMousePressEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::NoVRInputModule, ___pointerDidClickEvent) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoVRInputModule);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoVRInputModule*, "", "NoVRInputModule");
