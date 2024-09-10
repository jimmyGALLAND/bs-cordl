#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/AvatarVisualController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AvatarVisualController)
namespace BeatSaber::AvatarCore {
class AvatarController;
}
namespace BeatSaber::AvatarCore {
class __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace BeatSaber::AvatarCore {
class AvatarVisualController;
}
namespace BeatSaber::AvatarCore {
class __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;
}
// Write type traits
MARK_REF_PTR_T(::BeatSaber::AvatarCore::AvatarVisualController);
MARK_REF_PTR_T(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2);
// Type: ::<WaitForAvatarLoadAndSetLightColor>d__2
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::AvatarVisualController::<WaitForAvatarLoadAndSetLightColor>d__2*
class CORDL_TYPE __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>  __4__this;

/// @brief Field color, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_color, put=__cordl_internal_set_color)) ::UnityEngine::Color  color;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x220d1b0, size 0xc8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x220d278, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x220d280, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x220d2b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x220d1ac, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>& __cordl_internal_get___4__this() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_color() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>  value) ;

constexpr void __cordl_internal_set_color(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0x220d174, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2(__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2(__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BeatSaber::AvatarCore::AvatarVisualController>  _____4__this;

/// @brief Field color, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___color;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, 0x38>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2, ___color) == 0x28, "Offset mismatch!");

} // namespace end def BeatSaber::AvatarCore
// Type: BeatSaber.AvatarCore::AvatarVisualController
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BeatSaber::AvatarCore {
// Is value type: false
// CS Name: ::BeatSaber.AvatarCore::AvatarVisualController*
class CORDL_TYPE AvatarVisualController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _WaitForAvatarLoadAndSetLightColor_d__2 = ::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2;

/// @brief Field _avatarController, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__avatarController, put=__cordl_internal_set__avatarController)) ::UnityW<::BeatSaber::AvatarCore::AvatarController>  _avatarController;

static inline ::BeatSaber::AvatarCore::AvatarVisualController* New_ctor() ;

/// @brief Method SetLightColor, addr 0x220cfb0, size 0x13c, virtual false, abstract: false, final false
inline void SetLightColor(::UnityEngine::Color  color) ;

/// @brief Method WaitForAvatarLoadAndSetLightColor, addr 0x220d0ec, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForAvatarLoadAndSetLightColor(::UnityEngine::Color  color) ;

/// @brief Method __SetAvatarController, addr 0x220d19c, size 0x8, virtual false, abstract: false, final false
inline void __SetAvatarController(::BeatSaber::AvatarCore::AvatarController*  avatarController) ;

constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController> const& __cordl_internal_get__avatarController() const;

constexpr ::UnityW<::BeatSaber::AvatarCore::AvatarController>& __cordl_internal_get__avatarController() ;

constexpr void __cordl_internal_set__avatarController(::UnityW<::BeatSaber::AvatarCore::AvatarController>  value) ;

/// @brief Method .ctor, addr 0x220d1a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AvatarVisualController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AvatarVisualController(AvatarVisualController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AvatarVisualController", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AvatarVisualController(AvatarVisualController const& ) = delete;

/// @brief Field _avatarController, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BeatSaber::AvatarCore::AvatarController>  ____avatarController;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatSaber::AvatarCore::AvatarVisualController, 0x28>, "Size mismatch!");

static_assert(offsetof(::BeatSaber::AvatarCore::AvatarVisualController, ____avatarController) == 0x20, "Offset mismatch!");

} // namespace end def BeatSaber::AvatarCore
NEED_NO_BOX(::BeatSaber::AvatarCore::AvatarVisualController);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::AvatarVisualController*, "BeatSaber.AvatarCore", "AvatarVisualController");
NEED_NO_BOX(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2);
DEFINE_IL2CPP_ARG_TYPE(::BeatSaber::AvatarCore::__AvatarVisualController___WaitForAvatarLoadAndSetLightColor_d__2*, "BeatSaber.AvatarCore", "AvatarVisualController/<WaitForAvatarLoadAndSetLightColor>d__2");
