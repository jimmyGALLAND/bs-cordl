#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputControlPath.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__Substring_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlPath_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions::__InputControlPath__HumanReadableStringOptions(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions::__InputControlPath__HumanReadableStringOptions()   {
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions::OmitDevice{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions::UseShortNames{static_cast<int32_t>(0x4)};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType::__InputControlPath__PathComponentType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType::__InputControlPath__PathComponentType()   {
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType  UnityEngine::InputSystem::__InputControlPath__PathComponentType::Name{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType  UnityEngine::InputSystem::__InputControlPath__PathComponentType::DisplayName{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType  UnityEngine::InputSystem::__InputControlPath__PathComponentType::Usage{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathComponentType  UnityEngine::InputSystem::__InputControlPath__PathComponentType::Layout{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__InputControlPath__ParsedPathComponent____c::*)()>(&::GlobalNamespace::__InputControlPath__ParsedPathComponent____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44f0b9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c._get_usages_b__7_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__InputControlPath__ParsedPathComponent____c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::GlobalNamespace::__InputControlPath__ParsedPathComponent____c::_get_usages_b__7_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x44f0ba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get(),
                        "<get_usages>b__7_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__InputControlPath__ParsedPathComponent____c::setStaticF___9(::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*  value)  {
::cordl_internals::setStaticField<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get>(std::forward<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>(value));
}
inline ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* GlobalNamespace::__InputControlPath__ParsedPathComponent____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get>();
}
inline void GlobalNamespace::__InputControlPath__ParsedPathComponent____c::setStaticF___9__7_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* GlobalNamespace::__InputControlPath__ParsedPathComponent____c::getStaticF___9__7_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__7_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get>();
}
inline ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c* GlobalNamespace::__InputControlPath__ParsedPathComponent____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>());
}
inline void GlobalNamespace::__InputControlPath__ParsedPathComponent____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::__InputControlPath__ParsedPathComponent____c::_get_usages_b__7_0(::UnityEngine::InputSystem::Utilities::Substring  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__InputControlPath__ParsedPathComponent____c*>::get(),
                        "<get_usages>b__7_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputControlPath__ParsedPathComponent____c::__InputControlPath__ParsedPathComponent____c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_layout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_layout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44f07c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_layout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_usages
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_usages)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x44f07d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_usages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_name
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_name)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44f0900;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_displayName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_displayName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x44f090c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_isWildcard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_isWildcard)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44ef044;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_isWildcard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.get_isDoubleWildcard
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)()>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_isDoubleWildcard)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44f0918;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_isDoubleWildcard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)(::StringW, ::StringW, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions)>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x44ee5d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44f097c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.Matches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::*)(::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::Matches)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x44f0128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "Matches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent.ComparePathElementToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::Substring, ::StringW)>(&::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ComparePathElementToString)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x44f09e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ComparePathElementToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_layout()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_layout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_usages()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_usages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_name()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_name",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_displayName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_displayName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_isWildcard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_isWildcard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::get_isDoubleWildcard()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "get_isDoubleWildcard",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ToHumanReadableString(::StringW  parentLayoutName, ::StringW  parentControlPath, ByRef<::StringW>  referencedLayoutName, ByRef<::StringW>  controlPath, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, parentLayoutName, parentControlPath, referencedLayoutName, controlPath, options);
}
inline ::StringW UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ToHumanReadableString(::UnityEngine::InputSystem::Utilities::Substring  substring)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, substring);
}
inline bool UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::Matches(::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "Matches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, control);
}
inline bool UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::ComparePathElementToString(::UnityEngine::InputSystem::Utilities::Substring  pathElement, ::StringW  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>::get(),
                        "ComparePathElementToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pathElement, element);
}
// Ctor Parameters [CppParam { name: "m_Layout", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Usages", ty: "::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Name", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_DisplayName", ty: "::UnityEngine::InputSystem::Utilities::Substring", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::__InputControlPath__ParsedPathComponent(::UnityEngine::InputSystem::Utilities::Substring  m_Layout, ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityEngine::InputSystem::Utilities::Substring>  m_Usages, ::UnityEngine::InputSystem::Utilities::Substring  m_Name, ::UnityEngine::InputSystem::Utilities::Substring  m_DisplayName) noexcept  {
this->m_Layout = m_Layout;
this->m_Usages = m_Usages;
this->m_Name = m_Name;
this->m_DisplayName = m_DisplayName;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent::__InputControlPath__ParsedPathComponent()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__PathParser.get_isAtEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath__PathParser::*)()>(&::UnityEngine::InputSystem::__InputControlPath__PathParser::get_isAtEnd)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x44ef76c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "get_isAtEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__PathParser._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlPath__PathParser::*)(::StringW)>(&::UnityEngine::InputSystem::__InputControlPath__PathParser::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x44ee328;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__PathParser.MoveToNextComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath__PathParser::*)()>(&::UnityEngine::InputSystem::__InputControlPath__PathParser::MoveToNextComponent)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x44ee364;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "MoveToNextComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath__PathParser.ParseComponentPart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::Substring (::UnityEngine::InputSystem::__InputControlPath__PathParser::*)(char16_t)>(&::UnityEngine::InputSystem::__InputControlPath__PathParser::ParseComponentPart)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x44f0bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "ParseComponentPart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputSystem::__InputControlPath__PathParser::get_isAtEnd()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "get_isAtEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlPath__PathParser::_ctor(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline bool UnityEngine::InputSystem::__InputControlPath__PathParser::MoveToNextComponent()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "MoveToNextComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::Substring UnityEngine::InputSystem::__InputControlPath__PathParser::ParseComponentPart(char16_t  terminator)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath__PathParser>::get(),
                        "ParseComponentPart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::Substring, false>(this, ___internal_method, terminator);
}
// Ctor Parameters [CppParam { name: "path", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "length", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "leftIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rightIndexInPath", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "current", ty: "::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser::__InputControlPath__PathParser(::StringW  path, int32_t  length, int32_t  leftIndexInPath, int32_t  rightIndexInPath, ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent  current) noexcept  {
this->path = path;
this->length = length;
this->leftIndexInPath = leftIndexInPath;
this->rightIndexInPath = rightIndexInPath;
this->current = current;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser::__InputControlPath__PathParser()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlPath____c::*)()>(&::UnityEngine::InputSystem::__InputControlPath____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x44f0d2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath____c._TryGetDeviceUsages_b__9_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::__InputControlPath____c::*)(::UnityEngine::InputSystem::Utilities::Substring)>(&::UnityEngine::InputSystem::__InputControlPath____c::_TryGetDeviceUsages_b__9_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x44f0d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get(),
                        "<TryGetDeviceUsages>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputControlPath____c::setStaticF___9(::UnityEngine::InputSystem::__InputControlPath____c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputControlPath____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get>(std::forward<::UnityEngine::InputSystem::__InputControlPath____c*>(value));
}
inline ::UnityEngine::InputSystem::__InputControlPath____c* UnityEngine::InputSystem::__InputControlPath____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputControlPath____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get>();
}
inline void UnityEngine::InputSystem::__InputControlPath____c::setStaticF___9__9_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get>(std::forward<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>* UnityEngine::InputSystem::__InputControlPath____c::getStaticF___9__9_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::Utilities::Substring,::StringW>*, "<>9__9_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get>();
}
inline ::UnityEngine::InputSystem::__InputControlPath____c* UnityEngine::InputSystem::__InputControlPath____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputControlPath____c*>());
}
inline void UnityEngine::InputSystem::__InputControlPath____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::__InputControlPath____c::_TryGetDeviceUsages_b__9_0(::UnityEngine::InputSystem::Utilities::Substring  x)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath____c*>::get(),
                        "<TryGetDeviceUsages>b__9_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath____c::__InputControlPath____c()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)(int32_t)>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x44f0794;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x44f0d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::MoveNext)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x44f0d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x44f0e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x44f0e9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x44f0ed4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x44f0f38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34.System_Collections_IEnumerable_GetEnumerator
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::*)()>(&::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x44f0fd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
constexpr  UnityEngine::InputSystem::__InputControlPath___Parse_d__34::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::i___System__Collections__Generic__IEnumerable_1___UnityEngine__InputSystem____InputControlPath__ParsedPathComponent_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr  UnityEngine::InputSystem::__InputControlPath___Parse_d__34::operator ::System::Collections::IEnumerable*() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::i___System__Collections__IEnumerable() noexcept {
return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
constexpr  UnityEngine::InputSystem::__InputControlPath___Parse_d__34::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::i___System__Collections__Generic__IEnumerator_1___UnityEngine__InputSystem____InputControlPath__ParsedPathComponent_() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  UnityEngine::InputSystem::__InputControlPath___Parse_d__34::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::InputSystem::__InputControlPath___Parse_d__34::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set___2__current(::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr int32_t& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___l__initialThreadId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___l__initialThreadId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____l__initialThreadId;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set___l__initialThreadId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____l__initialThreadId = value;
}
constexpr ::StringW& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___3__path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__path;
}
constexpr ::StringW const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get___3__path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____3__path;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set___3__path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____3__path)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get__parser_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parser_5__2;
}
constexpr ::UnityEngine::InputSystem::__InputControlPath__PathParser const& UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_get__parser_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parser_5__2;
}
constexpr void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__cordl_internal_set__parser_5__2(::UnityEngine::InputSystem::__InputControlPath__PathParser  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____parser_5__2 = value;
}
inline ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>(__1__state));
}
inline void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::__InputControlPath___Parse_d__34::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_InputControlPath_ParsedPathComponent__GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.InputControlPath.ParsedPathComponent>.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::InputSystem::__InputControlPath___Parse_d__34::System_Collections_IEnumerable_GetEnumerator()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputControlPath___Parse_d__34*>::get(),
                        "System.Collections.IEnumerable.GetEnumerator",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputControlPath___Parse_d__34::__InputControlPath___Parse_d__34()   {
}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.CleanSlashes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::CleanSlashes)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x44edda4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "CleanSlashes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Combine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::InputControl*, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Combine)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x44e90dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Combine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x44eddc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ToHumanReadableString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW, ByRef<::StringW>, ByRef<::StringW>, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::ToHumanReadableString)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x44eddec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceUsages
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x44eed74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetDeviceUsages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetDeviceLayout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x44eef0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetDeviceLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryGetControlLayout
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::TryGetControlLayout)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x44ef0a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetControlLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>, ::StringW)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x44ef2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "FindControlLayoutRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.FindControlLayoutRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>, ::UnityEngine::InputSystem::Layouts::InputControlLayout*)>(&::UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x44ef430;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "FindControlLayoutRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.ControlLayoutMatchesPathComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>)>(&::UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x44ef5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ControlLayoutMatchesPathComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.StringMatches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::Utilities::Substring, ::UnityEngine::InputSystem::Utilities::InternedString)>(&::UnityEngine::InputSystem::InputControlPath::StringMatches)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x44ef780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "StringMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControl)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x44e261c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*> (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x44ef9e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindControls
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindControls)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x44efb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.TryFindChild
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::UnityEngine::InputSystem::InputControl*, ::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::TryFindChild)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x44e94e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindChild",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Matches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::Matches)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x44ee248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Matches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchControlComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>, bool)>(&::UnityEngine::InputSystem::InputControlPath::MatchControlComponent)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x44efc1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchControlComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesPrefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::UnityEngine::InputSystem::InputControl*)>(&::UnityEngine::InputSystem::InputControlPath::MatchesPrefix)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x44f002c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchesPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchesRecursive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>, ::UnityEngine::InputSystem::InputControl*, bool)>(&::UnityEngine::InputSystem::InputControlPath::MatchesRecursive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x44efbb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchesRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.MatchPathComponent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ByRef<int32_t>, ::UnityEngine::InputSystem::__InputControlPath__PathComponentType, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::MatchPathComponent)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x44f03d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchPathComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__PathComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.PathComponentCanYieldMultipleMatches
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, int32_t)>(&::UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x44f0668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "PathComponentCanYieldMultipleMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputControlPath.Parse
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* (*)(::StringW)>(&::UnityEngine::InputSystem::InputControlPath::Parse)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x44f0724;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::StringW UnityEngine::InputSystem::InputControlPath::CleanSlashes(::StringW  pathComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "CleanSlashes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, pathComponent);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::Combine(::UnityEngine::InputSystem::InputControl*  parent, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Combine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parent, path);
}
/// @param options: ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions (default: static_cast<int32_t>(0x0))
/// @param control: ::UnityEngine::InputSystem::InputControl* (default: nullptr)
inline ::StringW UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW  path, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, options, control);
}
/// @param options: ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions (default: static_cast<int32_t>(0x0))
/// @param control: ::UnityEngine::InputSystem::InputControl* (default: nullptr)
inline ::StringW UnityEngine::InputSystem::InputControlPath::ToHumanReadableString(::StringW  path, ByRef<::StringW>  deviceLayoutName, ByRef<::StringW>  controlPath, ::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions  options, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ToHumanReadableString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__HumanReadableStringOptions>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path, deviceLayoutName, controlPath, options, control);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> UnityEngine::InputSystem::InputControlPath::TryGetDeviceUsages(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetDeviceUsages",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::TryGetDeviceLayout(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetDeviceLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::TryGetControlLayout(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryGetControlLayout",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>  parser, ::StringW  layoutName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "FindControlLayoutRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parser, layoutName);
}
inline ::StringW UnityEngine::InputSystem::InputControlPath::FindControlLayoutRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>  parser, ::UnityEngine::InputSystem::Layouts::InputControlLayout*  layout)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "FindControlLayoutRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputControlLayout*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, parser, layout);
}
inline bool UnityEngine::InputSystem::InputControlPath::ControlLayoutMatchesPathComponent(ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  controlItem, ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>  parser)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "ControlLayoutMatchesPathComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controlItem, parser);
}
inline bool UnityEngine::InputSystem::InputControlPath::StringMatches(::UnityEngine::InputSystem::Utilities::Substring  str, ::UnityEngine::InputSystem::Utilities::InternedString  matchTo)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "StringMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::Substring>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, matchTo);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
inline ::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*> UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::InputControl*,::Array<::UnityEngine::InputSystem::InputControl*>*>, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
inline int32_t UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>  matches, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindControls",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, control, path, matches, indexInPath);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
template<typename TControl>
inline TControl UnityEngine::InputSystem::InputControlPath::TryFindControl(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "TryFindControl",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
template<typename TControl>
inline int32_t UnityEngine::InputSystem::InputControlPath::TryFindControls(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "TryFindControls",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, control, path, indexInPath, matches);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "TryFindChild",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(nullptr, ___internal_method, control, path, indexInPath);
}
/// @param indexInPath: int32_t (default: static_cast<int32_t>(0x0))
template<typename TControl>
inline TControl UnityEngine::InputSystem::InputControlPath::TryFindChild(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "TryFindChild",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath);
}
inline bool UnityEngine::InputSystem::InputControlPath::Matches(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Matches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, control);
}
/// @param matchAlias: bool (default: false)
inline bool UnityEngine::InputSystem::InputControlPath::MatchControlComponent(ByRef<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>  expectedControlComponent, ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>  controlItem, bool  matchAlias)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchControlComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::Layouts::__InputControlLayout__ControlItem>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expectedControlComponent, controlItem, matchAlias);
}
inline bool UnityEngine::InputSystem::InputControlPath::MatchesPrefix(::StringW  expected, ::UnityEngine::InputSystem::InputControl*  control)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchesPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, expected, control);
}
/// @param prefixOnly: bool (default: false)
inline bool UnityEngine::InputSystem::InputControlPath::MatchesRecursive(ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>  parser, ::UnityEngine::InputSystem::InputControl*  currentControl, bool  prefixOnly)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchesRecursive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::__InputControlPath__PathParser>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, parser, currentControl, prefixOnly);
}
template<typename TControl>
inline TControl UnityEngine::InputSystem::InputControlPath::MatchControlsRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "MatchControlsRecursive",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
inline TControl UnityEngine::InputSystem::InputControlPath::MatchByUsageAtDeviceRootRecursive(::UnityEngine::InputSystem::InputDevice*  device, ::StringW  path, int32_t  indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "MatchByUsageAtDeviceRootRecursive",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, device, path, indexInPath, matches, matchMultiple);
}
template<typename TControl>
inline TControl UnityEngine::InputSystem::InputControlPath::MatchChildrenRecursive(::UnityEngine::InputSystem::InputControl*  control, ::StringW  path, int32_t  indexInPath, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>  matches, bool  matchMultiple)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                    "MatchChildrenRecursive",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()},
                    ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<TControl, false>(nullptr, ___internal_method, control, path, indexInPath, matches, matchMultiple);
}
/// @param startIndexInComponent: int32_t (default: static_cast<int32_t>(0x0))
inline bool UnityEngine::InputSystem::InputControlPath::MatchPathComponent(::StringW  component, ::StringW  path, ByRef<int32_t>  indexInPath, ::UnityEngine::InputSystem::__InputControlPath__PathComponentType  componentType, int32_t  startIndexInComponent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "MatchPathComponent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::__InputControlPath__PathComponentType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, component, path, indexInPath, componentType, startIndexInComponent);
}
inline bool UnityEngine::InputSystem::InputControlPath::PathComponentCanYieldMultipleMatches(::StringW  path, int32_t  indexInPath)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "PathComponentCanYieldMultipleMatches",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path, indexInPath);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>* UnityEngine::InputSystem::InputControlPath::Parse(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputControlPath*>::get(),
                        "Parse",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::__InputControlPath__ParsedPathComponent>*, false>(nullptr, ___internal_method, path);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputControlPath::InputControlPath()   {
}
