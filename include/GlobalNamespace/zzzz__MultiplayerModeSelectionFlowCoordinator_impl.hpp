#pragma once
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_impl.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_impl.hpp"
#include "HMUI/zzzz__FlowCoordinator_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__IAnalyticsModel_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "HMUI/zzzz__ViewController_def.hpp"
#include "GlobalNamespace/zzzz__ServerCodeEntryViewController_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMasksModel_def.hpp"
#include "GlobalNamespace/zzzz__ILobbyGameStateController_def.hpp"
#include "GlobalNamespace/zzzz__XPlatformAuthFeatureFlag_def.hpp"
#include "GlobalNamespace/zzzz__JoinQuickPlayViewController_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "GlobalNamespace/zzzz__SongPreviewPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ConnectionFailedReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerUnavailableReason_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLobbyConnectionController_def.hpp"
#include "GlobalNamespace/zzzz__FadeInOutController_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__SelectMultiplayerLobbyDestination_def.hpp"
#include "GlobalNamespace/zzzz__GameServerBrowserFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerModeSelectionViewController_def.hpp"
#include "GlobalNamespace/zzzz__INetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__JoiningLobbyViewController_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/Threading/zzzz__CancellationTokenSource_def.hpp"
#include "GlobalNamespace/zzzz__GameServerLobbyFlowCoordinator_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerViewController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarSystemCollection_def.hpp"
#include "GlobalNamespace/zzzz__LobbyDataModelsManager_def.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_def.hpp"
#include "GlobalNamespace/zzzz__CreateServerFormData_def.hpp"
#include "GlobalNamespace/zzzz__IUnifiedNetworkPlayerModel_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::*)()>(
    &::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::MoveNext)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x22991c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50>::get(), "MoveNext",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2299594;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "networkPlayerModel", ty: "::GlobalNamespace::INetworkPlayerModel*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::
    __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50(
        int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this,
        ::GlobalNamespace::INetworkPlayerModel* networkPlayerModel, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerAvatarsData> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->networkPlayerModel = networkPlayerModel;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50::
    __MultiplayerModeSelectionFlowCoordinator___HandleConnectedPlayerManagerCreated_d__50() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::*)()>(
    &::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::MoveNext)> {
  constexpr static std::size_t size = 0xae8;
  constexpr static std::size_t addrs = 0x22995a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                                    "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229a088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(),
                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_multiplayerStatusData_5__2", ty:
// "::GlobalNamespace::MultiplayerStatusData*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_exception_5__3", ty: "::System::Exception*", modifiers: "", def_value: Some("nullptr")
// }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__3", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this,
    ::GlobalNamespace::MultiplayerStatusData* _multiplayerStatusData_5__2, ::System::Exception* _exception_5__3, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::MultiplayerStatusData*> __u__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::QuickPlaySetupData*> __u__3) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_multiplayerStatusData_5__2 = _multiplayerStatusData_5__2;
  this->_exception_5__3 = _exception_5__3;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
  this->__u__3 = __u__3;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51::__MultiplayerModeSelectionFlowCoordinator___TryShowModeSelection_d__51() {}
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::*)()>(
        &::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::MoveNext)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x229a094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(), "MoveNext",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::SetStateMachine)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x229a4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(), "SetStateMachine",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(), "MoveNext",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52>::get(), "SetStateMachine",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__7__wrap1", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::
    __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                           ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* __4__this, int32_t __7__wrap1,
                                                                                           ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52::
    __MultiplayerModeSelectionFlowCoordinator___ResolveAndPresentNextFlowCoordinator_d__52() {}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*)>(&::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x228ba68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*)>(&::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x228c33c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::GlobalNamespace::SelectMultiplayerLobbyDestination*)>(&::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::Setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2296038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.DidActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, bool, bool)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidActivate)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x2296040;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.DidDeactivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, bool)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidDeactivate)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x22965b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.BackButtonWasPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(::HMUI::ViewController*)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::BackButtonWasPressed)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x22969b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TopViewControllerWillChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::HMUI::ViewController*, ::HMUI::ViewController*, ::HMUI::__ViewController__AnimationType)>(&::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TopViewControllerWillChange)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x2296a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TransitionDidStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidStart)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2296ccc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TransitionDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidFinish)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2296e2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x22976a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionSuccess
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccess)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22976c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleMultiplayerLobbyConnectionControllerConnectionSuccess", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyConnectionControllerConnectionFailed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionFailed)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x22976c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleMultiplayerLobbyConnectionControllerConnectionFailed",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleMultiplayerLobbyControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::GlobalNamespace::MultiplayerModeSelectionViewController*, ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyControllerDidFinish)> {
  constexpr static std::size_t size = 0x5e0;
  constexpr static std::size_t addrs = 0x2297788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleMultiplayerLobbyControllerDidFinish",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerBrowserFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::GlobalNamespace::GameServerBrowserFlowCoordinator*)>(&::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerBrowserFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2297d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleGameServerBrowserFlowCoordinatorDidFinish",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServerBrowserFlowCoordinator*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleJoiningLobbyViewControllerDidCancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoiningLobbyViewControllerDidCancel)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2297d7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleJoiningLobbyViewControllerDidCancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleJoinQuickPlayViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoinQuickPlayViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x2297e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleJoinQuickPlayViewControllerDidFinish",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleServerCodeEntryViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, ::StringW)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleServerCodeEntryViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x229823c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleServerCodeEntryViewControllerDidFinish",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleCreateServerViewControllerDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool, ::GlobalNamespace::CreateServerFormData)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleCreateServerViewControllerDidFinish)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2298360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleCreateServerViewControllerDidFinish", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerLobbyFlowCoordinatorDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorDidFinish)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x229871c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleGameServerLobbyFlowCoordinatorDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleGameServerLobbyFlowCoordinatorWillFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorWillFinish)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2298984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "HandleGameServerLobbyFlowCoordinatorWillFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.HandleConnectedPlayerManagerCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(::GlobalNamespace::INetworkPlayerModel*)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleConnectedPlayerManagerCreated)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2298a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleConnectedPlayerManagerCreated", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.TryShowModeSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(bool)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TryShowModeSelection)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x2296518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "TryShowModeSelection",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.ResolveAndPresentNextFlowCoordinator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ResolveAndPresentNextFlowCoordinator)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x22970b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "ResolveAndPresentNextFlowCoordinator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.PresentConnectionErrorDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(
    ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType, ::GlobalNamespace::ConnectionFailedReason)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentConnectionErrorDialog)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x2297140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "PresentConnectionErrorDialog", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.PresentMasterServerUnavailableErrorDialog
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(::GlobalNamespace::MultiplayerUnavailableReason, ::System::Exception*, ::System::Nullable_1<int64_t>, ::StringW)>(
        &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentMasterServerUnavailableErrorDialog)> {
  constexpr static std::size_t size = 0x44c;
  constexpr static std::size_t addrs = 0x2298ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "PresentMasterServerUnavailableErrorDialog", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator.ProcessDeeplinkingToLobby
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ProcessDeeplinkingToLobby)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2298f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "ProcessDeeplinkingToLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2298ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._ResolveAndPresentNextFlowCoordinator_b__52_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)()>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ResolveAndPresentNextFlowCoordinator_b__52_0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x2299000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                 "<ResolveAndPresentNextFlowCoordinator>b__52_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentConnectionErrorDialog_b__53_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2299170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "<PresentConnectionErrorDialog>b__53_0",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentConnectionErrorDialog_b__53_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2299188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "<PresentConnectionErrorDialog>b__53_1",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator._PresentMasterServerUnavailableErrorDialog_b__54_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::*)(int32_t)>(
    &::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentMasterServerUnavailableErrorDialog_b__54_0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x22991a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "<PresentMasterServerUnavailableErrorDialog>b__54_0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AudioClip*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__ambienceAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ambienceAudioClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__ambienceAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____ambienceAudioClip;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__ambienceAudioClip(::UnityEngine::AudioClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ambienceAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPackMasksModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPackMasksModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMasksModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPackMasksModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPackMasksModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPackMasksModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameServerBrowserFlowCoordinator*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerBrowserFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameServerBrowserFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerBrowserFlowCoordinator*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerBrowserFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameServerBrowserFlowCoordinator;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__gameServerBrowserFlowCoordinator(::GlobalNamespace::GameServerBrowserFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameServerBrowserFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameServerLobbyFlowCoordinator*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerLobbyFlowCoordinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameServerLobbyFlowCoordinator;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameServerLobbyFlowCoordinator*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__gameServerLobbyFlowCoordinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameServerLobbyFlowCoordinator;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__gameServerLobbyFlowCoordinator(::GlobalNamespace::GameServerLobbyFlowCoordinator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameServerLobbyFlowCoordinator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerModeSelectionViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerModeSelectionViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerModeSelectionViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerModeSelectionViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerModeSelectionViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerModeSelectionViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerModeSelectionViewController(::GlobalNamespace::MultiplayerModeSelectionViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerModeSelectionViewController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::CreateServerViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__createServerViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____createServerViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CreateServerViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__createServerViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____createServerViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__createServerViewController(::GlobalNamespace::CreateServerViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____createServerViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::JoinQuickPlayViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joinQuickPlayViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joinQuickPlayViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoinQuickPlayViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joinQuickPlayViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joinQuickPlayViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joinQuickPlayViewController(::GlobalNamespace::JoinQuickPlayViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____joinQuickPlayViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ServerCodeEntryViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__serverCodeEntryViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCodeEntryViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ServerCodeEntryViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__serverCodeEntryViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____serverCodeEntryViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__serverCodeEntryViewController(::GlobalNamespace::ServerCodeEntryViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____serverCodeEntryViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SimpleDialogPromptViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__simpleDialogPromptViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SimpleDialogPromptViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__simpleDialogPromptViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____simpleDialogPromptViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__simpleDialogPromptViewController(::GlobalNamespace::SimpleDialogPromptViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____simpleDialogPromptViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::JoiningLobbyViewController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joiningLobbyViewController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::JoiningLobbyViewController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joiningLobbyViewController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joiningLobbyViewController(::GlobalNamespace::JoiningLobbyViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____joiningLobbyViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IUnifiedNetworkPlayerModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__unifiedNetworkPlayerModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IUnifiedNetworkPlayerModel*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__unifiedNetworkPlayerModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____unifiedNetworkPlayerModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__unifiedNetworkPlayerModel(::GlobalNamespace::IUnifiedNetworkPlayerModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____unifiedNetworkPlayerModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::AvatarCore::AvatarSystemCollection*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__avatarSystemCollection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarSystemCollection;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::AvatarCore::AvatarSystemCollection*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__avatarSystemCollection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarSystemCollection;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__avatarSystemCollection(::BeatSaber::AvatarCore::AvatarSystemCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarSystemCollection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerSessionManager*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerSessionManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerSessionManager*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerSessionManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerSessionManager;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerSessionManager(::GlobalNamespace::IMultiplayerSessionManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerSessionManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::FadeInOutController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__fadeInOutController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeInOutController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::FadeInOutController*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__fadeInOutController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____fadeInOutController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__fadeInOutController(::GlobalNamespace::FadeInOutController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fadeInOutController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LobbyDataModelsManager*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDataModelsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyDataModelsManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LobbyDataModelsManager*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDataModelsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyDataModelsManager;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyDataModelsManager(::GlobalNamespace::LobbyDataModelsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyDataModelsManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MultiplayerLobbyConnectionController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerLobbyConnectionController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyConnectionController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLobbyConnectionController*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerLobbyConnectionController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerLobbyConnectionController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerLobbyConnectionController(::GlobalNamespace::MultiplayerLobbyConnectionController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerLobbyConnectionController)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IMultiplayerStatusModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerStatusModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerStatusModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IMultiplayerStatusModel*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__multiplayerStatusModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerStatusModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__multiplayerStatusModel(::GlobalNamespace::IMultiplayerStatusModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerStatusModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IQuickPlaySetupModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____quickPlaySetupModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IQuickPlaySetupModel*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____quickPlaySetupModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__quickPlaySetupModel(::GlobalNamespace::IQuickPlaySetupModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlaySetupModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerDataModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__playerDataModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerDataModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerDataModel*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__playerDataModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerDataModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__playerDataModel(::GlobalNamespace::PlayerDataModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerDataModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SongPreviewPlayer*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPreviewPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPreviewPlayer;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPreviewPlayer*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__songPreviewPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____songPreviewPlayer;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__songPreviewPlayer(::GlobalNamespace::SongPreviewPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____songPreviewPlayer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IAnalyticsModel*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__analyticsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____analyticsModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAnalyticsModel*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__analyticsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____analyticsModel;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__analyticsModel(::GlobalNamespace::IAnalyticsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____analyticsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILobbyGameStateController*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyGameStateController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyGameStateController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILobbyGameStateController*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyGameStateController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyGameStateController;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyGameStateController(::GlobalNamespace::ILobbyGameStateController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyGameStateController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::XPlatformAuthFeatureFlag*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__xPlatformAuthFeatureFlag() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformAuthFeatureFlag;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::XPlatformAuthFeatureFlag*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__xPlatformAuthFeatureFlag() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____xPlatformAuthFeatureFlag;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__xPlatformAuthFeatureFlag(::GlobalNamespace::XPlatformAuthFeatureFlag* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____xPlatformAuthFeatureFlag)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyCancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joiningLobbyCancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__joiningLobbyCancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____joiningLobbyCancellationTokenSource;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__joiningLobbyCancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____joiningLobbyCancellationTokenSource)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::CancellationTokenSource*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__cancellationTokenSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancellationTokenSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::CancellationTokenSource*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__cancellationTokenSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cancellationTokenSource;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__cancellationTokenSource(::System::Threading::CancellationTokenSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cancellationTokenSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__transitionFinishedTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transitionFinishedTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__transitionFinishedTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____transitionFinishedTaskSource;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__transitionFinishedTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transitionFinishedTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__checkingAvailabilityTaskSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____checkingAvailabilityTaskSource;
}
constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::TaskCompletionSource_1<bool>*> const&
GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__checkingAvailabilityTaskSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____checkingAvailabilityTaskSource;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__checkingAvailabilityTaskSource(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____checkingAvailabilityTaskSource)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::QuickPlaySetupData*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____quickPlaySetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__quickPlaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____quickPlaySetupData;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlaySetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SelectMultiplayerLobbyDestination*& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDestination() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyDestination;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SelectMultiplayerLobbyDestination*> const& GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__get__lobbyDestination() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____lobbyDestination;
}
constexpr void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::__set__lobbyDestination(::GlobalNamespace::SelectMultiplayerLobbyDestination* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lobbyDestination)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::add_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "add_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::remove_didFinishEvent(::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "remove_didFinishEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::Setup(::GlobalNamespace::SelectMultiplayerLobbyDestination* lobbyDestination) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "Setup", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SelectMultiplayerLobbyDestination*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lobbyDestination);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "DidActivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, firstActivation, addedToHierarchy, screenSystemEnabling);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "DidDeactivate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, removedFromHierarchy, screenSystemDisabling);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::BackButtonWasPressed(::HMUI::ViewController* topViewController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "BackButtonWasPressed",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topViewController);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TopViewControllerWillChange(::HMUI::ViewController* oldViewController, ::HMUI::ViewController* newViewController,
                                                                                                  ::HMUI::__ViewController__AnimationType animationType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "TopViewControllerWillChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::ViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::__ViewController__AnimationType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldViewController, newViewController, animationType);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidStart() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "TransitionDidStart", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TransitionDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "TransitionDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                               "HandleMultiplayerLobbyConnectionControllerConnectionSuccessActivateModel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionSuccess() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                               "HandleMultiplayerLobbyConnectionControllerConnectionSuccess", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyConnectionControllerConnectionFailed(
    ::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType, ::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleMultiplayerLobbyConnectionControllerConnectionFailed",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionType, reason);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleMultiplayerLobbyControllerDidFinish(::GlobalNamespace::MultiplayerModeSelectionViewController* viewController,
                                                                                                                ::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton menuButton) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleMultiplayerLobbyControllerDidFinish",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerModeSelectionViewController*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerModeSelectionViewController__MenuButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, viewController, menuButton);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerBrowserFlowCoordinatorDidFinish(::GlobalNamespace::GameServerBrowserFlowCoordinator* flowCoordinator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleGameServerBrowserFlowCoordinatorDidFinish",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameServerBrowserFlowCoordinator*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flowCoordinator);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoiningLobbyViewControllerDidCancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "HandleJoiningLobbyViewControllerDidCancel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleJoinQuickPlayViewControllerDidFinish(bool success) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "HandleJoinQuickPlayViewControllerDidFinish", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleServerCodeEntryViewControllerDidFinish(bool success, ::StringW code) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleServerCodeEntryViewControllerDidFinish",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, code);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleCreateServerViewControllerDidFinish(bool success, ::GlobalNamespace::CreateServerFormData data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                               "HandleCreateServerViewControllerDidFinish", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::CreateServerFormData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, success, data);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorDidFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "HandleGameServerLobbyFlowCoordinatorDidFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleGameServerLobbyFlowCoordinatorWillFinish() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "HandleGameServerLobbyFlowCoordinatorWillFinish", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::HandleConnectedPlayerManagerCreated(::GlobalNamespace::INetworkPlayerModel* networkPlayerModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "HandleConnectedPlayerManagerCreated", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::INetworkPlayerModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, networkPlayerModel);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::TryShowModeSelection(bool shouldProvideInitialViewControllers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "TryShowModeSelection",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, shouldProvideInitialViewControllers);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ResolveAndPresentNextFlowCoordinator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "ResolveAndPresentNextFlowCoordinator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentConnectionErrorDialog(::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType connectionType,
                                                                                                   ::GlobalNamespace::ConnectionFailedReason reason) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "PresentConnectionErrorDialog", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__MultiplayerLobbyConnectionController__LobbyConnectionType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ConnectionFailedReason>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionType, reason);
}
/// @param maintenanceWindowEndTime: ::System::Nullable_1<int64_t> (default: {})
/// @param remoteLocalizedMessage: ::StringW (default: nullptr)
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::PresentMasterServerUnavailableErrorDialog(::GlobalNamespace::MultiplayerUnavailableReason reason, ::System::Exception* exception,
                                                                                                                ::System::Nullable_1<int64_t> maintenanceWindowEndTime,
                                                                                                                ::StringW remoteLocalizedMessage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                               "PresentMasterServerUnavailableErrorDialog", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MultiplayerUnavailableReason>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int64_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reason, exception, maintenanceWindowEndTime, remoteLocalizedMessage);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::ProcessDeeplinkingToLobby() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "ProcessDeeplinkingToLobby", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator* GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>());
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_ResolveAndPresentNextFlowCoordinator_b__52_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "<ResolveAndPresentNextFlowCoordinator>b__52_0", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_0(int32_t btnId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "<PresentConnectionErrorDialog>b__53_0",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnId);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentConnectionErrorDialog_b__53_1(int32_t btnId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(), "<PresentConnectionErrorDialog>b__53_1",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnId);
}
inline void GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::_PresentMasterServerUnavailableErrorDialog_b__54_0(int32_t btnId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator*>::get(),
                                                                             "<PresentMasterServerUnavailableErrorDialog>b__54_0", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, btnId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerModeSelectionFlowCoordinator::MultiplayerModeSelectionFlowCoordinator() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
