#pragma once
// IWYU pragma private; include "Zenject/ZenjectSceneLoader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__ZenjectSceneLoader_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__SceneInstance_def.hpp"
#include "UnityEngine/SceneManagement/zzzz__LoadSceneMode_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "Zenject/zzzz__InjectTypeInfo_def.hpp"
#include "Zenject/zzzz__LoadSceneRelationship_def.hpp"
#include "Zenject/zzzz__ProjectKernel_def.hpp"
#include "Zenject/zzzz__SceneContext_def.hpp"
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::Zenject::SceneContext*, ::Zenject::ProjectKernel*)>(&::Zenject::ZenjectSceneLoader::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4abf720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ProjectKernel*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abf7c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4abf7dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4abf7ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4abf7f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4abf800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4abfaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abfb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abfb1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abfb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x4abfb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneFromAddressablesAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> (::Zenject::ZenjectSceneLoader::*)(::StringW, ::UnityEngine::SceneManagement::LoadSceneMode, bool, int32_t, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneFromAddressablesAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4abfc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneFromAddressablesAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.PrepareForLoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::PrepareForLoadScene)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x4abf8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "PrepareForLoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abfd8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4abfda0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4abfdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4abfdbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadScene
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadScene)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4abfdc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4abfef4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4abff08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4abff18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4abff24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.LoadSceneAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AsyncOperation* (::Zenject::ZenjectSceneLoader::*)(int32_t, ::UnityEngine::SceneManagement::LoadSceneMode, ::System::Action_1<::Zenject::DiContainer*>*, ::Zenject::LoadSceneRelationship, ::System::Action_1<::Zenject::DiContainer*>*)>(&::Zenject::ZenjectSceneLoader::LoadSceneAsync)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x4abff2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.__zenCreate
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (*)(::ArrayW<::System::Object*,::Array<::System::Object*>*>)>(&::Zenject::ZenjectSceneLoader::__zenCreate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4ac005c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Zenject::ZenjectSceneLoader.__zenCreateInjectTypeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Zenject::InjectTypeInfo* (*)()>(&::Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x4ac0174;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Zenject::ProjectKernel>& Zenject::ZenjectSceneLoader::__cordl_internal_get__projectKernel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectKernel;
}
constexpr ::UnityW<::Zenject::ProjectKernel> const& Zenject::ZenjectSceneLoader::__cordl_internal_get__projectKernel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____projectKernel;
}
constexpr void Zenject::ZenjectSceneLoader::__cordl_internal_set__projectKernel(::UnityW<::Zenject::ProjectKernel>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____projectKernel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Zenject::DiContainer*& Zenject::ZenjectSceneLoader::__cordl_internal_get__sceneContainer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneContainer;
}
constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& Zenject::ZenjectSceneLoader::__cordl_internal_get__sceneContainer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sceneContainer;
}
constexpr void Zenject::ZenjectSceneLoader::__cordl_internal_set__sceneContainer(::Zenject::DiContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sceneContainer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Zenject::ZenjectSceneLoader* Zenject::ZenjectSceneLoader::New_ctor(::Zenject::SceneContext*  sceneRoot, ::Zenject::ProjectKernel*  projectKernel)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Zenject::ZenjectSceneLoader*>(sceneRoot, projectKernel));
}
inline void Zenject::ZenjectSceneLoader::_ctor(::Zenject::SceneContext*  sceneRoot, ::Zenject::ProjectKernel*  projectKernel)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::SceneContext*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::ProjectKernel*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneRoot, projectKernel);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName, loadMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName, loadMode, extraBindings);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW  sceneName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName, loadMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName, loadMode, extraBindings);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName, loadMode, extraBindings, containerMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneName, loadMode, extraBindingsEarly, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance> Zenject::ZenjectSceneLoader::LoadSceneFromAddressablesAsync(::StringW  sceneName, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, bool  activateOnLoad, int32_t  priority, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneFromAddressablesAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 8>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityEngine::ResourceManagement::ResourceProviders::SceneInstance>, false>(this, ___internal_method, sceneName, loadMode, activateOnLoad, priority, extraBindingsEarly, extraBindings, containerMode, extraBindingsLate);
}
inline void Zenject::ZenjectSceneLoader::PrepareForLoadScene(::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsEarly, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate, ::Zenject::LoadSceneRelationship  containerMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "PrepareForLoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadMode, extraBindingsEarly, extraBindings, extraBindingsLate, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t  sceneIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneIndex);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneIndex, loadMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode);
}
inline void Zenject::ZenjectSceneLoader::LoadScene(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadScene",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t  sceneIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneIndex);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneIndex, loadMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode);
}
inline ::UnityEngine::AsyncOperation* Zenject::ZenjectSceneLoader::LoadSceneAsync(int32_t  sceneIndex, ::UnityEngine::SceneManagement::LoadSceneMode  loadMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindings, ::Zenject::LoadSceneRelationship  containerMode, ::System::Action_1<::Zenject::DiContainer*>*  extraBindingsLate)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "LoadSceneAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::SceneManagement::LoadSceneMode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::LoadSceneRelationship>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Zenject::DiContainer*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AsyncOperation*, false>(this, ___internal_method, sceneIndex, loadMode, extraBindings, containerMode, extraBindingsLate);
}
inline ::System::Object* Zenject::ZenjectSceneLoader::__zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "__zenCreate",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Object*,::Array<::System::Object*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(nullptr, ___internal_method, P_0);
}
inline ::Zenject::InjectTypeInfo* Zenject::ZenjectSceneLoader::__zenCreateInjectTypeInfo()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::ZenjectSceneLoader*>::get(),
                        "__zenCreateInjectTypeInfo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::Zenject::InjectTypeInfo*, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Zenject::ZenjectSceneLoader::ZenjectSceneLoader()   {
}
