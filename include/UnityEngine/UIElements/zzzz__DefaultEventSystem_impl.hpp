#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DefaultEventSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_4_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__Focusable_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationMoveEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__PenData_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::__DefaultEventSystem__UpdateMode(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::__DefaultEventSystem__UpdateMode()   {
}
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode  UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::Always{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode  UnityEngine::UIElements::__DefaultEventSystem__UpdateMode::IgnoreIfAppNotFocused{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x497feac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4980ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::_ctor(::UnityEngine::UIElements::DefaultEventSystem*  es)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, es);
}
inline void UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "es", ty: "::UnityEngine::UIElements::DefaultEventSystem*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::__DefaultEventSystem__FocusBasedEventSequenceContext(::UnityEngine::UIElements::DefaultEventSystem*  es) noexcept  {
this->es = es;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext::__DefaultEventSystem__FocusBasedEventSequenceContext()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetAxisRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.ClearLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  3
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_touchCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_touchCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetTouch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetTouch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_mousePresent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePresent)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetMouseButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.GetMouseButtonUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_mousePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePosition)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_mouseButtonCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_anyKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_anyKey)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_unscaledTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_unscaledTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__IInput.get_doubleClickTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__IInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__IInput::get_doubleClickTime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::GetButtonDown(::StringW  button)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__IInput::GetAxisRaw(::StringW  axis)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline void UnityEngine::UIElements::__DefaultEventSystem__IInput::ClearLastPenContactEvent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::__DefaultEventSystem__IInput::GetLastPenContactEvent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    3
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__IInput::get_touchCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__IInput::GetTouch(int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePresent()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::GetMouseButtonDown(int32_t  button)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::GetMouseButtonUp(int32_t  button)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mousePosition()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__IInput::get_mouseButtonCount()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__IInput::get_anyKey()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__IInput::get_unscaledTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__IInput::get_doubleClickTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetButtonDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4980bc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetAxisRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetAxisRaw)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4980bcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetAxisRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.ClearLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "ClearLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4980be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_touchCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_touchCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetTouch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetTouch)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4980c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_mousePresent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mousePresent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetMouseButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4980c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetMouseButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.GetMouseButtonUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4980c6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetMouseButtonUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_mousePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_mouseButtonCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mouseButtonCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_anyKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_anyKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_unscaledTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_unscaledTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980c90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_unscaledTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input.get_doubleClickTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::get_doubleClickTime)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4980c98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_doubleClickTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__Input._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__Input::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__Input::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x497e1dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr  UnityEngine::UIElements::__DefaultEventSystem__Input::operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept {
return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::__DefaultEventSystem__Input::i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept {
return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::GetButtonDown(::StringW  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__Input::GetAxisRaw(::StringW  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetAxisRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline void UnityEngine::UIElements::__DefaultEventSystem__Input::ClearLastPenContactEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "ClearLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::__DefaultEventSystem__Input::GetLastPenContactEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__Input::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_touchCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__Input::GetTouch(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mousePresent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::GetMouseButtonDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetMouseButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::GetMouseButtonUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "GetMouseButtonUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__DefaultEventSystem__Input::get_mousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__Input::get_mouseButtonCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_mouseButtonCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__Input::get_anyKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_anyKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__Input::get_unscaledTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_unscaledTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__Input::get_doubleClickTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        "get_doubleClickTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__Input* UnityEngine::UIElements::__DefaultEventSystem__Input::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem__Input*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem__Input::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__Input*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__Input::__DefaultEventSystem__Input()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980cbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetAxisRaw
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(::StringW)>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetAxisRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetAxisRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_touchCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_touchCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_touchCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetTouch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Touch (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetTouch)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4980cd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.ClearLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4980ce8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "ClearLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetLastPenContactEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::PenData (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4980cec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_mousePresent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePresent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mousePresent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetMouseButtonDown
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetMouseButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.GetMouseButtonUp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)(int32_t)>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetMouseButtonUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_mousePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePosition)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4980d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_mouseButtonCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mouseButtonCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mouseButtonCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_anyKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_anyKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_unscaledTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_unscaledTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_unscaledTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput.get_doubleClickTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_doubleClickTime)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4980d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_doubleClickTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem__NoInput._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem__NoInput::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem__NoInput::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x497e1e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr  UnityEngine::UIElements::__DefaultEventSystem__NoInput::operator ::UnityEngine::UIElements::__DefaultEventSystem__IInput*() noexcept {
return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::__DefaultEventSystem__IInput"
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::__DefaultEventSystem__NoInput::i___UnityEngine__UIElements____DefaultEventSystem__IInput() noexcept {
return static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput*>(static_cast<void*>(this));
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetButtonDown(::StringW  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetAxisRaw(::StringW  axis)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetAxisRaw",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, axis);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_touchCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_touchCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Touch UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetTouch(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetTouch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch, false>(this, ___internal_method, index);
}
inline void UnityEngine::UIElements::__DefaultEventSystem__NoInput::ClearLastPenContactEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "ClearLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::PenData UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetLastPenContactEvent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetLastPenContactEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePresent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mousePresent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetMouseButtonDown(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetMouseButtonDown",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::GetMouseButtonUp(int32_t  button)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "GetMouseButtonUp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mousePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mousePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_mouseButtonCount()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_mouseButtonCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_anyKey()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_anyKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_unscaledTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_unscaledTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::__DefaultEventSystem__NoInput::get_doubleClickTime()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        "get_doubleClickTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__NoInput* UnityEngine::UIElements::__DefaultEventSystem__NoInput::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem__NoInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem__NoInput*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__NoInput::__DefaultEventSystem__NoInput()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::__DefaultEventSystem____c::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4980da4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__30_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x4980dac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__30_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4980e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendIMGUIEvents_b__30_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Event*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_2)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4980eac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessMouseEvents_b__36_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4980f54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessMouseEvents_b__36_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4980ff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessMouseEvents_b__36_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_2)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4981004;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__37_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_0)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4981018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__37_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_1)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x49810ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._SendInputEvents_b__37_2
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::UIElements::DefaultEventSystem*)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_2)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x4981194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessTouchEvents_b__45_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Touch)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTouchEvents_b__45_0)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x498127c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessTouchEvents>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessPenEvents_b__46_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::PenData)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessPenEvents_b__46_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4981348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessPenEvents>b__46_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PenData>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c._ProcessTabEvent_b__53_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (::UnityEngine::UIElements::__DefaultEventSystem____c::*)(::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>)>(&::UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTabEvent_b__53_0)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x49813f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessTabEvent>b__53_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::__DefaultEventSystem____c.__cctor_b__58_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::__DefaultEventSystem____c::*)()>(&::UnityEngine::UIElements::__DefaultEventSystem____c::__cctor_b__58_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x49814e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<.cctor>b__58_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9(::UnityEngine::UIElements::__DefaultEventSystem____c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::UIElements::__DefaultEventSystem____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::UnityEngine::UIElements::__DefaultEventSystem____c*>(value));
}
inline ::UnityEngine::UIElements::__DefaultEventSystem____c* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::UIElements::__DefaultEventSystem____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__30_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__30_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__30_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__30_1(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>,::UnityEngine::UIElements::EventBase*>*, "<>9__30_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__30_1()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>,::UnityEngine::UIElements::EventBase*>*, "<>9__30_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__30_2(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Event*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Event*,::UnityEngine::UIElements::EventBase*>*, "<>9__30_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Event*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Event*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__30_2()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Event*,::UnityEngine::UIElements::EventBase*>*, "<>9__30_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__36_0(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__36_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__36_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__36_1(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*, "<>9__36_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__36_1()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*, "<>9__36_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__36_2(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*, "<>9__36_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__36_2()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>,::UnityEngine::UIElements::EventBase*>*, "<>9__36_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__37_0(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__37_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__37_1(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__37_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__37_2(::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__37_2()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::UIElements::DefaultEventSystem*,::UnityEngine::UIElements::EventBase*>*, "<>9__37_2", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__45_0(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase*>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__45_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::Touch,::UnityEngine::UIElements::EventBase*>*, "<>9__45_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__46_0(::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::PenData,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::PenData,::UnityEngine::UIElements::EventBase*>*, "<>9__46_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::PenData,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::PenData,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__46_0()  {
return ::cordl_internals::getStaticField<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,::UnityEngine::PenData,::UnityEngine::UIElements::EventBase*>*, "<>9__46_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::setStaticF___9__53_0(::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,::UnityEngine::UIElements::EventBase*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,::UnityEngine::UIElements::EventBase*>*, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>(std::forward<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,::UnityEngine::UIElements::EventBase*>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,::UnityEngine::UIElements::EventBase*>* UnityEngine::UIElements::__DefaultEventSystem____c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>,::UnityEngine::UIElements::EventBase*>*, "<>9__53_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get>();
}
inline ::UnityEngine::UIElements::__DefaultEventSystem____c* UnityEngine::UIElements::__DefaultEventSystem____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::__DefaultEventSystem____c*>());
}
inline void UnityEngine::UIElements::__DefaultEventSystem____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_0(::UnityEngine::UIElements::DefaultEventSystem*  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_1(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  _, ::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityEngine::EventModifiers,::UnityEngine::Vector2>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, _, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendIMGUIEvents_b__30_2(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::UnityEngine::Event*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendIMGUIEvents>b__30_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, evt);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_0(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::UnityEngine::UIElements::DefaultEventSystem*  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_1(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessMouseEvents_b__36_2(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessMouseEvents>b__36_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<int32_t,int32_t,::UnityEngine::EventModifiers>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, t);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_0(::UnityEngine::UIElements::DefaultEventSystem*  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_1(::UnityEngine::UIElements::DefaultEventSystem*  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_SendInputEvents_b__37_2(::UnityEngine::UIElements::DefaultEventSystem*  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<SendInputEvents>b__37_2",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DefaultEventSystem*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, self);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTouchEvents_b__45_0(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::UnityEngine::Touch  _touch)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessTouchEvents>b__45_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, _touch);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessPenEvents_b__46_0(::UnityEngine::Vector3  panelPosition, ::UnityEngine::Vector3  panelDelta, ::UnityEngine::PenData  _pen)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessPenEvents>b__46_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PenData>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, panelPosition, panelDelta, _pen);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::__DefaultEventSystem____c::_ProcessTabEvent_b__53_0(::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<ProcessTabEvent>b__53_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_3<::UnityEngine::UIElements::__NavigationMoveEvent__Direction,::UnityEngine::EventModifiers,::UnityEngine::UIElements::__DefaultEventSystem__IInput*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(this, ___internal_method, t);
}
inline bool UnityEngine::UIElements::__DefaultEventSystem____c::__cctor_b__58_0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::__DefaultEventSystem____c*>::get(),
                        "<.cctor>b__58_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__DefaultEventSystem____c::__DefaultEventSystem____c()   {
}
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_isAppFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x497dfd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_isAppFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_input
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_input)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x497e024;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_input",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetDefaultInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DefaultEventSystem__IInput* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x497e048;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "GetDefaultInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldIgnoreEventsOnAppNotFocused
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x497e1ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ShouldIgnoreEventsOnAppNotFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.get_focusedPanel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::BaseRuntimePanel* (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x497e20c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_focusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.set_focusedPanel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(&::UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x497e214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "set_focusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode)>(&::UnityEngine::UIElements::DefaultEventSystem::Update)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x497e264;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.FocusBasedEventSequence
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::FocusBasedEventSequence)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x497f3d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "FocusBasedEventSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendIMGUIEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents)> {
  constexpr static std::size_t size = 0x758;
  constexpr static std::size_t addrs = 0x497f3f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "SendIMGUIEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessMouseEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ProcessMouseEvents)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x497ea84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessMouseEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.SendInputEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::SendInputEvents)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x497fb48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "SendInputEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.OnFocusEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::RuntimePanel*, ::UnityEngine::UIElements::FocusEvent*)>(&::UnityEngine::UIElements::DefaultEventSystem::OnFocusEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4980450;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "OnFocusEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::RuntimePanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.UpdateFocusedPanel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(&::UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x4980454;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "UpdateFocusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.MakeTouchEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Touch, ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x49804cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "MakeTouchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.MakePenEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::PenData, ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::DefaultEventSystem::MakePenEvent)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x498064c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "MakePenEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PenData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessTouchEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x497e638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessTouchEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessPenEvents
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ProcessPenEvents)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x497e36c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessPenEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.GetRawMoveVector
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x4980704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "GetRawMoveVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ShouldSendMoveFromInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x498007c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ShouldSendMoveFromInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem.ProcessTabEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)(::UnityEngine::Event*, ::UnityEngine::EventModifiers)>(&::UnityEngine::UIElements::DefaultEventSystem::ProcessTabEvent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x497fef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessTabEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::DefaultEventSystem._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::DefaultEventSystem::*)()>(&::UnityEngine::UIElements::DefaultEventSystem::_ctor)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x49809b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::__DefaultEventSystem__IInput*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Input;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::__DefaultEventSystem__IInput*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Input;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_Input(::UnityEngine::UIElements::__DefaultEventSystem__IInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Input)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_HorizontalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_HorizontalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HorizontalAxis;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_HorizontalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_HorizontalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_VerticalAxis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_VerticalAxis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_VerticalAxis;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_VerticalAxis(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_VerticalAxis)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SubmitButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SubmitButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SubmitButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_SubmitButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SubmitButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CancelButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr ::StringW const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CancelButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CancelButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_CancelButton(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CancelButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputActionsPerSecond()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionsPerSecond;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_InputActionsPerSecond() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputActionsPerSecond;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_InputActionsPerSecond(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputActionsPerSecond = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_RepeatDelay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_RepeatDelay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RepeatDelay;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_RepeatDelay(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RepeatDelay = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingTouchEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SendingTouchEvents;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingTouchEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SendingTouchEvents;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_SendingTouchEvents(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SendingTouchEvents = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingPenEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SendingPenEvent;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_SendingPenEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SendingPenEvent;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_SendingPenEvent(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SendingPenEvent = value;
}
constexpr ::UnityEngine::Event*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Event()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Event;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Event*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_Event() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Event;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_Event(::UnityEngine::Event*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusedPanel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_FocusedPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FocusedPanel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_FocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_FocusedPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::BaseRuntimePanel*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedPanel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFocusedPanel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::BaseRuntimePanel*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedPanel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFocusedPanel;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PreviousFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousFocusedPanel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::Focusable*& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFocusedElement;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Focusable*> const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PreviousFocusedElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PreviousFocusedElement;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PreviousFocusedElement(::UnityEngine::UIElements::Focusable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PreviousFocusedElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventModifiers& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CurrentModifiers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentModifiers;
}
constexpr ::UnityEngine::EventModifiers const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_CurrentModifiers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CurrentModifiers;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_CurrentModifiers(::UnityEngine::EventModifiers  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CurrentModifiers = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMousePressButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMousePressButton;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMousePressButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMousePressButton;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LastMousePressButton(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastMousePressButton = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_NextMousePressTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextMousePressTime;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_NextMousePressTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_NextMousePressTime;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_NextMousePressTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_NextMousePressTime = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMouseClickCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMouseClickCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMouseClickCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMouseClickCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LastMouseClickCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastMouseClickCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMousePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMousePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMousePosition;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LastMousePosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastMousePosition = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_MouseProcessedAtLeastOnce()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseProcessedAtLeastOnce;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_MouseProcessedAtLeastOnce() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MouseProcessedAtLeastOnce;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_MouseProcessedAtLeastOnce(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MouseProcessedAtLeastOnce = value;
}
constexpr int32_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ConsecutiveMoveCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsecutiveMoveCount;
}
constexpr int32_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_ConsecutiveMoveCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ConsecutiveMoveCount;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_ConsecutiveMoveCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ConsecutiveMoveCount = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMoveVector()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMoveVector;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_LastMoveVector() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastMoveVector;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_LastMoveVector(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastMoveVector = value;
}
constexpr float_t& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PrevActionTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActionTime;
}
constexpr float_t const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_PrevActionTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PrevActionTime;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_PrevActionTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PrevActionTime = value;
}
constexpr bool& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsMoveFromKeyboard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMoveFromKeyboard;
}
constexpr bool const& UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_get_m_IsMoveFromKeyboard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsMoveFromKeyboard;
}
constexpr void UnityEngine::UIElements::DefaultEventSystem::__cordl_internal_set_m_IsMoveFromKeyboard(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsMoveFromKeyboard = value;
}
inline void UnityEngine::UIElements::DefaultEventSystem::setStaticF_IsEditorRemoteConnected(::System::Func_1<bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::UIElements::DefaultEventSystem::getStaticF_IsEditorRemoteConnected()  {
return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "IsEditorRemoteConnected", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get>();
}
inline bool UnityEngine::UIElements::DefaultEventSystem::get_isAppFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_isAppFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::DefaultEventSystem::get_input()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_input",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DefaultEventSystem__IInput*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__IInput* UnityEngine::UIElements::DefaultEventSystem::GetDefaultInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "GetDefaultInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DefaultEventSystem__IInput*, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ShouldIgnoreEventsOnAppNotFocused()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ShouldIgnoreEventsOnAppNotFocused",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::DefaultEventSystem::get_focusedPanel()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "get_focusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseRuntimePanel*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::set_focusedPanel(::UnityEngine::UIElements::BaseRuntimePanel*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "set_focusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
/// @param updateMode: ::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode (default: static_cast<int32_t>(0x0))
inline void UnityEngine::UIElements::DefaultEventSystem::Update(::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode  updateMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::__DefaultEventSystem__UpdateMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, updateMode);
}
inline ::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext UnityEngine::UIElements::DefaultEventSystem::FocusBasedEventSequence()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "FocusBasedEventSequence",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::__DefaultEventSystem__FocusBasedEventSequenceContext, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::SendIMGUIEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "SendIMGUIEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::ProcessMouseEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessMouseEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::SendInputEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "SendInputEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::OnFocusEvent(::UnityEngine::UIElements::RuntimePanel*  panel, ::UnityEngine::UIElements::FocusEvent*  evt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "OnFocusEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::RuntimePanel*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::FocusEvent*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, panel, evt);
}
template<typename TArg>
inline void UnityEngine::UIElements::DefaultEventSystem::SendFocusBasedEvent(::System::Func_2<TArg,::UnityEngine::UIElements::EventBase*>*  evtFactory, TArg  arg)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                    "SendFocusBasedEvent",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()},
                    ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_2<TArg,::UnityEngine::UIElements::EventBase*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evtFactory, arg);
}
/// @param deselectIfNoTarget: bool (default: false)
template<typename TArg>
inline void UnityEngine::UIElements::DefaultEventSystem::SendPositionBasedEvent(::UnityEngine::Vector3  mousePosition, ::UnityEngine::Vector3  delta, int32_t  pointerId, ::System::Nullable_1<int32_t>  targetDisplay, ::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,TArg,::UnityEngine::UIElements::EventBase*>*  evtFactory, TArg  arg, bool  deselectIfNoTarget)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                    "SendPositionBasedEvent",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()},
                    ::std::array<const Il2CppType*, 7>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_4<::UnityEngine::Vector3,::UnityEngine::Vector3,TArg,::UnityEngine::UIElements::EventBase*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TArg>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArg>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mousePosition, delta, pointerId, targetDisplay, evtFactory, arg, deselectIfNoTarget);
}
inline void UnityEngine::UIElements::DefaultEventSystem::UpdateFocusedPanel(::UnityEngine::UIElements::BaseRuntimePanel*  runtimePanel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "UpdateFocusedPanel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseRuntimePanel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, runtimePanel);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem::MakeTouchEvent(::UnityEngine::Touch  touch, ::UnityEngine::EventModifiers  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "MakeTouchEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(nullptr, ___internal_method, touch, modifiers);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::DefaultEventSystem::MakePenEvent(::UnityEngine::PenData  pen, ::UnityEngine::EventModifiers  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "MakePenEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PenData>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*, false>(nullptr, ___internal_method, pen, modifiers);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ProcessTouchEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessTouchEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ProcessPenEvents()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessPenEvents",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::DefaultEventSystem::GetRawMoveVector()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "GetRawMoveVector",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::DefaultEventSystem::ShouldSendMoveFromInput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ShouldSendMoveFromInput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::DefaultEventSystem::ProcessTabEvent(::UnityEngine::Event*  e, ::UnityEngine::EventModifiers  modifiers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        "ProcessTabEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventModifiers>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, modifiers);
}
inline ::UnityEngine::UIElements::DefaultEventSystem* UnityEngine::UIElements::DefaultEventSystem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::DefaultEventSystem*>());
}
inline void UnityEngine::UIElements::DefaultEventSystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::DefaultEventSystem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::DefaultEventSystem::DefaultEventSystem()   {
}
