#pragma once
#include "OVRSimpleJSON/zzzz__JSONNode_impl.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONObject_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONTextMode_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "OVRSimpleJSON/zzzz__JSONNodeType_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::*)()>(
    &::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cd3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0._Remove_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::*)(
    ::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>)>(&::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::_Remove_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x27cd7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::__get_aNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___aNode;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::__get_aNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___aNode;
}
constexpr void OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::__set_aNode(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___aNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0* OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*>());
}
inline void OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::_Remove_b__0(::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*> k) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0*>::get(), "<Remove>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::KeyValuePair_2<::StringW, ::OVRSimpleJSON::JSONNode*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, k);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONObject____c__DisplayClass21_0::__JSONObject____c__DisplayClass21_0() {}
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)(int32_t)>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27cd474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27cd7f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x27cd810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.__m__Finally1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::__m__Finally1)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27cd9b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cda08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                 "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x27cda10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cda50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>* (
    ::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(&::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x27cda58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                 "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::__JSONObject___get_Children_d__23.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::OVRSimpleJSON::__JSONObject___get_Children_d__23::*)()>(
    &::OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27cdafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                               "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONObject___get_Children_d__23::operator ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr OVRSimpleJSON::__JSONObject___get_Children_d__23::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>"
constexpr OVRSimpleJSON::__JSONObject___get_Children_d__23::operator ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr OVRSimpleJSON::__JSONObject___get_Children_d__23::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr OVRSimpleJSON::__JSONObject___get_Children_d__23::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void OVRSimpleJSON::__JSONObject___get_Children_d__23::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr ::OVRSimpleJSON::JSONNode*& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void OVRSimpleJSON::__JSONObject___get_Children_d__23::__set___2__current(::OVRSimpleJSON::JSONNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr void OVRSimpleJSON::__JSONObject___get_Children_d__23::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::OVRSimpleJSON::JSONObject*& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::OVRSimpleJSON::JSONObject*> const& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void OVRSimpleJSON::__JSONObject___get_Children_d__23::__set___4__this(::OVRSimpleJSON::JSONObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*>& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
constexpr ::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> const& OVRSimpleJSON::__JSONObject___get_Children_d__23::__get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____7__wrap1;
}
constexpr void OVRSimpleJSON::__JSONObject___get_Children_d__23::__set___7__wrap1(::System::Collections::Generic::__Dictionary_2__Enumerator<::StringW, ::OVRSimpleJSON::JSONNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____7__wrap1 = value;
}
inline ::OVRSimpleJSON::__JSONObject___get_Children_d__23* OVRSimpleJSON::__JSONObject___get_Children_d__23::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>(__1__state));
}
inline void OVRSimpleJSON::__JSONObject___get_Children_d__23::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void OVRSimpleJSON::__JSONObject___get_Children_d__23::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::__JSONObject___get_Children_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONObject___get_Children_d__23::__m__Finally1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "<>m__Finally1", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerator_OVRSimpleJSON_JSONNode__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                               "System.Collections.Generic.IEnumerator<OVRSimpleJSON.JSONNode>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*
OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_Generic_IEnumerable_OVRSimpleJSON_JSONNode__GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                               "System.Collections.Generic.IEnumerable<OVRSimpleJSON.JSONNode>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* OVRSimpleJSON::__JSONObject___get_Children_d__23::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::__JSONObject___get_Children_d__23*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::__JSONObject___get_Children_d__23::__JSONObject___get_Children_d__23() {}
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Inline)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27cca98;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Inline
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(bool)>(&::OVRSimpleJSON::JSONObject::set_Inline)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ccaa0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNodeType (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Tag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ccaac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_IsObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_IsObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27ccab4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::__JSONNode__Enumerator (::OVRSimpleJSON::JSONObject::*)()>(
    &::OVRSimpleJSON::JSONObject::GetEnumerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x27ccabc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::StringW)>(&::OVRSimpleJSON::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27ccb44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x27ccc34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(int32_t)>(&::OVRSimpleJSON::JSONObject::get_Item)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x27ccd3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.set_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(int32_t, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONObject::set_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x27ccddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::get_Count)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x27ccef4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Add
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)(::StringW, ::OVRSimpleJSON::JSONNode*)>(&::OVRSimpleJSON::JSONObject::Add)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27ccf44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::StringW)>(&::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x27cd094;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(int32_t)>(&::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x27cd158;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::OVRSimpleJSON::JSONNode* (::OVRSimpleJSON::JSONObject::*)(::OVRSimpleJSON::JSONNode*)>(
    &::OVRSimpleJSON::JSONObject::Remove)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x27cd234;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.get_Children
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* (::OVRSimpleJSON::JSONObject::*)()>(
    &::OVRSimpleJSON::JSONObject::get_Children)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27cd3fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject.WriteToStringBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::OVRSimpleJSON::JSONObject::*)(::System::Text::StringBuilder*, int32_t, int32_t, ::OVRSimpleJSON::JSONTextMode)>(&::OVRSimpleJSON::JSONObject::WriteToStringBuilder)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x27cd4a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVRSimpleJSON::JSONObject._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVRSimpleJSON::JSONObject::*)()>(&::OVRSimpleJSON::JSONObject::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x27c2c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*& OVRSimpleJSON::JSONObject::__get_m_Dict() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Dict;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>*> const& OVRSimpleJSON::JSONObject::__get_m_Dict() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Dict;
}
constexpr void OVRSimpleJSON::JSONObject::__set_m_Dict(::System::Collections::Generic::Dictionary_2<::StringW, ::OVRSimpleJSON::JSONNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Dict)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& OVRSimpleJSON::JSONObject::__get__cordl_inline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cordl_inline;
}
constexpr bool const& OVRSimpleJSON::JSONObject::__get__cordl_inline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cordl_inline;
}
constexpr void OVRSimpleJSON::JSONObject::__set__cordl_inline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____cordl_inline = value;
}
inline bool OVRSimpleJSON::JSONObject::get_Inline() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Inline",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::set_Inline(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "set_Inline", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::OVRSimpleJSON::JSONNodeType OVRSimpleJSON::JSONObject::get_Tag() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Tag",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNodeType, false>(this, ___internal_method);
}
inline bool OVRSimpleJSON::JSONObject::get_IsObject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_IsObject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::__JSONNode__Enumerator OVRSimpleJSON::JSONObject::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "GetEnumerator",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::__JSONNode__Enumerator, false>(this, ___internal_method);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::get_Item(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline void OVRSimpleJSON::JSONObject::set_Item(::StringW aKey, ::OVRSimpleJSON::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, value);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::get_Item(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline void OVRSimpleJSON::JSONObject::set_Item(int32_t aIndex, ::OVRSimpleJSON::JSONNode* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "set_Item", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aIndex, value);
}
inline int32_t OVRSimpleJSON::JSONObject::get_Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::Add(::StringW aKey, ::OVRSimpleJSON::JSONNode* aItem) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "Add", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aKey, aItem);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(::StringW aKey) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aKey);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(int32_t aIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aIndex);
}
inline ::OVRSimpleJSON::JSONNode* OVRSimpleJSON::JSONObject::Remove(::OVRSimpleJSON::JSONNode* aNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "Remove", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONNode*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::OVRSimpleJSON::JSONNode*, false>(this, ___internal_method, aNode);
}
inline ::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>* OVRSimpleJSON::JSONObject::get_Children() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "get_Children",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::OVRSimpleJSON::JSONNode*>*, false>(this, ___internal_method);
}
inline void OVRSimpleJSON::JSONObject::WriteToStringBuilder(::System::Text::StringBuilder* aSB, int32_t aIndent, int32_t aIndentInc, ::OVRSimpleJSON::JSONTextMode aMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), "WriteToStringBuilder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVRSimpleJSON::JSONTextMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, aSB, aIndent, aIndentInc, aMode);
}
inline ::OVRSimpleJSON::JSONObject* OVRSimpleJSON::JSONObject::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::OVRSimpleJSON::JSONObject*>());
}
inline void OVRSimpleJSON::JSONObject::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVRSimpleJSON::JSONObject*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::OVRSimpleJSON::JSONObject::JSONObject() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
