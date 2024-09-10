#pragma once
// IWYU pragma private; include "UnityEngine/Tilemaps/Tile.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileBase_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileData_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__TileFlags_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tile_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType::__Tile__ColliderType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType::__Tile__ColliderType()   {
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::None{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::Sprite{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType  UnityEngine::Tilemaps::__Tile__ColliderType::Grid{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_sprite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_sprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_sprite
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Sprite*)>(&::UnityEngine::Tilemaps::Tile::set_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfac0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_sprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_color
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Color (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48bfac8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_color
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Color)>(&::UnityEngine::Tilemaps::Tile::set_color)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x48bfad4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_transform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x48bfae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_transform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::Tilemaps::Tile::set_transform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x48bfaf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_gameObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_gameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_gameObject
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::GameObject*)>(&::UnityEngine::Tilemaps::Tile::set_gameObject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_gameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_flags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::TileFlags (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_flags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_flags
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::TileFlags)>(&::UnityEngine::Tilemaps::Tile::set_flags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_flags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::TileFlags>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.get_colliderType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::__Tile__ColliderType (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::get_colliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_colliderType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.set_colliderType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Tilemaps::__Tile__ColliderType)>(&::UnityEngine::Tilemaps::Tile::set_colliderType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48bfb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_colliderType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::__Tile__ColliderType>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile.GetTileData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)(::UnityEngine::Vector3Int, ::UnityEngine::Tilemaps::ITilemap*, ByRef<::UnityEngine::Tilemaps::TileData>)>(&::UnityEngine::Tilemaps::Tile::GetTileData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x48bfb38;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::Tile._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::Tile::*)()>(&::UnityEngine::Tilemaps::Tile::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x48bfd30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Sprite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Sprite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Sprite;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Color& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Color;
}
constexpr ::UnityEngine::Color const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Color;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Color(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Color = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Transform;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Transform(::UnityEngine::Matrix4x4  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Transform = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_InstancedGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancedGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_InstancedGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InstancedGameObject;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_InstancedGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_InstancedGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Tilemaps::TileFlags& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Flags()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr ::UnityEngine::Tilemaps::TileFlags const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_Flags() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Flags;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_Flags(::UnityEngine::Tilemaps::TileFlags  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Flags = value;
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_ColliderType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderType;
}
constexpr ::UnityEngine::Tilemaps::__Tile__ColliderType const& UnityEngine::Tilemaps::Tile::__cordl_internal_get_m_ColliderType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ColliderType;
}
constexpr void UnityEngine::Tilemaps::Tile::__cordl_internal_set_m_ColliderType(::UnityEngine::Tilemaps::__Tile__ColliderType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ColliderType = value;
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::Tilemaps::Tile::get_sprite()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_sprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_sprite(::UnityEngine::Sprite*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_sprite",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::Tilemaps::Tile::get_color()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_color(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_color",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Tilemaps::Tile::get_transform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_transform(::UnityEngine::Matrix4x4  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_transform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> UnityEngine::Tilemaps::Tile::get_gameObject()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_gameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_gameObject(::UnityEngine::GameObject*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_gameObject",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::TileFlags UnityEngine::Tilemaps::Tile::get_flags()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_flags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::TileFlags, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_flags(::UnityEngine::Tilemaps::TileFlags  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_flags",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::TileFlags>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Tilemaps::__Tile__ColliderType UnityEngine::Tilemaps::Tile::get_colliderType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "get_colliderType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::__Tile__ColliderType, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::Tile::set_colliderType(::UnityEngine::Tilemaps::__Tile__ColliderType  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        "set_colliderType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::__Tile__ColliderType>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Tilemaps::Tile::GetTileData(::UnityEngine::Vector3Int  position, ::UnityEngine::Tilemaps::ITilemap*  tilemap, ByRef<::UnityEngine::Tilemaps::TileData>  tileData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, tilemap, tileData);
}
inline ::UnityEngine::Tilemaps::Tile* UnityEngine::Tilemaps::Tile::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Tilemaps::Tile*>());
}
inline void UnityEngine::Tilemaps::Tile::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::Tile*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::Tile::Tile()   {
}
