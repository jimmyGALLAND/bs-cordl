#pragma once
// IWYU pragma private; include "HMUI/KeyboardBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "HMUI/zzzz__KeyboardBinder_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Tuple_3_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "UnityEngine/Events/zzzz__UnityAction_1_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__KeyboardBinder__KeyBindingType::__KeyboardBinder__KeyBindingType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__KeyboardBinder__KeyBindingType::__KeyboardBinder__KeyBindingType()   {
}
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyDown{static_cast<int32_t>(0x0)};
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyUp{static_cast<int32_t>(0x1)};
constexpr ::HMUI::__KeyboardBinder__KeyBindingType  HMUI::__KeyboardBinder__KeyBindingType::KeyPress{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::HMUI::KeyboardBinder.get_enabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::get_enabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39676c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "get_enabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.set_enabled
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(bool)>(&::HMUI::KeyboardBinder::set_enabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39676d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "set_enabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x39676dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3967788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x396798c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.Init
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::Init)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x396777c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*)>(&::HMUI::KeyboardBinder::AddBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3967a38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "AddBindings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.AddBinding
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)(::UnityEngine::KeyCode, ::HMUI::__KeyboardBinder__KeyBindingType, ::System::Action_1<bool>*)>(&::HMUI::KeyboardBinder::AddBinding)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x396784c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "AddBinding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ClearBindings
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ClearBindings)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3967bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "ClearBindings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::KeyboardBinder.ManualUpdate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::KeyboardBinder::*)()>(&::HMUI::KeyboardBinder::ManualUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3967c1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "ManualUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr bool& HMUI::KeyboardBinder::__cordl_internal_get__enabled_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled_k__BackingField;
}
constexpr bool const& HMUI::KeyboardBinder::__cordl_internal_get__enabled_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enabled_k__BackingField;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__enabled_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enabled_k__BackingField = value;
}
constexpr bool& HMUI::KeyboardBinder::__cordl_internal_get__shouldClearBindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldClearBindings;
}
constexpr bool const& HMUI::KeyboardBinder::__cordl_internal_get__shouldClearBindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____shouldClearBindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__shouldClearBindings(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____shouldClearBindings = value;
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*& HMUI::KeyboardBinder::__cordl_internal_get__newBindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newBindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*> const& HMUI::KeyboardBinder::__cordl_internal_get__newBindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____newBindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__newBindings(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____newBindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*& HMUI::KeyboardBinder::__cordl_internal_get__bindings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindings;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*> const& HMUI::KeyboardBinder::__cordl_internal_get__bindings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bindings;
}
constexpr void HMUI::KeyboardBinder::__cordl_internal_set__bindings(::System::Collections::Generic::List_1<::System::ValueTuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::UnityEngine::Events::UnityAction_1<bool>*>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bindings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HMUI::KeyboardBinder::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "get_enabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "set_enabled",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::KeyboardBinder*>());
}
inline void HMUI::KeyboardBinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor(::UnityEngine::KeyCode  keycode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::KeyboardBinder*>(keycode, keyBindingType, action));
}
inline void HMUI::KeyboardBinder::_ctor(::UnityEngine::KeyCode  keycode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keycode, keyBindingType, action);
}
inline ::HMUI::KeyboardBinder* HMUI::KeyboardBinder::New_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::KeyboardBinder*>(bindingData));
}
inline void HMUI::KeyboardBinder::_ctor(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::Init()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "Init",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::AddBindings(::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*  bindingData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "AddBindings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Tuple_3<::UnityEngine::KeyCode,::HMUI::__KeyboardBinder__KeyBindingType,::System::Action_1<bool>*>*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindingData);
}
inline void HMUI::KeyboardBinder::AddBinding(::UnityEngine::KeyCode  keyCode, ::HMUI::__KeyboardBinder__KeyBindingType  keyBindingType, ::System::Action_1<bool>*  action)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "AddBinding",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__KeyboardBinder__KeyBindingType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyCode, keyBindingType, action);
}
inline void HMUI::KeyboardBinder::ClearBindings()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "ClearBindings",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::KeyboardBinder::ManualUpdate()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::KeyboardBinder*>::get(),
                        "ManualUpdate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::KeyboardBinder::KeyboardBinder()   {
}
