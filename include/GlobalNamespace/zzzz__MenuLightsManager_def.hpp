#pragma once
// IWYU pragma private; include "GlobalNamespace/MenuLightsManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MenuLightsManager)
namespace GlobalNamespace {
class LightWithIdManager;
}
namespace GlobalNamespace {
class MenuLightsPresetSO;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__8;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuLightsManager;
}
namespace GlobalNamespace {
class __MenuLightsManager___Start_d__8;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuLightsManager);
MARK_REF_PTR_T(::GlobalNamespace::__MenuLightsManager___Start_d__8);
// Type: ::<Start>d__8
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsManager::<Start>d__8*
class CORDL_TYPE __MenuLightsManager___Start_d__8 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::MenuLightsManager>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x3aef92c, size 0x1e0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::GlobalNamespace::__MenuLightsManager___Start_d__8* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x3aefb0c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x3aefb14, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x3aefb4c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x3aef928, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsManager>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MenuLightsManager>  value) ;

/// @brief Method .ctor, addr 0x3aef090, size 0x28, virtual false, abstract: false, final false
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
constexpr __MenuLightsManager___Start_d__8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__8", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__MenuLightsManager___Start_d__8(__MenuLightsManager___Start_d__8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__MenuLightsManager___Start_d__8", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__MenuLightsManager___Start_d__8(__MenuLightsManager___Start_d__8 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenuLightsManager>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MenuLightsManager___Start_d__8, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__8, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__8, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MenuLightsManager___Start_d__8, _____4__this) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::MenuLightsManager
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MenuLightsManager*
class CORDL_TYPE MenuLightsManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__8 = ::GlobalNamespace::__MenuLightsManager___Start_d__8;

/// @brief Field _alphaMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__alphaMultiplier, put=__cordl_internal_set__alphaMultiplier)) float_t  _alphaMultiplier;

/// @brief Field _animationTween, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__animationTween, put=__cordl_internal_set__animationTween)) ::Tweening::FloatTween*  _animationTween;

/// @brief Field _defaultPreset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultPreset, put=__cordl_internal_set__defaultPreset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>  _defaultPreset;

/// @brief Field _lightManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightManager, put=__cordl_internal_set__lightManager)) ::UnityW<::GlobalNamespace::LightWithIdManager>  _lightManager;

/// @brief Field _originalColors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__originalColors, put=__cordl_internal_set__originalColors)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Color>*  _originalColors;

/// @brief Field _preset, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__preset, put=__cordl_internal_set__preset)) ::UnityW<::GlobalNamespace::MenuLightsPresetSO>  _preset;

/// @brief Field _tweeningManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tweeningManager, put=__cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager>  _tweeningManager;

/// @brief Method CurrentColorForID, addr 0x3aef0d4, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Color CurrentColorForID(int32_t  lightId) ;

/// @brief Method GetLightForIndex, addr 0x3aef23c, size 0xa0, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<int32_t,::UnityEngine::Color> GetLightForIndex(int32_t  index) ;

/// @brief Method GetLightsCount, addr 0x3aef218, size 0x24, virtual false, abstract: false, final false
inline int32_t GetLightsCount() ;

/// @brief Method HandleTweenFinished, addr 0x3aef6c8, size 0x58, virtual false, abstract: false, final false
inline void HandleTweenFinished() ;

static inline ::GlobalNamespace::MenuLightsManager* New_ctor() ;

/// @brief Method RefreshColors, addr 0x3aef818, size 0x8c, virtual false, abstract: false, final false
inline void RefreshColors() ;

/// @brief Method ResetColorPresetToDefault, addr 0x3aef5a8, size 0x98, virtual false, abstract: false, final false
inline void ResetColorPresetToDefault(bool  animated) ;

/// @brief Method SaveOriginalColors, addr 0x3aef354, size 0xdc, virtual false, abstract: false, final false
inline void SaveOriginalColors() ;

/// @brief Method SetAlphaMultiplier, addr 0x3aef720, size 0xf8, virtual false, abstract: false, final false
inline void SetAlphaMultiplier(float_t  alphaMultiplier, bool  animated, float_t  duration) ;

/// @brief Method SetColor, addr 0x3aef0b8, size 0x1c, virtual false, abstract: false, final false
inline void SetColor(int32_t  lightId, ::UnityEngine::Color  color) ;

/// @brief Method SetColorPreset, addr 0x3aef4d0, size 0xd8, virtual false, abstract: false, final false
inline void SetColorPreset(::GlobalNamespace::MenuLightsPresetSO*  preset, bool  animated, float_t  duration) ;

/// @brief Method SetDefaultPreset, addr 0x3aef430, size 0xa0, virtual false, abstract: false, final false
inline void SetDefaultPreset(::GlobalNamespace::MenuLightsPresetSO*  preset, bool  animated) ;

/// @brief Method SetTargetColors, addr 0x3aef2dc, size 0x78, virtual false, abstract: false, final false
inline void SetTargetColors() ;

/// @brief Method Start, addr 0x3aef030, size 0x60, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Start() ;

/// @brief Method StartLightAnimation, addr 0x3aef640, size 0x88, virtual false, abstract: false, final false
inline void StartLightAnimation(float_t  duration) ;

/// @brief Method UpdateColors, addr 0x3aef0f4, size 0x124, virtual false, abstract: false, final false
inline void UpdateColors(float_t  interpolationFactor) ;

constexpr float_t const& __cordl_internal_get__alphaMultiplier() const;

constexpr float_t& __cordl_internal_get__alphaMultiplier() ;

constexpr ::Tweening::FloatTween*& __cordl_internal_get__animationTween() ;

constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __cordl_internal_get__animationTween() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__defaultPreset() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__defaultPreset() ;

constexpr ::UnityW<::GlobalNamespace::LightWithIdManager> const& __cordl_internal_get__lightManager() const;

constexpr ::UnityW<::GlobalNamespace::LightWithIdManager>& __cordl_internal_get__lightManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Color>*& __cordl_internal_get__originalColors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Color>*> const& __cordl_internal_get__originalColors() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO> const& __cordl_internal_get__preset() const;

constexpr ::UnityW<::GlobalNamespace::MenuLightsPresetSO>& __cordl_internal_get__preset() ;

constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager() ;

constexpr void __cordl_internal_set__alphaMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__animationTween(::Tweening::FloatTween*  value) ;

constexpr void __cordl_internal_set__defaultPreset(::UnityW<::GlobalNamespace::MenuLightsPresetSO>  value) ;

constexpr void __cordl_internal_set__lightManager(::UnityW<::GlobalNamespace::LightWithIdManager>  value) ;

constexpr void __cordl_internal_set__originalColors(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Color>*  value) ;

constexpr void __cordl_internal_set__preset(::UnityW<::GlobalNamespace::MenuLightsPresetSO>  value) ;

constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager>  value) ;

/// @brief Method .ctor, addr 0x3aef8a4, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MenuLightsManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuLightsManager(MenuLightsManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuLightsManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuLightsManager(MenuLightsManager const& ) = delete;

/// @brief Field _defaultPreset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenuLightsPresetSO>  ____defaultPreset;

/// @brief Field _lightManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LightWithIdManager>  ____lightManager;

/// @brief Field _tweeningManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::Tweening::TimeTweeningManager>  ____tweeningManager;

/// @brief Field _preset, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MenuLightsPresetSO>  ____preset;

/// @brief Field _originalColors, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::Color>*  ____originalColors;

/// @brief Field _animationTween, offset: 0x48, size: 0x8, def value: None
 ::Tweening::FloatTween*  ____animationTween;

/// @brief Field _alphaMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ____alphaMultiplier;

/// @brief Field kDefaultAnimationDuration offset 0xffffffff size 0x4
static constexpr float_t  kDefaultAnimationDuration{0.5};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuLightsManager, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____defaultPreset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____lightManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____tweeningManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____preset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____originalColors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____animationTween) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MenuLightsManager, ____alphaMultiplier) == 0x50, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuLightsManager);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuLightsManager*, "", "MenuLightsManager");
NEED_NO_BOX(::GlobalNamespace::__MenuLightsManager___Start_d__8);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MenuLightsManager___Start_d__8*, "", "MenuLightsManager/<Start>d__8");
