#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayServerFiniteStateMachineFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachineFactory_def.hpp"
#include "GlobalNamespace/zzzz__GameplayServerFiniteStateMachine_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameplayServerFiniteStateMachineFactory.Create
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::GameplayServerFiniteStateMachine* (*)(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams)>(&::GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x227f420;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachineFactory*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get()}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::GameplayServerFiniteStateMachine* GlobalNamespace::GameplayServerFiniteStateMachineFactory::Create(::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams  initParams)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameplayServerFiniteStateMachineFactory*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayServerFiniteStateMachine__InitParams>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayServerFiniteStateMachine*, false>(nullptr, ___internal_method, initParams);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameplayServerFiniteStateMachineFactory::GameplayServerFiniteStateMachineFactory()   {
}
