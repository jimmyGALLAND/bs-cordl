#pragma once
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioClip_impl.hpp"
#include "UnityEngine/zzzz__Sprite_impl.hpp"
#include "UnityEngine/zzzz__Texture2D_impl.hpp"
#include "GlobalNamespace/zzzz__MediaAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__MediaAsyncLoader_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "GlobalNamespace/zzzz__IMediaAsyncLoader_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::*)()>(
    &::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::MoveNext)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x22fc490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                                                                               "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fc8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW>", modifiers: "", def_value: Some("{}") }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty:
// "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::__MediaAsyncLoader___LoadWebpage_d__0(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::StringW> __t__builder, ::StringW uri, ::System::Threading::CancellationToken cancellationToken,
    ::UnityEngine::Networking::UnityWebRequest* _www_5__2, ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uri = uri;
  this->cancellationToken = cancellationToken;
  this->_www_5__2 = _www_5__2;
  this->_request_5__3 = _request_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadWebpage_d__0::__MediaAsyncLoader___LoadWebpage_d__0() {}
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::*)()>(
    &::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::MoveNext)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x22fc924;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fcda0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "filePath", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "_www_5__2", ty: "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__3", ty:
// "::UnityEngine::AsyncOperation*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::AudioClip*> __t__builder, ::StringW filePath,
    ::UnityEngine::Networking::UnityWebRequest* _www_5__2, ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->filePath = filePath;
  this->_www_5__2 = _www_5__2;
  this->_request_5__3 = _request_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1::__MediaAsyncLoader___LoadAudioClipFromFilePathAsync_d__1() {}
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::*)()>(
    &::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::MoveNext)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0x22fcdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::SetStateMachine)> {
  constexpr static std::size_t size = 0x1058;
  constexpr static std::size_t addrs = 0x22fd22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty:
// "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::__MediaAsyncLoader___LoadTextureAsync_d__2(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Texture2D*> __t__builder, ::StringW path, ::System::Threading::CancellationToken cancellationToken,
    ::UnityEngine::Networking::UnityWebRequest* _www_5__2, ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->path = path;
  this->cancellationToken = cancellationToken;
  this->_www_5__2 = _www_5__2;
  this->_request_5__3 = _request_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadTextureAsync_d__2::__MediaAsyncLoader___LoadTextureAsync_d__2() {}
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::*)()>(
    &::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x22fe284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fe870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::cordl_internals::Box(this)));
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "MoveNext",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3>::get(), "SetStateMachine", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "path", ty: "::StringW", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_www_5__2", ty:
// "::UnityEngine::Networking::UnityWebRequest*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_request_5__3", ty: "::UnityEngine::AsyncOperation*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::__MediaAsyncLoader___LoadSpriteAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityEngine::Sprite*> __t__builder, ::StringW path, ::System::Threading::CancellationToken cancellationToken,
    ::UnityEngine::Networking::UnityWebRequest* _www_5__2, ::UnityEngine::AsyncOperation* _request_5__3, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->path = path;
  this->cancellationToken = cancellationToken;
  this->_www_5__2 = _www_5__2;
  this->_request_5__3 = _request_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MediaAsyncLoader___LoadSpriteAsync_d__3::__MediaAsyncLoader___LoadSpriteAsync_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader.LoadWebpage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MediaAsyncLoader::LoadWebpage)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22fc04c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadWebpage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader.LoadAudioClipFromFilePathAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* (::GlobalNamespace::MediaAsyncLoader::*)(::StringW)>(
    &::GlobalNamespace::MediaAsyncLoader::LoadAudioClipFromFilePathAsync)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x22fc148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadAudioClipFromFilePathAsync",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader.LoadTextureAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D*>* (*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::MediaAsyncLoader::LoadTextureAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22fc238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadTextureAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader.LoadSpriteAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* (*)(::StringW, ::System::Threading::CancellationToken)>(
    &::GlobalNamespace::MediaAsyncLoader::LoadSpriteAsync)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x22fc334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadSpriteAsync", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::GlobalNamespace::MediaAsyncLoader::Log)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x22fc430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "Log", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MediaAsyncLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MediaAsyncLoader::*)()>(&::GlobalNamespace::MediaAsyncLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22fc488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMediaAsyncLoader"
constexpr GlobalNamespace::MediaAsyncLoader::operator ::GlobalNamespace::IMediaAsyncLoader*() noexcept {
  return static_cast<::GlobalNamespace::IMediaAsyncLoader*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::MediaAsyncLoader::LoadWebpage(::StringW uri, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadWebpage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(nullptr, ___internal_method, uri, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>* GlobalNamespace::MediaAsyncLoader::LoadAudioClipFromFilePathAsync(::StringW filePath) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadAudioClipFromFilePathAsync",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::AudioClip*>*, false>(this, ___internal_method, filePath);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D*>* GlobalNamespace::MediaAsyncLoader::LoadTextureAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadTextureAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Texture2D*>*, false>(nullptr, ___internal_method, path, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>* GlobalNamespace::MediaAsyncLoader::LoadSpriteAsync(::StringW path, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "LoadSpriteAsync", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityEngine::Sprite*>*, false>(nullptr, ___internal_method, path, cancellationToken);
}
inline void GlobalNamespace::MediaAsyncLoader::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), "Log", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline ::GlobalNamespace::MediaAsyncLoader* GlobalNamespace::MediaAsyncLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MediaAsyncLoader*>());
}
inline void GlobalNamespace::MediaAsyncLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MediaAsyncLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MediaAsyncLoader::MediaAsyncLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
