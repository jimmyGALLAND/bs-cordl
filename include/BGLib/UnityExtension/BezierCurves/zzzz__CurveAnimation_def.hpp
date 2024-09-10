#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/BezierCurves/CurveAnimation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CurveAnimation)
namespace BGLib::UnityExtension::BezierCurves {
class BaseBezierCurve;
}
namespace BGLib::UnityExtension::BezierCurves {
template<typename T>
class __CurveAnimation__CurveEvent_1;
}
namespace BGLib::UnityExtension::BezierCurves {
class __CurveAnimation__CurveEvent;
}
namespace BGLib::UnityExtension::BezierCurves {
class __CurveAnimation___Animate_d__17;
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
class AnimationCurve;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace BGLib::UnityExtension::BezierCurves {
class CurveAnimation;
}
namespace BGLib::UnityExtension::BezierCurves {
class __CurveAnimation__CurveEvent;
}
namespace BGLib::UnityExtension::BezierCurves {
template<typename T>
class __CurveAnimation__CurveEvent_1;
}
namespace BGLib::UnityExtension::BezierCurves {
class __CurveAnimation___Animate_d__17;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::CurveAnimation);
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent);
MARK_GEN_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1);
MARK_REF_PTR_T(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17);
// Type: ::CurveEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::CurveAnimation::CurveEvent*
class CORDL_TYPE __CurveAnimation__CurveEvent : public ::UnityEngine::Events::UnityEvent {
public:
// Declarations
static inline ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent* New_ctor() ;

/// @brief Method .ctor, addr 0x226be9c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __CurveAnimation__CurveEvent() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation__CurveEvent", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CurveAnimation__CurveEvent(__CurveAnimation__CurveEvent && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation__CurveEvent", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CurveAnimation__CurveEvent(__CurveAnimation__CurveEvent const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent, 0x30>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
// Type: ::CurveEvent`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::CurveAnimation::CurveEvent`1<T>*
class CORDL_TYPE __CurveAnimation__CurveEvent_1 : public ::UnityEngine::Events::UnityEvent_1<T> {
public:
// Declarations
static inline ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __CurveAnimation__CurveEvent_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation__CurveEvent_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CurveAnimation__CurveEvent_1(__CurveAnimation__CurveEvent_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation__CurveEvent_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CurveAnimation__CurveEvent_1(__CurveAnimation__CurveEvent_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def BGLib::UnityExtension::BezierCurves
// Type: ::<Animate>d__17
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::CurveAnimation::<Animate>d__17*
class CORDL_TYPE __CurveAnimation___Animate_d__17 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::BGLib::UnityExtension::BezierCurves::CurveAnimation>  __4__this;

/// @brief Field <currentTime>5__2, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentTime_5__2, put=__cordl_internal_set__currentTime_5__2)) float_t  _currentTime_5__2;

/// @brief Field withDelay, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_withDelay, put=__cordl_internal_set_withDelay)) bool  withDelay;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x226bea8, size 0x164, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17* New_ctor(int32_t  __1__state) ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x226c00c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x226c014, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x226c04c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.IDisposable.Dispose, addr 0x226bea4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get___2__current() const;

constexpr ::UnityW<::BGLib::UnityExtension::BezierCurves::CurveAnimation> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::BGLib::UnityExtension::BezierCurves::CurveAnimation>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__currentTime_5__2() const;

constexpr float_t& __cordl_internal_get__currentTime_5__2() ;

constexpr bool const& __cordl_internal_get_withDelay() const;

constexpr bool& __cordl_internal_get_withDelay() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::BGLib::UnityExtension::BezierCurves::CurveAnimation>  value) ;

constexpr void __cordl_internal_set__currentTime_5__2(float_t  value) ;

constexpr void __cordl_internal_set_withDelay(bool  value) ;

/// @brief Method .ctor, addr 0x226bd84, size 0x28, virtual false, abstract: false, final false
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
constexpr __CurveAnimation___Animate_d__17() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation___Animate_d__17", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__CurveAnimation___Animate_d__17(__CurveAnimation___Animate_d__17 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__CurveAnimation___Animate_d__17", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__CurveAnimation___Animate_d__17(__CurveAnimation___Animate_d__17 const& ) = delete;

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BGLib::UnityExtension::BezierCurves::CurveAnimation>  _____4__this;

/// @brief Field withDelay, offset: 0x28, size: 0x1, def value: None
 bool  ___withDelay;

/// @brief Field <currentTime>5__2, offset: 0x2c, size: 0x4, def value: None
 float_t  ____currentTime_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, 0x30>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, ___withDelay) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17, ____currentTime_5__2) == 0x2c, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
// Type: BGLib.UnityExtension.BezierCurves::CurveAnimation
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 97, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension::BezierCurves {
// Is value type: false
// CS Name: ::BGLib.UnityExtension.BezierCurves::CurveAnimation*
class CORDL_TYPE CurveAnimation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CurveEvent = ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent;

template<typename T>
using CurveEvent_1 = ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<T>;

using _Animate_d__17 = ::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17;

/// @brief Field _bezierCurve, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__bezierCurve, put=__cordl_internal_set__bezierCurve)) ::UnityW<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve>  _bezierCurve;

/// @brief Field _delay, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__delay, put=__cordl_internal_set__delay)) float_t  _delay;

/// @brief Field _duration, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__duration, put=__cordl_internal_set__duration)) float_t  _duration;

/// @brief Field <isPlaying>k__BackingField, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPlaying_k__BackingField, put=__cordl_internal_set__isPlaying_k__BackingField)) bool  _isPlaying_k__BackingField;

/// @brief Field _playOnAwake, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__playOnAwake, put=__cordl_internal_set__playOnAwake)) bool  _playOnAwake;

/// @brief Field _speedCurve, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__speedCurve, put=__cordl_internal_set__speedCurve)) ::UnityEngine::AnimationCurve*  _speedCurve;

/// @brief Field afterDelay, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_afterDelay, put=__cordl_internal_set_afterDelay)) ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  afterDelay;

 __declspec(property(get=get_isPlaying, put=set_isPlaying)) bool  isPlaying;

/// @brief Field onFinish, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_onFinish, put=__cordl_internal_set_onFinish)) ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  onFinish;

/// @brief Field onIterate, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_onIterate, put=__cordl_internal_set_onIterate)) ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<::UnityEngine::Vector3>*  onIterate;

/// @brief Field onStart, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_onStart, put=__cordl_internal_set_onStart)) ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  onStart;

/// @brief Method Animate, addr 0x226bd10, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* Animate(bool  withDelay) ;

/// @brief Method Animate, addr 0x226bdac, size 0xb4, virtual false, abstract: false, final false
inline void Animate(float_t  t) ;

/// @brief Method Awake, addr 0x226bcc8, size 0x14, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::BGLib::UnityExtension::BezierCurves::CurveAnimation* New_ctor() ;

/// @brief Method StartAnimation, addr 0x226bcdc, size 0x34, virtual false, abstract: false, final false
inline void StartAnimation(bool  withDelay) ;

constexpr ::UnityW<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve> const& __cordl_internal_get__bezierCurve() const;

constexpr ::UnityW<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve>& __cordl_internal_get__bezierCurve() ;

constexpr float_t const& __cordl_internal_get__delay() const;

constexpr float_t& __cordl_internal_get__delay() ;

constexpr float_t const& __cordl_internal_get__duration() const;

constexpr float_t& __cordl_internal_get__duration() ;

constexpr bool const& __cordl_internal_get__isPlaying_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPlaying_k__BackingField() ;

constexpr bool const& __cordl_internal_get__playOnAwake() const;

constexpr bool& __cordl_internal_get__playOnAwake() ;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get__speedCurve() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationCurve*> const& __cordl_internal_get__speedCurve() const;

constexpr ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*& __cordl_internal_get_afterDelay() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*> const& __cordl_internal_get_afterDelay() const;

constexpr ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*& __cordl_internal_get_onFinish() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*> const& __cordl_internal_get_onFinish() const;

constexpr ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<::UnityEngine::Vector3>*& __cordl_internal_get_onIterate() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<::UnityEngine::Vector3>*> const& __cordl_internal_get_onIterate() const;

constexpr ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*& __cordl_internal_get_onStart() ;

constexpr ::cordl_internals::to_const_pointer<::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*> const& __cordl_internal_get_onStart() const;

constexpr void __cordl_internal_set__bezierCurve(::UnityW<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve>  value) ;

constexpr void __cordl_internal_set__delay(float_t  value) ;

constexpr void __cordl_internal_set__duration(float_t  value) ;

constexpr void __cordl_internal_set__isPlaying_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__playOnAwake(bool  value) ;

constexpr void __cordl_internal_set__speedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_afterDelay(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  value) ;

constexpr void __cordl_internal_set_onFinish(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  value) ;

constexpr void __cordl_internal_set_onIterate(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<::UnityEngine::Vector3>*  value) ;

constexpr void __cordl_internal_set_onStart(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  value) ;

/// @brief Method .ctor, addr 0x226be60, size 0x3c, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_isPlaying, addr 0x226bcb4, size 0x8, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method set_isPlaying, addr 0x226bcbc, size 0xc, virtual false, abstract: false, final false
inline void set_isPlaying(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CurveAnimation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CurveAnimation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CurveAnimation(CurveAnimation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CurveAnimation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CurveAnimation(CurveAnimation const& ) = delete;

/// @brief Field _bezierCurve, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::BGLib::UnityExtension::BezierCurves::BaseBezierCurve>  ____bezierCurve;

/// @brief Field _duration, offset: 0x28, size: 0x4, def value: None
 float_t  ____duration;

/// @brief Field _delay, offset: 0x2c, size: 0x4, def value: None
 float_t  ____delay;

/// @brief Field _speedCurve, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ____speedCurve;

/// @brief Field _playOnAwake, offset: 0x38, size: 0x1, def value: None
 bool  ____playOnAwake;

/// @brief Field onStart, offset: 0x40, size: 0x8, def value: None
 ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  ___onStart;

/// @brief Field afterDelay, offset: 0x48, size: 0x8, def value: None
 ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  ___afterDelay;

/// @brief Field onIterate, offset: 0x50, size: 0x8, def value: None
 ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1<::UnityEngine::Vector3>*  ___onIterate;

/// @brief Field onFinish, offset: 0x58, size: 0x8, def value: None
 ::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*  ___onFinish;

/// @brief Field <isPlaying>k__BackingField, offset: 0x60, size: 0x1, def value: None
 bool  ____isPlaying_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::BezierCurves::CurveAnimation, 0x68>, "Size mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____bezierCurve) == 0x20, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____duration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____delay) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____speedCurve) == 0x30, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____playOnAwake) == 0x38, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ___onStart) == 0x40, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ___afterDelay) == 0x48, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ___onIterate) == 0x50, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ___onFinish) == 0x58, "Offset mismatch!");

static_assert(offsetof(::BGLib::UnityExtension::BezierCurves::CurveAnimation, ____isPlaying_k__BackingField) == 0x60, "Offset mismatch!");

} // namespace end def BGLib::UnityExtension::BezierCurves
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::CurveAnimation);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::CurveAnimation*, "BGLib.UnityExtension.BezierCurves", "CurveAnimation");
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent*, "BGLib.UnityExtension.BezierCurves", "CurveAnimation/CurveEvent");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::BGLib::UnityExtension::BezierCurves::__CurveAnimation__CurveEvent_1, "BGLib.UnityExtension.BezierCurves", "CurveAnimation/CurveEvent`1");
NEED_NO_BOX(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::BezierCurves::__CurveAnimation___Animate_d__17*, "BGLib.UnityExtension.BezierCurves", "CurveAnimation/<Animate>d__17");
