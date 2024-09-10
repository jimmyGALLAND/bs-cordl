#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/TraceJsonReader.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__TraceJsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__IJsonLineInfo_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonReader_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonToken_def.hpp"
#include "System/IO/zzzz__StringWriter_def.hpp"
#include "System/zzzz__DateTimeOffset_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)(::Newtonsoft::Json::JsonReader*)>(&::Newtonsoft::Json::Serialization::TraceJsonReader::_ctor)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3e6e06c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.GetDeserializedJsonMessage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3e6e1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "GetDeserializedJsonMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Read
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Read)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e6e1cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsInt32
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<int32_t> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e6e248;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e6e28c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e6e2d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDecimal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::Decimal> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3e6e314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDouble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<double_t> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e6e390;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsBoolean
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<bool> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3e6e3dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDateTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTime> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3e6e420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.ReadAsDateTimeOffset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::System::DateTimeOffset> (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3e6e46c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.WriteCurrentToken
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::WriteCurrentToken)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3e6e210;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "WriteCurrentToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Depth
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e4c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Path
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Path)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e4ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_QuoteChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_QuoteChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.set_QuoteChar
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)(char16_t)>(&::Newtonsoft::Json::Serialization::TraceJsonReader::set_QuoteChar)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e534;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_TokenType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Newtonsoft::Json::JsonToken (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_Value
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_Value)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e57c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.get_ValueType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e5a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Close
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Close)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3e6e5c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_HasLineInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3e6e5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_get_LineNumber
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3e6e69c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::TraceJsonReader.Newtonsoft_Json_IJsonLineInfo_get_LinePosition
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Newtonsoft::Json::Serialization::TraceJsonReader::*)()>(&::Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3e6e754;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::IJsonLineInfo"
constexpr  Newtonsoft::Json::Serialization::TraceJsonReader::operator ::Newtonsoft::Json::IJsonLineInfo*() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::IJsonLineInfo"
constexpr ::Newtonsoft::Json::IJsonLineInfo* Newtonsoft::Json::Serialization::TraceJsonReader::i___Newtonsoft__Json__IJsonLineInfo() noexcept {
return static_cast<::Newtonsoft::Json::IJsonLineInfo*>(static_cast<void*>(this));
}
constexpr ::Newtonsoft::Json::JsonReader*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__innerReader()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerReader;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonReader*> const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__innerReader() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____innerReader;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__innerReader(::Newtonsoft::Json::JsonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____innerReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Newtonsoft::Json::JsonTextWriter*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__textWriter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textWriter;
}
constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonTextWriter*> const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__textWriter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textWriter;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__textWriter(::Newtonsoft::Json::JsonTextWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::IO::StringWriter*& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__sw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw;
}
constexpr ::cordl_internals::to_const_pointer<::System::IO::StringWriter*> const& Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_get__sw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sw;
}
constexpr void Newtonsoft::Json::Serialization::TraceJsonReader::__cordl_internal_set__sw(::System::IO::StringWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sw)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Newtonsoft::Json::Serialization::TraceJsonReader* Newtonsoft::Json::Serialization::TraceJsonReader::New_ctor(::Newtonsoft::Json::JsonReader*  innerReader)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::TraceJsonReader*>(innerReader));
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::_ctor(::Newtonsoft::Json::JsonReader*  innerReader)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonReader*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, innerReader);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::GetDeserializedJsonMessage()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "GetDeserializedJsonMessage",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::TraceJsonReader::Read()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Nullable_1<int32_t> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsInt32()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<int32_t>, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsString()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBytes()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::Decimal> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDecimal()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::Decimal>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<double_t> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDouble()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<double_t>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<bool> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsBoolean()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTime> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTime>, false>(this, ___internal_method);
}
inline ::System::Nullable_1<::System::DateTimeOffset> Newtonsoft::Json::Serialization::TraceJsonReader::ReadAsDateTimeOffset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::DateTimeOffset>, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::WriteCurrentToken()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "WriteCurrentToken",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::get_Depth()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::TraceJsonReader::get_Path()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline char16_t Newtonsoft::Json::Serialization::TraceJsonReader::get_QuoteChar()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::set_QuoteChar(char16_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::Newtonsoft::Json::JsonToken Newtonsoft::Json::Serialization::TraceJsonReader::get_TokenType()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<::Newtonsoft::Json::JsonToken, false>(this, ___internal_method);
}
inline ::System::Object* Newtonsoft::Json::Serialization::TraceJsonReader::get_Value()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::TraceJsonReader::get_ValueType()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::TraceJsonReader::Close()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_HasLineInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.HasLineInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LineNumber()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LineNumber",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Newtonsoft::Json::Serialization::TraceJsonReader::Newtonsoft_Json_IJsonLineInfo_get_LinePosition()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::TraceJsonReader*>::get(),
                        "Newtonsoft.Json.IJsonLineInfo.get_LinePosition",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::TraceJsonReader::TraceJsonReader()   {
}
