#pragma once
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "UnityEngine/zzzz__RectInt_def.hpp"
#include "UnityEngine/zzzz__TerrainCallbacks_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::*)(::System::Object*, void*)>(
    &::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d1e69c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::*)(
    ::UnityEngine::Terrain*, ::UnityEngine::RectInt, bool)>(&::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d1e774;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>(object, method));
}
inline void UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::UnityEngine::RectInt heightRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, terrain, heightRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback::__TerrainCallbacks__HeightmapChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__TextureChangedCallback._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__TextureChangedCallback::*)(::System::Object*, void*)>(
    &::UnityEngine::__TerrainCallbacks__TextureChangedCallback::_ctor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2d1e78c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__TerrainCallbacks__TextureChangedCallback.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__TerrainCallbacks__TextureChangedCallback::*)(
    ::UnityEngine::Terrain*, ::StringW, ::UnityEngine::RectInt, bool)>(&::UnityEngine::__TerrainCallbacks__TextureChangedCallback::Invoke)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2d1e864;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), 13));
    return ___internal_method;
  }
};
inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* UnityEngine::__TerrainCallbacks__TextureChangedCallback::New_ctor(::System::Object* object, void* method) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>(object, method));
}
inline void UnityEngine::__TerrainCallbacks__TextureChangedCallback::_ctor(::System::Object* object, void* method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::__TerrainCallbacks__TextureChangedCallback::Invoke(::UnityEngine::Terrain* terrain, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>::get(), "Invoke", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Terrain*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, terrain, textureName, texelRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::__TerrainCallbacks__TextureChangedCallback::__TerrainCallbacks__TextureChangedCallback() {}
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeHeightmapChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d1e474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeHeightmapChangedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TerrainCallbacks.InvokeTextureChangedCallback
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::TerrainData*, ::StringW, ::UnityEngine::RectInt, bool)>(
    &::UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2d1e580;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeTextureChangedCallback", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::TerrainCallbacks::setStaticF_heightmapChanged(::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "heightmapChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>(
      std::forward<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*>(value));
}
inline ::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_heightmapChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::__TerrainCallbacks__HeightmapChangedCallback*, "heightmapChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>();
}
inline void UnityEngine::TerrainCallbacks::setStaticF_textureChanged(::UnityEngine::__TerrainCallbacks__TextureChangedCallback* value) {
  ::cordl_internals::setStaticField<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "textureChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>(
      std::forward<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*>(value));
}
inline ::UnityEngine::__TerrainCallbacks__TextureChangedCallback* UnityEngine::TerrainCallbacks::getStaticF_textureChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::__TerrainCallbacks__TextureChangedCallback*, "textureChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get>();
}
inline void UnityEngine::TerrainCallbacks::InvokeHeightmapChangedCallback(::UnityEngine::TerrainData* terrainData, ::UnityEngine::RectInt heightRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeHeightmapChangedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData, heightRegion, synched);
}
inline void UnityEngine::TerrainCallbacks::InvokeTextureChangedCallback(::UnityEngine::TerrainData* terrainData, ::StringW textureName, ::UnityEngine::RectInt texelRegion, bool synched) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::TerrainCallbacks*>::get(), "InvokeTextureChangedCallback", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::RectInt>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, terrainData, textureName, texelRegion, synched);
}
// Ctor Parameters []
constexpr ::UnityEngine::TerrainCallbacks::TerrainCallbacks() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
