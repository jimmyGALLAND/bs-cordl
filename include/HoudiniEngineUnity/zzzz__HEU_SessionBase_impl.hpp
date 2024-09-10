#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_SessionBase.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Result_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeOwner_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_BoxInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CacheProperty_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CookOptions_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_CurveInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_EnvIntType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GroupType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleBindingInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HandleInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_HeightFieldSampling_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImageInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_MaterialInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ObjectInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmChoiceInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PartInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_RSTOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Result_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionEnvIntType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SessionSyncInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_SphereInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_State_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StatusType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StatusVerbosity_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_TransformEuler_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Viewport_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeTileInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_XYZOrder_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionData_def.hpp"
#include "HoudiniEngineUnity/zzzz__SessionConnectionState_def.hpp"
#include "HoudiniEngineUnity/zzzz__SessionMode_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_UserNotifiedSessionInvalid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_UserNotifiedSessionInvalid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4ca0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_UserNotifiedSessionInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_UserNotifiedSessionInvalid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::set_UserNotifiedSessionInvalid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d4ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_UserNotifiedSessionInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_ConnectionState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::SessionConnectionState (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_ConnectionState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39d4cb4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ConnectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_ConnectionState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::SessionConnectionState)>(&::HoudiniEngineUnity::HEU_SessionBase::set_ConnectionState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d4ccc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ConnectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::SessionConnectionState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_ThisSessionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::SessionMode (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_ThisSessionMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39d4cdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ThisSessionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_ThisSessionMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::SessionMode)>(&::HoudiniEngineUnity::HEU_SessionBase::set_ThisSessionMode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d4cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ThisSessionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::SessionMode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSessionErrorMsg
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetSessionErrorMsg)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetSessionErrorMsg",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_LogErrorOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_LogErrorOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_LogErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_LogErrorOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::set_LogErrorOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d4d14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_LogErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_ThrowErrorOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_ThrowErrorOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ThrowErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_ThrowErrorOverride
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::set_ThrowErrorOverride)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d4d28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ThrowErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.IsSessionSync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::IsSessionSync)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d4d34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "IsSessionSync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.get_LastCallResultCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HAPI_Result (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::get_LastCallResultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_LastCallResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.set_LastCallResultCode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HAPI_Result)>(&::HoudiniEngineUnity::HEU_SessionBase::set_LastCallResultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_LastCallResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Result>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetRegisteredAssetFromID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetRegisteredAssetFromID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d74;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.IsAssetRegistered
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_SessionBase::IsAssetRegistered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d4d7c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RegisterAsset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_SessionBase::RegisterAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d4d84;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.UnregisterAsset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::UnregisterAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d4d88;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  7
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ReregisterOnAwake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_SessionBase::ReregisterOnAwake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d4d8c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d4d90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetSessionErrorMsg
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SetSessionErrorMsg)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d4db0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetSessionConnectionErrorMsg
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, ::HoudiniEngineUnity::HAPI_Result, bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SetSessionConnectionErrorMsg)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x39d4dd0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  10
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetLibraryErrorMsg
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SetLibraryErrorMsg)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x39d5074;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  11
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateSessionData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateSessionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d512c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  12
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateInProcessSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateInProcessSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5134;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateThriftSocketSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool, ::StringW, int32_t, bool, float_t, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateThriftSocketSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d513c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateThriftPipeSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool, ::StringW, bool, float_t, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateThriftPipeSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5144;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateCustomSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateCustomSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d514c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  16
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ConnectThriftSocketSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool, ::StringW, int32_t, bool, float_t, bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::ConnectThriftSocketSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5154;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  17
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ConnectThriftPipeSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool, ::StringW, bool, float_t, bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::ConnectThriftPipeSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d515c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  18
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CloseSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::CloseSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5164;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  19
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CheckAndCloseExistingSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::CheckAndCloseExistingSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d516c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  20
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ClearSessionInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::ClearSessionInfo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d5174;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetSessionData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HEU_SessionData*)>(&::HoudiniEngineUnity::HEU_SessionBase::SetSessionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d519c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "SetSessionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSessionData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionData* (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetSessionData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d51a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetSessionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSessionInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetSessionInfo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39d51ac;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.IsSessionValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::IsSessionValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d51ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  23
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RestartSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::RestartSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d51f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetLastSessionError
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetLastSessionError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d51fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetLastSessionError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CheckVersionMatch
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::CheckVersionMatch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5204;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  25
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.InitializeSession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HEU_SessionData*)>(&::HoudiniEngineUnity::HEU_SessionBase::InitializeSession)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d520c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  26
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.HandleStatusResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HAPI_Result, ::StringW, bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::HandleStatusResult)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5214;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  27
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetServerEnvString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::SetServerEnvString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d521c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  28
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetServerEnvString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetServerEnvString)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5220;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetServerEnvVarCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetServerEnvVarCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d522c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCallResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_Result>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCallResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5238;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  31
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCookResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_Result>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCookResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5244;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  32
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCookState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_State>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCookState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5250;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetStatusString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HAPI_StatusType, ::HoudiniEngineUnity::HAPI_StatusVerbosity)>(&::HoudiniEngineUnity::HEU_SessionBase::GetStatusString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39d525c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  34
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ComposeNodeCookResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::HoudiniEngineUnity::HAPI_StatusVerbosity)>(&::HoudiniEngineUnity::HEU_SessionBase::ComposeNodeCookResult)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39d529c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  35
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetEnvInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HAPI_EnvIntType)>(&::HoudiniEngineUnity::HEU_SessionBase::GetEnvInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d52dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  36
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSessionEnvInt
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_SessionBase::*)(::HoudiniEngineUnity::HAPI_SessionEnvIntType, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetSessionEnvInt)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d52e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  37
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetString
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::StringW>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d52ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  38
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetStringBufferLength
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetStringBufferLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d52f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  39
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CheckForSpecificErrors
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::CheckForSpecificErrors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d52fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  40
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5304;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  41
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(float_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d530c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  42
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetUseHoudiniTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)()>(&::HoudiniEngineUnity::HEU_SessionBase::GetUseHoudiniTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5314;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  43
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetUseHoudiniTime
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SetUseHoudiniTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d531c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  44
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.LoadAssetLibraryFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::LoadAssetLibraryFromFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5324;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  45
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.LoadAssetLibraryFromMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::ArrayW<uint8_t,::Array<uint8_t>*>, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::LoadAssetLibraryFromMemory)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5330;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  46
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d533c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  47
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.DeleteNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::DeleteNode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39d534c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  48
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CookNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, bool, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::CookNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5350;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  49
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CookNodeWithOptions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::HoudiniEngineUnity::HAPI_CookOptions)>(&::HoudiniEngineUnity::HEU_SessionBase::CookNodeWithOptions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5358;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  50
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RenameNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::RenameNode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5360;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  51
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ConnectNodeInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::ConnectNodeInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5368;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  52
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.DisconnectNodeInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::DisconnectNodeInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5370;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  53
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.QueryNodeInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<int32_t>, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::QueryNodeInput)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5378;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  54
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetNodeInputName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetNodeInputName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5388;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  55
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAvailableAssetCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAvailableAssetCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5394;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  56
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAvailableAssets
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAvailableAssets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  57
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAssetInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_AssetInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAssetInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  58
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetNodeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetNodeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  59
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetNodePath
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetNodePath)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d53b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  60
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.IsNodeValid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::IsNodeValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  61
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ComposeChildNodeList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::ComposeChildNodeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  62
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetComposedChildNodeList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetComposedChildNodeList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  63
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.LoadHIPFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::LoadHIPFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  64
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SaveHIPFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SaveHIPFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  65
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetObjectInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetObjectInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  66
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetObjectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_RSTOrder, ByRef<::HoudiniEngineUnity::HAPI_Transform>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetObjectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  67
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetObjectTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetObjectTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d53fc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  68
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ComposeObjectList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::ComposeObjectList)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5404;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  69
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetComposedObjectList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetComposedObjectList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5410;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  70
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetComposedObjectTransforms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::HoudiniEngineUnity::HAPI_RSTOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetComposedObjectTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5418;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  71
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetDisplayGeoInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo>, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetDisplayGeoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5420;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  72
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGeoInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo>, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGeoInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5428;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  73
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetPartInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetPartInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5430;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  74
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ::HoudiniEngineUnity::HAPI_AttributeOwner, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5438;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  75
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_AttributeOwner, ByRef<::ArrayW<::StringW,::Array<::StringW>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5440;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  76
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeStringData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeStringData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5448;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  77
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeFloatData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<float_t,::Array<float_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeFloatData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5450;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  78
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeFloat64Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<double_t,::Array<double_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeFloat64Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5458;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  79
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeIntData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeIntData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5460;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  80
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeUInt8Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeUInt8Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5468;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  81
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeInt8Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int8_t,::Array<int8_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt8Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5470;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  82
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeInt16Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int16_t,::Array<int16_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt16Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5478;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  83
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetAttributeInt64Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ByRef<::ArrayW<int64_t,::Array<int64_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt64Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5480;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  84
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGroupNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGroupNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5488;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  85
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGroupMembership
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ::StringW, ByRef<bool>, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGroupMembership)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5490;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  86
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGroupCountOnPackedInstancePart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<int32_t>, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGroupCountOnPackedInstancePart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5498;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  87
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGroupNamesOnPackedInstancePart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGroupNamesOnPackedInstancePart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  88
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGroupMembershipOnPackedInstancePart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ::StringW, ByRef<bool>, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGroupMembershipOnPackedInstancePart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  89
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetInstancedPartIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetInstancedPartIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  90
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetInstancerPartTransforms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_RSTOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetInstancerPartTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  91
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetInstanceTransformsOnPart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_RSTOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetInstanceTransformsOnPart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  92
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetInstancedObjectIds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetInstancedObjectIds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  93
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetFaceCounts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetFaceCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  94
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetFaceCounts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetFaceCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  95
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetVertexList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetVertexList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  96
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetBoxInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_BoxInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetBoxInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  97
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSphereInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_SphereInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetSphereInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d54f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  98
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCurveInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_CurveInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCurveInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5500;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  99
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCurveCounts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCurveCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5508;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  100
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCurveOrders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCurveOrders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5510;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  101
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCurveKnots
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<float_t,::Array<float_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCurveKnots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5518;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  102
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetPartInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetPartInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5520;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  103
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetFaceCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetFaceCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5528;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  104
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetVertexList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetVertexList)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5530;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  105
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeIntData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeIntData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5538;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  106
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeInt8Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<int8_t,::Array<int8_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt8Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5540;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  107
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeInt16Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<int16_t,::Array<int16_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt16Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5548;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  108
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeInt64Data
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<int64_t,::Array<int64_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt64Data)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5550;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  109
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeFloatData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<float_t,::Array<float_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeFloatData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5558;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  110
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetAttributeStringData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>, ::ArrayW<::StringW,::Array<::StringW>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetAttributeStringData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5560;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  111
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.AddAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::AddAttribute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5568;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  112
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.AddGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::AddGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5570;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  113
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.DeleteGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::DeleteGroup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5578;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  114
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetGroupMembership
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::HoudiniEngineUnity::HAPI_GroupType, ::StringW, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetGroupMembership)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5580;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  115
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CommitGeo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::CommitGeo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5588;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  116
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RevertGeo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::RevertGeo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5590;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  117
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetCurveInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_CurveInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetCurveInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5598;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  118
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetCurveCounts
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetCurveCounts)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55a0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  119
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetCurveOrders
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<int32_t,::Array<int32_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetCurveOrders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55a8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  120
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetCurveKnots
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<float_t,::Array<float_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetCurveKnots)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  121
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetMaterialOnPart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetMaterialOnPart)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55b8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  122
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetMaterialNodeIDsOnFaces
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<bool>, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetMaterialNodeIDsOnFaces)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55c0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  123
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetMaterialInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo>, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::GetMaterialInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  124
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetImageInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetImageInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  125
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetImageInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetImageInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  126
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RenderTextureToImage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, bool)>(&::HoudiniEngineUnity::HEU_SessionBase::RenderTextureToImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  127
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RenderCOPToImage
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::RenderCOPToImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d55e8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  128
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ExtractImageToMemory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ::StringW, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>)>(&::HoudiniEngineUnity::HEU_SessionBase::ExtractImageToMemory)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x39d55f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  129
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetImagePlanes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetImagePlanes)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x39d5644;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  130
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ExtractImageToFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ::StringW, ::StringW, ByRef<::StringW>)>(&::HoudiniEngineUnity::HEU_SessionBase::ExtractImageToFile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5690;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  131
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParams
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParams)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d569c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  132
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParmTagName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParmTagName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d56a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  133
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParmTagValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParmTagValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d56b0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  134
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ParmHasTag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ByRef<bool>)>(&::HoudiniEngineUnity::HEU_SessionBase::ParmHasTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d56bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  135
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamIntValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamIntValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d56c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  136
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamIntValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamIntValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d56cc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  137
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamFloatValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<float_t,::Array<float_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamFloatValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d56d8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  138
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamFloatValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamFloatValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d56e0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  139
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamStringValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamStringValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d56ec;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  140
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamStringValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d56f4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  141
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamNodeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamNodeValue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5700;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  142
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParamChoiceValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParamChoiceValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5710;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  143
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamIntValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamIntValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5718;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  144
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamIntValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamIntValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5720;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  145
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamFloatValues
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<float_t,::Array<float_t>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamFloatValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5728;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  146
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamFloatValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamFloatValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5730;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  147
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamStringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5738;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  148
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamStringValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5740;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  149
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetParamNodeValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetParamNodeValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5748;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  150
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.InsertMultiparmInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::InsertMultiparmInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5750;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  151
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RemoveMultiParmInstance
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::RemoveMultiParmInstance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5758;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  152
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParmWithTag
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParmWithTag)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5760;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  153
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RevertParmToDefault
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::RevertParmToDefault)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5768;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  154
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.RevertParmToDefaults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::RevertParmToDefaults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5770;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  155
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParmIDFromName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParmIDFromName)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5778;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  156
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetParmStringValue
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetParmStringValue)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5788;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  157
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateInputNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<int32_t>, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateInputNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5794;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  158
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateHeightFieldInput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, int32_t, int32_t, float_t, ::HoudiniEngineUnity::HAPI_HeightFieldSampling, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateHeightFieldInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39d57a4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  159
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.CreateHeightfieldInputVolumeNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<int32_t>, ::StringW, int32_t, int32_t, float_t)>(&::HoudiniEngineUnity::HEU_SessionBase::CreateHeightfieldInputVolumeNode)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d57c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  160
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetPreset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetPreset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x39d57d4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  161
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetPreset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::ArrayW<uint8_t,::Array<uint8_t>*>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetPreset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5828;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  162
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetVolumeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetVolumeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5830;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  163
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetHeightFieldData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::ArrayW<float_t,::Array<float_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetHeightFieldData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5838;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  164
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetVolumeInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetVolumeInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5840;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  165
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetVolumeTileFloatData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::HoudiniEngineUnity::HAPI_VolumeTileInfo>, ::ArrayW<float_t,::Array<float_t>*>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetVolumeTileFloatData)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x39d5848;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  166
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetVolumeBounds
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>, ByRef<float_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetVolumeBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x39d5894;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  167
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetHeightFieldData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ::StringW, ::ArrayW<float_t,::Array<float_t>*>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetHeightFieldData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d58c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  168
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetActiveCacheCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetActiveCacheCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d58d0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  169
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetActiveCacheNames
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::ArrayW<int32_t,::Array<int32_t>*>>, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetActiveCacheNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d58dc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  170
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetCacheProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, ::HoudiniEngineUnity::HAPI_CacheProperty, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetCacheProperty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d58e4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  171
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetCacheProperty
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, ::HoudiniEngineUnity::HAPI_CacheProperty, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetCacheProperty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d58f0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  172
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SaveGeoToFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::SaveGeoToFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d58f8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  173
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.LoadGeoFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::LoadGeoFromFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5900;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  174
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SaveNodeToFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW)>(&::HoudiniEngineUnity::HEU_SessionBase::SaveNodeToFile)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5908;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  175
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.LoadNodeFromFile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(::StringW, int32_t, ::StringW, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::LoadNodeFromFile)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39d5910;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  176
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetGeoSize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ::StringW, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetGeoSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5920;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  177
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetHandleInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetHandleInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d592c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  178
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetHandleBindingInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleBindingInfo,::Array<::HoudiniEngineUnity::HAPI_HandleBindingInfo>*>>, int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::GetHandleBindingInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5934;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  179
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.ConvertTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>, ::HoudiniEngineUnity::HAPI_RSTOrder, ::HoudiniEngineUnity::HAPI_XYZOrder, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>)>(&::HoudiniEngineUnity::HEU_SessionBase::ConvertTransform)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39d593c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  180
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetTotalCookCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t, int32_t, bool, ByRef<int32_t>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetTotalCookCount)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39d5950;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  181
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetSessionSync
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(bool)>(&::HoudiniEngineUnity::HEU_SessionBase::SetSessionSync)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d595c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  182
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetViewport
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_Viewport>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5964;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  183
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetViewport
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_Viewport>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d596c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  184
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.GetSessionSyncInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::GetSessionSyncInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5974;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  185
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetSessionSyncInfo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>)>(&::HoudiniEngineUnity::HEU_SessionBase::SetSessionSyncInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d597c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  186
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_SessionBase.SetNodeDisplay
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_SessionBase::*)(int32_t, int32_t)>(&::HoudiniEngineUnity::HEU_SessionBase::SetNodeDisplay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39d5984;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                                  187
                                ));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HEU_SessionData*& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__sessionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionData;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_SessionData*> const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__sessionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionData;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__sessionData(::HoudiniEngineUnity::HEU_SessionData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__UserNotifiedSessionInvalid_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserNotifiedSessionInvalid_k__BackingField;
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__UserNotifiedSessionInvalid_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____UserNotifiedSessionInvalid_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__UserNotifiedSessionInvalid_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____UserNotifiedSessionInvalid_k__BackingField = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__sessionErrorMsg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionErrorMsg;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__sessionErrorMsg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sessionErrorMsg;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__sessionErrorMsg(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sessionErrorMsg)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__LogErrorOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogErrorOverride_k__BackingField;
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__LogErrorOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogErrorOverride_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__LogErrorOverride_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogErrorOverride_k__BackingField = value;
}
constexpr bool& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__ThrowErrorOverride_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowErrorOverride_k__BackingField;
}
constexpr bool const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__ThrowErrorOverride_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ThrowErrorOverride_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__ThrowErrorOverride_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ThrowErrorOverride_k__BackingField = value;
}
constexpr ::HoudiniEngineUnity::HAPI_Result& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__LastCallResultCode_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCallResultCode_k__BackingField;
}
constexpr ::HoudiniEngineUnity::HAPI_Result const& HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_get__LastCallResultCode_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LastCallResultCode_k__BackingField;
}
constexpr void HoudiniEngineUnity::HEU_SessionBase::__cordl_internal_set__LastCallResultCode_k__BackingField(::HoudiniEngineUnity::HAPI_Result  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LastCallResultCode_k__BackingField = value;
}
inline bool HoudiniEngineUnity::HEU_SessionBase::get_UserNotifiedSessionInvalid()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_UserNotifiedSessionInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_UserNotifiedSessionInvalid(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_UserNotifiedSessionInvalid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::SessionConnectionState HoudiniEngineUnity::HEU_SessionBase::get_ConnectionState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ConnectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::SessionConnectionState, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_ConnectionState(::HoudiniEngineUnity::SessionConnectionState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ConnectionState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::SessionConnectionState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HoudiniEngineUnity::SessionMode HoudiniEngineUnity::HEU_SessionBase::get_ThisSessionMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ThisSessionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::SessionMode, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_ThisSessionMode(::HoudiniEngineUnity::SessionMode  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ThisSessionMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::SessionMode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW HoudiniEngineUnity::HEU_SessionBase::GetSessionErrorMsg()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetSessionErrorMsg",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::get_LogErrorOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_LogErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_LogErrorOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_LogErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::get_ThrowErrorOverride()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_ThrowErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_ThrowErrorOverride(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_ThrowErrorOverride",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::IsSessionSync()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "IsSessionSync",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HAPI_Result HoudiniEngineUnity::HEU_SessionBase::get_LastCallResultCode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "get_LastCallResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HAPI_Result, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::set_LastCallResultCode(::HoudiniEngineUnity::HAPI_Result  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "set_LastCallResultCode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_Result>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> HoudiniEngineUnity::HEU_SessionBase::GetRegisteredAssetFromID(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>, false>(this, ___internal_method, id);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::IsAssetRegistered(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_SessionBase::RegisterAsset(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void HoudiniEngineUnity::HEU_SessionBase::UnregisterAsset(int32_t  id)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    7
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void HoudiniEngineUnity::HEU_SessionBase::ReregisterOnAwake(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_SessionBase::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_SessionBase*>());
}
inline void HoudiniEngineUnity::HEU_SessionBase::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @param bLogError: bool (default: false)
inline void HoudiniEngineUnity::HEU_SessionBase::SetSessionErrorMsg(::StringW  msg, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, msg, bLogError);
}
/// @param bLogError: bool (default: false)
inline void HoudiniEngineUnity::HEU_SessionBase::SetSessionConnectionErrorMsg(::StringW  introMsg, ::HoudiniEngineUnity::HAPI_Result  result, bool  bIsHARSRunning, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    10
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, introMsg, result, bIsHARSRunning, bLogError);
}
/// @param bLogError: bool (default: false)
inline void HoudiniEngineUnity::HEU_SessionBase::SetLibraryErrorMsg(bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    11
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateSessionData(bool  bOverwriteExisting, bool  bIsDefaultSession)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    12
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bOverwriteExisting, bIsDefaultSession);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateInProcessSession(bool  bIsDefaultSession)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession);
}
/// @param hostName: ::StringW (default: u"localhost")
/// @param serverPort: int32_t (default: static_cast<int32_t>(0x2382))
/// @param autoClose: bool (default: true)
/// @param timeout: float_t (default: 10000.0)
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateThriftSocketSession(bool  bIsDefaultSession, ::StringW  hostName, int32_t  serverPort, bool  autoClose, float_t  timeout, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession, hostName, serverPort, autoClose, timeout, bLogError);
}
/// @param pipeName: ::StringW (default: u"hapi")
/// @param autoClose: bool (default: true)
/// @param timeout: float_t (default: 10000.0)
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateThriftPipeSession(bool  bIsDefaultSession, ::StringW  pipeName, bool  autoClose, float_t  timeout, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession, pipeName, autoClose, timeout, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateCustomSession(bool  bIsDefaultSession)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    16
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession);
}
/// @param hostName: ::StringW (default: u"localhost")
/// @param serverPort: int32_t (default: static_cast<int32_t>(0x2382))
/// @param autoClose: bool (default: true)
/// @param timeout: float_t (default: 10000.0)
/// @param logError: bool (default: true)
/// @param autoInitialize: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::ConnectThriftSocketSession(bool  bIsDefaultSession, ::StringW  hostName, int32_t  serverPort, bool  autoClose, float_t  timeout, bool  logError, bool  autoInitialize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    17
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession, hostName, serverPort, autoClose, timeout, logError, autoInitialize);
}
/// @param pipeName: ::StringW (default: u"hapi")
/// @param autoClose: bool (default: true)
/// @param timeout: float_t (default: 10000.0)
/// @param logError: bool (default: true)
/// @param autoInitialize: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::ConnectThriftPipeSession(bool  bIsDefaultSession, ::StringW  pipeName, bool  autoClose, float_t  timeout, bool  logError, bool  autoInitialize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    18
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, bIsDefaultSession, pipeName, autoClose, timeout, logError, autoInitialize);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CloseSession()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    19
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CheckAndCloseExistingSession()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    20
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::ClearSessionInfo()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_SessionBase::SetSessionData(::HoudiniEngineUnity::HEU_SessionData*  sessionData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "SetSessionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sessionData);
}
inline ::HoudiniEngineUnity::HEU_SessionData* HoudiniEngineUnity::HEU_SessionBase::GetSessionData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetSessionData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionData*, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_SessionBase::GetSessionInfo()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::IsSessionValid()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    23
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RestartSession()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::StringW HoudiniEngineUnity::HEU_SessionBase::GetLastSessionError()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                        "GetLastSessionError",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CheckVersionMatch()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    25
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::InitializeSession(::HoudiniEngineUnity::HEU_SessionData*  sessionData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    26
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, sessionData);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::HandleStatusResult(::HoudiniEngineUnity::HAPI_Result  result, ::StringW  prependMsg, bool  bThrowError, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    27
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result, prependMsg, bThrowError, bLogError);
}
inline void HoudiniEngineUnity::HEU_SessionBase::SetServerEnvString(::StringW  name, ::StringW  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    28
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetServerEnvString(::StringW  name, ByRef<::StringW>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, name, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetServerEnvVarCount(ByRef<int32_t>  env_count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, env_count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCallResult(ByRef<::HoudiniEngineUnity::HAPI_Result>  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    31
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCookResult(ByRef<::HoudiniEngineUnity::HAPI_Result>  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    32
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, result);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCookState(ByRef<::HoudiniEngineUnity::HAPI_State>  state)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, state);
}
inline ::StringW HoudiniEngineUnity::HEU_SessionBase::GetStatusString(::HoudiniEngineUnity::HAPI_StatusType  statusType, ::HoudiniEngineUnity::HAPI_StatusVerbosity  verbosity)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    34
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, statusType, verbosity);
}
inline ::StringW HoudiniEngineUnity::HEU_SessionBase::ComposeNodeCookResult(int32_t  nodeId, ::HoudiniEngineUnity::HAPI_StatusVerbosity  verbosity)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    35
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, nodeId, verbosity);
}
inline int32_t HoudiniEngineUnity::HEU_SessionBase::GetEnvInt(::HoudiniEngineUnity::HAPI_EnvIntType  intType)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    36
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, intType);
}
inline int32_t HoudiniEngineUnity::HEU_SessionBase::GetSessionEnvInt(::HoudiniEngineUnity::HAPI_SessionEnvIntType  intType, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    37
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, intType, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetString(int32_t  stringHandle, ByRef<::StringW>  resultString, int32_t  bufferLength)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    38
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, stringHandle, resultString, bufferLength);
}
inline int32_t HoudiniEngineUnity::HEU_SessionBase::GetStringBufferLength(int32_t  stringHandle)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    39
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, stringHandle);
}
inline int32_t HoudiniEngineUnity::HEU_SessionBase::CheckForSpecificErrors(int32_t  nodeID, int32_t  errorsToCheck)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    40
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, nodeID, errorsToCheck);
}
inline float_t HoudiniEngineUnity::HEU_SessionBase::GetTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    41
                )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetTime(float_t  time)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    42
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, time);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetUseHoudiniTime()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    43
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetUseHoudiniTime(bool  enable)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    44
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enable);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::LoadAssetLibraryFromFile(::StringW  assetPath, bool  bAllowOverwrite, ByRef<int32_t>  libraryID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    45
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, assetPath, bAllowOverwrite, libraryID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::LoadAssetLibraryFromMemory(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, bool  bAllowOverwrite, ByRef<int32_t>  libraryID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    46
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, buffer, bAllowOverwrite, libraryID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateNode(int32_t  parentNodeID, ::StringW  operatorName, ::StringW  nodeLabel, bool  bCookOnCreation, ByRef<int32_t>  newNodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    47
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentNodeID, operatorName, nodeLabel, bCookOnCreation, newNodeID);
}
inline void HoudiniEngineUnity::HEU_SessionBase::DeleteNode(int32_t  nodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    48
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeID);
}
/// @param bSplitGeosByGroup: bool (default: false)
inline bool HoudiniEngineUnity::HEU_SessionBase::CookNode(int32_t  nodeID, bool  bCookTemplatedGeos, bool  bSplitGeosByGroup)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    49
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, bCookTemplatedGeos, bSplitGeosByGroup);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CookNodeWithOptions(int32_t  nodeID, ::HoudiniEngineUnity::HAPI_CookOptions  cookOptions)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    50
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, cookOptions);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RenameNode(int32_t  nodeID, ::StringW  newName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    51
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, newName);
}
/// @param outputIndex: int32_t (default: static_cast<int32_t>(0x0))
inline bool HoudiniEngineUnity::HEU_SessionBase::ConnectNodeInput(int32_t  nodeID, int32_t  inputIndex, int32_t  nodeIDToConnect, int32_t  outputIndex)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    52
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, inputIndex, nodeIDToConnect, outputIndex);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::DisconnectNodeInput(int32_t  nodeID, int32_t  inputIndex, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    53
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, inputIndex, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::QueryNodeInput(int32_t  nodeID, int32_t  inputIndex, ByRef<int32_t>  connectedNodeID, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    54
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, inputIndex, connectedNodeID, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetNodeInputName(int32_t  nodeID, int32_t  inputIndex, ByRef<int32_t>  nodeNameIndex)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    55
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, inputIndex, nodeNameIndex);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAvailableAssetCount(int32_t  libraryID, ByRef<int32_t>  assetCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    56
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, libraryID, assetCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAvailableAssets(int32_t  libraryID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  assetNames, int32_t  assetCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    57
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, libraryID, assetNames, assetCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAssetInfo(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_AssetInfo>  assetInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    58
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, assetInfo);
}
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::GetNodeInfo(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>  nodeInfo, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    59
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, nodeInfo, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetNodePath(int32_t  nodeID, int32_t  relativeNodeID, ByRef<::StringW>  path)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    60
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, relativeNodeID, path);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::IsNodeValid(int32_t  nodeID, int32_t  uniqueNodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    61
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, uniqueNodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ComposeChildNodeList(int32_t  parentNodeID, int32_t  nodeTypeFilter, int32_t  nodeFlagFilter, bool  bRecursive, ByRef<int32_t>  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    62
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentNodeID, nodeTypeFilter, nodeFlagFilter, bRecursive, count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetComposedChildNodeList(int32_t  parentNodeID, ::ArrayW<int32_t,::Array<int32_t>*>  childNodeIDs, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    63
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentNodeID, childNodeIDs, count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::LoadHIPFile(::StringW  fileName, bool  bCookOnLoad)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    64
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fileName, bCookOnLoad);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SaveHIPFile(::StringW  fileName, bool  bLockNodes)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    65
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, fileName, bLockNodes);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetObjectInfo(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_ObjectInfo>  objectInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    66
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, objectInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetObjectTransform(int32_t  nodeID, int32_t  relativeToNodeID, ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder, ByRef<::HoudiniEngineUnity::HAPI_Transform>  hapiTransform)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    67
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, relativeToNodeID, rstOrder, hapiTransform);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetObjectTransform(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>  hapiTransform)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    68
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, hapiTransform);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ComposeObjectList(int32_t  nodeID, ByRef<int32_t>  objectCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    69
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, objectCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetComposedObjectList(int32_t  nodeID, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ObjectInfo,::Array<::HoudiniEngineUnity::HAPI_ObjectInfo>*>>  objectInfos, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    70
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, objectInfos, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetComposedObjectTransforms(int32_t  nodeID, ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  transforms, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    71
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, rstOrder, transforms, start, length);
}
/// @param bLogError: bool (default: false)
inline bool HoudiniEngineUnity::HEU_SessionBase::GetDisplayGeoInfo(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo>  geoInfo, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    72
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, geoInfo, bLogError);
}
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGeoInfo(int32_t  nodeID, ByRef<::HoudiniEngineUnity::HAPI_GeoInfo>  geoInfo, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    73
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, geoInfo, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetPartInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>  partInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    74
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, partInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeInfo(int32_t  nodeID, int32_t  partID, ::StringW  name, ::HoudiniEngineUnity::HAPI_AttributeOwner  owner, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    75
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, owner, attributeInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeNames(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_AttributeOwner  owner, ByRef<::ArrayW<::StringW,::Array<::StringW>*>>  attributeNames, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    76
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, owner, attributeNames, count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeStringData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  dataArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    77
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, dataArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeFloatData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<float_t,::Array<float_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    78
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeFloat64Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<double_t,::Array<double_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    79
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeIntData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    80
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeUInt8Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    81
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt8Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<int8_t,::Array<int8_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    82
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt16Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<int16_t,::Array<int16_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    83
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetAttributeInt64Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attributeInfo, ByRef<::ArrayW<int64_t,::Array<int64_t>*>>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    84
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attributeInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGroupNames(int32_t  nodeID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  names, int32_t  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    85
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, groupType, names, count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGroupMembership(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ::StringW  groupName, ByRef<bool>  membershipArrayAllEqual, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  membershipArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    86
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupName, membershipArrayAllEqual, membershipArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGroupCountOnPackedInstancePart(int32_t  nodeID, int32_t  partID, ByRef<int32_t>  pointGroupCount, ByRef<int32_t>  primitiveGroupCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    87
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, pointGroupCount, primitiveGroupCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGroupNamesOnPackedInstancePart(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  groupNamesArray, int32_t  groupCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    88
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupNamesArray, groupCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGroupMembershipOnPackedInstancePart(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ::StringW  groupName, ByRef<bool>  membershipArrayAllEqual, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  membershipArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    89
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupName, membershipArrayAllEqual, membershipArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetInstancedPartIds(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  instancedPartsArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    90
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, instancedPartsArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetInstancerPartTransforms(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  transformsArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    91
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, rstOrder, transformsArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetInstanceTransformsOnPart(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_RSTOrder  rstOrder, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_Transform,::Array<::HoudiniEngineUnity::HAPI_Transform>*>>  transformsArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    92
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, rstOrder, transformsArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetInstancedObjectIds(int32_t  nodeID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  instanced_node_id_array, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    93
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, instanced_node_id_array, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetFaceCounts(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  faceCounts, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    94
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, faceCounts, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetFaceCounts(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  faceCounts, int32_t  start, int32_t  length, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    95
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, faceCounts, start, length, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetVertexList(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  vertexList, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    96
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, vertexList, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetBoxInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_BoxInfo>  boxInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    97
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, boxInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetSphereInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_SphereInfo>  sphereInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    98
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, sphereInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCurveInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_CurveInfo>  curveInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    99
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, curveInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCurveCounts(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  counts, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    100
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, counts, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCurveOrders(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  orders, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    101
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, orders, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCurveKnots(int32_t  nodeID, int32_t  partID, ByRef<::ArrayW<float_t,::Array<float_t>*>>  knots, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    102
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, knots, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetPartInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_PartInfo>  partInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    103
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, partInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetFaceCount(int32_t  nodeID, int32_t  partID, ::ArrayW<int32_t,::Array<int32_t>*>  faceCounts, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    104
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, faceCounts, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetVertexList(int32_t  nodeID, int32_t  partID, ::ArrayW<int32_t,::Array<int32_t>*>  vertexList, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    105
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, vertexList, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeIntData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int32_t,::Array<int32_t>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    106
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt8Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int8_t,::Array<int8_t>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    107
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt16Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int16_t,::Array<int16_t>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    108
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeInt64Data(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<int64_t,::Array<int64_t>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    109
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeFloatData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<float_t,::Array<float_t>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    110
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetAttributeStringData(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo, ::ArrayW<::StringW,::Array<::StringW>*>  data, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    111
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo, data, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::AddAttribute(int32_t  nodeID, int32_t  partID, ::StringW  name, ByRef<::HoudiniEngineUnity::HAPI_AttributeInfo>  attrInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    112
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, attrInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::AddGroup(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ::StringW  groupName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    113
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupName);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::DeleteGroup(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ::StringW  groupName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    114
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupName);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetGroupMembership(int32_t  nodeID, int32_t  partID, ::HoudiniEngineUnity::HAPI_GroupType  groupType, ::StringW  groupName, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  membershipArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    115
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, groupType, groupName, membershipArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CommitGeo(int32_t  nodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    116
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RevertGeo(int32_t  nodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    117
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetCurveInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_CurveInfo>  curveInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    118
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, curveInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetCurveCounts(int32_t  nodeID, int32_t  partID, ::ArrayW<int32_t,::Array<int32_t>*>  counts, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    119
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, counts, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetCurveOrders(int32_t  nodeID, int32_t  partID, ::ArrayW<int32_t,::Array<int32_t>*>  orders, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    120
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, orders, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetCurveKnots(int32_t  nodeID, int32_t  partID, ::ArrayW<float_t,::Array<float_t>*>  knots, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    121
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, knots, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetMaterialOnPart(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo>  materialInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    122
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, materialInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetMaterialNodeIDsOnFaces(int32_t  nodeID, int32_t  partID, ByRef<bool>  bSingleFaceMaterial, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  materialNodeIDs, int32_t  faceCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    123
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, bSingleFaceMaterial, materialNodeIDs, faceCount);
}
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::GetMaterialInfo(int32_t  materialNodeID, ByRef<::HoudiniEngineUnity::HAPI_MaterialInfo>  materialInfo, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    124
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialNodeID, materialInfo, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetImageInfo(int32_t  materialNodeID, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>  imageInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    125
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialNodeID, imageInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetImageInfo(int32_t  materialNodeID, ByRef<::HoudiniEngineUnity::HAPI_ImageInfo>  imageInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    126
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialNodeID, imageInfo);
}
/// @param bLogError: bool (default: true)
inline bool HoudiniEngineUnity::HEU_SessionBase::RenderTextureToImage(int32_t  materialNodeID, int32_t  parmID, bool  bLogError)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    127
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, materialNodeID, parmID, bLogError);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RenderCOPToImage(int32_t  copNodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    128
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, copNodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ExtractImageToMemory(int32_t  nodeID, ::StringW  fileFormat, ::StringW  imagePlanes, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  buffer)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    129
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, fileFormat, imagePlanes, buffer);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetImagePlanes(int32_t  nodeID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  imagePlanes, int32_t  numImagePlanes)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    130
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, imagePlanes, numImagePlanes);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ExtractImageToFile(int32_t  nodeID, ::StringW  fileFormat, ::StringW  imagePlanes, ::StringW  destinationFolderPath, ByRef<::StringW>  destinationFilePath)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    131
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, fileFormat, imagePlanes, destinationFolderPath, destinationFilePath);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParams(int32_t  nodeID, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmInfo,::Array<::HoudiniEngineUnity::HAPI_ParmInfo>*>>  parmInfos, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    132
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmInfos, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParmTagName(int32_t  nodeID, int32_t  parmID, int32_t  tagIndex, ByRef<int32_t>  tagName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    133
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmID, tagIndex, tagName);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParmTagValue(int32_t  nodeID, int32_t  parmID, ::StringW  tagName, ByRef<int32_t>  tagValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    134
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmID, tagName, tagValue);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ParmHasTag(int32_t  nodeID, int32_t  parmID, ::StringW  tagName, ByRef<bool>  hasTag)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    135
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmID, tagName, hasTag);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamIntValues(int32_t  nodeID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    136
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamIntValue(int32_t  nodeID, ::StringW  parmName, int32_t  index, ByRef<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    137
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, index, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamFloatValues(int32_t  nodeID, ByRef<::ArrayW<float_t,::Array<float_t>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    138
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamFloatValue(int32_t  nodeID, ::StringW  parmName, int32_t  index, ByRef<float_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    139
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, index, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamStringValues(int32_t  nodeID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    140
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamStringValue(int32_t  nodeID, ::StringW  parmName, int32_t  index, ByRef<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    141
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, index, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamNodeValue(int32_t  nodeID, ::StringW  paramName, ByRef<int32_t>  nodeValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    142
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, paramName, nodeValue);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParamChoiceValues(int32_t  nodeID, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_ParmChoiceInfo,::Array<::HoudiniEngineUnity::HAPI_ParmChoiceInfo>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    143
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamIntValues(int32_t  nodeID, ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    144
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamIntValue(int32_t  nodeID, ::StringW  paramName, int32_t  index, int32_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    145
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, paramName, index, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamFloatValues(int32_t  nodeID, ByRef<::ArrayW<float_t,::Array<float_t>*>>  values, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    146
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, values, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamFloatValue(int32_t  nodeID, ::StringW  paramName, int32_t  index, float_t  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    147
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, paramName, index, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamStringValue(int32_t  nodeID, ::StringW  strValue, int32_t  parmID, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    148
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, strValue, parmID, index);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamStringValue(int32_t  nodeID, ::StringW  parmName, ::StringW  parmValue, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    149
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, parmValue, index);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetParamNodeValue(int32_t  nodeID, ::StringW  paramName, int32_t  nodeValueID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    150
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, paramName, nodeValueID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::InsertMultiparmInstance(int32_t  nodeID, int32_t  parmID, int32_t  instancePosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    151
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmID, instancePosition);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RemoveMultiParmInstance(int32_t  nodeID, int32_t  parmID, int32_t  instancePosition)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    152
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmID, instancePosition);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParmWithTag(int32_t  nodeID, ::StringW  tagName, ByRef<int32_t>  parmID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    153
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, tagName, parmID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RevertParmToDefault(int32_t  nodeID, ::StringW  parm_name, int32_t  index)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    154
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parm_name, index);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::RevertParmToDefaults(int32_t  nodeID, ::StringW  parm_name)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    155
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parm_name);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParmIDFromName(int32_t  nodeID, ::StringW  parmName, ByRef<int32_t>  parmID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    156
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, parmID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetParmStringValue(int32_t  nodeID, ::StringW  parmName, int32_t  index, bool  evaluate, ByRef<int32_t>  value)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    157
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, parmName, index, evaluate, value);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateInputNode(ByRef<int32_t>  nodeID, ::StringW  name)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    158
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, name);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateHeightFieldInput(int32_t  parentNodeID, ::StringW  name, int32_t  xSize, int32_t  ySize, float_t  voxelSize, ::HoudiniEngineUnity::HAPI_HeightFieldSampling  sampling, ByRef<int32_t>  heightfieldNodeID, ByRef<int32_t>  heightNodeID, ByRef<int32_t>  maskNodeID, ByRef<int32_t>  mergeNodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    159
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentNodeID, name, xSize, ySize, voxelSize, sampling, heightfieldNodeID, heightNodeID, maskNodeID, mergeNodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::CreateHeightfieldInputVolumeNode(int32_t  parentNodeID, ByRef<int32_t>  newNodeID, ::StringW  name, int32_t  xSize, int32_t  ySize, float_t  voxelSize)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    160
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, parentNodeID, newNodeID, name, xSize, ySize, voxelSize);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetPreset(int32_t  nodeID, ByRef<::ArrayW<uint8_t,::Array<uint8_t>*>>  presetData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    161
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, presetData);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetPreset(int32_t  nodeID, ::ArrayW<uint8_t,::Array<uint8_t>*>  presetData)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    162
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, presetData);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetVolumeInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>  volumeInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    163
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, volumeInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetHeightFieldData(int32_t  nodeID, int32_t  partID, ::ArrayW<float_t,::Array<float_t>*>  valuesArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    164
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, valuesArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetVolumeInfo(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_VolumeInfo>  volumeInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    165
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, volumeInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetVolumeTileFloatData(int32_t  nodeID, int32_t  partID, ByRef<::HoudiniEngineUnity::HAPI_VolumeTileInfo>  tileInfo, ::ArrayW<float_t,::Array<float_t>*>  valuesArray, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    166
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, tileInfo, valuesArray, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetVolumeBounds(int32_t  nodeID, int32_t  partID, ByRef<float_t>  x_min, ByRef<float_t>  y_min, ByRef<float_t>  z_min, ByRef<float_t>  x_max, ByRef<float_t>  y_max, ByRef<float_t>  z_max, ByRef<float_t>  x_center, ByRef<float_t>  y_center, ByRef<float_t>  z_center)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    167
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, x_min, y_min, z_min, x_max, y_max, z_max, x_center, y_center, z_center);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetHeightFieldData(int32_t  nodeID, int32_t  partID, ::StringW  name, ::ArrayW<float_t,::Array<float_t>*>  valuesArray, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    168
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, partID, name, valuesArray, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetActiveCacheCount(ByRef<int32_t>  activeCacheCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    169
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, activeCacheCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetActiveCacheNames(ByRef<::ArrayW<int32_t,::Array<int32_t>*>>  cacheNamesArray, int32_t  activeCacheCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    170
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cacheNamesArray, activeCacheCount);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetCacheProperty(::StringW  cacheName, ::HoudiniEngineUnity::HAPI_CacheProperty  cacheProperty, ByRef<int32_t>  propertyValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    171
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cacheName, cacheProperty, propertyValue);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetCacheProperty(::StringW  cacheName, ::HoudiniEngineUnity::HAPI_CacheProperty  cacheProperty, int32_t  propertyValue)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    172
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, cacheName, cacheProperty, propertyValue);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SaveGeoToFile(int32_t  nodeID, ::StringW  fileName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    173
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, fileName);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::LoadGeoFromFile(int32_t  nodeID, ::StringW  file_name)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    174
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, file_name);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SaveNodeToFile(int32_t  nodeID, ::StringW  fileName)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    175
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, fileName);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::LoadNodeFromFile(::StringW  file_name, int32_t  parentNodeID, ::StringW  nodeLabel, bool  cook_on_load, ByRef<int32_t>  newNodeID)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    176
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, file_name, parentNodeID, nodeLabel, cook_on_load, newNodeID);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetGeoSize(int32_t  nodeID, ::StringW  format, ByRef<int32_t>  size)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    177
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, format, size);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetHandleInfo(int32_t  nodeID, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleInfo,::Array<::HoudiniEngineUnity::HAPI_HandleInfo>*>>  handleInfos, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    178
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, handleInfos, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetHandleBindingInfo(int32_t  nodeID, int32_t  handleIndex, ByRef<::ArrayW<::HoudiniEngineUnity::HAPI_HandleBindingInfo,::Array<::HoudiniEngineUnity::HAPI_HandleBindingInfo>*>>  handleBindingInfos, int32_t  start, int32_t  length)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    179
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, handleIndex, handleBindingInfos, start, length);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::ConvertTransform(ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>  inTransform, ::HoudiniEngineUnity::HAPI_RSTOrder  RSTOrder, ::HoudiniEngineUnity::HAPI_XYZOrder  ROTOrder, ByRef<::HoudiniEngineUnity::HAPI_TransformEuler>  outTransform)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    180
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, inTransform, RSTOrder, ROTOrder, outTransform);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetTotalCookCount(int32_t  nodeID, int32_t  nodeTypeFilter, int32_t  nodeFlagFilter, bool  includeChildren, ByRef<int32_t>  count)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    181
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, nodeID, nodeTypeFilter, nodeFlagFilter, includeChildren, count);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetSessionSync(bool  enable)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    182
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, enable);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetViewport(ByRef<::HoudiniEngineUnity::HAPI_Viewport>  viewport)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    183
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewport);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetViewport(ByRef<::HoudiniEngineUnity::HAPI_Viewport>  viewport)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    184
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, viewport);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::GetSessionSyncInfo(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>  syncInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    185
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, syncInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetSessionSyncInfo(ByRef<::HoudiniEngineUnity::HAPI_SessionSyncInfo>  syncInfo)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    186
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, syncInfo);
}
inline bool HoudiniEngineUnity::HEU_SessionBase::SetNodeDisplay(int32_t  node_id, int32_t  onOff)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_SessionBase*>::get(),
                    187
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node_id, onOff);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_SessionBase::HEU_SessionBase()   {
}
