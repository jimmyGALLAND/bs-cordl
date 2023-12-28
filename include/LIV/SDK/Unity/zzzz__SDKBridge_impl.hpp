#pragma once
#include "LIV/SDK/Unity/zzzz__SDKBridge_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKTexture_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKInputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKPlane_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKResolution_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKApplicationOutput_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKOutputFrame_def.hpp"
#include "LIV/SDK/Unity/zzzz__SDKBridge_def.hpp"
#include "System/zzzz__Action_def.hpp"
// Ctor Parameters [CppParam { name: "active", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "action", ty: "::System::Action*", modifiers: "", def_value: Some("nullptr") },
// CppParam { name: "data", ty: "T", modifiers: "", def_value: Some("nullptr") }]
template <typename T> constexpr ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<T>::__SDKBridge__SDKInjection_1(bool active, ::System::Action* action, T data) noexcept {
  this->active = active;
  this->action = action;
  this->data = data;
}
// Ctor Parameters []
template <typename T> constexpr ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<T>::__SDKBridge__SDKInjection_1() {}
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddStringToChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, void*, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddStringToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddStringToChannel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.addtexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::addtexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eb24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "addtexture", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetObjectTimeStamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(void*)>(&::LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eb2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetObjectTimeStamp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCurrentTimeTicks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eb34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCurrentTimeTicks",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetIsCaptureActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::LIV::SDK::Unity::SDKBridge::GetIsCaptureActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220eb3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetIsCaptureActive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetRenderEventFunc
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::LIV::SDK::Unity::SDKBridge::GetRenderEventFunc)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220eb44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetRenderEventFunc",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCompositorChannelObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t, uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220eb8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCompositorChannelObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToCompositorChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, void*, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ebd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToCompositorChannel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(void*, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ebdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToFrame", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.updatinputframe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*)>(&::LIV::SDK::Unity::SDKBridge::updatinputframe)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220ebe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "updatinputframe", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetViewportTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)()>(&::LIV::SDK::Unity::SDKBridge::GetViewportTexture)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220ec2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetViewportTexture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetChannelObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(int32_t, uint64_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::GetChannelObject)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x220ec74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetChannelObject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddObjectToChannel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(int32_t, void*, int32_t, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddObjectToChannel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x220ecbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToChannel", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.Tag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(::StringW)>(&::LIV::SDK::Unity::SDKBridge::Tag)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x220ecc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "Tag", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, int32_t)>(&::LIV::SDK::Unity::SDKBridge::AddString)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x220ed48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddString", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture, uint64_t)>(&::LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x220ee44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKTexture>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetObjectTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)(void*)>(&::LIV::SDK::Unity::SDKBridge::GetObjectTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x220ef04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetObjectTime", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetCurrentTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (*)()>(&::LIV::SDK::Unity::SDKBridge::GetCurrentTime)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x220ef60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCurrentTime",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.get_IsActive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::LIV::SDK::Unity::SDKBridge::get_IsActive)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x220dd64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "get_IsActive",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.IssuePluginEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::LIV::SDK::Unity::SDKBridge::IssuePluginEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x220efbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "IssuePluginEvent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.SubmitApplicationOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKApplicationOutput)>(&::LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x220e578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "SubmitApplicationOutput", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKApplicationOutput>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.UpdateInputFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::LIV::SDK::Unity::SDKInputFrame>)>(&::LIV::SDK::Unity::SDKBridge::UpdateInputFrame)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x220f06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "UpdateInputFrame", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LIV::SDK::Unity::SDKInputFrame>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetViewfinderTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LIV::SDK::Unity::SDKTexture (*)()>(&::LIV::SDK::Unity::SDKBridge::GetViewfinderTexture)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x220f470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetViewfinderTexture",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.AddTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKTexture)>(&::LIV::SDK::Unity::SDKBridge::AddTexture)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x220f6a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddTexture", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKTexture>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.CreateFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKOutputFrame)>(&::LIV::SDK::Unity::SDKBridge::CreateFrame)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x220f7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "CreateFrame", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKOutputFrame>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.SetGroundPlane
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::LIV::SDK::Unity::SDKPlane)>(&::LIV::SDK::Unity::SDKBridge::SetGroundPlane)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x220f938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "SetGroundPlane", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKPlane>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LIV::SDK::Unity::SDKBridge.GetResolution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(ByRef<::LIV::SDK::Unity::SDKResolution>)>(&::LIV::SDK::Unity::SDKBridge::GetResolution)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x220f9d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetResolution", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LIV::SDK::Unity::SDKResolution>>::get() })));
    return ___internal_method;
  }
};
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_SDKInputFrame(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(
      std::forward<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>>(value));
}
inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame> LIV::SDK::Unity::SDKBridge::getStaticF__injection_SDKInputFrame() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKInputFrame>, "_injection_SDKInputFrame",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_SDKResolution(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(
      std::forward<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution>>(value));
}
inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution> LIV::SDK::Unity::SDKBridge::getStaticF__injection_SDKResolution() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<::LIV::SDK::Unity::SDKResolution>, "_injection_SDKResolution",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_IsActive(::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> value) {
  ::cordl_internals::setStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool>, "_injection_IsActive",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(
      std::forward<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool>>(value));
}
inline ::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool> LIV::SDK::Unity::SDKBridge::getStaticF__injection_IsActive() {
  return ::cordl_internals::getStaticField<::LIV::SDK::Unity::__SDKBridge__SDKInjection_1<bool>, "_injection_IsActive",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableSubmit(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableSubmit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableSubmit() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmit", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableSubmitApplicationOutput(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(
      std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableSubmitApplicationOutput() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableSubmitApplicationOutput", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableAddTexture(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableAddTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableAddTexture() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableAddTexture", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline void LIV::SDK::Unity::SDKBridge::setStaticF__injection_DisableCreateFrame(bool value) {
  ::cordl_internals::setStaticField<bool, "_injection_DisableCreateFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>(std::forward<bool>(value));
}
inline bool LIV::SDK::Unity::SDKBridge::getStaticF__injection_DisableCreateFrame() {
  return ::cordl_internals::getStaticField<bool, "_injection_DisableCreateFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get>();
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddStringToChannel(int32_t slot, void* str, int32_t length, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddStringToChannel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, str, length, tag);
}
inline int32_t LIV::SDK::Unity::SDKBridge::addtexture(void* sourcetexture, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "addtexture", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, sourcetexture, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTimeStamp(void* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetObjectTimeStamp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, obj);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTimeTicks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCurrentTimeTicks",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKBridge::GetIsCaptureActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetIsCaptureActive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void* LIV::SDK::Unity::SDKBridge::GetRenderEventFunc() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetRenderEventFunc",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void* LIV::SDK::Unity::SDKBridge::GetCompositorChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCompositorChannelObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, slot, tag, timestamp);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToCompositorChannel(int32_t slot, void* obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToCompositorChannel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToFrame(void* obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToFrame", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, obj, objectsize, tag);
}
inline void* LIV::SDK::Unity::SDKBridge::updatinputframe(void* InputFrame) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "updatinputframe", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, InputFrame);
}
inline void* LIV::SDK::Unity::SDKBridge::GetViewportTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetViewportTexture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method);
}
inline void* LIV::SDK::Unity::SDKBridge::GetChannelObject(int32_t slot, uint64_t tag, uint64_t timestamp) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetChannelObject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, slot, tag, timestamp);
}
inline int32_t LIV::SDK::Unity::SDKBridge::AddObjectToChannel(int32_t slot, void* obj, int32_t objectsize, uint64_t tag) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddObjectToChannel", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, slot, obj, objectsize, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::Tag(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "Tag", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, str);
}
inline void LIV::SDK::Unity::SDKBridge::AddString(::StringW tag, ::StringW value, int32_t slot) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, tag, value, slot);
}
inline void LIV::SDK::Unity::SDKBridge::AddTexture(::LIV::SDK::Unity::SDKTexture texture, uint64_t tag) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKTexture>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture, tag);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetObjectTime(void* objectptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetObjectTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method, objectptr);
}
inline uint64_t LIV::SDK::Unity::SDKBridge::GetCurrentTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetCurrentTime",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(nullptr, ___internal_method);
}
inline bool LIV::SDK::Unity::SDKBridge::get_IsActive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "get_IsActive",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::IssuePluginEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "IssuePluginEvent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::SubmitApplicationOutput(::LIV::SDK::Unity::SDKApplicationOutput applicationOutput) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "SubmitApplicationOutput", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKApplicationOutput>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, applicationOutput);
}
template <typename T> inline bool LIV::SDK::Unity::SDKBridge::GetStructFromGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetStructFromGlobalChannel",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline int32_t LIV::SDK::Unity::SDKBridge::AddStructToGlobalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddStructToGlobalChannel",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline bool LIV::SDK::Unity::SDKBridge::GetStructFromLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetStructFromLocalChannel",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline int32_t LIV::SDK::Unity::SDKBridge::AddStructToLocalChannel(ByRef<T> mystruct, int32_t channel, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddStructToLocalChannel",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, mystruct, channel, tag);
}
template <typename T> inline void LIV::SDK::Unity::SDKBridge::AddStructToFrame(ByRef<T> mystruct, uint64_t tag) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddStructToFrame",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<T>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mystruct, tag);
}
inline bool LIV::SDK::Unity::SDKBridge::UpdateInputFrame(ByRef<::LIV::SDK::Unity::SDKInputFrame> setframe) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "UpdateInputFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LIV::SDK::Unity::SDKInputFrame>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, setframe);
}
inline ::LIV::SDK::Unity::SDKTexture LIV::SDK::Unity::SDKBridge::GetViewfinderTexture() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetViewfinderTexture",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LIV::SDK::Unity::SDKTexture, false>(nullptr, ___internal_method);
}
inline void LIV::SDK::Unity::SDKBridge::AddTexture(::LIV::SDK::Unity::SDKTexture texture) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "AddTexture", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKTexture>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, texture);
}
inline void LIV::SDK::Unity::SDKBridge::CreateFrame(::LIV::SDK::Unity::SDKOutputFrame frame) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "CreateFrame", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKOutputFrame>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frame);
}
inline void LIV::SDK::Unity::SDKBridge::SetGroundPlane(::LIV::SDK::Unity::SDKPlane groundPlane) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "SetGroundPlane", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LIV::SDK::Unity::SDKPlane>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, groundPlane);
}
inline bool LIV::SDK::Unity::SDKBridge::GetResolution(ByRef<::LIV::SDK::Unity::SDKResolution> sdkResolution) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LIV::SDK::Unity::SDKBridge*>::get(), "GetResolution", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::LIV::SDK::Unity::SDKResolution>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, sdkResolution);
}
// Ctor Parameters []
constexpr ::LIV::SDK::Unity::SDKBridge::SDKBridge() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
