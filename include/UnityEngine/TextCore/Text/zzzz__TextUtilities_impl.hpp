#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextUtilities_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.ToUpperFast
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<char16_t (*)(char16_t)>(&::UnityEngine::TextCore::Text::TextUtilities::ToUpperFast)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x48bc850;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "ToUpperFast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.GetHashCodeCaseInSensitive
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW)>(&::UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x48ba7e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "GetHashCodeCaseInSensitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TextCore::Text::TextUtilities.UintToString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Collections::Generic::List_1<uint32_t>*)>(&::UnityEngine::TextCore::Text::TextUtilities::UintToString)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x48bc8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "UintToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get()}
                    )));
    return ___internal_method;
  }
};
inline char16_t UnityEngine::TextCore::Text::TextUtilities::ToUpperFast(char16_t  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "ToUpperFast",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<char16_t, false>(nullptr, ___internal_method, c);
}
inline int32_t UnityEngine::TextCore::Text::TextUtilities::GetHashCodeCaseInSensitive(::StringW  s)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "GetHashCodeCaseInSensitive",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, s);
}
inline ::StringW UnityEngine::TextCore::Text::TextUtilities::UintToString(::System::Collections::Generic::List_1<uint32_t>*  unicodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TextCore::Text::TextUtilities*>::get(),
                        "UintToString",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<uint32_t>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, unicodes);
}
// Ctor Parameters []
constexpr ::UnityEngine::TextCore::Text::TextUtilities::TextUtilities()   {
}
