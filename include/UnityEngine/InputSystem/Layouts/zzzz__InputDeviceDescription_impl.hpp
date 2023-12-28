#pragma once
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
// Ctor Parameters [CppParam { name: "interface", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "product", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "serial", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "version", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "manufacturer", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "capabilities", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson::__InputDeviceDescription__DeviceDescriptionJson(::StringW interface, ::StringW type, ::StringW product,
                                                                                                                                                ::StringW serial, ::StringW version,
                                                                                                                                                ::StringW manufacturer,
                                                                                                                                                ::StringW capabilities) noexcept {
  this->interface = interface;
  this->type = type;
  this->product = product;
  this->serial = serial;
  this->version = version;
  this->manufacturer = manufacturer;
  this->capabilities = capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::__InputDeviceDescription__DeviceDescriptionJson::__InputDeviceDescription__DeviceDescriptionJson() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_interfaceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06954;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_interfaceName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_interfaceName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0695c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_interfaceName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_deviceClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06964;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_deviceClass",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_deviceClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0696c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_deviceClass",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_manufacturer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06974;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_manufacturer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_manufacturer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0697c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_manufacturer",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_product
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_product",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_product
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0698c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_product",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_serial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b06994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_serial",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_serial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b0699c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_serial",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b069a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_version",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b069ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_version",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_capabilities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b069b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_capabilities",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.set_capabilities
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b069bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_capabilities",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.get_empty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b069c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "get_empty",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2b06a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(
    ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2b06d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "Equals", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)(::System::Object*)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2b06dfc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2b06e94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
        &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b06fbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "op_Equality", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription, ::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
        &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b06ff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ToJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Layouts::InputDeviceDescription::*)()>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b07030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "ToJson",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.FromJson
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputDeviceDescription (*)(::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b070b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "FromJson",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Layouts::InputDeviceDescription.ComparePropertyToDeviceDescriptor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2b0717c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "ComparePropertyToDeviceDescriptor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>"
constexpr UnityEngine::InputSystem::Layouts::InputDeviceDescription::operator ::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_interfaceName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_interfaceName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_interfaceName(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_interfaceName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_deviceClass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_deviceClass", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_deviceClass(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_deviceClass",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_manufacturer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_manufacturer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_manufacturer(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_manufacturer",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_product() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_product", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_product(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_product",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_serial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_serial", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_serial(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_serial",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_version", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_version(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_version",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_capabilities() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_capabilities", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Layouts::InputDeviceDescription::set_capabilities(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "set_capabilities",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::get_empty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "get_empty", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(::UnityEngine::InputSystem::Layouts::InputDeviceDescription other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "Equals", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "Equals",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::InputSystem::Layouts::InputDeviceDescription::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Equality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left,
                                                                                   ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::op_Inequality(::UnityEngine::InputSystem::Layouts::InputDeviceDescription left,
                                                                                     ::UnityEngine::InputSystem::Layouts::InputDeviceDescription right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "op_Inequality", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::StringW UnityEngine::InputSystem::Layouts::InputDeviceDescription::ToJson() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(),
                                                                             "ToJson", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Layouts::InputDeviceDescription UnityEngine::InputSystem::Layouts::InputDeviceDescription::FromJson(::StringW json) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "FromJson",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputDeviceDescription, false>(nullptr, ___internal_method, json);
}
inline bool UnityEngine::InputSystem::Layouts::InputDeviceDescription::ComparePropertyToDeviceDescriptor(::StringW propertyName, ::StringW propertyValue, ::StringW deviceDescriptor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get(), "ComparePropertyToDeviceDescriptor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, propertyName, propertyValue, deviceDescriptor);
}
// Ctor Parameters [CppParam { name: "m_InterfaceName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_DeviceClass", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Manufacturer", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Product", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Serial", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Version", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "m_Capabilities", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription::InputDeviceDescription(::StringW m_InterfaceName, ::StringW m_DeviceClass, ::StringW m_Manufacturer, ::StringW m_Product,
                                                                                              ::StringW m_Serial, ::StringW m_Version, ::StringW m_Capabilities) noexcept {
  this->m_InterfaceName = m_InterfaceName;
  this->m_DeviceClass = m_DeviceClass;
  this->m_Manufacturer = m_Manufacturer;
  this->m_Product = m_Product;
  this->m_Serial = m_Serial;
  this->m_Version = m_Version;
  this->m_Capabilities = m_Capabilities;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Layouts::InputDeviceDescription::InputDeviceDescription() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
