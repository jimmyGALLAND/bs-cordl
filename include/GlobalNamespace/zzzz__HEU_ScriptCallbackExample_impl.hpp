#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HEU_ScriptCallbackExample_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptCallbackExample.AssetCallbackWithMsg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptCallbackExample::*)(::StringW)>(
    &::GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackWithMsg)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x214cfc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(), "AssetCallbackWithMsg",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptCallbackExample.AssetCallbackNoMsg
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptCallbackExample::*)()>(
    &::GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackNoMsg)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x214d060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(),
                                                                               "AssetCallbackNoMsg", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HEU_ScriptCallbackExample._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HEU_ScriptCallbackExample::*)()>(&::GlobalNamespace::HEU_ScriptCallbackExample::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x214d0c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::HEU_ScriptCallbackExample::__get__msg() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____msg;
}
constexpr ::StringW const& GlobalNamespace::HEU_ScriptCallbackExample::__get__msg() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____msg;
}
constexpr void GlobalNamespace::HEU_ScriptCallbackExample::__set__msg(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____msg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackWithMsg(::StringW msg) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(), "AssetCallbackWithMsg",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg);
}
inline void GlobalNamespace::HEU_ScriptCallbackExample::AssetCallbackNoMsg() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(),
                                                                             "AssetCallbackNoMsg", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HEU_ScriptCallbackExample* GlobalNamespace::HEU_ScriptCallbackExample::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HEU_ScriptCallbackExample*>());
}
inline void GlobalNamespace::HEU_ScriptCallbackExample::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HEU_ScriptCallbackExample*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HEU_ScriptCallbackExample::HEU_ScriptCallbackExample() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
