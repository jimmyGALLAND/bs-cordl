#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataGoodCutsSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataGoodCutsSO_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO.GetValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(&::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::GetValue)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2689464;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x268948c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO* GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>());
}
inline void GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataGoodCutsSO::MultiplayerBadgeDataGoodCutsSO()   {
}
