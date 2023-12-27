#pragma once
#include "System/Security/Principal/zzzz__IdentityReference_impl.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::StringW)>(
    &::System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x24773a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::_ctor)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x24778c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.CreateFromBinaryForm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(void*, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x24779ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "CreateFromBinaryForm", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.get_BinaryLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::get_BinaryLength)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2477b14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                               "get_BinaryLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::get_Value)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x2477b30;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::GetSidAuthority)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2477cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                               "GetSidAuthority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidSubAuthorityCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2477de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                               "GetSidSubAuthorityCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetSidSubAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Security::Principal::SecurityIdentifier::*)(uint8_t)>(
    &::System::Security::Principal::SecurityIdentifier::GetSidSubAuthority)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2477d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "GetSidSubAuthority",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.CompareTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::CompareTo)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2477e14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Principal::SecurityIdentifier::*)(::System::Object*)>(
    &::System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2477fec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Principal::SecurityIdentifier::*)(::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::Equals)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x2478050;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetBinaryForm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Principal::SecurityIdentifier::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t)>(
    &::System::Security::Principal::SecurityIdentifier::GetBinaryForm)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x24780f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "GetBinaryForm", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::GetHashCode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x24781c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Security::Principal::SecurityIdentifier::*)()>(
    &::System::Security::Principal::SecurityIdentifier::ToString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x24781e8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.Translate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::Principal::IdentityReference* (
    ::System::Security::Principal::SecurityIdentifier::*)(::System::Type*)>(&::System::Security::Principal::SecurityIdentifier::Translate)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x24781f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Security::Principal::SecurityIdentifier*, ::System::Security::Principal::SecurityIdentifier*)>(
    &::System::Security::Principal::SecurityIdentifier::op_Equality)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2477f84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.ParseSddlForm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<uint8_t, ::Array<uint8_t>*> (*)(::StringW)>(
    &::System::Security::Principal::SecurityIdentifier::ParseSddlForm)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x2477460;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "ParseSddlForm",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.TryParseAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint64_t>)>(&::System::Security::Principal::SecurityIdentifier::TryParseAuthority)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x24785a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "TryParseAuthority", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::SecurityIdentifier.TryParseSubAuthority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ByRef<uint32_t>)>(&::System::Security::Principal::SecurityIdentifier::TryParseSubAuthority)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2478678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "TryParseSubAuthority", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>"
constexpr System::Security::Principal::SecurityIdentifier::operator ::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*() noexcept {
  return static_cast<::System::IComparable_1<::System::Security::Principal::SecurityIdentifier*>*>(static_cast<void*>(this));
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& System::Security::Principal::SecurityIdentifier::__get_buffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buffer;
}
constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& System::Security::Principal::SecurityIdentifier::__get_buffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buffer;
}
constexpr void System::Security::Principal::SecurityIdentifier::__set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buffer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MaxBinaryLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MaxBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MaxBinaryLength() {
  return ::cordl_internals::getStaticField<int32_t, "MaxBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get>();
}
inline void System::Security::Principal::SecurityIdentifier::setStaticF_MinBinaryLength(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MinBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t System::Security::Principal::SecurityIdentifier::getStaticF_MinBinaryLength() {
  return ::cordl_internals::getStaticField<int32_t, "MinBinaryLength", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get>();
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::Principal::SecurityIdentifier::New_ctor(::StringW sddlForm) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::SecurityIdentifier*>(sddlForm));
}
inline void System::Security::Principal::SecurityIdentifier::_ctor(::StringW sddlForm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sddlForm);
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::Principal::SecurityIdentifier::New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Principal::SecurityIdentifier*>(binaryForm, offset));
}
inline void System::Security::Principal::SecurityIdentifier::_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline void System::Security::Principal::SecurityIdentifier::CreateFromBinaryForm(void* binaryForm, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "CreateFromBinaryForm", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, length);
}
inline int32_t System::Security::Principal::SecurityIdentifier::get_BinaryLength() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "get_BinaryLength", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::SecurityIdentifier::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "get_Value", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline uint64_t System::Security::Principal::SecurityIdentifier::GetSidAuthority() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "GetSidAuthority", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline uint8_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthorityCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "GetSidSubAuthorityCount", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline uint32_t System::Security::Principal::SecurityIdentifier::GetSidSubAuthority(uint8_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "GetSidSubAuthority",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method, index);
}
inline int32_t System::Security::Principal::SecurityIdentifier::CompareTo(::System::Security::Principal::SecurityIdentifier* sid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "CompareTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, sid);
}
inline bool System::Security::Principal::SecurityIdentifier::Equals(::System::Object* o) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool System::Security::Principal::SecurityIdentifier::Equals(::System::Security::Principal::SecurityIdentifier* sid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sid);
}
inline void System::Security::Principal::SecurityIdentifier::GetBinaryForm(::ArrayW<uint8_t, ::Array<uint8_t>*> binaryForm, int32_t offset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "GetBinaryForm", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, binaryForm, offset);
}
inline int32_t System::Security::Principal::SecurityIdentifier::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "GetHashCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::SecurityIdentifier::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                             "ToString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Security::Principal::IdentityReference* System::Security::Principal::SecurityIdentifier::Translate(::System::Type* targetType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "Translate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::IdentityReference*, false>(this, ___internal_method, targetType);
}
inline bool System::Security::Principal::SecurityIdentifier::op_Equality(::System::Security::Principal::SecurityIdentifier* left, ::System::Security::Principal::SecurityIdentifier* right) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "op_Equality", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::Principal::SecurityIdentifier*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, left, right);
}
inline ::ArrayW<uint8_t, ::Array<uint8_t>*> System::Security::Principal::SecurityIdentifier::ParseSddlForm(::StringW sddlForm) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "ParseSddlForm",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<uint8_t, ::Array<uint8_t>*>, false>(nullptr, ___internal_method, sddlForm);
}
inline bool System::Security::Principal::SecurityIdentifier::TryParseAuthority(::StringW s, ByRef<uint64_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "TryParseAuthority", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, result);
}
inline bool System::Security::Principal::SecurityIdentifier::TryParseSubAuthority(::StringW s, ByRef<uint32_t> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Principal::SecurityIdentifier*>::get(), "TryParseSubAuthority", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, s, result);
}
// Ctor Parameters []
constexpr ::System::Security::Principal::SecurityIdentifier::SecurityIdentifier() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
