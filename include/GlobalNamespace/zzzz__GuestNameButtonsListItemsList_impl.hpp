#pragma once
// IWYU pragma private; include "GlobalNamespace/GuestNameButtonsListItemsList.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__GuestNameButtonsListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GuestNameButtonsListItemsList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GuestNameButtonsListItemsList::*)()>(&::GlobalNamespace::GuestNameButtonsListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3b72bb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItemsList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GuestNameButtonsListItemsList* GlobalNamespace::GuestNameButtonsListItemsList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GuestNameButtonsListItemsList*>());
}
inline void GlobalNamespace::GuestNameButtonsListItemsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GuestNameButtonsListItemsList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GuestNameButtonsListItemsList::GuestNameButtonsListItemsList()   {
}
