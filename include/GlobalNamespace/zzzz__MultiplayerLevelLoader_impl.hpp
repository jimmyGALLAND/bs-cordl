#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__ILevelGameplaySetupData_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelLoader_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "Zenject/zzzz__ITickable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState()   {
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::NotLoading{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::LoadingBeatmap{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState::WaitingForCountdown{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::*)()>(&::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x3b78fa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21.SetStateMachine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b79470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr  GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine()  {
return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine*  stateMachine)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21>::get(),
                        "SetStateMachine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::MultiplayerLevelLoader*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "gameplaySetupData", ty: "::GlobalNamespace::ILevelGameplaySetupData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21(int32_t  __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>  __t__builder, ::GlobalNamespace::MultiplayerLevelLoader*  __4__this, ::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::BeatmapLevelDataVersion>  __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>  __u__2) noexcept  {
this->__1__state = __1__state;
this->__t__builder = __t__builder;
this->__4__this = __4__this;
this->gameplaySetupData = gameplaySetupData;
this->__u__1 = __u__1;
this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21::__MultiplayerLevelLoader___LoadBeatmapLevelDataAsync_d__21()   {
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_stillDownloadingSongEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b78940;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "add_stillDownloadingSongEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_stillDownloadingSongEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b789dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "remove_stillDownloadingSongEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.add_countdownFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b78a78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "add_countdownFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.remove_countdownFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*)>(&::GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3b78b28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "remove_countdownFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.LoadLevel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(::GlobalNamespace::ILevelGameplaySetupData*, int64_t)>(&::GlobalNamespace::MultiplayerLevelLoader::LoadLevel)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3b78bd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "LoadLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.SetNewStartTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)(int64_t)>(&::GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b78d60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "SetNewStartTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.ClearLoading
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::ClearLoading)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b78d68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "ClearLoading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.Tick
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::Tick)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x3b78d9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader.LoadBeatmapLevelDataAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* (::GlobalNamespace::MultiplayerLevelLoader::*)(::GlobalNamespace::ILevelGameplaySetupData*)>(&::GlobalNamespace::MultiplayerLevelLoader::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x3b78c68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "LoadBeatmapLevelDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelLoader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerLevelLoader::*)()>(&::GlobalNamespace::MultiplayerLevelLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b78f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Zenject::ITickable"
constexpr  GlobalNamespace::MultiplayerLevelLoader::operator ::Zenject::ITickable*() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::ITickable"
constexpr ::Zenject::ITickable* GlobalNamespace::MultiplayerLevelLoader::i___Zenject__ITickable() noexcept {
return static_cast<::Zenject::ITickable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__multiplayerSessionManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__multiplayerSessionManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelsModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelsModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsModel;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__beatmapLevelsModel(::GlobalNamespace::BeatmapLevelsModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelsEntitlementModel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsEntitlementModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsEntitlementModel*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelsEntitlementModel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelsEntitlementModel;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__beatmapLevelsEntitlementModel(::GlobalNamespace::BeatmapLevelsEntitlementModel*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelsEntitlementModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get_stillDownloadingSongEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stillDownloadingSongEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get_stillDownloadingSongEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stillDownloadingSongEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set_stillDownloadingSongEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stillDownloadingSongEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get_countdownFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get_countdownFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___countdownFinishedEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___countdownFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__loaderState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loaderState;
}
constexpr ::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__loaderState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loaderState;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__loaderState(::GlobalNamespace::__MultiplayerLevelLoader__MultiplayerBeatmapLoaderState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____loaderState = value;
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__getBeatmapCancellationTokenSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBeatmapCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__getBeatmapCancellationTokenSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBeatmapCancellationTokenSource;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__getBeatmapCancellationTokenSource(::System::Threading::CancellationTokenSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getBeatmapCancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__getBeatmapLevelResultTask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBeatmapLevelResultTask;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__getBeatmapLevelResultTask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____getBeatmapLevelResultTask;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__getBeatmapLevelResultTask(::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____getBeatmapLevelResultTask)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelGameplaySetupData*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__gameplaySetupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplaySetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelGameplaySetupData*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__gameplaySetupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplaySetupData;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__gameplaySetupData(::GlobalNamespace::ILevelGameplaySetupData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplaySetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelData*& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelData*> const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__beatmapLevelData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapLevelData;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__beatmapLevelData(::GlobalNamespace::IBeatmapLevelData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapLevelData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__startTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr int64_t const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__startTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startTime;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__startTime(int64_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startTime = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__stillDownloadingCalled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stillDownloadingCalled;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_get__stillDownloadingCalled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stillDownloadingCalled;
}
constexpr void GlobalNamespace::MultiplayerLevelLoader::__cordl_internal_set__stillDownloadingCalled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stillDownloadingCalled = value;
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_stillDownloadingSongEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "add_stillDownloadingSongEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_stillDownloadingSongEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "remove_stillDownloadingSongEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::add_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "add_countdownFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::remove_countdownFinishedEvent(::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "remove_countdownFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::GlobalNamespace::ILevelGameplaySetupData*,::GlobalNamespace::IBeatmapLevelData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelLoader::LoadLevel(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData, int64_t  initialStartTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "LoadLevel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameplaySetupData, initialStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::SetNewStartTime(int64_t  newStartTime)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "SetNewStartTime",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newStartTime);
}
inline void GlobalNamespace::MultiplayerLevelLoader::ClearLoading()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "ClearLoading",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelLoader::Tick()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "Tick",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* GlobalNamespace::MultiplayerLevelLoader::LoadBeatmapLevelDataAsync(::GlobalNamespace::ILevelGameplaySetupData*  gameplaySetupData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        "LoadBeatmapLevelDataAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ILevelGameplaySetupData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*, false>(this, ___internal_method, gameplaySetupData);
}
inline ::GlobalNamespace::MultiplayerLevelLoader* GlobalNamespace::MultiplayerLevelLoader::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerLevelLoader*>());
}
inline void GlobalNamespace::MultiplayerLevelLoader::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerLevelLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelLoader::MultiplayerLevelLoader()   {
}
