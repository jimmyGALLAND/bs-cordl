#pragma once
#include "OVR/OpenVR/zzzz__EVRInitError_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVRInitError::EVRInitError(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVRInitError::EVRInitError() {}
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::None{ static_cast<int32_t>(0x0) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Unknown{ static_cast<int32_t>(0x1) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InstallationNotFound{ static_cast<int32_t>(0x64) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InstallationCorrupt{ static_cast<int32_t>(0x65) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRClientDLLNotFound{ static_cast<int32_t>(0x66) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_FileNotFound{ static_cast<int32_t>(0x67) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_FactoryNotFound{ static_cast<int32_t>(0x68) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InterfaceNotFound{ static_cast<int32_t>(0x69) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InvalidInterface{ static_cast<int32_t>(0x6a) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_UserConfigDirectoryInvalid{ static_cast<int32_t>(0x6b) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_HmdNotFound{ static_cast<int32_t>(0x6c) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NotInitialized{ static_cast<int32_t>(0x6d) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_PathRegistryNotFound{ static_cast<int32_t>(0x6e) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NoConfigPath{ static_cast<int32_t>(0x6f) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NoLogPath{ static_cast<int32_t>(0x70) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_PathRegistryNotWritable{ static_cast<int32_t>(0x71) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_AppInfoInitFailed{ static_cast<int32_t>(0x72) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_Retry{ static_cast<int32_t>(0x73) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InitCanceledByUser{ static_cast<int32_t>(0x74) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_AnotherAppLaunching{ static_cast<int32_t>(0x75) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_SettingsInitFailed{ static_cast<int32_t>(0x76) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_ShuttingDown{ static_cast<int32_t>(0x77) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_TooManyObjects{ static_cast<int32_t>(0x78) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NoServerForBackgroundApp{ static_cast<int32_t>(0x79) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NotSupportedWithCompositor{ static_cast<int32_t>(0x7a) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NotAvailableToUtilityApps{ static_cast<int32_t>(0x7b) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_Internal{ static_cast<int32_t>(0x7c) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_HmdDriverIdIsNone{ static_cast<int32_t>(0x7d) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_HmdNotFoundPresenceFailed{ static_cast<int32_t>(0x7e) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRMonitorNotFound{ static_cast<int32_t>(0x7f) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRMonitorStartupFailed{ static_cast<int32_t>(0x80) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_LowPowerWatchdogNotSupported{ static_cast<int32_t>(0x81) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_InvalidApplicationType{ static_cast<int32_t>(0x82) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_NotAvailableToWatchdogApps{ static_cast<int32_t>(0x83) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_WatchdogDisabledInSettings{ static_cast<int32_t>(0x84) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRDashboardNotFound{ static_cast<int32_t>(0x85) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRDashboardStartupFailed{ static_cast<int32_t>(0x86) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRHomeNotFound{ static_cast<int32_t>(0x87) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRHomeStartupFailed{ static_cast<int32_t>(0x88) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_RebootingBusy{ static_cast<int32_t>(0x89) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_FirmwareUpdateBusy{ static_cast<int32_t>(0x8a) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_FirmwareRecoveryBusy{ static_cast<int32_t>(0x8b) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_USBServiceBusy{ static_cast<int32_t>(0x8c) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_VRWebHelperStartupFailed{ static_cast<int32_t>(0x8d) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Init_TrackerManagerInitFailed{ static_cast<int32_t>(0x8e) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_Failed{ static_cast<int32_t>(0xc8) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_Unknown{ static_cast<int32_t>(0xc9) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_HmdUnknown{ static_cast<int32_t>(0xca) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_NotLoaded{ static_cast<int32_t>(0xcb) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_RuntimeOutOfDate{ static_cast<int32_t>(0xcc) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_HmdInUse{ static_cast<int32_t>(0xcd) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_NotCalibrated{ static_cast<int32_t>(0xce) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_CalibrationInvalid{ static_cast<int32_t>(0xcf) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_HmdDisplayNotFound{ static_cast<int32_t>(0xd0) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_TrackedDeviceInterfaceUnknown{ static_cast<int32_t>(0xd1) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_HmdDriverIdOutOfBounds{ static_cast<int32_t>(0xd3) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Driver_HmdDisplayMirrored{ static_cast<int32_t>(0xd4) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_ServerInitFailed{ static_cast<int32_t>(0x12c) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_ConnectFailed{ static_cast<int32_t>(0x12d) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_SharedStateInitFailed{ static_cast<int32_t>(0x12e) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_CompositorInitFailed{ static_cast<int32_t>(0x12f) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_MutexInitFailed{ static_cast<int32_t>(0x130) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_Failed{ static_cast<int32_t>(0x131) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_CompositorConnectFailed{ static_cast<int32_t>(0x132) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_CompositorInvalidConnectResponse{ static_cast<int32_t>(0x133) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::IPC_ConnectFailedAfterMultipleAttempts{ static_cast<int32_t>(0x134) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_Failed{ static_cast<int32_t>(0x190) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_D3D11HardwareRequired{ static_cast<int32_t>(0x191) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_FirmwareRequiresUpdate{ static_cast<int32_t>(0x192) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_OverlayInitFailed{ static_cast<int32_t>(0x193) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_ScreenshotsInitFailed{ static_cast<int32_t>(0x194) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Compositor_UnableToCreateDevice{ static_cast<int32_t>(0x195) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_UnableToConnectToOculusRuntime{ static_cast<int32_t>(0x3e8) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_WindowsNotInDevMode{ static_cast<int32_t>(0x3e9) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_CantOpenDevice{ static_cast<int32_t>(0x44d) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToRequestConfigStart{ static_cast<int32_t>(0x44e) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_NoStoredConfig{ static_cast<int32_t>(0x44f) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigTooBig{ static_cast<int32_t>(0x450) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigTooSmall{ static_cast<int32_t>(0x451) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToInitZLib{ static_cast<int32_t>(0x452) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_CantReadFirmwareVersion{ static_cast<int32_t>(0x453) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToSendUserDataStart{ static_cast<int32_t>(0x454) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToGetUserDataStart{ static_cast<int32_t>(0x455) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UnableToGetUserDataNext{ static_cast<int32_t>(0x456) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UserDataAddressRange{ static_cast<int32_t>(0x457) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_UserDataError{ static_cast<int32_t>(0x458) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::VendorSpecific_HmdFound_ConfigFailedSanityCheck{ static_cast<int32_t>(0x459) };
constexpr ::OVR::OpenVR::EVRInitError OVR::OpenVR::EVRInitError::Steam_SteamInstallationNotFound{ static_cast<int32_t>(0x7d0) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
