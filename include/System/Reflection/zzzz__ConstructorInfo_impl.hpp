#pragma once
#include "System/Reflection/zzzz__MethodBase_impl.hpp"
#include "System/Reflection/zzzz__ConstructorInfo_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Reflection/zzzz__MemberTypes_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
//  Writing Method size for method: ::System::Reflection::ConstructorInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::ConstructorInfo::*)()>(&::System::Reflection::ConstructorInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e60b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.get_MemberType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::MemberTypes (::System::Reflection::ConstructorInfo::*)()>(
    &::System::Reflection::ConstructorInfo::get_MemberType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e60c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Reflection::ConstructorInfo::*)(::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Reflection::ConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24e60d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Reflection::ConstructorInfo::*)(::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::ArrayW<::System::Object*, ::Array<::System::Object*>*>,
                                              ::System::Globalization::CultureInfo*)>(&::System::Reflection::ConstructorInfo::Invoke)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), 38));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::ConstructorInfo::*)(::System::Object*)>(&::System::Reflection::ConstructorInfo::Equals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e60f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::ConstructorInfo::*)()>(&::System::Reflection::ConstructorInfo::GetHashCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24e6100;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*)>(
    &::System::Reflection::ConstructorInfo::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x24e6110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::ConstructorInfo.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Reflection::ConstructorInfo*, ::System::Reflection::ConstructorInfo*)>(
    &::System::Reflection::ConstructorInfo::op_Inequality)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x24e613c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
    return ___internal_method;
  }
};
inline void System::Reflection::ConstructorInfo::setStaticF_ConstructorName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ConstructorName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get>(std::forward<::StringW>(value));
}
inline ::StringW System::Reflection::ConstructorInfo::getStaticF_ConstructorName() {
  return ::cordl_internals::getStaticField<::StringW, "ConstructorName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get>();
}
inline void System::Reflection::ConstructorInfo::setStaticF_TypeConstructorName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "TypeConstructorName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW System::Reflection::ConstructorInfo::getStaticF_TypeConstructorName() {
  return ::cordl_internals::getStaticField<::StringW, "TypeConstructorName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get>();
}
inline ::System::Reflection::ConstructorInfo* System::Reflection::ConstructorInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::ConstructorInfo*>());
}
inline void System::Reflection::ConstructorInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Reflection::MemberTypes System::Reflection::ConstructorInfo::get_MemberType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "get_MemberType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::MemberTypes, false>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::ConstructorInfo::Invoke(::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, parameters);
}
inline ::System::Object* System::Reflection::ConstructorInfo::Invoke(::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                     ::ArrayW<::System::Object*, ::Array<::System::Object*>*> parameters, ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "Invoke", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, invokeAttr, binder, parameters, culture);
}
inline bool System::Reflection::ConstructorInfo::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Reflection::ConstructorInfo::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Reflection::ConstructorInfo::op_Equality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool System::Reflection::ConstructorInfo::op_Inequality(::System::Reflection::ConstructorInfo* left, ::System::Reflection::ConstructorInfo* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::ConstructorInfo*>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::ConstructorInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
// Ctor Parameters []
constexpr ::System::Reflection::ConstructorInfo::ConstructorInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
