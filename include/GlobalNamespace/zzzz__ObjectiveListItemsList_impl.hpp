#pragma once
// IWYU pragma private; include "GlobalNamespace/ObjectiveListItemsList.hpp"
#include "HMUI/zzzz__UIItemsList_1_impl.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItemsList_def.hpp"
#include "GlobalNamespace/zzzz__ObjectiveListItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ObjectiveListItemsList._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObjectiveListItemsList::*)()>(&::GlobalNamespace::ObjectiveListItemsList::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3a7b3c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveListItemsList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ObjectiveListItemsList* GlobalNamespace::ObjectiveListItemsList::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ObjectiveListItemsList*>());
}
inline void GlobalNamespace::ObjectiveListItemsList::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObjectiveListItemsList*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObjectiveListItemsList::ObjectiveListItemsList()   {
}
