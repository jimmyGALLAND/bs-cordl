#pragma once
#include "HoudiniEngineUnity/zzzz__JSONNode_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__JSONObject_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONObject_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__JSONNodeType_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::*)()>(
    &::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21da148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0._Remove_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>)>(&::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x21da504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::__get_aNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aNode;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::__get_aNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___aNode;
}
constexpr void HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::__set_aNode(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0* HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*>());
}
inline void HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::_Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*> k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::HoudiniEngineUnity::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, k);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONObject____c__DisplayClass21_0::__JSONObject____c__DisplayClass21_0() {}
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)(int32_t)>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21da1c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x21da548;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x21da564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21da70c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21da75c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                 "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x21da764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21da7a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
        &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x21da7ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                    "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__JSONObject___get_Children_d__23.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HoudiniEngineUnity::__JSONObject___get_Children_d__23::*)()>(
    &::HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x21da850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONObject___get_Children_d__23::operator ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr HoudiniEngineUnity::__JSONObject___get_Children_d__23::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>"
constexpr HoudiniEngineUnity::__JSONObject___get_Children_d__23::operator ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HoudiniEngineUnity::__JSONObject___get_Children_d__23::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HoudiniEngineUnity::__JSONObject___get_Children_d__23::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::HoudiniEngineUnity::JSONNode*& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONNode*> const& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__set___2__current(::HoudiniEngineUnity::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::HoudiniEngineUnity::JSONObject*& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::JSONObject*> const& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__set___4__this(::HoudiniEngineUnity::JSONObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*>& HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> const&
HoudiniEngineUnity::__JSONObject___get_Children_d__23::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::HoudiniEngineUnity::JSONNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap1 = value;
}
inline ::HoudiniEngineUnity::__JSONObject___get_Children_d__23* HoudiniEngineUnity::__JSONObject___get_Children_d__23::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>(__1__state));
}
inline void HoudiniEngineUnity::__JSONObject___get_Children_d__23::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::__JSONObject___get_Children_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONObject___get_Children_d__23::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerator_HoudiniEngineUnity_JSONNode__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                               "System.Collections.Generic.IEnumerator<HoudiniEngineUnity.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*
HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerable_HoudiniEngineUnity_JSONNode__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                               "System.Collections.Generic.IEnumerable<HoudiniEngineUnity.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HoudiniEngineUnity::__JSONObject___get_Children_d__23::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__JSONObject___get_Children_d__23::__JSONObject___get_Children_d__23() {}
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONObject::*)()>(&::HoudiniEngineUnity::JSONObject::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d97ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)(bool)>(&::HoudiniEngineUnity::JSONObject::set_Inline)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21d97f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNodeType (::HoudiniEngineUnity::JSONObject::*)()>(
    &::HoudiniEngineUnity::JSONObject::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d9800;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::JSONObject::*)()>(&::HoudiniEngineUnity::JSONObject::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21d9808;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__JSONNode__Enumerator (::HoudiniEngineUnity::JSONObject::*)()>(
    &::HoudiniEngineUnity::JSONObject::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21d9810;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONObject::*)(::StringW)>(
    &::HoudiniEngineUnity::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21d9898;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x21d9988;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONObject::*)(int32_t)>(
    &::HoudiniEngineUnity::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x21d9a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)(int32_t, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x21d9b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::JSONObject::*)()>(&::HoudiniEngineUnity::JSONObject::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x21d9c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)(::StringW, ::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONObject::Add)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21d9c98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONObject::*)(::StringW)>(
    &::HoudiniEngineUnity::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x21d9de8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONObject::*)(int32_t)>(
    &::HoudiniEngineUnity::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x21d9eac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::JSONNode* (::HoudiniEngineUnity::JSONObject::*)(::HoudiniEngineUnity::JSONNode*)>(
    &::HoudiniEngineUnity::JSONObject::Remove)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x21d9f88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* (::HoudiniEngineUnity::JSONObject::*)()>(&::HoudiniEngineUnity::JSONObject::get_Children)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x21da150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)(
    ::System::Text::StringBuilder*, int32_t, int32_t, ::HoudiniEngineUnity::JSONTextMode)>(&::HoudiniEngineUnity::JSONObject::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x21da1fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::JSONObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::JSONObject::*)()>(&::HoudiniEngineUnity::JSONObject::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21d5ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*& HoudiniEngineUnity::JSONObject::__get_m_Dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>*> const& HoudiniEngineUnity::JSONObject::__get_m_Dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Dict;
}
constexpr void HoudiniEngineUnity::JSONObject::__set_m_Dict(::System::Collections::Generic::Dictionary_2<::StringW, ::HoudiniEngineUnity::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::JSONObject::__get__cordl_inline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_inline;
}
constexpr bool const& HoudiniEngineUnity::JSONObject::__get__cordl_inline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_inline;
}
constexpr void HoudiniEngineUnity::JSONObject::__set__cordl_inline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_inline = value;
}
inline bool HoudiniEngineUnity::JSONObject::get_Inline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Inline",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONObject::set_Inline(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "set_Inline", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::JSONNodeType HoudiniEngineUnity::JSONObject::get_Tag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Tag",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNodeType, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::JSONObject::get_IsObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_IsObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__JSONNode__Enumerator HoudiniEngineUnity::JSONObject::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__JSONNode__Enumerator, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONObject::get_Item(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void HoudiniEngineUnity::JSONObject::set_Item(::StringW aKey, ::HoudiniEngineUnity::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONObject::get_Item(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void HoudiniEngineUnity::JSONObject::set_Item(int32_t aIndex, ::HoudiniEngineUnity::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline int32_t HoudiniEngineUnity::JSONObject::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONObject::Add(::StringW aKey, ::HoudiniEngineUnity::JSONNode* aItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONObject::Remove(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONObject::Remove(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::HoudiniEngineUnity::JSONNode* HoudiniEngineUnity::JSONObject::Remove(::HoudiniEngineUnity::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::JSONNode*, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>* HoudiniEngineUnity::JSONObject::get_Children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "get_Children",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::HoudiniEngineUnity::JSONNode*>*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::JSONObject::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::HoudiniEngineUnity::JSONTextMode aMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), "WriteToStringBuilder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::JSONTextMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::HoudiniEngineUnity::JSONObject* HoudiniEngineUnity::JSONObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::JSONObject*>());
}
inline void HoudiniEngineUnity::JSONObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::JSONObject*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::JSONObject::JSONObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
