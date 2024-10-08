#pragma once
// IWYU pragma private; include "OVR/OpenVR/EVREventType.hpp"
#include "OVR/OpenVR/zzzz__EVREventType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EVREventType::EVREventType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EVREventType::EVREventType()   {
}
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_None{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceActivated{static_cast<int32_t>(0x64)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceDeactivated{static_cast<int32_t>(0x65)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceUpdated{static_cast<int32_t>(0x66)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceUserInteractionStarted{static_cast<int32_t>(0x67)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceUserInteractionEnded{static_cast<int32_t>(0x68)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_IpdChanged{static_cast<int32_t>(0x69)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_EnterStandbyMode{static_cast<int32_t>(0x6a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_LeaveStandbyMode{static_cast<int32_t>(0x6b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedDeviceRoleChanged{static_cast<int32_t>(0x6c)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_WatchdogWakeUpRequested{static_cast<int32_t>(0x6d)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_LensDistortionChanged{static_cast<int32_t>(0x6e)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PropertyChanged{static_cast<int32_t>(0x6f)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_WirelessDisconnect{static_cast<int32_t>(0x70)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_WirelessReconnect{static_cast<int32_t>(0x71)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ButtonPress{static_cast<int32_t>(0xc8)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ButtonUnpress{static_cast<int32_t>(0xc9)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ButtonTouch{static_cast<int32_t>(0xca)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ButtonUntouch{static_cast<int32_t>(0xcb)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Press{static_cast<int32_t>(0xfa)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Unpress{static_cast<int32_t>(0xfb)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Touch{static_cast<int32_t>(0xfc)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Untouch{static_cast<int32_t>(0xfd)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Move{static_cast<int32_t>(0xfe)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_ModeSwitch1{static_cast<int32_t>(0xff)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_ModeSwitch2{static_cast<int32_t>(0x100)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DualAnalog_Cancel{static_cast<int32_t>(0x101)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MouseMove{static_cast<int32_t>(0x12c)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MouseButtonDown{static_cast<int32_t>(0x12d)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MouseButtonUp{static_cast<int32_t>(0x12e)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_FocusEnter{static_cast<int32_t>(0x12f)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_FocusLeave{static_cast<int32_t>(0x130)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Scroll{static_cast<int32_t>(0x131)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TouchPadMove{static_cast<int32_t>(0x132)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlayFocusChanged{static_cast<int32_t>(0x133)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_InputFocusCaptured{static_cast<int32_t>(0x190)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_InputFocusReleased{static_cast<int32_t>(0x191)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneFocusLost{static_cast<int32_t>(0x192)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneFocusGained{static_cast<int32_t>(0x193)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneApplicationChanged{static_cast<int32_t>(0x194)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneFocusChanged{static_cast<int32_t>(0x195)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_InputFocusChanged{static_cast<int32_t>(0x196)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneApplicationSecondaryRenderingStarted{static_cast<int32_t>(0x197)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SceneApplicationUsingWrongGraphicsAdapter{static_cast<int32_t>(0x198)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ActionBindingReloaded{static_cast<int32_t>(0x199)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_HideRenderModels{static_cast<int32_t>(0x19a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ShowRenderModels{static_cast<int32_t>(0x19b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ConsoleOpened{static_cast<int32_t>(0x1a4)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ConsoleClosed{static_cast<int32_t>(0x1a5)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlayShown{static_cast<int32_t>(0x1f4)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlayHidden{static_cast<int32_t>(0x1f5)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardActivated{static_cast<int32_t>(0x1f6)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardDeactivated{static_cast<int32_t>(0x1f7)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardThumbSelected{static_cast<int32_t>(0x1f8)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardRequested{static_cast<int32_t>(0x1f9)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ResetDashboard{static_cast<int32_t>(0x1fa)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_RenderToast{static_cast<int32_t>(0x1fb)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ImageLoaded{static_cast<int32_t>(0x1fc)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ShowKeyboard{static_cast<int32_t>(0x1fd)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_HideKeyboard{static_cast<int32_t>(0x1fe)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlayGamepadFocusGained{static_cast<int32_t>(0x1ff)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlayGamepadFocusLost{static_cast<int32_t>(0x200)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_OverlaySharedTextureChanged{static_cast<int32_t>(0x201)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ScreenshotTriggered{static_cast<int32_t>(0x204)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ImageFailed{static_cast<int32_t>(0x205)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardOverlayCreated{static_cast<int32_t>(0x206)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SwitchGamepadFocus{static_cast<int32_t>(0x207)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_RequestScreenshot{static_cast<int32_t>(0x208)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ScreenshotTaken{static_cast<int32_t>(0x209)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ScreenshotFailed{static_cast<int32_t>(0x20a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SubmitScreenshotToDashboard{static_cast<int32_t>(0x20b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ScreenshotProgressToDashboard{static_cast<int32_t>(0x20c)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PrimaryDashboardDeviceChanged{static_cast<int32_t>(0x20d)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_RoomViewShown{static_cast<int32_t>(0x20e)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_RoomViewHidden{static_cast<int32_t>(0x20f)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Notification_Shown{static_cast<int32_t>(0x258)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Notification_Hidden{static_cast<int32_t>(0x259)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Notification_BeginInteraction{static_cast<int32_t>(0x25a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Notification_Destroyed{static_cast<int32_t>(0x25b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Quit{static_cast<int32_t>(0x2bc)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ProcessQuit{static_cast<int32_t>(0x2bd)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_QuitAborted_UserPrompt{static_cast<int32_t>(0x2be)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_QuitAcknowledged{static_cast<int32_t>(0x2bf)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DriverRequestedQuit{static_cast<int32_t>(0x2c0)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ChaperoneDataHasChanged{static_cast<int32_t>(0x320)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ChaperoneUniverseHasChanged{static_cast<int32_t>(0x321)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ChaperoneTempDataHasChanged{static_cast<int32_t>(0x322)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ChaperoneSettingsHaveChanged{static_cast<int32_t>(0x323)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SeatedZeroPoseReset{static_cast<int32_t>(0x324)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_AudioSettingsHaveChanged{static_cast<int32_t>(0x334)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_BackgroundSettingHasChanged{static_cast<int32_t>(0x352)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_CameraSettingsHaveChanged{static_cast<int32_t>(0x353)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ReprojectionSettingHasChanged{static_cast<int32_t>(0x354)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ModelSkinSettingsHaveChanged{static_cast<int32_t>(0x355)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_EnvironmentSettingsHaveChanged{static_cast<int32_t>(0x356)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PowerSettingsHaveChanged{static_cast<int32_t>(0x357)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_EnableHomeAppSettingsHaveChanged{static_cast<int32_t>(0x358)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SteamVRSectionSettingChanged{static_cast<int32_t>(0x359)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_LighthouseSectionSettingChanged{static_cast<int32_t>(0x35a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_NullSectionSettingChanged{static_cast<int32_t>(0x35b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_UserInterfaceSectionSettingChanged{static_cast<int32_t>(0x35c)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_NotificationsSectionSettingChanged{static_cast<int32_t>(0x35d)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_KeyboardSectionSettingChanged{static_cast<int32_t>(0x35e)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PerfSectionSettingChanged{static_cast<int32_t>(0x35f)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_DashboardSectionSettingChanged{static_cast<int32_t>(0x360)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_WebInterfaceSectionSettingChanged{static_cast<int32_t>(0x361)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackersSectionSettingChanged{static_cast<int32_t>(0x362)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_StatusUpdate{static_cast<int32_t>(0x384)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_WebInterface_InstallDriverCompleted{static_cast<int32_t>(0x3b6)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MCImageUpdated{static_cast<int32_t>(0x3e8)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_FirmwareUpdateStarted{static_cast<int32_t>(0x44c)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_FirmwareUpdateFinished{static_cast<int32_t>(0x44d)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_KeyboardClosed{static_cast<int32_t>(0x4b0)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_KeyboardCharInput{static_cast<int32_t>(0x4b1)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_KeyboardDone{static_cast<int32_t>(0x4b2)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationTransitionStarted{static_cast<int32_t>(0x514)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationTransitionAborted{static_cast<int32_t>(0x515)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationTransitionNewAppStarted{static_cast<int32_t>(0x516)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationListUpdated{static_cast<int32_t>(0x517)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationMimeTypeLoad{static_cast<int32_t>(0x518)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ApplicationTransitionNewAppLaunchComplete{static_cast<int32_t>(0x519)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ProcessConnected{static_cast<int32_t>(0x51a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_ProcessDisconnected{static_cast<int32_t>(0x51b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Compositor_MirrorWindowShown{static_cast<int32_t>(0x578)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Compositor_MirrorWindowHidden{static_cast<int32_t>(0x579)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Compositor_ChaperoneBoundsShown{static_cast<int32_t>(0x582)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Compositor_ChaperoneBoundsHidden{static_cast<int32_t>(0x583)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedCamera_StartVideoStream{static_cast<int32_t>(0x5dc)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedCamera_StopVideoStream{static_cast<int32_t>(0x5dd)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedCamera_PauseVideoStream{static_cast<int32_t>(0x5de)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedCamera_ResumeVideoStream{static_cast<int32_t>(0x5df)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_TrackedCamera_EditingSurface{static_cast<int32_t>(0x60e)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PerformanceTest_EnableCapture{static_cast<int32_t>(0x640)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PerformanceTest_DisableCapture{static_cast<int32_t>(0x641)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_PerformanceTest_FidelityLevel{static_cast<int32_t>(0x642)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MessageOverlay_Closed{static_cast<int32_t>(0x672)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_MessageOverlayCloseRequested{static_cast<int32_t>(0x673)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Input_HapticVibration{static_cast<int32_t>(0x6a4)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Input_BindingLoadFailed{static_cast<int32_t>(0x6a5)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Input_BindingLoadSuccessful{static_cast<int32_t>(0x6a6)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Input_ActionManifestReloaded{static_cast<int32_t>(0x6a7)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_Input_ActionManifestLoadFailed{static_cast<int32_t>(0x6a8)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SpatialAnchors_PoseUpdated{static_cast<int32_t>(0x708)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SpatialAnchors_DescriptorUpdated{static_cast<int32_t>(0x709)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SpatialAnchors_RequestPoseUpdate{static_cast<int32_t>(0x70a)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_SpatialAnchors_RequestDescriptorUpdate{static_cast<int32_t>(0x70b)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_VendorSpecific_Reserved_Start{static_cast<int32_t>(0x2710)};
constexpr ::OVR::OpenVR::EVREventType  OVR::OpenVR::EVREventType::VREvent_VendorSpecific_Reserved_End{static_cast<int32_t>(0x4e1f)};
