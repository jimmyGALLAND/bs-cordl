#pragma once
// IWYU pragma private; include "HMUI/ItemForFocussedScrolling.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ItemForFocussedScrolling_def.hpp"
//  Writing Method size for method: ::HMUI::ItemForFocussedScrolling._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ItemForFocussedScrolling::*)()>(&::HMUI::ItemForFocussedScrolling::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x397696c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ItemForFocussedScrolling*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::HMUI::ItemForFocussedScrolling* HMUI::ItemForFocussedScrolling::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ItemForFocussedScrolling*>());
}
inline void HMUI::ItemForFocussedScrolling::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ItemForFocussedScrolling*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ItemForFocussedScrolling::ItemForFocussedScrolling()   {
}
