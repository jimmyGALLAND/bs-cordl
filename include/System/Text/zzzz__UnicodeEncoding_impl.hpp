#pragma once
// IWYU pragma private; include "System/Text/UnicodeEncoding.hpp"
#include "System/Text/zzzz__DecoderNLS_impl.hpp"
#include "System/Text/zzzz__Encoding_impl.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/Text/zzzz__DecoderNLS_def.hpp"
#include "System/Text/zzzz__Decoder_def.hpp"
#include "System/Text/zzzz__EncoderNLS_def.hpp"
#include "System/Text/zzzz__Encoder_def.hpp"
#include "System/Text/zzzz__UnicodeEncoding_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
//  Writing Method size for method: ::System::Text::__UnicodeEncoding__Decoder._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UnicodeEncoding__Decoder::*)(::System::Text::UnicodeEncoding*)>(&::System::Text::__UnicodeEncoding__Decoder::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3bfaf74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UnicodeEncoding*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UnicodeEncoding__Decoder.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::__UnicodeEncoding__Decoder::*)()>(&::System::Text::__UnicodeEncoding__Decoder::Reset)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3bfb724;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::__UnicodeEncoding__Decoder.get_HasState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::__UnicodeEncoding__Decoder::*)()>(&::System::Text::__UnicodeEncoding__Decoder::get_HasState)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3bfb74c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
constexpr int32_t& System::Text::__UnicodeEncoding__Decoder::__cordl_internal_get_lastByte()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastByte;
}
constexpr int32_t const& System::Text::__UnicodeEncoding__Decoder::__cordl_internal_get_lastByte() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastByte;
}
constexpr void System::Text::__UnicodeEncoding__Decoder::__cordl_internal_set_lastByte(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastByte = value;
}
constexpr char16_t& System::Text::__UnicodeEncoding__Decoder::__cordl_internal_get_lastChar()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChar;
}
constexpr char16_t const& System::Text::__UnicodeEncoding__Decoder::__cordl_internal_get_lastChar() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastChar;
}
constexpr void System::Text::__UnicodeEncoding__Decoder::__cordl_internal_set_lastChar(char16_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastChar = value;
}
inline ::System::Text::__UnicodeEncoding__Decoder* System::Text::__UnicodeEncoding__Decoder::New_ctor(::System::Text::UnicodeEncoding*  encoding)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::__UnicodeEncoding__Decoder*>(encoding));
}
inline void System::Text::__UnicodeEncoding__Decoder::_ctor(::System::Text::UnicodeEncoding*  encoding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::UnicodeEncoding*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, encoding);
}
inline void System::Text::__UnicodeEncoding__Decoder::Reset()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Text::__UnicodeEncoding__Decoder::get_HasState()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::__UnicodeEncoding__Decoder*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::__UnicodeEncoding__Decoder::__UnicodeEncoding__Decoder()   {
}
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3bf80d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UnicodeEncoding::*)(bool, bool)>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x3bf811c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UnicodeEncoding::*)(bool, bool, bool)>(&::System::Text::UnicodeEncoding::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3bf815c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.SetDefaultFallbacks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::SetDefaultFallbacks)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3bf8254;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3bf8318;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::StringW)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3bf8490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3bf851c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::StringW, int32_t, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x3bf85ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<char16_t,::Array<char16_t>*>, int32_t, int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t)>(&::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3bf8834;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3bf8a98;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x3bf8b90;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x3bf8d08;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t, ::ArrayW<char16_t,::Array<char16_t>*>, int32_t)>(&::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3bf8dd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t)>(&::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3bf903c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Text::UnicodeEncoding::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, int32_t, int32_t)>(&::System::Text::UnicodeEncoding::GetString)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3bf9134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UnicodeEncoding::GetByteCount)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x3bf92f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetBytes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<char16_t>, int32_t, ::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::EncoderNLS*)>(&::System::Text::UnicodeEncoding::GetBytes)> {
  constexpr static std::size_t size = 0x6a8;
  constexpr static std::size_t addrs = 0x3bf9810;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetCharCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UnicodeEncoding::GetCharCount)> {
  constexpr static std::size_t size = 0x644;
  constexpr static std::size_t addrs = 0x3bf9f30;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetChars
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(::cordl_internals::Ptr<uint8_t>, int32_t, ::cordl_internals::Ptr<char16_t>, int32_t, ::System::Text::DecoderNLS*)>(&::System::Text::UnicodeEncoding::GetChars)> {
  constexpr static std::size_t size = 0x8c8;
  constexpr static std::size_t addrs = 0x3bfa574;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetEncoder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Encoder* (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetEncoder)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3bfaeb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetDecoder
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Text::Decoder* (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetDecoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3bfaf10;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetPreamble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t,::Array<uint8_t>*> (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetPreamble)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3bfaf84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.get_Preamble
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::ReadOnlySpan_1<uint8_t> (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::get_Preamble)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x3bfb090;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetMaxByteCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(int32_t)>(&::System::Text::UnicodeEncoding::GetMaxByteCount)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3bfb210;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetMaxCharCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)(int32_t)>(&::System::Text::UnicodeEncoding::GetMaxCharCount)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3bfb310;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Text::UnicodeEncoding::*)(::System::Object*)>(&::System::Text::UnicodeEncoding::Equals)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x3bfb414;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  0
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Text::UnicodeEncoding.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Text::UnicodeEncoding::*)()>(&::System::Text::UnicodeEncoding::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3bfb528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                                  2
                                ));
    return ___internal_method;
  }
};
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_isThrowException()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isThrowException;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_isThrowException() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isThrowException;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_isThrowException(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isThrowException = value;
}
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_bigEndian()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigEndian;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_bigEndian() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bigEndian;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_bigEndian(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bigEndian = value;
}
constexpr bool& System::Text::UnicodeEncoding::__cordl_internal_get_byteOrderMark()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteOrderMark;
}
constexpr bool const& System::Text::UnicodeEncoding::__cordl_internal_get_byteOrderMark() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___byteOrderMark;
}
constexpr void System::Text::UnicodeEncoding::__cordl_internal_set_byteOrderMark(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___byteOrderMark = value;
}
inline void System::Text::UnicodeEncoding::setStaticF_s_bigEndianDefault(::System::Text::UnicodeEncoding*  value)  {
::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::getStaticF_s_bigEndianDefault()  {
return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "s_bigEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_littleEndianDefault(::System::Text::UnicodeEncoding*  value)  {
::cordl_internals::setStaticField<::System::Text::UnicodeEncoding*, "s_littleEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>(std::forward<::System::Text::UnicodeEncoding*>(value));
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::getStaticF_s_littleEndianDefault()  {
return ::cordl_internals::getStaticField<::System::Text::UnicodeEncoding*, "s_littleEndianDefault", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_bigEndianPreamble(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Text::UnicodeEncoding::getStaticF_s_bigEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_bigEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>();
}
inline void System::Text::UnicodeEncoding::setStaticF_s_littleEndianPreamble(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Text::UnicodeEncoding::getStaticF_s_littleEndianPreamble()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "s_littleEndianPreamble", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>();
}
inline void System::Text::UnicodeEncoding::setStaticF_highLowPatternMask(uint64_t  value)  {
::cordl_internals::setStaticField<uint64_t, "highLowPatternMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>(std::forward<uint64_t>(value));
}
inline uint64_t System::Text::UnicodeEncoding::getStaticF_highLowPatternMask()  {
return ::cordl_internals::getStaticField<uint64_t, "highLowPatternMask", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get>();
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UnicodeEncoding*>());
}
inline void System::Text::UnicodeEncoding::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor(bool  bigEndian, bool  byteOrderMark)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UnicodeEncoding*>(bigEndian, byteOrderMark));
}
inline void System::Text::UnicodeEncoding::_ctor(bool  bigEndian, bool  byteOrderMark)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bigEndian, byteOrderMark);
}
inline ::System::Text::UnicodeEncoding* System::Text::UnicodeEncoding::New_ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Text::UnicodeEncoding*>(bigEndian, byteOrderMark, throwOnInvalidBytes));
}
inline void System::Text::UnicodeEncoding::_ctor(bool  bigEndian, bool  byteOrderMark, bool  throwOnInvalidBytes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bigEndian, byteOrderMark, throwOnInvalidBytes);
}
inline void System::Text::UnicodeEncoding::SetDefaultFallbacks()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::StringW  s)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::cordl_internals::Ptr<char16_t>  chars, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::StringW  s, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, s, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex, int32_t  charCount, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charIndex, charCount, bytes, byteIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  byteIndex, int32_t  byteCount, ::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  charIndex)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteIndex, byteCount, chars, charIndex);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount);
}
inline ::StringW System::Text::UnicodeEncoding::GetString(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes, int32_t  index, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, bytes, index, count);
}
inline int32_t System::Text::UnicodeEncoding::GetByteCount(::cordl_internals::Ptr<char16_t>  chars, int32_t  count, ::System::Text::EncoderNLS*  encoder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, count, encoder);
}
inline int32_t System::Text::UnicodeEncoding::GetBytes(::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::System::Text::EncoderNLS*  encoder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, chars, charCount, bytes, byteCount, encoder);
}
inline int32_t System::Text::UnicodeEncoding::GetCharCount(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  count, ::System::Text::DecoderNLS*  baseDecoder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, count, baseDecoder);
}
inline int32_t System::Text::UnicodeEncoding::GetChars(::cordl_internals::Ptr<uint8_t>  bytes, int32_t  byteCount, ::cordl_internals::Ptr<char16_t>  chars, int32_t  charCount, ::System::Text::DecoderNLS*  baseDecoder)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, bytes, byteCount, chars, charCount, baseDecoder);
}
inline ::System::Text::Encoder* System::Text::UnicodeEncoding::GetEncoder()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Encoder*, false>(this, ___internal_method);
}
inline ::System::Text::Decoder* System::Text::UnicodeEncoding::GetDecoder()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<::System::Text::Decoder*, false>(this, ___internal_method);
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Text::UnicodeEncoding::GetPreamble()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t,::Array<uint8_t>*>, false>(this, ___internal_method);
}
inline ::System::ReadOnlySpan_1<uint8_t> System::Text::UnicodeEncoding::get_Preamble()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<::System::ReadOnlySpan_1<uint8_t>, false>(this, ___internal_method);
}
inline int32_t System::Text::UnicodeEncoding::GetMaxByteCount(int32_t  charCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, charCount);
}
inline int32_t System::Text::UnicodeEncoding::GetMaxCharCount(int32_t  byteCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, byteCount);
}
inline bool System::Text::UnicodeEncoding::Equals(::System::Object*  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    0
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, value);
}
inline int32_t System::Text::UnicodeEncoding::GetHashCode()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Text::UnicodeEncoding*>::get(),
                    2
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Text::UnicodeEncoding::UnicodeEncoding()   {
}
