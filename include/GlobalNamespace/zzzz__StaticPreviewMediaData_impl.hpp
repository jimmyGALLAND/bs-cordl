#pragma once
// IWYU pragma private; include "GlobalNamespace/StaticPreviewMediaData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StaticPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticPreviewMediaData::*)(::UnityEngine::Sprite*, ::UnityEngine::AudioClip*)>(&::GlobalNamespace::StaticPreviewMediaData::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x267a744;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.GetCoverSpriteAsync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* (::GlobalNamespace::StaticPreviewMediaData::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StaticPreviewMediaData::GetCoverSpriteAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x267f15c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "GetCoverSpriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.GetPreviewAudioClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* (::GlobalNamespace::StaticPreviewMediaData::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::StaticPreviewMediaData::GetPreviewAudioClip)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x267f1cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "GetPreviewAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StaticPreviewMediaData.UnloadPreviewAudioClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StaticPreviewMediaData::*)()>(&::GlobalNamespace::StaticPreviewMediaData::UnloadPreviewAudioClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x267f23c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "UnloadPreviewAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IPreviewMediaData"
constexpr  GlobalNamespace::StaticPreviewMediaData::operator ::GlobalNamespace::IPreviewMediaData*() noexcept {
return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IPreviewMediaData"
constexpr ::GlobalNamespace::IPreviewMediaData* GlobalNamespace::StaticPreviewMediaData::i___GlobalNamespace__IPreviewMediaData() noexcept {
return static_cast<::GlobalNamespace::IPreviewMediaData*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__coverSprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coverSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__coverSprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coverSprite;
}
constexpr void GlobalNamespace::StaticPreviewMediaData::__cordl_internal_set__coverSprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coverSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__previewAudioClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::StaticPreviewMediaData::__cordl_internal_get__previewAudioClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewAudioClip;
}
constexpr void GlobalNamespace::StaticPreviewMediaData::__cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previewAudioClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::StaticPreviewMediaData* GlobalNamespace::StaticPreviewMediaData::New_ctor(::UnityEngine::Sprite*  coverSprite, ::UnityEngine::AudioClip*  previewAudioClip)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StaticPreviewMediaData*>(coverSprite, previewAudioClip));
}
inline void GlobalNamespace::StaticPreviewMediaData::_ctor(::UnityEngine::Sprite*  coverSprite, ::UnityEngine::AudioClip*  previewAudioClip)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioClip*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, coverSprite, previewAudioClip);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>* GlobalNamespace::StaticPreviewMediaData::GetCoverSpriteAsync(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "GetCoverSpriteAsync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::Sprite>>*, false>(this, ___internal_method, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>* GlobalNamespace::StaticPreviewMediaData::GetPreviewAudioClip(::System::Threading::CancellationToken  cancellationToken)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "GetPreviewAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::UnityEngine::AudioClip>>*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::StaticPreviewMediaData::UnloadPreviewAudioClip()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StaticPreviewMediaData*>::get(),
                        "UnloadPreviewAudioClip",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StaticPreviewMediaData::StaticPreviewMediaData()   {
}
