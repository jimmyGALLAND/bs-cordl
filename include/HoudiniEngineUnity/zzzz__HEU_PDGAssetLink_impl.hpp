#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_PDGAssetLink.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_NodeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_PDG_WorkitemResultInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_CookedEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PDGAssetLink_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ReloadEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNetworkData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPNodeData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_TOPWorkResult_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_WorkItemTally_def.hpp"
#include "HoudiniEngineUnity/zzzz__TOPNodeTags_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::__HEU_PDGAssetLink__LinkState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::__HEU_PDGAssetLink__LinkState()   {
}
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::INACTIVE{static_cast<int32_t>(0x0)};
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::LINKING{static_cast<int32_t>(0x1)};
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::LINKED{static_cast<int32_t>(0x2)};
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState  HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState::ERROR_NOT_LINKED{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::*)(::System::Object*, ::System::IntPtr)>(&::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x39cfb18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate.Invoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::*)()>(&::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39cfba0;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                  13
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate.BeginInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IAsyncResult* (::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::*)(::System::AsyncCallback*, ::System::Object*)>(&::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::BeginInvoke)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39cfbb4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                  14
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate.EndInvoke
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::*)(::System::IAsyncResult*)>(&::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x39cfbd4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                                  15
                                ));
    return ___internal_method;
  }
};
inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate* HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>(object, method));
}
inline void HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::Invoke()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                    13
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::IAsyncResult* HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::BeginInvoke(::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                    14
                )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*, false>(this, ___internal_method, callback, object);
}
inline void HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate::__HEU_PDGAssetLink__UpdateUIDelegate()   {
}
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc824;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.OnBeforeSerialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc82c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.OnAfterDeserialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc830;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.HandleInitialLoad
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::HandleInitialLoad)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "HandleInitialLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::OnDestroy)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc834;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.Setup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::Setup)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x39cc8b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x39ccdec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_CookedEventData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39ccfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.NotifyAssetCooked
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_ReloadEventData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x39ccff0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x39cc9e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.Refresh
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::Refresh)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x39cc9e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Refresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.PopulateFromHDA
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::PopulateFromHDA)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x39cce78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateFromHDA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.PopulateTOPNetworks
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNetworks)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0x39cd2e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateTOPNetworks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.PopulateTOPNodes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNetworkData*, ::ArrayW<int32_t,::Array<int32_t>*>, bool)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNodes)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x39cdd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateTOPNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.SelectTOPNetwork
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNetwork)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x39ce400;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "SelectTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.SelectTOPNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNetworkData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNode)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39ce45c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "SelectTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetSelectedTOPNetwork
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNetworkData* (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNetwork)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ce4bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetSelectedTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetSelectedTOPNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNodeData* (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x39ce548;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetSelectedTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNetwork
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNetworkData* (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetwork)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x39ce4c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNetworkByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNetworkData* (*)(::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetworkByName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x39cdbc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNetworkByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNodeByName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNodeData* (*)(::StringW, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeByName)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x39ce12c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNodeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ClearAllTOPData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ClearAllTOPData)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x39cd000;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearAllTOPData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ClearTOPNetworkWorkItemResults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_TOPNetworkData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNetworkWorkItemResults)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x39ce5d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearTOPNetworkWorkItemResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ClearTOPNodeWorkItemResults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNodeWorkItemResults)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x39ce2dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearTOPNodeWorkItemResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ClearWorkItemResultByID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResultByID)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39ce904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearWorkItemResultByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ClearWorkItemResult
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResult)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x39cea7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearWorkItemResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.UpdateTOPNodeResultsVisibility
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::UpdateTOPNodeResultsVisibility)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39ceaf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "UpdateTOPNodeResultsVisibility",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetWorkResultByID
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPWorkResult* (*)(::HoudiniEngineUnity::HEU_TOPNodeData*, int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetWorkResultByID)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x39ce920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetWorkResultByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.DestroyWorkItemResultData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HEU_TOPWorkResult*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::DestroyWorkItemResultData)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x39ce718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DestroyWorkItemResultData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.DirtyTOPNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::DirtyTOPNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39ceb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DirtyTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.CookTOPNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::CookTOPNode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39ceba4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CookTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.DirtyAll
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::DirtyAll)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x39cebcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DirtyAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.CookOutput
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::CookOutput)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39cce18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CookOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.PauseCook
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::PauseCook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39cecac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PauseCook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.CancelCook
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::CancelCook)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39ced10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CancelCook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetHAPISession
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_SessionBase* (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetHAPISession)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x39cd788;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetHAPISession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.LoadResults
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_SessionBase*, ::HoudiniEngineUnity::HEU_TOPNodeData*, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*>, int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::LoadResults)> {
  constexpr static std::size_t size = 0x5dc;
  constexpr static std::size_t addrs = 0x39ced74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "LoadResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetLoadRootTransform
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Transform> (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetLoadRootTransform)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x39cf3d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetLoadRootTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::HEU_TOPNodeData* (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(int32_t)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNode)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x39cf4b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.RepaintUI
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::RepaintUI)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x39cd2c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "RepaintUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.UpdateWorkItemTally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::UpdateWorkItemTally)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x39cf620;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "UpdateWorkItemTally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ResetTOPNetworkWorkItemTally
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNetworkData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ResetTOPNetworkWorkItemTally)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x39cec00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ResetTOPNetworkWorkItemTally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.GetTOPNodeStatus
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PDGAssetLink::*)(::HoudiniEngineUnity::HEU_TOPNodeData*)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeStatus)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x39cf8f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNodeStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.ParseHEngineData
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::HoudiniEngineUnity::HEU_SessionBase*, int32_t, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>, ByRef<::HoudiniEngineUnity::TOPNodeTags*>)>(&::HoudiniEngineUnity::HEU_PDGAssetLink::ParseHEngineData)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x39cd9fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ParseHEngineData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::TOPNodeTags*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.get_AssetName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cfa1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_AssetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.get_SelectedTOPNetwork
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::get_SelectedTOPNetwork)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cfa24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_SelectedTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink.get_AssetLinkState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetLinkState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39cfa2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_AssetLinkState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_PDGAssetLink._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_PDGAssetLink::*)()>(&::HoudiniEngineUnity::HEU_PDGAssetLink::_ctor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x39cfa34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr  HoudiniEngineUnity::HEU_PDGAssetLink::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* HoudiniEngineUnity::HEU_PDGAssetLink::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetPath;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__assetPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetGO()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetGO;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetGO() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetGO;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__assetGO(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetName;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetName;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__assetName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____assetName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__assetID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____assetID;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__assetID(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____assetID = value;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__heu()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heu;
}
constexpr ::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__heu() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____heu;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__heu(::UnityW<::HoudiniEngineUnity::HEU_HoudiniAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____heu)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__topNetworks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topNetworks;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__topNetworks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topNetworks;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__topNetworks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topNetworks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*>& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__topNetworkNames()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topNetworkNames;
}
constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__topNetworkNames() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____topNetworkNames;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__topNetworkNames(::ArrayW<::StringW,::Array<::StringW>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____topNetworkNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__selectedTOPNetwork()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedTOPNetwork;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__selectedTOPNetwork() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedTOPNetwork;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__selectedTOPNetwork(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedTOPNetwork = value;
}
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__linkState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkState;
}
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__linkState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____linkState;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__linkState(::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____linkState = value;
}
constexpr bool& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__autoCook()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoCook;
}
constexpr bool const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__autoCook() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____autoCook;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__autoCook(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____autoCook = value;
}
constexpr bool& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__useHEngineData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHEngineData;
}
constexpr bool const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__useHEngineData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useHEngineData;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__useHEngineData(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useHEngineData = value;
}
constexpr ::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__repaintUIDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repaintUIDelegate;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__repaintUIDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____repaintUIDelegate;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__repaintUIDelegate(::HoudiniEngineUnity::__HEU_PDGAssetLink__UpdateUIDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____repaintUIDelegate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__numWorkItems()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numWorkItems;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__numWorkItems() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____numWorkItems;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__numWorkItems(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____numWorkItems = value;
}
constexpr ::HoudiniEngineUnity::HEU_WorkItemTally*& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__workItemTally()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemTally;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_WorkItemTally*> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__workItemTally() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workItemTally;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__workItemTally(::HoudiniEngineUnity::HEU_WorkItemTally*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____workItemTally)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__loadRootGameObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadRootGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__loadRootGameObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____loadRootGameObject;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__loadRootGameObject(::UnityW<::UnityEngine::GameObject>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadRootGameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__outputCachePathRoot()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputCachePathRoot;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_get__outputCachePathRoot() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputCachePathRoot;
}
constexpr void HoudiniEngineUnity::HEU_PDGAssetLink::__cordl_internal_set__outputCachePathRoot(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____outputCachePathRoot)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::OnBeforeSerialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnBeforeSerialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::OnAfterDeserialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnAfterDeserialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::HandleInitialLoad()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "HandleInitialLoad",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::Setup(::HoudiniEngineUnity::HEU_HoudiniAsset*  hdaAsset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Setup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hdaAsset);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(::HoudiniEngineUnity::HEU_HoudiniAsset*  asset, bool  bSuccess, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  generatedOutputs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, bSuccess, generatedOutputs);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(::HoudiniEngineUnity::HEU_CookedEventData*  cookedEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_CookedEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cookedEventData);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::NotifyAssetCooked(::HoudiniEngineUnity::HEU_ReloadEventData*  reloadEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "NotifyAssetCooked",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ReloadEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reloadEventData);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::Refresh()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "Refresh",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::PopulateFromHDA()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateFromHDA",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNetworks()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateTOPNetworks",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::HEU_PDGAssetLink::PopulateTOPNodes(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork, ::ArrayW<int32_t,::Array<int32_t>*>  topNodeIDs, bool  useHEngineData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PopulateTOPNodes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t,::Array<int32_t>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, session, topNetwork, topNodeIDs, useHEngineData);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNetwork(int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "SelectTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newIndex);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::SelectTOPNode(::HoudiniEngineUnity::HEU_TOPNetworkData*  network, int32_t  newIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "SelectTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, network, newIndex);
}
inline ::HoudiniEngineUnity::HEU_TOPNetworkData* HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNetwork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetSelectedTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNetworkData*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_TOPNodeData* HoudiniEngineUnity::HEU_PDGAssetLink::GetSelectedTOPNode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetSelectedTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNodeData*, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_TOPNetworkData* HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetwork(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNetworkData*, false>(this, ___internal_method, index);
}
inline ::HoudiniEngineUnity::HEU_TOPNetworkData* HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNetworkByName(::StringW  name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*  topNetworks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNetworkByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNetworkData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNetworkData*, false>(nullptr, ___internal_method, name, topNetworks);
}
inline ::HoudiniEngineUnity::HEU_TOPNodeData* HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeByName(::StringW  name, ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*  topNodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNodeByName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_TOPNodeData*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNodeData*, false>(nullptr, ___internal_method, name, topNodes);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ClearAllTOPData()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearAllTOPData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNetworkWorkItemResults(::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearTOPNetworkWorkItemResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNetwork);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ClearTOPNodeWorkItemResults(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearTOPNodeWorkItemResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResultByID(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearWorkItemResultByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, workItemID);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ClearWorkItemResult(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ClearWorkItemResult",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, result);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::UpdateTOPNodeResultsVisibility(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "UpdateTOPNodeResultsVisibility",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNode);
}
inline ::HoudiniEngineUnity::HEU_TOPWorkResult* HoudiniEngineUnity::HEU_PDGAssetLink::GetWorkResultByID(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, int32_t  workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetWorkResultByID",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPWorkResult*, false>(nullptr, ___internal_method, topNode, workItemID);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::DestroyWorkItemResultData(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, ::HoudiniEngineUnity::HEU_TOPWorkResult*  result)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DestroyWorkItemResultData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPWorkResult*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, topNode, result);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::DirtyTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DirtyTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::CookTOPNode(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CookTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::DirtyAll()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "DirtyAll",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::CookOutput()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CookOutput",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::PauseCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "PauseCook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::CancelCook()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "CancelCook",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_SessionBase* HoudiniEngineUnity::HEU_PDGAssetLink::GetHAPISession()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetHAPISession",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_SessionBase*, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::LoadResults(::HoudiniEngineUnity::HEU_SessionBase*  session, ::HoudiniEngineUnity::HEU_TOPNodeData*  topNode, ::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo  workItemInfo, ::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*>  resultInfos, int32_t  workItemID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "LoadResults",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo,::Array<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session, topNode, workItemInfo, resultInfos, workItemID);
}
inline ::UnityW<::UnityEngine::Transform> HoudiniEngineUnity::HEU_PDGAssetLink::GetLoadRootTransform()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetLoadRootTransform",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_TOPNodeData* HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNode(int32_t  nodeID)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::HEU_TOPNodeData*, false>(this, ___internal_method, nodeID);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::RepaintUI()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "RepaintUI",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::UpdateWorkItemTally()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "UpdateWorkItemTally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ResetTOPNetworkWorkItemTally(::HoudiniEngineUnity::HEU_TOPNetworkData*  topNetwork)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ResetTOPNetworkWorkItemTally",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNetworkData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topNetwork);
}
inline ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::GetTOPNodeStatus(::HoudiniEngineUnity::HEU_TOPNodeData*  topNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "GetTOPNodeStatus",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_TOPNodeData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, topNode);
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::ParseHEngineData(::HoudiniEngineUnity::HEU_SessionBase*  session, int32_t  topNodeID, ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>  nodeInfo, ByRef<::HoudiniEngineUnity::TOPNodeTags*>  nodeTags)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "ParseHEngineData",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_SessionBase*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::HAPI_NodeInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::HoudiniEngineUnity::TOPNodeTags*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, session, topNodeID, nodeInfo, nodeTags);
}
inline ::StringW HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetName()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_AssetName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline int32_t HoudiniEngineUnity::HEU_PDGAssetLink::get_SelectedTOPNetwork()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_SelectedTOPNetwork",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState HoudiniEngineUnity::HEU_PDGAssetLink::get_AssetLinkState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        "get_AssetLinkState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::HoudiniEngineUnity::__HEU_PDGAssetLink__LinkState, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_PDGAssetLink* HoudiniEngineUnity::HEU_PDGAssetLink::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_PDGAssetLink*>());
}
inline void HoudiniEngineUnity::HEU_PDGAssetLink::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_PDGAssetLink*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_PDGAssetLink::HEU_PDGAssetLink()   {
}
