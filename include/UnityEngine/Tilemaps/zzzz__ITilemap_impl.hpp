#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/zzzz__Vector3Int_impl.hpp"
#include "UnityEngine/Tilemaps/zzzz__ITilemap_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/Tilemaps/zzzz__Tilemap_def.hpp"
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::ITilemap::*)()>(&::UnityEngine::Tilemaps::ITilemap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d508b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.RefreshTile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Tilemaps::ITilemap::*)(::UnityEngine::Vector3Int)>(
    &::UnityEngine::Tilemaps::ITilemap::RefreshTile)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2d5066c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "RefreshTile", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.CreateInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Tilemaps::ITilemap* (*)()>(&::UnityEngine::Tilemaps::ITilemap::CreateInstance)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d508b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "CreateInstance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.FindAllRefreshPositions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Tilemaps::ITilemap*, int32_t, void*, void*, void*)>(
    &::UnityEngine::Tilemaps::ITilemap::FindAllRefreshPositions)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2d50928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "FindAllRefreshPositions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Tilemaps::ITilemap.GetAllTileData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Tilemaps::ITilemap*, int32_t, void*, void*, void*)>(
    &::UnityEngine::Tilemaps::ITilemap::GetAllTileData)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x2d50c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "GetAllTileData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Tilemaps::Tilemap*& UnityEngine::Tilemaps::ITilemap::__get_m_Tilemap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Tilemap;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Tilemaps::Tilemap*> const& UnityEngine::Tilemaps::ITilemap::__get_m_Tilemap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Tilemap;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__set_m_Tilemap(::UnityEngine::Tilemaps::Tilemap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Tilemap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Tilemaps::ITilemap::__get_m_AddToList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AddToList;
}
constexpr bool const& UnityEngine::Tilemaps::ITilemap::__get_m_AddToList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AddToList;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__set_m_AddToList(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_AddToList = value;
}
constexpr int32_t& UnityEngine::Tilemaps::ITilemap::__get_m_RefreshCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RefreshCount;
}
constexpr int32_t const& UnityEngine::Tilemaps::ITilemap::__get_m_RefreshCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RefreshCount;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__set_m_RefreshCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_RefreshCount = value;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int>& UnityEngine::Tilemaps::ITilemap::__get_m_RefreshPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RefreshPos;
}
constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> const& UnityEngine::Tilemaps::ITilemap::__get_m_RefreshPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_RefreshPos;
}
constexpr void UnityEngine::Tilemaps::ITilemap::__set_m_RefreshPos(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3Int> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_RefreshPos = value;
}
inline void UnityEngine::Tilemaps::ITilemap::setStaticF_s_Instance(::UnityEngine::Tilemaps::ITilemap* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Tilemaps::ITilemap*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get>(
      std::forward<::UnityEngine::Tilemaps::ITilemap*>(value));
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Tilemaps::ITilemap*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get>();
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Tilemaps::ITilemap*>());
}
inline void UnityEngine::Tilemaps::ITilemap::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Tilemaps::ITilemap::RefreshTile(::UnityEngine::Vector3Int position) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "RefreshTile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3Int>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline ::UnityEngine::Tilemaps::ITilemap* UnityEngine::Tilemaps::ITilemap::CreateInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "CreateInstance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Tilemaps::ITilemap*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Tilemaps::ITilemap::FindAllRefreshPositions(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* oldTilesIntPtr, void* newTilesIntPtr, void* positionsIntPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "FindAllRefreshPositions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tilemap, count, oldTilesIntPtr, newTilesIntPtr, positionsIntPtr);
}
inline void UnityEngine::Tilemaps::ITilemap::GetAllTileData(::UnityEngine::Tilemaps::ITilemap* tilemap, int32_t count, void* tilesIntPtr, void* positionsIntPtr, void* outTileDataIntPtr) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Tilemaps::ITilemap*>::get(), "GetAllTileData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Tilemaps::ITilemap*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tilemap, count, tilesIntPtr, positionsIntPtr, outTileDataIntPtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Tilemaps::ITilemap::ITilemap() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
