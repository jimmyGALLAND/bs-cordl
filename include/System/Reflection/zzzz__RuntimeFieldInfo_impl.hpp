#pragma once
#include "System/Reflection/zzzz__FieldAttributes_impl.hpp"
#include "System/Reflection/zzzz__RtFieldInfo_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__RuntimeFieldHandle_impl.hpp"
#include "System/Reflection/zzzz__RuntimeFieldInfo_def.hpp"
#include "System/Reflection/zzzz__Binder_def.hpp"
#include "System/Reflection/zzzz__RuntimeModule_def.hpp"
#include "System/zzzz__RuntimeFieldHandle_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/zzzz__TypedReference_def.hpp"
#include "System/zzzz__RuntimeType_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Reflection/zzzz__Module_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/Reflection/zzzz__BindingFlags_def.hpp"
#include "System/Reflection/zzzz__FieldAttributes_def.hpp"
#include "System/Reflection/zzzz__FieldInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_BindingFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::BindingFlags (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_BindingFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f2c80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                               "get_BindingFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Module
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Module* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_Module)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f2c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetDeclaringTypeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24f2ca8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                               "GetDeclaringTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedTypeInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeType* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x24f2d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                               "get_ReflectedTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRuntimeModule
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::RuntimeModule* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::GetRuntimeModule)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x24f2c8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                               "GetRuntimeModule", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetObjectData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Reflection::RuntimeFieldInfo::GetObjectData)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24f2db0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeGetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::UnsafeGetValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f2e6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckConsistency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::CheckConsistency)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x24f2e70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.UnsafeSetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimeFieldInfo::UnsafeSetValue)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x24f2ff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueDirect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(::System::TypedReference, ::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::SetValueDirect)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x24f3054;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Attributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::FieldAttributes (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_Attributes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f31b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::RuntimeFieldHandle (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_FieldHandle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f31c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::ResolveType)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f31c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "ResolveType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_FieldType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_FieldType)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x24f31cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetParentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)(bool)>(
    &::System::Reflection::RuntimeFieldInfo::GetParentType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetParentType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_ReflectedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_ReflectedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3250;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_DeclaringType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::get_DeclaringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3258;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3260;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.IsDefined
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Reflection::RuntimeFieldInfo::*)(::System::Type*, bool)>(
    &::System::Reflection::RuntimeFieldInfo::IsDefined)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f3268;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeFieldInfo::*)(bool)>(
    &::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24f32d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetCustomAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Object*, ::Array<::System::Object*>*> (::System::Reflection::RuntimeFieldInfo::*)(
    ::System::Type*, bool)>(&::System::Reflection::RuntimeFieldInfo::GetCustomAttributes)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x24f3340;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetFieldOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::GetFieldOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f33b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValueInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::GetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f33b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetValueInternal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)(::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::GetValue)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x24f33b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::ToString)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x24f35d8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValueInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::FieldInfo*, ::System::Object*, ::System::Object*)>(
    &::System::Reflection::RuntimeFieldInfo::SetValueInternal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3640;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "SetValueInternal", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.SetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)(
    ::System::Object*, ::System::Object*, ::System::Reflection::BindingFlags, ::System::Reflection::Binder*, ::System::Globalization::CultureInfo*)>(
    &::System::Reflection::RuntimeFieldInfo::SetValue)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x24f3644;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.GetRawConstantValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Reflection::RuntimeFieldInfo::*)()>(
    &::System::Reflection::RuntimeFieldInfo::GetRawConstantValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3908;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.CheckGeneric
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::CheckGeneric)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x24f3558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "CheckGeneric",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_MetadataToken
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::get_MetadataToken)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f390c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo.get_metadata_token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Reflection::RuntimeFieldInfo*)>(&::System::Reflection::RuntimeFieldInfo::get_metadata_token)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x24f3910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_metadata_token", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeFieldInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Reflection::RuntimeFieldInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Reflection::RuntimeFieldInfo::*)()>(&::System::Reflection::RuntimeFieldInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x24f3914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Reflection::RuntimeFieldInfo::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
constexpr void*& System::Reflection::RuntimeFieldInfo::__get_klass() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr void* const& System::Reflection::RuntimeFieldInfo::__get_klass() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___klass;
}
constexpr void System::Reflection::RuntimeFieldInfo::__set_klass(void* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___klass = value;
}
constexpr ::System::RuntimeFieldHandle& System::Reflection::RuntimeFieldInfo::__get_fhandle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fhandle;
}
constexpr ::System::RuntimeFieldHandle const& System::Reflection::RuntimeFieldInfo::__get_fhandle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fhandle;
}
constexpr void System::Reflection::RuntimeFieldInfo::__set_fhandle(::System::RuntimeFieldHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fhandle = value;
}
constexpr ::StringW& System::Reflection::RuntimeFieldInfo::__get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& System::Reflection::RuntimeFieldInfo::__get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Reflection::RuntimeFieldInfo::__set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Reflection::RuntimeFieldInfo::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Reflection::RuntimeFieldInfo::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Reflection::RuntimeFieldInfo::__set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Reflection::FieldAttributes& System::Reflection::RuntimeFieldInfo::__get_attrs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrs;
}
constexpr ::System::Reflection::FieldAttributes const& System::Reflection::RuntimeFieldInfo::__get_attrs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___attrs;
}
constexpr void System::Reflection::RuntimeFieldInfo::__set_attrs(::System::Reflection::FieldAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___attrs = value;
}
inline ::System::Reflection::BindingFlags System::Reflection::RuntimeFieldInfo::get_BindingFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_BindingFlags",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::BindingFlags, false>(this, ___internal_method);
}
inline ::System::Reflection::Module* System::Reflection::RuntimeFieldInfo::get_Module() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_Module",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Module*, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeFieldInfo::GetDeclaringTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "GetDeclaringTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline ::System::RuntimeType* System::Reflection::RuntimeFieldInfo::get_ReflectedTypeInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "get_ReflectedTypeInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeType*, false>(this, ___internal_method);
}
inline ::System::Reflection::RuntimeModule* System::Reflection::RuntimeFieldInfo::GetRuntimeModule() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetRuntimeModule",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::RuntimeModule*, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetObjectData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::SerializationInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::StreamingContext>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, info, context);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::UnsafeGetValue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "UnsafeGetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
inline void System::Reflection::RuntimeFieldInfo::CheckConsistency(::System::Object* target) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "CheckConsistency", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, target);
}
inline void System::Reflection::RuntimeFieldInfo::UnsafeSetValue(::System::Object* obj, ::System::Object* value, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                                 ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "UnsafeSetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, value, invokeAttr, binder, culture);
}
inline void System::Reflection::RuntimeFieldInfo::SetValueDirect(::System::TypedReference obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "SetValueDirect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TypedReference>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, value);
}
inline ::System::Reflection::FieldAttributes System::Reflection::RuntimeFieldInfo::get_Attributes() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_Attributes",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::FieldAttributes, false>(this, ___internal_method);
}
inline ::System::RuntimeFieldHandle System::Reflection::RuntimeFieldInfo::get_FieldHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_FieldHandle",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::RuntimeFieldHandle, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::ResolveType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "ResolveType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_FieldType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_FieldType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::GetParentType(bool declaring) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetParentType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, declaring);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_ReflectedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "get_ReflectedType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Type* System::Reflection::RuntimeFieldInfo::get_DeclaringType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "get_DeclaringType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::StringW System::Reflection::RuntimeFieldInfo::get_Name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_Name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool System::Reflection::RuntimeFieldInfo::IsDefined(::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "IsDefined", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributeType, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeFieldInfo::GetCustomAttributes(bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetCustomAttributes",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, inherit);
}
inline ::ArrayW<::System::Object*, ::Array<::System::Object*>*> System::Reflection::RuntimeFieldInfo::GetCustomAttributes(::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetCustomAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*, ::Array<::System::Object*>*>, false>(this, ___internal_method, attributeType, inherit);
}
inline int32_t System::Reflection::RuntimeFieldInfo::GetFieldOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetFieldOffset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetValueInternal(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetValueInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetValue(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "GetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, obj);
}
inline ::StringW System::Reflection::RuntimeFieldInfo::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::SetValueInternal(::System::Reflection::FieldInfo* fi, ::System::Object* obj, ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "SetValueInternal", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::FieldInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fi, obj, value);
}
inline void System::Reflection::RuntimeFieldInfo::SetValue(::System::Object* obj, ::System::Object* val, ::System::Reflection::BindingFlags invokeAttr, ::System::Reflection::Binder* binder,
                                                           ::System::Globalization::CultureInfo* culture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "SetValue", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::BindingFlags>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Binder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, obj, val, invokeAttr, binder, culture);
}
inline ::System::Object* System::Reflection::RuntimeFieldInfo::GetRawConstantValue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "GetRawConstantValue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void System::Reflection::RuntimeFieldInfo::CheckGeneric() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "CheckGeneric",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeFieldInfo::get_MetadataToken() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(),
                                                                             "get_MetadataToken", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Reflection::RuntimeFieldInfo::get_metadata_token(::System::Reflection::RuntimeFieldInfo* monoField) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), "get_metadata_token", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::RuntimeFieldInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, monoField);
}
inline ::System::Reflection::RuntimeFieldInfo* System::Reflection::RuntimeFieldInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Reflection::RuntimeFieldInfo*>());
}
inline void System::Reflection::RuntimeFieldInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Reflection::RuntimeFieldInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Reflection::RuntimeFieldInfo::RuntimeFieldInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
