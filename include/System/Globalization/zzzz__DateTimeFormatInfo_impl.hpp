#pragma once
#include "System/Globalization/zzzz__DateTimeFormatFlags_impl.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__TokenType_impl.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/zzzz__IFormatProvider_def.hpp"
#include "System/Globalization/zzzz__CompareInfo_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatFlags_def.hpp"
#include "System/Globalization/zzzz__CultureData_def.hpp"
#include "System/zzzz__ICloneable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz____DTString_def.hpp"
#include "System/Globalization/zzzz__DateTimeStyles_def.hpp"
#include "System/Globalization/zzzz__CalendarId_def.hpp"
#include "System/Globalization/zzzz__DateTimeFormatInfo_def.hpp"
#include "System/Globalization/zzzz__Calendar_def.hpp"
#include "System/zzzz__DayOfWeek_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__TokenType_def.hpp"
#include "System/Globalization/zzzz__MonthNameStyles_def.hpp"
//  Writing Method size for method: ::System::Globalization::__DateTimeFormatInfo__TokenHashValue._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::__DateTimeFormatInfo__TokenHashValue::*)(::StringW, ::System::TokenType, int32_t)>(
    &::System::Globalization::__DateTimeFormatInfo__TokenHashValue::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x25538a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenString;
}
constexpr ::StringW const& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenString;
}
constexpr void System::Globalization::__DateTimeFormatInfo__TokenHashValue::__set_tokenString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___tokenString)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::TokenType& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenType;
}
constexpr ::System::TokenType const& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenType;
}
constexpr void System::Globalization::__DateTimeFormatInfo__TokenHashValue::__set_tokenType(::System::TokenType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___tokenType = value;
}
constexpr int32_t& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenValue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenValue;
}
constexpr int32_t const& System::Globalization::__DateTimeFormatInfo__TokenHashValue::__get_tokenValue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___tokenValue;
}
constexpr void System::Globalization::__DateTimeFormatInfo__TokenHashValue::__set_tokenValue(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___tokenValue = value;
}
inline ::System::Globalization::__DateTimeFormatInfo__TokenHashValue* System::Globalization::__DateTimeFormatInfo__TokenHashValue::New_ctor(::StringW tokenString, ::System::TokenType tokenType,
                                                                                                                                            int32_t tokenValue) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>(tokenString, tokenType, tokenValue));
}
inline void System::Globalization::__DateTimeFormatInfo__TokenHashValue::_ctor(::StringW tokenString, ::System::TokenType tokenType, int32_t tokenValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tokenString, tokenType, tokenValue);
}
// Ctor Parameters []
constexpr ::System::Globalization::__DateTimeFormatInfo__TokenHashValue::__DateTimeFormatInfo__TokenHashValue() {}
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CultureName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_CultureName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254ded4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_CultureName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_Culture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CultureInfo* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_Culture)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254df00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_Culture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LanguageName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_LanguageName)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254df84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_LanguageName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x254dfb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetAbbreviatedDayOfWeekNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedDayOfWeekNamesCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x254dfc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetAbbreviatedDayOfWeekNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x254e010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetDayOfWeekNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetDayOfWeekNamesCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x254e024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetDayOfWeekNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x254e070;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetAbbreviatedMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetAbbreviatedMonthNamesCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x254e084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetAbbreviatedMonthNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetMonthNames)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x254e0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthNamesCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x254e0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetMonthNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x254e130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(
    ::System::Globalization::CultureData*, ::System::Globalization::Calendar*)>(&::System::Globalization::DateTimeFormatInfo::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x254e320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InitializeOverridableProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::System::Globalization::CultureData*, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x254e204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InitializeOverridableProperties", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_InvariantInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_InvariantInfo)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x254e610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_InvariantInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CurrentInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(&::System::Globalization::DateTimeFormatInfo::get_CurrentInfo)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x254e6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_CurrentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)(::System::IFormatProvider*)>(
    &::System::Globalization::DateTimeFormatInfo::GetInstance)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x254e7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetFormat
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Globalization::DateTimeFormatInfo::*)(::System::Type*)>(
    &::System::Globalization::DateTimeFormatInfo::GetFormat)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x254e9ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetFormat", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.Clone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::Clone)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x254ea44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "Clone",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AMDesignator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AMDesignator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254eb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AMDesignator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_Calendar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::Calendar* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_Calendar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x254eb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_Calendar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.set_Calendar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(::System::Globalization::Calendar*)>(
    &::System::Globalization::DateTimeFormatInfo::set_Calendar)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x254e364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "set_Calendar", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_OptionalCalendars
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> (
    ::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::get_OptionalCalendars)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x254ec1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_OptionalCalendars", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_EraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_EraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254ec5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_EraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetEraName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetEraName)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x254ecb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetEraName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedEraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254ed8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AbbreviatedEraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedEraName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x254ede0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedEraName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedEnglishEraNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254eecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AbbreviatedEnglishEraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DateSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_DateSeparator)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254ef20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_DateSeparator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullDateTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x254ef74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_FullDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LongDatePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_LongDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254efe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_LongDatePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_LongTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_LongTimePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254f024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_LongTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthDayPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_MonthDayPattern)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254f0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_MonthDayPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_PMDesignator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_PMDesignator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254f138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_PMDesignator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_RFC1123Pattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x254f164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_RFC1123Pattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_ShortDatePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_ShortDatePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254f1a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_ShortDatePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_ShortTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_ShortTimePattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254f234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_ShortTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_SortableDateTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x254f2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_SortableDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_GeneralShortTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x254f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_GeneralShortTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_GeneralLongTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x254f354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_GeneralLongTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DateTimeOffsetPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x254f3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_DateTimeOffsetPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_TimeSeparator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_TimeSeparator)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x254f564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_TimeSeparator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UniversalSortableDateTimePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x254f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UniversalSortableDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_YearMonthPattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_YearMonthPattern)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x254f5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_YearMonthPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedDayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254f660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AbbreviatedDayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_DayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_DayNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254f6e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_DayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AbbreviatedMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254f768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AbbreviatedMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_MonthNames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x254f7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_MonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasSpacesInMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x254f870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_HasSpacesInMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasSpacesInDayNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x254f8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_HasSpacesInDayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetMonthName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t, ::System::Globalization::MonthNameStyles, bool)>(
    &::System::Globalization::DateTimeFormatInfo::internalGetMonthName)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x254f8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "internalGetMonthName", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::MonthNameStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetGenitiveMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)(bool)>(
    &::System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x254fa44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "internalGetGenitiveMonthNames",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.internalGetLeapYearMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254fad8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "internalGetLeapYearMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedDayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(::System::DayOfWeek)>(
    &::System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x254fb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedDayName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetCombinedPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(
    ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW)>(&::System::Globalization::DateTimeFormatInfo::GetCombinedPatterns)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x254fc2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetCombinedPatterns", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAllDateTimePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)(char16_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x254fd98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAllDateTimePatterns",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetDayName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(::System::DayOfWeek)>(
    &::System::Globalization::DateTimeFormatInfo::GetDayName)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2550358;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetDayName", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetAbbreviatedMonthName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2550458;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedMonthName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetMonthName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)(int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::GetMonthName)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x255055c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetMonthName",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetMergedPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (*)(::ArrayW<::StringW, ::Array<::StringW>*>, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfo::GetMergedPatterns)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2550660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetMergedPatterns", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllYearMonthPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25502e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AllYearMonthPatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllShortDatePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2550114;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AllShortDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllShortTimePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x25501fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AllShortTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllLongDatePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2550188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AllLongDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_AllLongTimePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2550270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_AllLongTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedYearMonthPatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254f60c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UnclonedYearMonthPatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedShortDatePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254f1e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UnclonedShortDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedLongDatePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x254f060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UnclonedLongDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedShortTimePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x254f270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UnclonedShortTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_UnclonedLongTimePatterns
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x254f0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_UnclonedLongTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_IsReadOnly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_IsReadOnly)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x254eb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_MonthGenitiveNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW, ::Array<::StringW>*> (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2550844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_MonthGenitiveNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullTimeSpanPositivePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x25508c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_FullTimeSpanPositivePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FullTimeSpanNegativePattern
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2550998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_FullTimeSpanNegativePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_CompareInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::CompareInfo* (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_CompareInfo)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2550a00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_CompareInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.ValidateStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Globalization::DateTimeStyles, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfo::ValidateStyles)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2550a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "ValidateStyles", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_FormatFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatFlags (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_FormatFlags)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x254f898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_FormatFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InitializeFormatFlags
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatFlags (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::InitializeFormatFlags)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2550b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "InitializeFormatFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasForceTwoDigitYears
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2550db8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_HasForceTwoDigitYears", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.get_HasYearMonthAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2550dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "get_HasYearMonthAdjustment", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.YearMonthAdjustment
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(ByRef<int32_t>, ByRef<int32_t>, bool)>(
    &::System::Globalization::DateTimeFormatInfo::YearMonthAdjustment)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2550e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "YearMonthAdjustment", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetJapaneseCalendarDTFI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(
    &::System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x2550f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "GetJapaneseCalendarDTFI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.GetTaiwanCalendarDTFI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Globalization::DateTimeFormatInfo* (*)()>(
    &::System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x25510dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "GetTaiwanCalendarDTFI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.ClearTokenHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)()>(
    &::System::Globalization::DateTimeFormatInfo::ClearTokenHashTable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x254ec4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "ClearTokenHashTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.CreateTokenHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> (
        ::System::Globalization::DateTimeFormatInfo::*)()>(&::System::Globalization::DateTimeFormatInfo::CreateTokenHashTable)> {
  constexpr static std::size_t size = 0x8f0;
  constexpr static std::size_t addrs = 0x2551270;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                               "CreateTokenHashTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.PopulateSpecialTokenHashTable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>, ByRef<bool>)>(
    &::System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x2551e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "PopulateSpecialTokenHashTable", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsJapaneseCalendar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Globalization::Calendar*)>(&::System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x2552b20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsJapaneseCalendar", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.AddMonthNames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>, ::StringW)>(
    &::System::Globalization::DateTimeFormatInfo::AddMonthNames)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x2552738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "AddMonthNames", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.TryParseHebrewNumber
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::System::__DTString>, ByRef<bool>, ByRef<int32_t>)>(
    &::System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2552c5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "TryParseHebrewNumber", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsHebrewChar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(char16_t)>(&::System::Globalization::DateTimeFormatInfo::IsHebrewChar)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2552ffc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsHebrewChar",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.IsAllowedJapaneseTokenFollowedByNonSpaceLetter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::StringW, char16_t)>(
    &::System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x2553010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsAllowedJapaneseTokenFollowedByNonSpaceLetter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.Tokenize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(
    ::System::TokenType, ByRef<::System::TokenType>, ByRef<int32_t>, ByRef<::System::__DTString>)>(&::System::Globalization::DateTimeFormatInfo::Tokenize)> {
  constexpr static std::size_t size = 0x5c8;
  constexpr static std::size_t addrs = 0x2553118;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "Tokenize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TokenType>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InsertAtCurrentHashNode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>, ::StringW, char16_t, ::System::TokenType,
    int32_t, int32_t, int32_t, int32_t)>(&::System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x25536e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InsertAtCurrentHashNode", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.InsertHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Globalization::DateTimeFormatInfo::*)(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>, ::StringW, ::System::TokenType, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::InsertHash)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x2551b60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InsertHash", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Globalization::DateTimeFormatInfo.CompareStringIgnoreCaseOptimized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Globalization::DateTimeFormatInfo::*)(::StringW, int32_t, int32_t, ::StringW, int32_t, int32_t)>(
    &::System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x25538dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "CompareStringIgnoreCaseOptimized", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IFormatProvider"
constexpr System::Globalization::DateTimeFormatInfo::operator ::System::IFormatProvider*() noexcept {
  return static_cast<::System::IFormatProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::ICloneable"
constexpr System::Globalization::DateTimeFormatInfo::operator ::System::ICloneable*() noexcept {
  return static_cast<::System::ICloneable*>(static_cast<void*>(this));
}
constexpr ::System::Globalization::CultureData*& System::Globalization::DateTimeFormatInfo::__get__cultureData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cultureData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureData*> const& System::Globalization::DateTimeFormatInfo::__get__cultureData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cultureData;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__cultureData(::System::Globalization::CultureData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cultureData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____name;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get__langName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____langName;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get__langName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____langName;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__langName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____langName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CompareInfo*& System::Globalization::DateTimeFormatInfo::__get__compareInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compareInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CompareInfo*> const& System::Globalization::DateTimeFormatInfo::__get__compareInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____compareInfo;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__compareInfo(::System::Globalization::CompareInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____compareInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::CultureInfo*& System::Globalization::DateTimeFormatInfo::__get__cultureInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cultureInfo;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::CultureInfo*> const& System::Globalization::DateTimeFormatInfo::__get__cultureInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cultureInfo;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__cultureInfo(::System::Globalization::CultureInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cultureInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_amDesignator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___amDesignator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_amDesignator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___amDesignator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_amDesignator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___amDesignator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_pmDesignator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pmDesignator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_pmDesignator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___pmDesignator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_pmDesignator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___pmDesignator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_dateSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dateSeparator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_dateSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dateSeparator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dateSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dateSeparator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_generalShortTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generalShortTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_generalShortTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generalShortTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_generalShortTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generalShortTimePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_generalLongTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generalLongTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_generalLongTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___generalLongTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_generalLongTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___generalLongTimePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_timeSeparator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___timeSeparator;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_timeSeparator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___timeSeparator;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_timeSeparator(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___timeSeparator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_monthDayPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monthDayPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_monthDayPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monthDayPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_monthDayPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___monthDayPattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_dateTimeOffsetPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dateTimeOffsetPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_dateTimeOffsetPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dateTimeOffsetPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dateTimeOffsetPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dateTimeOffsetPattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Globalization::Calendar*& System::Globalization::DateTimeFormatInfo::__get_calendar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___calendar;
}
constexpr ::cordl_internals::to_const_pointer<::System::Globalization::Calendar*> const& System::Globalization::DateTimeFormatInfo::__get_calendar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___calendar;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_calendar(::System::Globalization::Calendar* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___calendar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& System::Globalization::DateTimeFormatInfo::__get_firstDayOfWeek() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstDayOfWeek;
}
constexpr int32_t const& System::Globalization::DateTimeFormatInfo::__get_firstDayOfWeek() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___firstDayOfWeek;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_firstDayOfWeek(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___firstDayOfWeek = value;
}
constexpr int32_t& System::Globalization::DateTimeFormatInfo::__get_calendarWeekRule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___calendarWeekRule;
}
constexpr int32_t const& System::Globalization::DateTimeFormatInfo::__get_calendarWeekRule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___calendarWeekRule;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_calendarWeekRule(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___calendarWeekRule = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_fullDateTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fullDateTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_fullDateTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___fullDateTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_fullDateTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fullDateTimePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_abbreviatedDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abbreviatedDayNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_abbreviatedDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abbreviatedDayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_abbreviatedDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___abbreviatedDayNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_m_superShortDayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_superShortDayNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_m_superShortDayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_superShortDayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_superShortDayNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_superShortDayNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_dayNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dayNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_dayNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dayNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_dayNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dayNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_abbreviatedMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abbreviatedMonthNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_abbreviatedMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___abbreviatedMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_abbreviatedMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___abbreviatedMonthNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_monthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monthNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_monthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___monthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_monthNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___monthNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_genitiveMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___genitiveMonthNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_genitiveMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___genitiveMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_genitiveMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___genitiveMonthNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_m_genitiveAbbreviatedMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_genitiveAbbreviatedMonthNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_m_genitiveAbbreviatedMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_genitiveAbbreviatedMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_genitiveAbbreviatedMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_genitiveAbbreviatedMonthNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_leapYearMonthNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leapYearMonthNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_leapYearMonthNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___leapYearMonthNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_leapYearMonthNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___leapYearMonthNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_longDatePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longDatePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_longDatePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longDatePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_longDatePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___longDatePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_shortDatePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shortDatePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_shortDatePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shortDatePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_shortDatePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shortDatePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_yearMonthPattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yearMonthPattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_yearMonthPattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___yearMonthPattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_yearMonthPattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___yearMonthPattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_longTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_longTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___longTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_longTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___longTimePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get_shortTimePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shortTimePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get_shortTimePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shortTimePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_shortTimePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___shortTimePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_allYearMonthPatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allYearMonthPatterns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_allYearMonthPatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allYearMonthPatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allYearMonthPatterns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allYearMonthPatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_allShortDatePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allShortDatePatterns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_allShortDatePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allShortDatePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allShortDatePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allShortDatePatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_allLongDatePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allLongDatePatterns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_allLongDatePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allLongDatePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allLongDatePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allLongDatePatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_allShortTimePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allShortTimePatterns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_allShortTimePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allShortTimePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allShortTimePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allShortTimePatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_allLongTimePatterns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allLongTimePatterns;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_allLongTimePatterns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___allLongTimePatterns;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_allLongTimePatterns(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allLongTimePatterns)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_m_eraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_eraNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_m_eraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_eraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_eraNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_eraNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_m_abbrevEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_abbrevEraNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_m_abbrevEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_abbrevEraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_abbrevEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_abbrevEraNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& System::Globalization::DateTimeFormatInfo::__get_m_abbrevEnglishEraNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_abbrevEnglishEraNames;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& System::Globalization::DateTimeFormatInfo::__get_m_abbrevEnglishEraNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_abbrevEnglishEraNames;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_m_abbrevEnglishEraNames(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_abbrevEnglishEraNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*>& System::Globalization::DateTimeFormatInfo::__get_optionalCalendars() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___optionalCalendars;
}
constexpr ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> const& System::Globalization::DateTimeFormatInfo::__get_optionalCalendars() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___optionalCalendars;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_optionalCalendars(::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___optionalCalendars)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Globalization::DateTimeFormatInfo::__get__isReadOnly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isReadOnly;
}
constexpr bool const& System::Globalization::DateTimeFormatInfo::__get__isReadOnly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isReadOnly;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__isReadOnly(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isReadOnly = value;
}
constexpr ::System::Globalization::DateTimeFormatFlags& System::Globalization::DateTimeFormatInfo::__get_formatFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___formatFlags;
}
constexpr ::System::Globalization::DateTimeFormatFlags const& System::Globalization::DateTimeFormatInfo::__get_formatFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___formatFlags;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set_formatFlags(::System::Globalization::DateTimeFormatFlags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___formatFlags = value;
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanPositivePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fullTimeSpanPositivePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanPositivePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fullTimeSpanPositivePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__fullTimeSpanPositivePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullTimeSpanPositivePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanNegativePattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fullTimeSpanNegativePattern;
}
constexpr ::StringW const& System::Globalization::DateTimeFormatInfo::__get__fullTimeSpanNegativePattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fullTimeSpanNegativePattern;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__fullTimeSpanNegativePattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fullTimeSpanNegativePattern)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>&
System::Globalization::DateTimeFormatInfo::__get__dtfiTokenHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dtfiTokenHash;
}
constexpr ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> const&
System::Globalization::DateTimeFormatInfo::__get__dtfiTokenHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____dtfiTokenHash;
}
constexpr void System::Globalization::DateTimeFormatInfo::__set__dtfiTokenHash(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dtfiTokenHash)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_invariantInfo(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_invariantInfo",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_invariantInfo() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_invariantInfo",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_monthSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_monthSpaces", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>(
      std::forward<::ArrayW<char16_t, ::Array<char16_t>*>>(value));
}
inline ::ArrayW<char16_t, ::Array<char16_t>*> System::Globalization::DateTimeFormatInfo::getStaticF_s_monthSpaces() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t, ::Array<char16_t>*>, "s_monthSpaces",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_jajpDTFI(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_jajpDTFI",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_jajpDTFI() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_jajpDTFI",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>();
}
inline void System::Globalization::DateTimeFormatInfo::setStaticF_s_zhtwDTFI(::System::Globalization::DateTimeFormatInfo* value) {
  ::cordl_internals::setStaticField<::System::Globalization::DateTimeFormatInfo*, "s_zhtwDTFI",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>(
      std::forward<::System::Globalization::DateTimeFormatInfo*>(value));
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::getStaticF_s_zhtwDTFI() {
  return ::cordl_internals::getStaticField<::System::Globalization::DateTimeFormatInfo*, "s_zhtwDTFI",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get>();
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_CultureName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_CultureName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::CultureInfo* System::Globalization::DateTimeFormatInfo::get_Culture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "get_Culture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CultureInfo*, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LanguageName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_LanguageName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetAbbreviatedDayOfWeekNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedDayOfWeekNamesCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetAbbreviatedDayOfWeekNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetDayOfWeekNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetDayOfWeekNamesCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetDayOfWeekNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetAbbreviatedMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetAbbreviatedMonthNamesCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetAbbreviatedMonthNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetMonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetMonthNamesCore() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetMonthNamesCore", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::DateTimeFormatInfo*>());
}
inline void System::Globalization::DateTimeFormatInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::New_ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Globalization::DateTimeFormatInfo*>(cultureData, cal));
}
inline void System::Globalization::DateTimeFormatInfo::_ctor(::System::Globalization::CultureData* cultureData, ::System::Globalization::Calendar* cal) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureData*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cultureData, cal);
}
inline void System::Globalization::DateTimeFormatInfo::InitializeOverridableProperties(::System::Globalization::CultureData* cultureData, int32_t calendarId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InitializeOverridableProperties", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cultureData, calendarId);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::get_InvariantInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_InvariantInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::get_CurrentInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_CurrentInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetInstance(::System::IFormatProvider* provider) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetInstance", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IFormatProvider*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(nullptr, ___internal_method, provider);
}
inline ::System::Object* System::Globalization::DateTimeFormatInfo::GetFormat(::System::Type* formatType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetFormat", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, formatType);
}
inline ::System::Object* System::Globalization::DateTimeFormatInfo::Clone() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "Clone",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_AMDesignator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AMDesignator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::Calendar* System::Globalization::DateTimeFormatInfo::get_Calendar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_Calendar", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::Calendar*, false>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::set_Calendar(::System::Globalization::Calendar* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "set_Calendar", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*> System::Globalization::DateTimeFormatInfo::get_OptionalCalendars() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_OptionalCalendars", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::CalendarId, ::Array<::System::Globalization::CalendarId>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_EraNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_EraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetEraName(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetEraName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, era);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEraNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AbbreviatedEraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedEraName(int32_t era) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedEraName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, era);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AbbreviatedEnglishEraNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AbbreviatedEnglishEraNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_DateSeparator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_DateSeparator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullDateTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_FullDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LongDatePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_LongDatePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_LongTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_LongTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_MonthDayPattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_MonthDayPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_PMDesignator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_PMDesignator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_RFC1123Pattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_RFC1123Pattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_ShortDatePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_ShortDatePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_ShortTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_ShortTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_SortableDateTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_SortableDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralShortTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_GeneralShortTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_GeneralLongTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_GeneralLongTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_DateTimeOffsetPattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_DateTimeOffsetPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_TimeSeparator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_TimeSeparator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_UniversalSortableDateTimePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UniversalSortableDateTimePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_YearMonthPattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_YearMonthPattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AbbreviatedDayNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AbbreviatedDayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_DayNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_DayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AbbreviatedMonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AbbreviatedMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_MonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_MonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInMonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_HasSpacesInMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasSpacesInDayNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_HasSpacesInDayNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::internalGetMonthName(int32_t month, ::System::Globalization::MonthNameStyles style, bool abbreviated) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "internalGetMonthName", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::MonthNameStyles>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, month, style, abbreviated);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetGenitiveMonthNames(bool abbreviated) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "internalGetGenitiveMonthNames",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, abbreviated);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::internalGetLeapYearMonthNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "internalGetLeapYearMonthNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedDayName(::System::DayOfWeek dayofweek) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedDayName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, dayofweek);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::GetCombinedPatterns(::ArrayW<::StringW, ::Array<::StringW>*> patterns1,
                                                                                                               ::ArrayW<::StringW, ::Array<::StringW>*> patterns2, ::StringW connectString) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetCombinedPatterns", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, patterns1, patterns2, connectString);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::GetAllDateTimePatterns(char16_t format) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAllDateTimePatterns",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method, format);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetDayName(::System::DayOfWeek dayofweek) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetDayName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::DayOfWeek>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, dayofweek);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetAbbreviatedMonthName(int32_t month) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetAbbreviatedMonthName",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, month);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::GetMonthName(int32_t month) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetMonthName", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, month);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::GetMergedPatterns(::ArrayW<::StringW, ::Array<::StringW>*> patterns, ::StringW defaultPattern) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "GetMergedPatterns", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(nullptr, ___internal_method, patterns, defaultPattern);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AllYearMonthPatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AllYearMonthPatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AllShortDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AllShortDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AllShortTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AllShortTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AllLongDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AllLongDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_AllLongTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_AllLongTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_UnclonedYearMonthPatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UnclonedYearMonthPatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_UnclonedShortDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UnclonedShortDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_UnclonedLongDatePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UnclonedLongDatePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_UnclonedShortTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UnclonedShortTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_UnclonedLongTimePatterns() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_UnclonedLongTimePatterns", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_IsReadOnly() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_IsReadOnly", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::ArrayW<::StringW, ::Array<::StringW>*> System::Globalization::DateTimeFormatInfo::get_MonthGenitiveNames() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_MonthGenitiveNames", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW, ::Array<::StringW>*>, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanPositivePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_FullTimeSpanPositivePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW System::Globalization::DateTimeFormatInfo::get_FullTimeSpanNegativePattern() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_FullTimeSpanNegativePattern", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Globalization::CompareInfo* System::Globalization::DateTimeFormatInfo::get_CompareInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_CompareInfo", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::CompareInfo*, false>(this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::ValidateStyles(::System::Globalization::DateTimeStyles style, ::StringW parameterName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "ValidateStyles", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::DateTimeStyles>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, style, parameterName);
}
inline ::System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::get_FormatFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_FormatFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatFlags, false>(this, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatFlags System::Globalization::DateTimeFormatInfo::InitializeFormatFlags() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "InitializeFormatFlags", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatFlags, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasForceTwoDigitYears() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_HasForceTwoDigitYears", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::get_HasYearMonthAdjustment() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "get_HasYearMonthAdjustment", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Globalization::DateTimeFormatInfo::YearMonthAdjustment(ByRef<int32_t> year, ByRef<int32_t> month, bool parsedMonthName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "YearMonthAdjustment", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, year, month, parsedMonthName);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetJapaneseCalendarDTFI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "GetJapaneseCalendarDTFI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(nullptr, ___internal_method);
}
inline ::System::Globalization::DateTimeFormatInfo* System::Globalization::DateTimeFormatInfo::GetTaiwanCalendarDTFI() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "GetTaiwanCalendarDTFI", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Globalization::DateTimeFormatInfo*, false>(nullptr, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::ClearTokenHashTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "ClearTokenHashTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>
System::Globalization::DateTimeFormatInfo::CreateTokenHashTable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(),
                                                                             "CreateTokenHashTable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>, false>(
      this, ___internal_method);
}
inline void System::Globalization::DateTimeFormatInfo::PopulateSpecialTokenHashTable(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> temp, ByRef<bool> useDateSepAsIgnorableSymbol) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "PopulateSpecialTokenHashTable", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, temp, useDateSepAsIgnorableSymbol);
}
inline bool System::Globalization::DateTimeFormatInfo::IsJapaneseCalendar(::System::Globalization::Calendar* calendar) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsJapaneseCalendar", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::Calendar*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, calendar);
}
inline void System::Globalization::DateTimeFormatInfo::AddMonthNames(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> temp, ::StringW monthPostfix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "AddMonthNames", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, temp, monthPostfix);
}
inline bool System::Globalization::DateTimeFormatInfo::TryParseHebrewNumber(ByRef<::System::__DTString> str, ByRef<bool> badFormat, ByRef<int32_t> number) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "TryParseHebrewNumber", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, badFormat, number);
}
inline bool System::Globalization::DateTimeFormatInfo::IsHebrewChar(char16_t ch) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsHebrewChar", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, ch);
}
inline bool System::Globalization::DateTimeFormatInfo::IsAllowedJapaneseTokenFollowedByNonSpaceLetter(::StringW tokenString, char16_t nextCh) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "IsAllowedJapaneseTokenFollowedByNonSpaceLetter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, tokenString, nextCh);
}
inline bool System::Globalization::DateTimeFormatInfo::Tokenize(::System::TokenType TokenMask, ByRef<::System::TokenType> tokenType, ByRef<int32_t> tokenValue, ByRef<::System::__DTString> str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "Tokenize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::TokenType>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<int32_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::System::__DTString>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, TokenMask, tokenType, tokenValue, str);
}
inline void System::Globalization::DateTimeFormatInfo::InsertAtCurrentHashNode(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> hashTable, ::StringW str, char16_t ch,
    ::System::TokenType tokenType, int32_t tokenValue, int32_t pos, int32_t hashcode, int32_t hashProbe) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InsertAtCurrentHashNode", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashTable, str, ch, tokenType, tokenValue, pos, hashcode, hashProbe);
}
inline void System::Globalization::DateTimeFormatInfo::InsertHash(
    ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*> hashTable, ::StringW str,
    ::System::TokenType tokenType, int32_t tokenValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "InsertHash", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                            ::ArrayW<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*, ::Array<::System::Globalization::__DateTimeFormatInfo__TokenHashValue*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::TokenType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hashTable, str, tokenType, tokenValue);
}
inline bool System::Globalization::DateTimeFormatInfo::CompareStringIgnoreCaseOptimized(::StringW string1, int32_t offset1, int32_t length1, ::StringW string2, int32_t offset2, int32_t length2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Globalization::DateTimeFormatInfo*>::get(), "CompareStringIgnoreCaseOptimized", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, string1, offset1, length1, string2, offset2, length2);
}
// Ctor Parameters []
constexpr ::System::Globalization::DateTimeFormatInfo::DateTimeFormatInfo() {}
constexpr ::System::Globalization::DateTimeStyles System::Globalization::DateTimeFormatInfo::InvalidDateTimeStyles{ static_cast<int32_t>(0xffffff00) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
