#pragma once
// IWYU pragma private; include "UnityEngine/XR/XRMeshSubsystem.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_impl.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/XR/zzzz__MeshGenerationResult_def.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystem_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::*)()>(&::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4a561c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList.Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::Dispose)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x4a56200;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::operator ::System::IDisposable*()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::i___System__IDisposable()  {
return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::Dispose(::System::IntPtr  self)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList>::get(),
                        "Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self);
}
// Ctor Parameters [CppParam { name: "m_Self", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::__XRMeshSubsystem__MeshTransformList(::System::IntPtr  m_Self) noexcept  {
this->m_Self = m_Self;
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::__XRMeshSubsystem__MeshTransformList::__XRMeshSubsystem__MeshTransformList()   {
}
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem.InvokeMeshReadyDelegate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)(::UnityEngine::XR::MeshGenerationResult, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*)>(&::UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4a56124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(),
                        "InvokeMeshReadyDelegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshGenerationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::XRMeshSubsystem._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::XR::XRMeshSubsystem::*)()>(&::UnityEngine::XR::XRMeshSubsystem::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a5617c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::XRMeshSubsystem::InvokeMeshReadyDelegate(::UnityEngine::XR::MeshGenerationResult  result, ::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*  onMeshGenerationComplete)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(),
                        "InvokeMeshReadyDelegate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::MeshGenerationResult>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::XR::MeshGenerationResult>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, onMeshGenerationComplete);
}
inline ::UnityEngine::XR::XRMeshSubsystem* UnityEngine::XR::XRMeshSubsystem::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::XR::XRMeshSubsystem*>());
}
inline void UnityEngine::XR::XRMeshSubsystem::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::XR::XRMeshSubsystem*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::XRMeshSubsystem::XRMeshSubsystem()   {
}
