#pragma once
// IWYU pragma private; include "Oculus/Platform/Application.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Platform/zzzz__Application_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadProgressResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__AppDownloadResult_def.hpp"
#include "Oculus/Platform/Models/zzzz__ApplicationVersion_def.hpp"
#include "Oculus/Platform/zzzz__ApplicationOptions_def.hpp"
#include "Oculus/Platform/zzzz__Request_1_def.hpp"
//  Writing Method size for method: ::Oculus::Platform::Application.CancelAppDownload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)()>(&::Oculus::Platform::Application::CancelAppDownload)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3ef6bac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "CancelAppDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.CheckAppDownloadProgress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* (*)()>(&::Oculus::Platform::Application::CheckAppDownloadProgress)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3ef6cfc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "CheckAppDownloadProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.GetVersion
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* (*)()>(&::Oculus::Platform::Application::GetVersion)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3ef6e4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "GetVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.InstallAppUpdateAndRelaunch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)(::Oculus::Platform::ApplicationOptions*)>(&::Oculus::Platform::Application::InstallAppUpdateAndRelaunch)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x3ef6f9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "InstallAppUpdateAndRelaunch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.LaunchOtherApp
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::StringW>* (*)(uint64_t, ::Oculus::Platform::ApplicationOptions*)>(&::Oculus::Platform::Application::LaunchOtherApp)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x3ef70fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "LaunchOtherApp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Platform::Application.StartAppDownload
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* (*)()>(&::Oculus::Platform::Application::StartAppDownload)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x3ef726c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "StartAppDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* Oculus::Platform::Application::CancelAppDownload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "CancelAppDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>* Oculus::Platform::Application::CheckAppDownloadProgress()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "CheckAppDownloadProgress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadProgressResult*>*, false>(nullptr, ___internal_method);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>* Oculus::Platform::Application::GetVersion()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "GetVersion",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::ApplicationVersion*>*, false>(nullptr, ___internal_method);
}
/// @param deeplink_options: ::Oculus::Platform::ApplicationOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* Oculus::Platform::Application::InstallAppUpdateAndRelaunch(::Oculus::Platform::ApplicationOptions*  deeplink_options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "InstallAppUpdateAndRelaunch",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*, false>(nullptr, ___internal_method, deeplink_options);
}
/// @param deeplink_options: ::Oculus::Platform::ApplicationOptions* (default: nullptr)
inline ::Oculus::Platform::Request_1<::StringW>* Oculus::Platform::Application::LaunchOtherApp(uint64_t  appID, ::Oculus::Platform::ApplicationOptions*  deeplink_options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "LaunchOtherApp",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Oculus::Platform::ApplicationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::StringW>*, false>(nullptr, ___internal_method, appID, deeplink_options);
}
inline ::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>* Oculus::Platform::Application::StartAppDownload()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Platform::Application*>::get(),
                        "StartAppDownload",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Platform::Request_1<::Oculus::Platform::Models::AppDownloadResult*>*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Platform::Application::Application()   {
}
