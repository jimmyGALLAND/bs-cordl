#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCache_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__TerrainLayer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeCachePreset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoNode_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailPrototype_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeScatterTrees_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_VolumeLayer_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.get_IsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::get_IsDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21ea9fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_IsDirty",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.set_IsDirty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(bool)>(&::HoudiniEngineUnity::HEU_VolumeCache::set_IsDirty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21eaa04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "set_IsDirty", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.get_TileIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::get_TileIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_TileIndex",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.get_ObjectName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::get_ObjectName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_ObjectName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.get_GeoName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::get_GeoName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_GeoName",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.get_UIExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::get_UIExpanded)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21eaa28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_UIExpanded",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.set_UIExpanded
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(bool)>(&::HoudiniEngineUnity::HEU_VolumeCache::set_UIExpanded)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21eaa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "set_UIExpanded", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.UpdateVolumeCachesFromParts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_GeoNode*,
                                                                                                    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*,
                                                                                                    ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*)>(
        &::HoudiniEngineUnity::HEU_VolumeCache::UpdateVolumeCachesFromParts)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x21eaa3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "UpdateVolumeCachesFromParts", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.Initialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_GeoNode*, int32_t)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::Initialize)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x21eb76c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.ResetParameters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::ResetParameters)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x21eb7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "ResetParameters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.GetLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_VolumeLayer* (::HoudiniEngineUnity::HEU_VolumeCache::*)(::StringW)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::GetLayer)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x21eb9e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GetLayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.StartUpdateLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::StartUpdateLayers)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x21eb318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(),
                                                                               "StartUpdateLayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.FinishUpdateLayers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::FinishUpdateLayers)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21eb7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(),
                                                                               "FinishUpdateLayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.GetPartLayerAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::HoudiniEngineUnity::HEU_VolumeLayer*)>(&::HoudiniEngineUnity::HEU_VolumeCache::GetPartLayerAttributes)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x21ebb78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GetPartLayerAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadLayerTextureFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Texture2D*>)>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadLayerTextureFromAttribute)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21ebcd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerTextureFromAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadLayerFloatFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadLayerFloatFromAttribute)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x21ebecc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerFloatFromAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadLayerColorFromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Color>)>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadLayerColorFromAttribute)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x21ec000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerColorFromAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadLayerVector2FromAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::StringW, ByRef<::UnityEngine::Vector2>)>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadLayerVector2FromAttribute)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x21ec16c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerVector2FromAttribute", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.UpdateLayerFromPart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_PartData*)>(&::HoudiniEngineUnity::HEU_VolumeCache::UpdateLayerFromPart)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x21eb38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "UpdateLayerFromPart", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.GenerateTerrainWithAlphamaps
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool)>(&::HoudiniEngineUnity::HEU_VolumeCache::GenerateTerrainWithAlphamaps)> {
  constexpr static std::size_t size = 0x17cc;
  constexpr static std::size_t addrs = 0x21ec2b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GenerateTerrainWithAlphamaps", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadLayerPropertiesFromAttributes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::UnityEngine::TerrainLayer*, bool, ::UnityEngine::Texture2D*)>(
        &::HoudiniEngineUnity::HEU_VolumeCache::LoadLayerPropertiesFromAttributes)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x21edddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerPropertiesFromAttributes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.PopulateScatterTrees
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, int32_t, bool)>(&::HoudiniEngineUnity::HEU_VolumeCache::PopulateScatterTrees)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x21ee1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulateScatterTrees", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.PopulateDetailPrototype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(
    ::HoudiniEngineUnity::HEU_SessionBase*, int32_t, int32_t, ::HoudiniEngineUnity::HEU_VolumeLayer*)>(&::HoudiniEngineUnity::HEU_VolumeCache::PopulateDetailPrototype)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21ee208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulateDetailPrototype", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.PopulatePreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::PopulatePreset)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x21ee230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulatePreset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.ApplyPreset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_VolumeCachePreset*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::ApplyPreset)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x21eda7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "ApplyPreset", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.CopyValuesTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::CopyValuesTo)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x21ee4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyValuesTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.CopyDetailProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_DetailProperties*, ::HoudiniEngineUnity::HEU_DetailProperties*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::CopyDetailProperties)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21ee730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyDetailProperties", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.CopyLayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_VolumeLayer*, ::HoudiniEngineUnity::HEU_VolumeLayer*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::CopyLayer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x21eb930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyLayer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.CopyPrototype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_DetailPrototype*, ::HoudiniEngineUnity::HEU_DetailPrototype*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::CopyPrototype)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x21ee758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyPrototype", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadDefaultSplatTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadDefaultSplatTexture)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21edd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(),
                                                                               "LoadDefaultSplatTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.LoadAssetTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Texture2D* (*)(::StringW)>(&::HoudiniEngineUnity::HEU_VolumeCache::LoadAssetTexture)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x21ebdcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadAssetTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_VolumeCache::*)(::HoudiniEngineUnity::HEU_VolumeCache*)>(
    &::HoudiniEngineUnity::HEU_VolumeCache::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x21ee7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_VolumeCache._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_VolumeCache::*)()>(&::HoudiniEngineUnity::HEU_VolumeCache::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21eeabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeCache*>"
constexpr HoudiniEngineUnity::HEU_VolumeCache::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeCache*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_VolumeCache*>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::HEU_GeoNode*& HoudiniEngineUnity::HEU_VolumeCache::__get__ownerNode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerNode;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeoNode*> const& HoudiniEngineUnity::HEU_VolumeCache::__get__ownerNode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ownerNode;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__ownerNode(::HoudiniEngineUnity::HEU_GeoNode* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ownerNode)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& HoudiniEngineUnity::HEU_VolumeCache::__get__layers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*> const& HoudiniEngineUnity::HEU_VolumeCache::__get__layers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____layers;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__layers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____layers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*& HoudiniEngineUnity::HEU_VolumeCache::__get__updatedLayers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedLayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>*> const&
HoudiniEngineUnity::HEU_VolumeCache::__get__updatedLayers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedLayers;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__updatedLayers(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeLayer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____updatedLayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_VolumeCache::__get__tileIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileIndex;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_VolumeCache::__get__tileIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____tileIndex;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__tileIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____tileIndex = value;
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeCache::__get__isDirty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeCache::__get__isDirty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isDirty;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__isDirty(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isDirty = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCache::__get__geoName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCache::__get__geoName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____geoName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__geoName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____geoName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_VolumeCache::__get__objName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_VolumeCache::__get__objName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____objName;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__objName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____objName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_VolumeCache::__get__uiExpanded() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr bool const& HoudiniEngineUnity::HEU_VolumeCache::__get__uiExpanded() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____uiExpanded;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__uiExpanded(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____uiExpanded = value;
}
constexpr ::UnityEngine::TerrainData*& HoudiniEngineUnity::HEU_VolumeCache::__get__terrainData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TerrainData*> const& HoudiniEngineUnity::HEU_VolumeCache::__get__terrainData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____terrainData;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__terrainData(::UnityEngine::TerrainData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____terrainData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_VolumeScatterTrees*& HoudiniEngineUnity::HEU_VolumeCache::__get__scatterTrees() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scatterTrees;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_VolumeScatterTrees*> const& HoudiniEngineUnity::HEU_VolumeCache::__get__scatterTrees() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scatterTrees;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__scatterTrees(::HoudiniEngineUnity::HEU_VolumeScatterTrees* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scatterTrees)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_DetailProperties*& HoudiniEngineUnity::HEU_VolumeCache::__get__detailProperties() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailProperties;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_DetailProperties*> const& HoudiniEngineUnity::HEU_VolumeCache::__get__detailProperties() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailProperties;
}
constexpr void HoudiniEngineUnity::HEU_VolumeCache::__set__detailProperties(::HoudiniEngineUnity::HEU_DetailProperties* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____detailProperties)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::get_IsDirty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_IsDirty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::set_IsDirty(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "set_IsDirty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t HoudiniEngineUnity::HEU_VolumeCache::get_TileIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_TileIndex",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_VolumeCache::get_ObjectName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_ObjectName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_VolumeCache::get_GeoName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_GeoName",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::get_UIExpanded() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "get_UIExpanded",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::set_UIExpanded(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "set_UIExpanded", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*
HoudiniEngineUnity::HEU_VolumeCache::UpdateVolumeCachesFromParts(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_GeoNode* ownerNode,
                                                                 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>* volumeParts,
                                                                 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>* volumeCaches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "UpdateVolumeCachesFromParts", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_PartData*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_VolumeCache*>*, false>(nullptr, ___internal_method, session, ownerNode, volumeParts,
                                                                                                                                     volumeCaches);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::Initialize(::HoudiniEngineUnity::HEU_GeoNode* ownerNode, int32_t tileIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "Initialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeoNode*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ownerNode, tileIndex);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::ResetParameters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "ResetParameters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_VolumeLayer* HoudiniEngineUnity::HEU_VolumeCache::GetLayer(::StringW layerName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GetLayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_VolumeLayer*, false>(this, ___internal_method, layerName);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::StartUpdateLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "StartUpdateLayers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::FinishUpdateLayers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(),
                                                                             "FinishUpdateLayers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::GetPartLayerAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GetPartLayerAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, layer);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::LoadLayerTextureFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                               ByRef<::UnityEngine::Texture2D*> outTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerTextureFromAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Texture2D*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoID, partID, attrName, outTexture);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::LoadLayerFloatFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                             ByRef<float_t> floatValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerFloatFromAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoID, partID, attrName, floatValue);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::LoadLayerColorFromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                             ByRef<::UnityEngine::Color> colorValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerColorFromAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Color>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoID, partID, attrName, colorValue);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::LoadLayerVector2FromAttribute(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::StringW attrName,
                                                                               ByRef<::UnityEngine::Vector2> vectorValue) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerVector2FromAttribute", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, session, geoID, partID, attrName, vectorValue);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::UpdateLayerFromPart(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_PartData* part) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "UpdateLayerFromPart", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_PartData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, part);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::GenerateTerrainWithAlphamaps(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HEU_HoudiniAsset* houdiniAsset, bool bRebuild) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "GenerateTerrainWithAlphamaps", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, houdiniAsset, bRebuild);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::LoadLayerPropertiesFromAttributes(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID,
                                                                                   ::UnityEngine::TerrainLayer* terrainLayer, bool bNewTerrainLayer, ::UnityEngine::Texture2D* defaultTexture) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadLayerPropertiesFromAttributes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainLayer*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, terrainLayer, bNewTerrainLayer, defaultTexture);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::PopulateScatterTrees(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, int32_t pointCount,
                                                                      bool throwWarningIfNoTileAttribute) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulateScatterTrees", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, pointCount, throwWarningIfNoTileAttribute);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::PopulateDetailPrototype(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, ::HoudiniEngineUnity::HEU_VolumeLayer* layer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulateDetailPrototype", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, geoID, partID, layer);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::PopulatePreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* cachePreset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "PopulatePreset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cachePreset);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::ApplyPreset(::HoudiniEngineUnity::HEU_VolumeCachePreset* volumeCachePreset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "ApplyPreset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCachePreset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, volumeCachePreset);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::CopyValuesTo(::HoudiniEngineUnity::HEU_VolumeCache* destCache) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyValuesTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destCache);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::CopyDetailProperties(::HoudiniEngineUnity::HEU_DetailProperties* srcProp, ::HoudiniEngineUnity::HEU_DetailProperties* destProp) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyDetailProperties", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcProp, destProp);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::CopyLayer(::HoudiniEngineUnity::HEU_VolumeLayer* srcLayer, ::HoudiniEngineUnity::HEU_VolumeLayer* destLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyLayer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeLayer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcLayer, destLayer);
}
inline void HoudiniEngineUnity::HEU_VolumeCache::CopyPrototype(::HoudiniEngineUnity::HEU_DetailPrototype* srcProto, ::HoudiniEngineUnity::HEU_DetailPrototype* destProto) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "CopyPrototype", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailPrototype*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, srcProto, destProto);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_VolumeCache::LoadDefaultSplatTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(),
                                                                             "LoadDefaultSplatTexture", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::Texture2D* HoudiniEngineUnity::HEU_VolumeCache::LoadAssetTexture(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "LoadAssetTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Texture2D*, false>(nullptr, ___internal_method, path);
}
inline bool HoudiniEngineUnity::HEU_VolumeCache::IsEquivalentTo(::HoudiniEngineUnity::HEU_VolumeCache* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_VolumeCache*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_VolumeCache* HoudiniEngineUnity::HEU_VolumeCache::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_VolumeCache*>());
}
inline void HoudiniEngineUnity::HEU_VolumeCache::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_VolumeCache*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_VolumeCache::HEU_VolumeCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
