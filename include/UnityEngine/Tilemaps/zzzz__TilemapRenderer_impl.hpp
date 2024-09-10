#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/TilemapRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TilemapRenderer_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.RegisterSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x48c0ad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "RegisterSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.UnregisterSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)()>(&::UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x48c0b54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "UnregisterSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::TilemapRenderer.OnSpriteAtlasRegistered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::TilemapRenderer::*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x48c0bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "OnSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Tilemaps::TilemapRenderer::RegisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "RegisterSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::UnregisterSpriteAtlasRegistered()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "UnregisterSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::TilemapRenderer::OnSpriteAtlasRegistered(::UnityEngine::U2D::SpriteAtlas*  atlas)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::TilemapRenderer*>::get(),
                        "OnSpriteAtlasRegistered",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atlas);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::TilemapRenderer::TilemapRenderer()   {
}
