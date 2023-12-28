#pragma once
#include "OVR/OpenVR/zzzz__IVRChaperoneSetup_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "OVR/OpenVR/zzzz__CVRChaperoneSetup_def.hpp"
#include "OVR/OpenVR/zzzz__HmdMatrix34_t_def.hpp"
#include "OVR/OpenVR/zzzz__EChaperoneConfigFile_def.hpp"
#include "OVR/OpenVR/zzzz__HmdQuad_t_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(void*)>(&::OVR::OpenVR::CVRChaperoneSetup::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x27f2b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.CommitWorkingCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::OVR::OpenVR::EChaperoneConfigFile)>(
    &::OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "CommitWorkingCopy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EChaperoneConfigFile>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.RevertWorkingCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)()>(&::OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2c7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "RevertWorkingCopy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<float_t>, ByRef<float_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f2ca0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingPlayAreaSize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingPlayAreaRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdQuad_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2ccc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingPlayAreaRect", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdQuad_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(
    ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27f2cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(
    ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27f2d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveCollisionBoundsInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetWorkingStandingZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2e64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingPlayAreaSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(float_t, float_t)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingPlayAreaSize", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f2eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingStandingZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2efc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingStandingZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ReloadFromDisk
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::OVR::OpenVR::EChaperoneConfigFile)>(
    &::OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ReloadFromDisk", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EChaperoneConfigFile>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveSeatedZeroPoseToRawTrackingPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::OVR::OpenVR::HmdMatrix34_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f2f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveSeatedZeroPoseToRawTrackingPose", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingCollisionBoundsTagsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f2f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingCollisionBoundsTagsInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLiveCollisionBoundsTagsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27f2f94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveCollisionBoundsTagsInfo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.SetWorkingPhysicalBoundsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27f303c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingPhysicalBoundsInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.GetLivePhysicalBoundsInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(
    ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>)>(&::OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x27f3068;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLivePhysicalBoundsInfo", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ExportLiveToBuffer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::System::Text::StringBuilder*, ByRef<uint32_t>)>(
    &::OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27f3110;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ExportLiveToBuffer", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::OVR::OpenVR::CVRChaperoneSetup.ImportFromBufferToWorking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::OVR::OpenVR::CVRChaperoneSetup::*)(::StringW, uint32_t)>(
    &::OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x27f3138;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ImportFromBufferToWorking", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::OVR::OpenVR::IVRChaperoneSetup& OVR::OpenVR::CVRChaperoneSetup::__get_FnTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr ::OVR::OpenVR::IVRChaperoneSetup const& OVR::OpenVR::CVRChaperoneSetup::__get_FnTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___FnTable;
}
constexpr void OVR::OpenVR::CVRChaperoneSetup::__set_FnTable(::OVR::OpenVR::IVRChaperoneSetup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___FnTable = value;
}
inline ::OVR::OpenVR::CVRChaperoneSetup* OVR::OpenVR::CVRChaperoneSetup::New_ctor(void* pInterface) {
  return THROW_UNLESS(::il2cpp_utils::New<::OVR::OpenVR::CVRChaperoneSetup*>(pInterface));
}
inline void OVR::OpenVR::CVRChaperoneSetup::_ctor(void* pInterface) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pInterface);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::CommitWorkingCopy(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "CommitWorkingCopy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EChaperoneConfigFile>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, configFile);
}
inline void OVR::OpenVR::CVRChaperoneSetup::RevertWorkingCopy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "RevertWorkingCopy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaSize(ByRef<float_t> pSizeX, ByRef<float_t> pSizeZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingPlayAreaSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<float_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pSizeX, pSizeZ);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingPlayAreaRect(ByRef<::OVR::OpenVR::HmdQuad_t> rect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingPlayAreaRect", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdQuad_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, rect);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveCollisionBoundsInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingSeatedZeroPoseToRawTrackingPose",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatStandingZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetWorkingStandingZeroPoseToRawTrackingPose",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pmatStandingZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingPlayAreaSize(float_t sizeX, float_t sizeZ) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingPlayAreaSize", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sizeX, sizeZ);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingCollisionBoundsInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pQuadsBuffer);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingSeatedZeroPoseToRawTrackingPose",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pMatSeatedZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingStandingZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pMatStandingZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingStandingZeroPoseToRawTrackingPose",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pMatStandingZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::ReloadFromDisk(::OVR::OpenVR::EChaperoneConfigFile configFile) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ReloadFromDisk", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::EChaperoneConfigFile>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, configFile);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveSeatedZeroPoseToRawTrackingPose(ByRef<::OVR::OpenVR::HmdMatrix34_t> pmatSeatedZeroPoseToRawTrackingPose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveSeatedZeroPoseToRawTrackingPose",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::OVR::OpenVR::HmdMatrix34_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pmatSeatedZeroPoseToRawTrackingPose);
}
inline void OVR::OpenVR::CVRChaperoneSetup::SetWorkingCollisionBoundsTagsInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> pTagsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingCollisionBoundsTagsInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pTagsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLiveCollisionBoundsTagsInfo(ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>> pTagsBuffer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLiveCollisionBoundsTagsInfo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<uint8_t, ::Array<uint8_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pTagsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::SetWorkingPhysicalBoundsInfo(::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "SetWorkingPhysicalBoundsInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::GetLivePhysicalBoundsInfo(ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>> pQuadsBuffer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "GetLivePhysicalBoundsInfo", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::ArrayW<::OVR::OpenVR::HmdQuad_t, ::Array<::OVR::OpenVR::HmdQuad_t>*>>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pQuadsBuffer);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::ExportLiveToBuffer(::System::Text::StringBuilder* pBuffer, ByRef<uint32_t> pnBufferLength) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ExportLiveToBuffer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Text::StringBuilder*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pBuffer, pnBufferLength);
}
inline bool OVR::OpenVR::CVRChaperoneSetup::ImportFromBufferToWorking(::StringW pBuffer, uint32_t nImportFlags) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::OVR::OpenVR::CVRChaperoneSetup*>::get(), "ImportFromBufferToWorking", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pBuffer, nImportFlags);
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::CVRChaperoneSetup::CVRChaperoneSetup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
