#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ValidationMarker_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Zenject::ValidationMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*, bool)>(&::Zenject::ValidationMarker::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2f21364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*)>(&::Zenject::ValidationMarker::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2f05ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.get_InstantiateFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Zenject::ValidationMarker::*)()>(&::Zenject::ValidationMarker::get_InstantiateFailed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f21398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "get_InstantiateFailed",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.set_InstantiateFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ValidationMarker::*)(bool)>(&::Zenject::ValidationMarker::set_InstantiateFailed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2f213a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "set_InstantiateFailed", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.get_MarkedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Zenject::ValidationMarker::*)()>(&::Zenject::ValidationMarker::get_MarkedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f213ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "get_MarkedType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ValidationMarker.set_MarkedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ValidationMarker::*)(::System::Type*)>(&::Zenject::ValidationMarker::set_MarkedType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f213b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "set_MarkedType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& Zenject::ValidationMarker::__get__InstantiateFailed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiateFailed_k__BackingField;
}
constexpr bool const& Zenject::ValidationMarker::__get__InstantiateFailed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InstantiateFailed_k__BackingField;
}
constexpr void Zenject::ValidationMarker::__set__InstantiateFailed_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InstantiateFailed_k__BackingField = value;
}
constexpr ::System::Type*& Zenject::ValidationMarker::__get__MarkedType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MarkedType_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& Zenject::ValidationMarker::__get__MarkedType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MarkedType_k__BackingField;
}
constexpr void Zenject::ValidationMarker::__set__MarkedType_k__BackingField(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____MarkedType_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(::System::Type* markedType, bool instantiateFailed) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ValidationMarker*>(markedType, instantiateFailed));
}
inline void Zenject::ValidationMarker::_ctor(::System::Type* markedType, bool instantiateFailed) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markedType, instantiateFailed);
}
inline ::Zenject::ValidationMarker* Zenject::ValidationMarker::New_ctor(::System::Type* markedType) {
  return THROW_UNLESS(::il2cpp_utils::New<::Zenject::ValidationMarker*>(markedType));
}
inline void Zenject::ValidationMarker::_ctor(::System::Type* markedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markedType);
}
inline bool Zenject::ValidationMarker::get_InstantiateFailed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "get_InstantiateFailed",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Zenject::ValidationMarker::set_InstantiateFailed(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "set_InstantiateFailed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Type* Zenject::ValidationMarker::get_MarkedType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "get_MarkedType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Zenject::ValidationMarker::set_MarkedType(::System::Type* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ValidationMarker*>::get(), "set_MarkedType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::Zenject::ValidationMarker::ValidationMarker() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
