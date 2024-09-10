#pragma once
// IWYU pragma private; include "GlobalNamespace/ResetPitchOnGameplayFinished.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ResetPitchOnGameplayFinished_def.hpp"
#include "GlobalNamespace/zzzz__AudioManagerSO_def.hpp"
#include "GlobalNamespace/zzzz__GameplayLevelSceneTransitionEvents_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)(::GlobalNamespace::GameplayLevelSceneTransitionEvents*, ::GlobalNamespace::AudioManagerSO*)>(&::GlobalNamespace::ResetPitchOnGameplayFinished::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3a4efbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.Finalize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(&::GlobalNamespace::ResetPitchOnGameplayFinished::Finalize)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x3a4f068;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                                  1
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetPitchOnGameplayFinished.HandleAnyGameplayLevelDidFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetPitchOnGameplayFinished::*)()>(&::GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3a4f16c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                        "HandleAnyGameplayLevelDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GameplayLevelSceneTransitionEvents*& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplayLevelSceneTransitionEvents;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayLevelSceneTransitionEvents*> const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__gameplayLevelSceneTransitionEvents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplayLevelSceneTransitionEvents;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__gameplayLevelSceneTransitionEvents(::GlobalNamespace::GameplayLevelSceneTransitionEvents*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayLevelSceneTransitionEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO>& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioManager;
}
constexpr ::UnityW<::GlobalNamespace::AudioManagerSO> const& GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_get__audioManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioManager;
}
constexpr void GlobalNamespace::ResetPitchOnGameplayFinished::__cordl_internal_set__audioManager(::UnityW<::GlobalNamespace::AudioManagerSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____audioManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::ResetPitchOnGameplayFinished* GlobalNamespace::ResetPitchOnGameplayFinished::New_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents*  gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO*  audioManager)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ResetPitchOnGameplayFinished*>(gameplayLevelSceneTransitionEvents, audioManager));
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::_ctor(::GlobalNamespace::GameplayLevelSceneTransitionEvents*  gameplayLevelSceneTransitionEvents, ::GlobalNamespace::AudioManagerSO*  audioManager)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayLevelSceneTransitionEvents*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::AudioManagerSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplayLevelSceneTransitionEvents, audioManager);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::Finalize()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                    1
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ResetPitchOnGameplayFinished::HandleAnyGameplayLevelDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetPitchOnGameplayFinished*>::get(),
                        "HandleAnyGameplayLevelDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ResetPitchOnGameplayFinished::ResetPitchOnGameplayFinished()   {
}
