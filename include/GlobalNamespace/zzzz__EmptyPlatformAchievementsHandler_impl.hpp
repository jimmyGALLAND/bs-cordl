#pragma once
// IWYU pragma private; include "GlobalNamespace/EmptyPlatformAchievementsHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__EmptyPlatformAchievementsHandler_def.hpp"
#include "GlobalNamespace/zzzz__HMAsyncRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPlatformAchievementsHandler_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(&::GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2656d10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.UnlockAchievement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)(::StringW, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*)>(&::GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2656d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "UnlockAchievement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler.GetUnlockedAchievements
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::HMAsyncRequest* (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*)>(&::GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2656d1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "GetUnlockedAchievements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EmptyPlatformAchievementsHandler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EmptyPlatformAchievementsHandler::*)()>(&::GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2656d24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr  GlobalNamespace::EmptyPlatformAchievementsHandler::operator ::GlobalNamespace::IPlatformAchievementsHandler*() noexcept {
return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPlatformAchievementsHandler"
constexpr ::GlobalNamespace::IPlatformAchievementsHandler* GlobalNamespace::EmptyPlatformAchievementsHandler::i___GlobalNamespace__IPlatformAchievementsHandler() noexcept {
return static_cast<::GlobalNamespace::IPlatformAchievementsHandler*>(static_cast<void*>(this));
}
inline void GlobalNamespace::EmptyPlatformAchievementsHandler::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::EmptyPlatformAchievementsHandler::UnlockAchievement(::StringW  achievementId, ::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "UnlockAchievement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__UnlockAchievementCompletionHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, achievementId, completionHandler);
}
inline ::GlobalNamespace::HMAsyncRequest* GlobalNamespace::EmptyPlatformAchievementsHandler::GetUnlockedAchievements(::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*  completionHandler)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        "GetUnlockedAchievements",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__IPlatformAchievementsHandler__GetUnlockedAchievementsCompletionHandler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::HMAsyncRequest*, false>(this, ___internal_method, completionHandler);
}
inline ::GlobalNamespace::EmptyPlatformAchievementsHandler* GlobalNamespace::EmptyPlatformAchievementsHandler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EmptyPlatformAchievementsHandler*>());
}
inline void GlobalNamespace::EmptyPlatformAchievementsHandler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EmptyPlatformAchievementsHandler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EmptyPlatformAchievementsHandler::EmptyPlatformAchievementsHandler()   {
}
