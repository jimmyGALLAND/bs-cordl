#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__FormatterServices_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Runtime/Serialization/zzzz__MemberHolder_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Runtime/Serialization/zzzz__FormatterServices_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::*)()>(
    &::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b6e70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0._GetSerializableMembers_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (
    ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::*)(::System::Runtime::Serialization::MemberHolder*)>(
    &::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::_GetSerializableMembers_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x24b828c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*>::get(), "<GetSerializableMembers>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::MemberHolder*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0* System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*>());
}
inline void System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>
System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::_GetSerializableMembers_b__0(::System::Runtime::Serialization::MemberHolder* _) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0*>::get(), "<GetSerializableMembers>b__0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::MemberHolder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::__FormatterServices____c__DisplayClass9_0::__FormatterServices____c__DisplayClass9_0() {}
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x24b5e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetSerializableMembers",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.CheckSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*)>(&::System::Runtime::Serialization::FormatterServices::CheckSerializable)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x24b6020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "CheckSerializable",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.InternalGetSerializableMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers)> {
  constexpr static std::size_t size = 0x700;
  constexpr static std::size_t addrs = 0x24b6040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "InternalGetSerializableMembers",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetParentTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::RuntimeType*, ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>,
                                                                                           ByRef<int32_t>)>(&::System::Runtime::Serialization::FormatterServices::GetParentTypes)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x24b6740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetParentTypes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetSerializableMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> (*)(
    ::System::Type*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Runtime::Serialization::FormatterServices::GetSerializableMembers)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x24b6bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetSerializableMembers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetUninitializedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::FormatterServices::GetUninitializedObject)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x24b6e78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetUninitializedObject",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.nativeGetUninitializedObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::System::RuntimeType*)>(
    &::System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "nativeGetUninitializedObject",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetEnableUnsafeTypeForwarders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b704c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(),
                                                                               "GetEnableUnsafeTypeForwarders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.UnsafeTypeForwardersIsEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x24b7054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(),
                                                                               "UnsafeTypeForwardersIsEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.SerializationSetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::MemberInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Runtime::Serialization::FormatterServices::SerializationSetValue)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x24b70fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "SerializationSetValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.PopulateObjectMembers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (*)(::System::Object*, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>,
                                      ::ArrayW<::System::Object*, ::Array<::System::Object*>*>)>(&::System::Runtime::Serialization::FormatterServices::PopulateObjectMembers)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x24b7390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "PopulateObjectMembers", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (*)(
    ::System::Object*, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>)>(&::System::Runtime::Serialization::FormatterServices::GetObjectData)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x24b76a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetTypeFromAssembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Reflection::Assembly*, ::StringW)>(
    &::System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x24b7a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetTypeFromAssembly", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.LoadAssemblyFromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(
    &::System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24b7b2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "LoadAssemblyFromString",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.LoadAssemblyFromStringNoThrow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(
    &::System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x24b7b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "LoadAssemblyFromStringNoThrow",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*, ByRef<bool>)>(
    &::System::Runtime::Serialization::FormatterServices::GetClrAssemblyName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x24b7c08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrAssemblyName", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetClrTypeFullName)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24b7d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForArray
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(&::System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x24b7df4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullNameForArray",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::FormatterServices.GetClrTypeFullNameForNonArrayTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Type*)>(
    &::System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x24b8018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullNameForNonArrayTypes",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::FormatterServices::setStaticF_m_MemberInfoTable(
    ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                              ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                                              ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*,
                                    "m_MemberInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>(
      std::forward<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                             ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*>(value));
}
inline ::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                 ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*
System::Runtime::Serialization::FormatterServices::getStaticF_m_MemberInfoTable() {
  return ::cordl_internals::getStaticField<::System::Collections::Concurrent::ConcurrentDictionary_2<::System::Runtime::Serialization::MemberHolder*,
                                                                                                     ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>*,
                                           "m_MemberInfoTable", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_unsafeTypeForwardersIsEnabled(bool value) {
  ::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>(
      std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FormatterServices::getStaticF_unsafeTypeForwardersIsEnabled() {
  return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabled", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_unsafeTypeForwardersIsEnabledInitialized(bool value) {
  ::cordl_internals::setStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>(std::forward<bool>(value));
}
inline bool System::Runtime::Serialization::FormatterServices::getStaticF_unsafeTypeForwardersIsEnabledInitialized() {
  return ::cordl_internals::getStaticField<bool, "unsafeTypeForwardersIsEnabledInitialized",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_advancedTypes(::ArrayW<::System::Type*, ::Array<::System::Type*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "advancedTypes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>(
      std::forward<::ArrayW<::System::Type*, ::Array<::System::Type*>*>>(value));
}
inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> System::Runtime::Serialization::FormatterServices::getStaticF_advancedTypes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Type*, ::Array<::System::Type*>*>, "advancedTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>();
}
inline void System::Runtime::Serialization::FormatterServices::setStaticF_s_binder(::System::Reflection::Binder* value) {
  ::cordl_internals::setStaticField<::System::Reflection::Binder*, "s_binder", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>(
      std::forward<::System::Reflection::Binder*>(value));
}
inline ::System::Reflection::Binder* System::Runtime::Serialization::FormatterServices::getStaticF_s_binder() {
  return ::cordl_internals::getStaticField<::System::Reflection::Binder*, "s_binder",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get>();
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> System::Runtime::Serialization::FormatterServices::GetSerializableMembers(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetSerializableMembers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::CheckSerializable(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "CheckSerializable",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, type);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>
System::Runtime::Serialization::FormatterServices::InternalGetSerializableMembers(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "InternalGetSerializableMembers",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::GetParentTypes(::System::RuntimeType* parentType, ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>> parentTypes,
                                                                              ByRef<int32_t> parentTypeCount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetParentTypes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::System::RuntimeType*, ::Array<::System::RuntimeType*>*>>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, parentType, parentTypes, parentTypeCount);
}
inline ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>
System::Runtime::Serialization::FormatterServices::GetSerializableMembers(::System::Type* type, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetSerializableMembers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>, false>(nullptr, ___internal_method, type, context);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::GetUninitializedObject(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetUninitializedObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::nativeGetUninitializedObject(::System::RuntimeType* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "nativeGetUninitializedObject",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::RuntimeType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, type);
}
inline bool System::Runtime::Serialization::FormatterServices::GetEnableUnsafeTypeForwarders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(),
                                                                             "GetEnableUnsafeTypeForwarders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool System::Runtime::Serialization::FormatterServices::UnsafeTypeForwardersIsEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(),
                                                                             "UnsafeTypeForwardersIsEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void System::Runtime::Serialization::FormatterServices::SerializationSetValue(::System::Reflection::MemberInfo* fi, ::System::Object* target, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "SerializationSetValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fi, target, value);
}
inline ::System::Object* System::Runtime::Serialization::FormatterServices::PopulateObjectMembers(::System::Object* obj,
                                                                                                  ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members,
                                                                                                  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "PopulateObjectMembers", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*, ::Array<::System::Object*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, obj, members, data);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*>
System::Runtime::Serialization::FormatterServices::GetObjectData(::System::Object* obj, ::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*> members) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Reflection::MemberInfo*, ::Array<::System::Reflection::MemberInfo*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(nullptr, ___internal_method, obj, members);
}
inline ::System::Type* System::Runtime::Serialization::FormatterServices::GetTypeFromAssembly(::System::Reflection::Assembly* assem, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetTypeFromAssembly", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, assem, name);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::FormatterServices::LoadAssemblyFromString(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "LoadAssemblyFromString",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::FormatterServices::LoadAssemblyFromStringNoThrow(::StringW assemblyName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "LoadAssemblyFromStringNoThrow",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrAssemblyName(::System::Type* type, ByRef<bool> hasTypeForwardedFrom) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrAssemblyName", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type, hasTypeForwardedFrom);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullName(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForArray(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullNameForArray",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
inline ::StringW System::Runtime::Serialization::FormatterServices::GetClrTypeFullNameForNonArrayTypes(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::FormatterServices*>::get(), "GetClrTypeFullNameForNonArrayTypes",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::FormatterServices::FormatterServices() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
