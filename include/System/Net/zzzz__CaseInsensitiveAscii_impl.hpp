#pragma once
// IWYU pragma private; include "System/Net/CaseInsensitiveAscii.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Net/zzzz__CaseInsensitiveAscii_def.hpp"
#include "System/Collections/zzzz__IComparer_def.hpp"
#include "System/Collections/zzzz__IEqualityComparer_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.GetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::System::Object*)>(&::System::Net::CaseInsensitiveAscii::GetHashCode)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4413394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.Compare
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::System::Object*, ::System::Object*)>(&::System::Net::CaseInsensitiveAscii::Compare)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x44134ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.FastGetHashCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Net::CaseInsensitiveAscii::*)(::StringW)>(&::System::Net::CaseInsensitiveAscii::FastGetHashCode)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x441361c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "FastGetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii.Equals
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::CaseInsensitiveAscii::*)(::System::Object*, ::System::Object*)>(&::System::Net::CaseInsensitiveAscii::Equals)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x441370c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::CaseInsensitiveAscii._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::CaseInsensitiveAscii::*)()>(&::System::Net::CaseInsensitiveAscii::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x441388c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::IEqualityComparer"
constexpr  System::Net::CaseInsensitiveAscii::operator ::System::Collections::IEqualityComparer*() noexcept {
return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEqualityComparer"
constexpr ::System::Collections::IEqualityComparer* System::Net::CaseInsensitiveAscii::i___System__Collections__IEqualityComparer() noexcept {
return static_cast<::System::Collections::IEqualityComparer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IComparer"
constexpr  System::Net::CaseInsensitiveAscii::operator ::System::Collections::IComparer*() noexcept {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IComparer"
constexpr ::System::Collections::IComparer* System::Net::CaseInsensitiveAscii::i___System__Collections__IComparer() noexcept {
return static_cast<::System::Collections::IComparer*>(static_cast<void*>(this));
}
inline void System::Net::CaseInsensitiveAscii::setStaticF_StaticInstance(::System::Net::CaseInsensitiveAscii*  value)  {
::cordl_internals::setStaticField<::System::Net::CaseInsensitiveAscii*, "StaticInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get>(std::forward<::System::Net::CaseInsensitiveAscii*>(value));
}
inline ::System::Net::CaseInsensitiveAscii* System::Net::CaseInsensitiveAscii::getStaticF_StaticInstance()  {
return ::cordl_internals::getStaticField<::System::Net::CaseInsensitiveAscii*, "StaticInstance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get>();
}
inline void System::Net::CaseInsensitiveAscii::setStaticF_AsciiToLower(::ArrayW<uint8_t,::Array<uint8_t>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "AsciiToLower", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get>(std::forward<::ArrayW<uint8_t,::Array<uint8_t>*>>(value));
}
inline ::ArrayW<uint8_t,::Array<uint8_t>*> System::Net::CaseInsensitiveAscii::getStaticF_AsciiToLower()  {
return ::cordl_internals::getStaticField<::ArrayW<uint8_t,::Array<uint8_t>*>, "AsciiToLower", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get>();
}
inline int32_t System::Net::CaseInsensitiveAscii::GetHashCode(::System::Object*  myObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "GetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, myObject);
}
inline int32_t System::Net::CaseInsensitiveAscii::Compare(::System::Object*  firstObject, ::System::Object*  secondObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "Compare",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, firstObject, secondObject);
}
inline int32_t System::Net::CaseInsensitiveAscii::FastGetHashCode(::StringW  myString)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "FastGetHashCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, myString);
}
inline bool System::Net::CaseInsensitiveAscii::Equals(::System::Object*  firstObject, ::System::Object*  secondObject)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        "Equals",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, firstObject, secondObject);
}
inline ::System::Net::CaseInsensitiveAscii* System::Net::CaseInsensitiveAscii::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::CaseInsensitiveAscii*>());
}
inline void System::Net::CaseInsensitiveAscii::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::CaseInsensitiveAscii*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Net::CaseInsensitiveAscii::CaseInsensitiveAscii()   {
}
