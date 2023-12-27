#pragma once
#include "System/Diagnostics/zzzz__TraceLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DiagnosticsTraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266a364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "get_LevelFilter",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.set_LevelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266a36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "set_LevelFilter",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.GetTraceEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceEventType (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(
    ::System::Diagnostics::TraceLevel)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x266a374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "GetTraceEventType",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(
    ::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x266a3e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "Trace", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x266a854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
constexpr ::System::Diagnostics::TraceLevel& Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__get__LevelFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr ::System::Diagnostics::TraceLevel const& Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__get__LevelFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____LevelFilter_k__BackingField = value;
}
inline ::System::Diagnostics::TraceLevel Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(),
                                                                             "get_LevelFilter", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter(::System::Diagnostics::TraceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "set_LevelFilter",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceEventType Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType(::System::Diagnostics::TraceLevel level) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "GetTraceEventType",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType, false>(this, ___internal_method, level);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "Trace", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message, ex);
}
inline ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter* Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>());
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::DiagnosticsTraceWriter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
