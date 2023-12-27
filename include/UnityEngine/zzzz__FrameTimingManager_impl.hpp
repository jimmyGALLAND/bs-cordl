#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__FrameTimingManager_def.hpp"
#include "UnityEngine/zzzz__FrameTiming_def.hpp"
//  Writing Method size for method: ::UnityEngine::FrameTimingManager.CaptureFrameTimings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::FrameTimingManager::CaptureFrameTimings)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2cc41f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::FrameTimingManager*>::get(), "CaptureFrameTimings",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::FrameTimingManager.GetLatestTimings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(uint32_t, ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>)>(
    &::UnityEngine::FrameTimingManager::GetLatestTimings)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2cc4218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::FrameTimingManager*>::get(), "GetLatestTimings", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::FrameTimingManager::CaptureFrameTimings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::FrameTimingManager*>::get(), "CaptureFrameTimings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline uint32_t UnityEngine::FrameTimingManager::GetLatestTimings(uint32_t numFrames, ::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*> timings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::FrameTimingManager*>::get(), "GetLatestTimings", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::FrameTiming, ::Array<::UnityEngine::FrameTiming>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, numFrames, timings);
}
// Ctor Parameters []
constexpr ::UnityEngine::FrameTimingManager::FrameTimingManager() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
