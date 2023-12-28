#pragma once
#include "UnityEngine/XR/zzzz__InputFeatureType_impl.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureUsage_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/XR/zzzz__InputFeatureType_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.get_name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::XR::InputFeatureUsage::*)()>(&::UnityEngine::XR::InputFeatureUsage::get_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb2030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "get_name",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.get_internalType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::XR::InputFeatureType (::UnityEngine::XR::InputFeatureUsage::*)()>(
    &::UnityEngine::XR::InputFeatureUsage::get_internalType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2eb2038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "get_internalType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::InputFeatureUsage::*)(::System::Object*)>(&::UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2eb2040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::XR::InputFeatureUsage::*)(::UnityEngine::XR::InputFeatureUsage)>(
    &::UnityEngine::XR::InputFeatureUsage::Equals)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2eb20c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputFeatureUsage>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::InputFeatureUsage.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::XR::InputFeatureUsage::*)()>(&::UnityEngine::XR::InputFeatureUsage::GetHashCode)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2eb2108;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), 2));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>"
constexpr UnityEngine::XR::InputFeatureUsage::operator ::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::XR::InputFeatureUsage>*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline ::StringW UnityEngine::XR::InputFeatureUsage::get_name() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "get_name",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::XR::InputFeatureType UnityEngine::XR::InputFeatureUsage::get_internalType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "get_internalType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::InputFeatureType, false>(this, ___internal_method);
}
inline bool UnityEngine::XR::InputFeatureUsage::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool UnityEngine::XR::InputFeatureUsage::Equals(::UnityEngine::XR::InputFeatureUsage other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::InputFeatureUsage>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::XR::InputFeatureUsage::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::InputFeatureUsage>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Name", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_InternalType", ty: "::UnityEngine::XR::InputFeatureType", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::InputFeatureUsage::InputFeatureUsage(::StringW m_Name, ::UnityEngine::XR::InputFeatureType m_InternalType) noexcept {
  this->m_Name = m_Name;
  this->m_InternalType = m_InternalType;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::InputFeatureUsage::InputFeatureUsage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
