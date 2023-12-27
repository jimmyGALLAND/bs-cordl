#pragma once
#include "GlobalNamespace/zzzz__OVRInput_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "GlobalNamespace/zzzz__OVRInput_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "OVR/OpenVR/zzzz__ETrackedDeviceProperty_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "OVR/OpenVR/zzzz__VRControllerState_t_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Button::__OVRInput__Button(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Button::__OVRInput__Button() {}
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::One{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Two{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Three{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Four{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Start{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Back{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryShoulder{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryIndexTrigger{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryHandTrigger{ static_cast<int32_t>(0x4000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryThumbstick{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryThumbstickUp{ static_cast<int32_t>(0x10000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryThumbstickDown{ static_cast<int32_t>(0x20000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryThumbstickLeft{ static_cast<int32_t>(0x40000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryThumbstickRight{ static_cast<int32_t>(0x80000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::PrimaryTouchpad{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryShoulder{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryIndexTrigger{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryHandTrigger{ static_cast<int32_t>(0x400000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryThumbstick{ static_cast<int32_t>(0x800000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryThumbstickUp{ static_cast<int32_t>(0x1000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryThumbstickDown{ static_cast<int32_t>(0x2000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryThumbstickLeft{ static_cast<int32_t>(0x4000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryThumbstickRight{ static_cast<int32_t>(0x8000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::SecondaryTouchpad{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::DpadUp{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::DpadDown{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::DpadLeft{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::DpadRight{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Up{ static_cast<int32_t>(0x10000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Down{ static_cast<int32_t>(0x20000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Left{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Right{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::__OVRInput__Button GlobalNamespace::__OVRInput__Button::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__RawButton::__OVRInput__RawButton(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__RawButton::__OVRInput__RawButton() {}
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::X{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::Y{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::Start{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::Back{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LShoulder{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LIndexTrigger{ static_cast<int32_t>(0x10000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LHandTrigger{ static_cast<int32_t>(0x20000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LThumbstick{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LThumbstickUp{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LThumbstickDown{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LThumbstickLeft{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LThumbstickRight{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::LTouchpad{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RShoulder{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RIndexTrigger{ static_cast<int32_t>(0x4000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RHandTrigger{ static_cast<int32_t>(0x8000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RThumbstick{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RThumbstickUp{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RThumbstickDown{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RThumbstickLeft{ static_cast<int32_t>(0x4000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RThumbstickRight{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::RTouchpad{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::DpadUp{ static_cast<int32_t>(0x10000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::DpadDown{ static_cast<int32_t>(0x20000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::DpadLeft{ static_cast<int32_t>(0x40000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::DpadRight{ static_cast<int32_t>(0x80000) };
constexpr ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__RawButton::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Touch::__OVRInput__Touch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Touch::__OVRInput__Touch() {}
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::One{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::Two{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::Three{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::Four{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::PrimaryIndexTrigger{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::PrimaryThumbstick{ static_cast<int32_t>(0x8000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::PrimaryThumbRest{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::PrimaryTouchpad{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::SecondaryIndexTrigger{ static_cast<int32_t>(0x200000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::SecondaryThumbstick{ static_cast<int32_t>(0x800000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::SecondaryThumbRest{ static_cast<int32_t>(0x100000) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::SecondaryTouchpad{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__Touch GlobalNamespace::__OVRInput__Touch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__RawTouch::__OVRInput__RawTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__RawTouch::__OVRInput__RawTouch() {}
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::A{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::B{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::X{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::Y{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::LIndexTrigger{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::LThumbstick{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::LThumbRest{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::LTouchpad{ static_cast<int32_t>(0x40000000) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::RIndexTrigger{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::RThumbstick{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::RThumbRest{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::RTouchpad{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__RawTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__NearTouch::__OVRInput__NearTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__NearTouch::__OVRInput__NearTouch() {}
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::PrimaryIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::PrimaryThumbButtons{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::SecondaryIndexTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::SecondaryThumbButtons{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__NearTouch GlobalNamespace::__OVRInput__NearTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch::__OVRInput__RawNearTouch(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch::__OVRInput__RawNearTouch() {}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::LIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::LThumbButtons{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::RIndexTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::RThumbButtons{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__RawNearTouch::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Axis1D::__OVRInput__Axis1D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Axis1D::__OVRInput__Axis1D() {}
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryHandTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryIndexTrigger{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryHandTrigger{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryIndexTriggerCurl{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryIndexTriggerSlide{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryThumbRestForce{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryStylusForce{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryIndexTriggerCurl{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryIndexTriggerSlide{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryThumbRestForce{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryStylusForce{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::PrimaryIndexTriggerForce{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::SecondaryIndexTriggerForce{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::__OVRInput__Axis1D GlobalNamespace::__OVRInput__Axis1D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D::__OVRInput__RawAxis1D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D::__OVRInput__RawAxis1D() {}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LIndexTrigger{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LHandTrigger{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RIndexTrigger{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RHandTrigger{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LIndexTriggerCurl{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LIndexTriggerSlide{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LThumbRestForce{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LStylusForce{ static_cast<int32_t>(0x80) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RIndexTriggerCurl{ static_cast<int32_t>(0x100) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RIndexTriggerSlide{ static_cast<int32_t>(0x200) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RThumbRestForce{ static_cast<int32_t>(0x400) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RStylusForce{ static_cast<int32_t>(0x800) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::LIndexTriggerForce{ static_cast<int32_t>(0x1000) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::RIndexTriggerForce{ static_cast<int32_t>(0x2000) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__RawAxis1D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Axis2D::__OVRInput__Axis2D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Axis2D::__OVRInput__Axis2D() {}
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::PrimaryThumbstick{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::PrimaryTouchpad{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::SecondaryThumbstick{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::SecondaryTouchpad{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__Axis2D GlobalNamespace::__OVRInput__Axis2D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D::__OVRInput__RawAxis2D(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D::__OVRInput__RawAxis2D() {}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::LThumbstick{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::LTouchpad{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::RThumbstick{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::RTouchpad{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__RawAxis2D::Any{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton::__OVRInput__OpenVRButton(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton::__OVRInput__OpenVRButton() {}
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton GlobalNamespace::__OVRInput__OpenVRButton::None{ static_cast<uint64_t>(0x0u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton GlobalNamespace::__OVRInput__OpenVRButton::Two{ static_cast<uint64_t>(0x2u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton GlobalNamespace::__OVRInput__OpenVRButton::Thumbstick{ static_cast<uint64_t>(0x100000000u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRButton GlobalNamespace::__OVRInput__OpenVRButton::Grip{ static_cast<uint64_t>(0x4u) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Controller::__OVRInput__Controller(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Controller::__OVRInput__Controller() {}
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::LTouch{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::RTouch{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::Touch{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::Remote{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::Gamepad{ static_cast<int32_t>(0x10) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::Hands{ static_cast<int32_t>(0x60) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::LHand{ static_cast<int32_t>(0x20) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::RHand{ static_cast<int32_t>(0x40) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::Active{ static_cast<int32_t>(0x80000000) };
constexpr ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__Controller::All{ static_cast<int32_t>(0xffffffff) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Handedness::__OVRInput__Handedness(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Handedness::__OVRInput__Handedness() {}
constexpr ::GlobalNamespace::__OVRInput__Handedness GlobalNamespace::__OVRInput__Handedness::Unsupported{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Handedness GlobalNamespace::__OVRInput__Handedness::LeftHanded{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__Handedness GlobalNamespace::__OVRInput__Handedness::RightHanded{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation::__OVRInput__HapticsLocation(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation::__OVRInput__HapticsLocation() {}
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation GlobalNamespace::__OVRInput__HapticsLocation::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation GlobalNamespace::__OVRInput__HapticsLocation::Hand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation GlobalNamespace::__OVRInput__HapticsLocation::Thumb{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__HapticsLocation GlobalNamespace::__OVRInput__HapticsLocation::Index{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile::__OVRInput__InteractionProfile(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile::__OVRInput__InteractionProfile() {}
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile GlobalNamespace::__OVRInput__InteractionProfile::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile GlobalNamespace::__OVRInput__InteractionProfile::Touch{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile GlobalNamespace::__OVRInput__InteractionProfile::TouchPro{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__InteractionProfile GlobalNamespace::__OVRInput__InteractionProfile::TouchPlus{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__Hand::__OVRInput__Hand(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__Hand::__OVRInput__Hand() {}
constexpr ::GlobalNamespace::__OVRInput__Hand GlobalNamespace::__OVRInput__Hand::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::__OVRInput__Hand GlobalNamespace::__OVRInput__Hand::HandLeft{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__Hand GlobalNamespace::__OVRInput__Hand::HandRight{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState::__OVRInput__InputDeviceShowState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState::__OVRInput__InputDeviceShowState() {}
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState GlobalNamespace::__OVRInput__InputDeviceShowState::Always{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState GlobalNamespace::__OVRInput__InputDeviceShowState::ControllerInHandOrNoHand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState GlobalNamespace::__OVRInput__InputDeviceShowState::ControllerInHand{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState GlobalNamespace::__OVRInput__InputDeviceShowState::ControllerNotInHand{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::__OVRInput__InputDeviceShowState GlobalNamespace::__OVRInput__InputDeviceShowState::NoHand{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState::__OVRInput__ControllerInHandState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState::__OVRInput__ControllerInHandState() {}
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState GlobalNamespace::__OVRInput__ControllerInHandState::NoHand{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState GlobalNamespace::__OVRInput__ControllerInHandState::ControllerInHand{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__OVRInput__ControllerInHandState GlobalNamespace::__OVRInput__ControllerInHandState::ControllerNotInHand{ static_cast<int32_t>(0x2) };
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "Duration", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration::__OVRInput__HapticsAmplitudeEnvelopeVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples,
                                                                                                                          float_t Duration) noexcept {
  this->SamplesCount = SamplesCount;
  this->Samples = Samples;
  this->Duration = Duration;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration::__OVRInput__HapticsAmplitudeEnvelopeVibration() {}
// Ctor Parameters [CppParam { name: "SamplesCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Samples", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "SampleRateHz", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Append", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__HapticsPcmVibration::__OVRInput__HapticsPcmVibration(int32_t SamplesCount, ::ArrayW<float_t, ::Array<float_t>*> Samples, float_t SampleRateHz,
                                                                                              bool Append) noexcept {
  this->SamplesCount = SamplesCount;
  this->Samples = Samples;
  this->SampleRateHz = SampleRateHz;
  this->Append = Append;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__HapticsPcmVibration::__OVRInput__HapticsPcmVibration() {}
// Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__OpenVRController::__OVRInput__OpenVRController(uint64_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OpenVRController::__OVRInput__OpenVRController() {}
constexpr ::GlobalNamespace::__OVRInput__OpenVRController GlobalNamespace::__OVRInput__OpenVRController::Unknown{ static_cast<uint64_t>(0x0u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRController GlobalNamespace::__OVRInput__OpenVRController::OculusTouch{ static_cast<uint64_t>(0x1u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRController GlobalNamespace::__OVRInput__OpenVRController::ViveController{ static_cast<uint64_t>(0x2u) };
constexpr ::GlobalNamespace::__OVRInput__OpenVRController GlobalNamespace::__OVRInput__OpenVRController::WindowsMRController{ static_cast<uint64_t>(0x3u) };
// Ctor Parameters [CppParam { name: "state", ty: "::OVR::OpenVR::VRControllerState_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "controllerType", ty:
// "::GlobalNamespace::__OVRInput__OpenVRController", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceID", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "localPosition", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "localOrientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRInput__OpenVRControllerDetails::__OVRInput__OpenVRControllerDetails(::OVR::OpenVR::VRControllerState_t state,
                                                                                                      ::GlobalNamespace::__OVRInput__OpenVRController controllerType, uint32_t deviceID,
                                                                                                      ::UnityEngine::Vector3 localPosition, ::UnityEngine::Quaternion localOrientation) noexcept {
  this->state = state;
  this->controllerType = controllerType;
  this->deviceID = deviceID;
  this->localPosition = localPosition;
  this->localOrientation = localOrientation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OpenVRControllerDetails::__OVRInput__OpenVRControllerDetails() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__HapticInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__HapticInfo::*)()>(&::GlobalNamespace::__OVRInput__HapticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2735714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__HapticInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__OVRInput__HapticInfo::__get_playingHaptics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playingHaptics;
}
constexpr bool const& GlobalNamespace::__OVRInput__HapticInfo::__get_playingHaptics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___playingHaptics;
}
constexpr void GlobalNamespace::__OVRInput__HapticInfo::__set_playingHaptics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___playingHaptics = value;
}
constexpr float_t& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticsDurationPlayed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticsDurationPlayed;
}
constexpr float_t const& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticsDurationPlayed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticsDurationPlayed;
}
constexpr void GlobalNamespace::__OVRInput__HapticInfo::__set_hapticsDurationPlayed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hapticsDurationPlayed = value;
}
constexpr float_t& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticsDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticsDuration;
}
constexpr float_t const& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticsDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticsDuration;
}
constexpr void GlobalNamespace::__OVRInput__HapticInfo::__set_hapticsDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hapticsDuration = value;
}
constexpr float_t& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticAmplitude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticAmplitude;
}
constexpr float_t const& GlobalNamespace::__OVRInput__HapticInfo::__get_hapticAmplitude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___hapticAmplitude;
}
constexpr void GlobalNamespace::__OVRInput__HapticInfo::__set_hapticAmplitude(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___hapticAmplitude = value;
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::__OVRInput__HapticInfo::__get_node() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::__OVRInput__HapticInfo::__get_node() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___node;
}
constexpr void GlobalNamespace::__OVRInput__HapticInfo::__set_node(::UnityEngine::XR::XRNode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___node = value;
}
inline ::GlobalNamespace::__OVRInput__HapticInfo* GlobalNamespace::__OVRInput__HapticInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__HapticInfo*>());
}
inline void GlobalNamespace::__OVRInput__HapticInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__HapticInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__HapticInfo::__OVRInput__HapticInfo() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawButton (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::*)(
    ::GlobalNamespace::__OVRInput__Button)>(&::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::ToRawMask)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x2736ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273618c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_None(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_One() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___One;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_One() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___One;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_One(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___One = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Two() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Two;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Two() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Two;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Two(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Two = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Three() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Three;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Three() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Three;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Three(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Three = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Four() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Four;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Four() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Four;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Four(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Four = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Start;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Start;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Start(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Start = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Back() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Back;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Back() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Back;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Back(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Back = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryShoulder;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryShoulder;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryShoulder(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryShoulder = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickUp;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickUp;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickDown;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickDown;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickLeft;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickLeft;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickRight;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryThumbstickRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstickRight;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryShoulder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryShoulder;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryShoulder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryShoulder;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryShoulder(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryShoulder = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickUp;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickUp;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickUp(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstickUp = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickDown;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickDown;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickDown(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstickDown = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickLeft;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickLeft;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickLeft(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstickLeft = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickRight;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryThumbstickRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstickRight;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryThumbstickRight(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstickRight = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryTouchpad = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadUp() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadUp;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadUp() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadUp;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadUp(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DpadUp = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadDown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadDown;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadDown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadDown;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadDown(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DpadDown = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadLeft() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadLeft;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadLeft() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadLeft;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadLeft(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DpadLeft = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadRight;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_DpadRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___DpadRight;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_DpadRight(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___DpadRight = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Up() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Up;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Up() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Up;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Up(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Up = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Down() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Down;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Down() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Down;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Down(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Down = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Left() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Left;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Left() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Left;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Left(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Left = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Right() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Right;
}
constexpr ::GlobalNamespace::__OVRInput__RawButton const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__get_Right() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Right;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__set_Right(::GlobalNamespace::__OVRInput__RawButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Right = value;
}
inline ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::ToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawButton, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap::__OVRInput__OVRControllerBase__VirtualButtonMap() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawTouch (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::*)(
    ::GlobalNamespace::__OVRInput__Touch)>(&::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x27370dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2736194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_None(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_One() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___One;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_One() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___One;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_One(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___One = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Two() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Two;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Two() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Two;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Two(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Two = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Three() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Three;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Three() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Three;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Three(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Three = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Four() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Four;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_Four() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Four;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_Four(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___Four = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbRest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbRest;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryThumbRest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbRest;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbRest = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbRest() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbRest;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryThumbRest() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbRest;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryThumbRest(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbRest = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::ToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*>::get(), "ToRawMask",
                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap::__OVRInput__OVRControllerBase__VirtualTouchMap() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::__OVRInput__RawNearTouch (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::*)(::GlobalNamespace::__OVRInput__NearTouch)>(
        &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27371b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273619c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_None(::GlobalNamespace::__OVRInput__RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryThumbButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbButtons;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_PrimaryThumbButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbButtons;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_PrimaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbButtons = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryThumbButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbButtons;
}
constexpr ::GlobalNamespace::__OVRInput__RawNearTouch const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__get_SecondaryThumbButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbButtons;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__set_SecondaryThumbButtons(::GlobalNamespace::__OVRInput__RawNearTouch value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbButtons = value;
}
inline ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::ToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawNearTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap::__OVRInput__OVRControllerBase__VirtualNearTouchMap() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawAxis1D (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::*)(
    ::GlobalNamespace::__OVRInput__Axis1D)>(&::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::ToRawMask)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2737204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27361a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_None(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryHandTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryHandTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryHandTrigger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryHandTrigger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryHandTrigger;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryHandTrigger(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryHandTrigger = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerCurl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerCurl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerSlide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerSlide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryThumbRestForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbRestForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryThumbRestForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbRestForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryStylusForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryStylusForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryStylusForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryStylusForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryStylusForce = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerCurl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerCurl;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerCurl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerCurl;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTriggerCurl(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTriggerCurl = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerSlide() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerSlide;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerSlide() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerSlide;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTriggerSlide(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTriggerSlide = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryThumbRestForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbRestForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryThumbRestForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbRestForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryThumbRestForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbRestForce = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryStylusForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryStylusForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryStylusForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryStylusForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryStylusForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryStylusForce = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_PrimaryIndexTriggerForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryIndexTriggerForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_PrimaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryIndexTriggerForce = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerForce() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerForce;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis1D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__get_SecondaryIndexTriggerForce() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryIndexTriggerForce;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__set_SecondaryIndexTriggerForce(::GlobalNamespace::__OVRInput__RawAxis1D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryIndexTriggerForce = value;
}
inline ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::ToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawAxis1D, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap::__OVRInput__OVRControllerBase__VirtualAxis1DMap() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap.ToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawAxis2D (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::*)(
    ::GlobalNamespace::__OVRInput__Axis2D)>(&::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::ToRawMask)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27372f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x27361ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_None() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_None() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___None;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_None(::GlobalNamespace::__OVRInput__RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___None = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_PrimaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_PrimaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___PrimaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_PrimaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___PrimaryTouchpad = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryThumbstick() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryThumbstick() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryThumbstick;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_SecondaryThumbstick(::GlobalNamespace::__OVRInput__RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryThumbstick = value;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryTouchpad() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr ::GlobalNamespace::__OVRInput__RawAxis2D const& GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__get_SecondaryTouchpad() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___SecondaryTouchpad;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__set_SecondaryTouchpad(::GlobalNamespace::__OVRInput__RawAxis2D value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___SecondaryTouchpad = value;
}
inline ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::ToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*>::get(), "ToRawMask", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawAxis2D, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap::__OVRInput__OVRControllerBase__VirtualAxis2DMap() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::_ctor)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x2735fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__Controller (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::Update)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x27361b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.GetOpenVRControllerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRPlugin__ControllerState6 (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::GetOpenVRControllerState)> {
  constexpr static std::size_t size = 0x470;
  constexpr static std::size_t addrs = 0x273659c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "GetOpenVRControllerState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.SetControllerVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(float_t, float_t)>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerVibration)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2736a0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.SetControllerLocalizedVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__HapticsLocation, float_t, float_t)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2736a80;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.SetControllerHapticsAmplitudeEnvelope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2736b04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.SetControllerHapticsPcm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(::GlobalNamespace::__OVRInput__HapticsPcmVibration)>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x2736c3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.GetControllerSampleRateHz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2736e4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2736ec0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerBase::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawButton (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__Button)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x27332e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawTouch (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__Touch)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2733908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawNearTouch (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__NearTouch)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2733f98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawAxis1D (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__Axis1D)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2734b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerBase.ResolveToRawMask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__RawAxis2D (::GlobalNamespace::__OVRInput__OVRControllerBase::*)(
    ::GlobalNamespace::__OVRInput__Axis2D)>(&::GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2735008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__OVRInput__Controller& GlobalNamespace::__OVRInput__OVRControllerBase::__get_controllerType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___controllerType;
}
constexpr ::GlobalNamespace::__OVRInput__Controller const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_controllerType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___controllerType;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_controllerType(::GlobalNamespace::__OVRInput__Controller value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___controllerType = value;
}
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*& GlobalNamespace::__OVRInput__OVRControllerBase::__get_buttonMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buttonMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap*> const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_buttonMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___buttonMap;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_buttonMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualButtonMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*& GlobalNamespace::__OVRInput__OVRControllerBase::__get_touchMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___touchMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap*> const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_touchMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___touchMap;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_touchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualTouchMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___touchMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*& GlobalNamespace::__OVRInput__OVRControllerBase::__get_nearTouchMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nearTouchMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap*> const&
GlobalNamespace::__OVRInput__OVRControllerBase::__get_nearTouchMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___nearTouchMap;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_nearTouchMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualNearTouchMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___nearTouchMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*& GlobalNamespace::__OVRInput__OVRControllerBase::__get_axis1DMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___axis1DMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap*> const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_axis1DMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___axis1DMap;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_axis1DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis1DMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axis1DMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*& GlobalNamespace::__OVRInput__OVRControllerBase::__get_axis2DMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___axis2DMap;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap*> const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_axis2DMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___axis2DMap;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_axis2DMap(::GlobalNamespace::__OVRInput__OVRControllerBase__VirtualAxis2DMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___axis2DMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& GlobalNamespace::__OVRInput__OVRControllerBase::__get_previousState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___previousState;
}
constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_previousState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___previousState;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_previousState(::GlobalNamespace::__OVRPlugin__ControllerState6 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___previousState = value;
}
constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6& GlobalNamespace::__OVRInput__OVRControllerBase::__get_currentState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentState;
}
constexpr ::GlobalNamespace::__OVRPlugin__ControllerState6 const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_currentState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___currentState;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_currentState(::GlobalNamespace::__OVRPlugin__ControllerState6 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___currentState = value;
}
constexpr bool& GlobalNamespace::__OVRInput__OVRControllerBase::__get_shouldApplyDeadzone() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shouldApplyDeadzone;
}
constexpr bool const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_shouldApplyDeadzone() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___shouldApplyDeadzone;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_shouldApplyDeadzone(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___shouldApplyDeadzone = value;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& GlobalNamespace::__OVRInput__OVRControllerBase::__get_HapticsPcmSamplesConsumedCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HapticsPcmSamplesConsumedCache;
}
constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& GlobalNamespace::__OVRInput__OVRControllerBase::__get_HapticsPcmSamplesConsumedCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___HapticsPcmSamplesConsumedCache;
}
constexpr void GlobalNamespace::__OVRInput__OVRControllerBase::__set_HapticsPcmSamplesConsumedCache(::ArrayW<uint32_t, ::Array<uint32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___HapticsPcmSamplesConsumedCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__OVRInput__OVRControllerBase* GlobalNamespace::__OVRInput__OVRControllerBase::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerBase*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::__OVRInput__OVRControllerBase::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__Controller, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRPlugin__ControllerState6 GlobalNamespace::__OVRInput__OVRControllerBase::GetOpenVRControllerState(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "GetOpenVRControllerState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRPlugin__ControllerState6, false>(this, ___internal_method, controllerType);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerVibration(float_t frequency, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "SetControllerVibration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frequency, amplitude);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "SetControllerLocalizedVibration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsLocation>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapticsLocationMask, frequency, amplitude);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "SetControllerHapticsAmplitudeEnvelope", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hapticsVibration);
}
inline int32_t GlobalNamespace::__OVRInput__OVRControllerBase::SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "SetControllerHapticsPcm", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsPcmVibration>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, hapticsVibration);
}
inline float_t GlobalNamespace::__OVRInput__OVRControllerBase::GetControllerSampleRateHz() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "GetControllerSampleRateHz", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerBase::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerBase::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__OVRInput__RawButton GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask(::GlobalNamespace::__OVRInput__Button virtualMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawButton, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__RawTouch GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask(::GlobalNamespace::__OVRInput__Touch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__RawNearTouch GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask(::GlobalNamespace::__OVRInput__NearTouch virtualMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawNearTouch, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__RawAxis1D GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis1D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawAxis1D, false>(this, ___internal_method, virtualMask);
}
inline ::GlobalNamespace::__OVRInput__RawAxis2D GlobalNamespace::__OVRInput__OVRControllerBase::ResolveToRawMask(::GlobalNamespace::__OVRInput__Axis2D virtualMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerBase*>::get(), "ResolveToRawMask", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__RawAxis2D, false>(this, ___internal_method, virtualMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerBase::__OVRInput__OVRControllerBase() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x27304b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x273734c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x27373b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x27373f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x273741c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2737468;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x1014;
  constexpr static std::size_t addrs = 0x2737494;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerTouch* GlobalNamespace::__OVRInput__OVRControllerTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerTouch*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerTouch::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerTouch::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerTouch*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerTouch::__OVRInput__OVRControllerTouch() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x27384a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x27384c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2738540;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738574;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x273859c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27385e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerLTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273860c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerLTouch* GlobalNamespace::__OVRInput__OVRControllerLTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLTouch::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerLTouch::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLTouch*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerLTouch::__OVRInput__OVRControllerLTouch() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738614;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2738634;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x27386ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27386e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2738708;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738750;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRTouch.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerRTouch::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRTouch::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2738778;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerRTouch* GlobalNamespace::__OVRInput__OVRControllerRTouch::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRTouch::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerRTouch::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRTouch*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerRTouch::__OVRInput__OVRControllerRTouch() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27387a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27387ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738814;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738834;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x273885c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerHands.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerHands::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerHands::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x273887c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerHands* GlobalNamespace::__OVRInput__OVRControllerHands::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerHands*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerHands::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerHands::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerHands*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerHands::__OVRInput__OVRControllerHands() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27388b0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x27388fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738924;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738944;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x273896c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerLHand.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerLHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerLHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x273898c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerLHand* GlobalNamespace::__OVRInput__OVRControllerLHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerLHand*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerLHand::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerLHand::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerLHand*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerLHand::__OVRInput__OVRControllerLHand() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x27389b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738a00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738a28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738a48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738a70;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRHand.GetBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::GlobalNamespace::__OVRInput__OVRControllerRHand::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRHand::GetBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2738a90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), 10));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerRHand* GlobalNamespace::__OVRInput__OVRControllerRHand::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerRHand*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRHand::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint8_t GlobalNamespace::__OVRInput__OVRControllerRHand::GetBatteryPercentRemaining() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRHand*>::get(),
                                                                             "GetBatteryPercentRemaining", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerRHand::__OVRInput__OVRControllerRHand() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2738ab8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738b14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738b3c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738b5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerRemote.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerRemote::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738b84;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerRemote* GlobalNamespace::__OVRInput__OVRControllerRemote::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerRemote*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerRemote::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerRemote*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerRemote::__OVRInput__OVRControllerRemote() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738ba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2738bc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738c34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738c5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2738c7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738cac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC* GlobalNamespace::__OVRInput__OVRControllerGamepadPC::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadPC::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadPC*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerGamepadPC::__OVRInput__OVRControllerGamepadPC() {}
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738cd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid.ConfigureButtonMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureButtonMap)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2738cf4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid.ConfigureTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureTouchMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738d64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid.ConfigureNearTouchMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureNearTouchMap)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2738d8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid.ConfigureAxis1DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis1DMap)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2738dac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid.ConfigureAxis2DMap
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::*)()>(
    &::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis2DMap)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2738ddc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(), 15));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid* GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>());
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureButtonMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             "ConfigureButtonMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             "ConfigureTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureNearTouchMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             "ConfigureNearTouchMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis1DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             "ConfigureAxis1DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::ConfigureAxis2DMap() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid*>::get(),
                                                                             "ConfigureAxis2DMap", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRInput__OVRControllerGamepadAndroid::__OVRInput__OVRControllerGamepadAndroid() {}
//  Writing Method size for method: ::GlobalNamespace::OVRInput.get_pluginSupportsActiveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::get_pluginSupportsActiveController)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x272fec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                               "get_pluginSupportsActiveController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::Update)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x273060c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.FixedUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::FixedUpdate)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x273119c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "FixedUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetCurrentInteractionProfile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__InteractionProfile (*)(::GlobalNamespace::__OVRInput__Hand)>(
    &::GlobalNamespace::OVRInput::GetCurrentInteractionProfile)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x27312a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetCurrentInteractionProfile", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationTracked)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2731300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationTracked", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerOrientationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetControllerOrientationValid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27313d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationValid", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionTracked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionTracked)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x27314b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionTracked", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerPositionValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetControllerPositionValid)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2731588;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionValid", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.AreHandPosesGeneratedByControllerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRPlugin__Step, ::GlobalNamespace::__OVRInput__Hand)>(
    &::GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2731660;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "AreHandPosesGeneratedByControllerData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.EnableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x27316f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                               "EnableSimultaneousHandsAndControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.DisableSimultaneousHandsAndControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2731748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                               "DisableSimultaneousHandsAndControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerIsInHandState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__ControllerInHandState (*)(::GlobalNamespace::__OVRInput__Hand)>(
    &::GlobalNamespace::OVRInput::GetControllerIsInHandState)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x273179c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerIsInHandState", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveControllerForHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__Controller (*)(::GlobalNamespace::__OVRInput__Handedness)>(
    &::GlobalNamespace::OVRInput::GetActiveControllerForHand)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x273188c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveControllerForHand", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Handedness>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerPosition)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x2731988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerPosition", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerVelocity)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2731ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerVelocity", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAcceleration)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0x2732124;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAcceleration", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Quaternion (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerRotation)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x2732354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerRotation", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularVelocity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x273288c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularVelocity", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerAngularAcceleration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x2732ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularAcceleration", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetLocalControllerStatesWithoutPrediction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Quaternion>, ByRef<::UnityEngine::Vector3>, ByRef<::UnityEngine::Vector3>)>(
        &::GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x2732d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerStatesWithoutPrediction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDominantHand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__Handedness (*)()>(&::GlobalNamespace::OVRInput::GetDominantHand)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2733094;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDominantHand",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27330e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawButton, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27310cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__RawButton,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButton)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x273314c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButton", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27332f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawButton, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27334c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__RawButton,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2733360;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawButton, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27336f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedButtonUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Button, ::GlobalNamespace::__OVRInput__RawButton,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedButtonUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2733590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2731134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__RawTouch, ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouch)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x27337c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733ae8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__RawTouch,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2733988;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedTouchUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::GlobalNamespace::__OVRInput__Touch, ::GlobalNamespace::__OVRInput__RawTouch, ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2733bb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawNearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__RawNearTouch,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouch)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x2733de8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2733fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawNearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2734178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__RawNearTouch,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchDown)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2734018;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchDown", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27341e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__RawNearTouch, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x27343a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedNearTouchUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__NearTouch, ::GlobalNamespace::__OVRInput__RawNearTouch,
                                                                                           ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedNearTouchUp)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x2734248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchUp", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::__OVRInput__Axis1D, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2734410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::__OVRInput__RawAxis1D, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2734af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis1D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::__OVRInput__Axis1D, ::GlobalNamespace::__OVRInput__RawAxis1D,
                                                                                              ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis1D)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x2734478;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis1D", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis1D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::__OVRInput__Axis2D, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2734be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::GlobalNamespace::__OVRInput__RawAxis2D, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::Get)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2734fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetResolvedAxis2D
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(
    ::GlobalNamespace::__OVRInput__Axis2D, ::GlobalNamespace::__OVRInput__RawAxis2D, ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetResolvedAxis2D)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x2734c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis2D", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis2D>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetConnectedControllers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__Controller (*)()>(&::GlobalNamespace::OVRInput::GetConnectedControllers)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2735180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetConnectedControllers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsControllerConnected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::IsControllerConnected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x27351d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsControllerConnected", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetActiveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__OVRInput__Controller (*)()>(&::GlobalNamespace::OVRInput::GetActiveController)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x273523c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveController",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.StartVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::StartVibration)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2735294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "StartVibration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetOpenVRLocalPose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(
    &::GlobalNamespace::OVRInput::SetOpenVRLocalPose)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2735398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetOpenVRLocalPose", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetOpenVRStringProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::OVR::OpenVR::ETrackedDeviceProperty, uint32_t)>(
    &::GlobalNamespace::OVRInput::GetOpenVRStringProperty)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x27354a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetOpenVRStringProperty", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerNodeIds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerNodeIds)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x2730b50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerNodeIds",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.UpdateXRControllerHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::UpdateXRControllerHaptics)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x2730ee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerHaptics",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.InitHapticInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRInput::InitHapticInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x27304cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "InitHapticInfo",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.PlayHapticImpulse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::OVRInput::PlayHapticImpulse)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x27355f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "PlayHapticImpulse", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.IsValidOpenVRDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(uint32_t)>(&::GlobalNamespace::OVRInput::IsValidOpenVRDevice)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x273571c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsValidOpenVRDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t, float_t, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerVibration)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2735728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerVibration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerLocalizedVibration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::GlobalNamespace::__OVRInput__HapticsLocation, float_t, float_t, ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::SetControllerLocalizedVibration)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x2735904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerLocalizedVibration", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsAmplitudeEnvelope
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration, ::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2735ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsAmplitudeEnvelope", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.SetControllerHapticsPcm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::__OVRInput__HapticsPcmVibration, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::SetControllerHapticsPcm)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2735c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsPcm", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsPcmVibration>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerSampleRateHz
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::__OVRInput__Controller)>(&::GlobalNamespace::OVRInput::GetControllerSampleRateHz)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2735d8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerSampleRateHz", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.GetControllerBatteryPercentRemaining
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (*)(::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2735eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerBatteryPercentRemaining", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2)>(
    &::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2735158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateAbsMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateAbsMax)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2734bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x2735020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.CalculateDeadzone
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t)>(&::GlobalNamespace::OVRInput::CalculateDeadzone)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2734b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRInput.ShouldResolveController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::__OVRInput__Controller, ::GlobalNamespace::__OVRInput__Controller)>(
    &::GlobalNamespace::OVRInput::ShouldResolveController)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2733294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "ShouldResolveController", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_AS_BUTTON_THRESHOLD(float_t value) {
  ::cordl_internals::setStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_AS_BUTTON_THRESHOLD() {
  return ::cordl_internals::getStaticField<float_t, "AXIS_AS_BUTTON_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_AXIS_DEADZONE_THRESHOLD(float_t value) {
  ::cordl_internals::setStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_AXIS_DEADZONE_THRESHOLD() {
  return ::cordl_internals::getStaticField<float_t, "AXIS_DEADZONE_THRESHOLD", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_controllers(::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>*, "controllers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>*>(value));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>* GlobalNamespace::OVRInput::getStaticF_controllers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::GlobalNamespace::__OVRInput__OVRControllerBase*>*, "controllers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_activeControllerType(::GlobalNamespace::__OVRInput__Controller value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRInput__Controller, "activeControllerType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::__OVRInput__Controller>(value));
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::OVRInput::getStaticF_activeControllerType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRInput__Controller, "activeControllerType",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_connectedControllerTypes(::GlobalNamespace::__OVRInput__Controller value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRInput__Controller, "connectedControllerTypes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::__OVRInput__Controller>(value));
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::OVRInput::getStaticF_connectedControllerTypes() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRInput__Controller, "connectedControllerTypes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_stepType(::GlobalNamespace::__OVRPlugin__Step value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__OVRPlugin__Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::GlobalNamespace::__OVRPlugin__Step>(value));
}
inline ::GlobalNamespace::__OVRPlugin__Step GlobalNamespace::OVRInput::getStaticF_stepType() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__OVRPlugin__Step, "stepType", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_fixedUpdateCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_fixedUpdateCount() {
  return ::cordl_internals::getStaticField<int32_t, "fixedUpdateCount", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveController(bool value) {
  ::cordl_internals::setStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveController() {
  return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveController", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerCached(bool value) {
  ::cordl_internals::setStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<bool>(value));
}
inline bool GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerCached() {
  return ::cordl_internals::getStaticField<bool, "_pluginSupportsActiveControllerCached", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF__pluginSupportsActiveControllerMinVersion(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::OVRInput::getStaticF__pluginSupportsActiveControllerMinVersion() {
  return ::cordl_internals::getStaticField<::System::Version*, "_pluginSupportsActiveControllerMinVersion",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_NUM_HAPTIC_CHANNELS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::OVRInput::getStaticF_NUM_HAPTIC_CHANNELS() {
  return ::cordl_internals::getStaticField<int32_t, "NUM_HAPTIC_CHANNELS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_hapticInfos(::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*>, "hapticInfos",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*> GlobalNamespace::OVRInput::getStaticF_hapticInfos() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::__OVRInput__HapticInfo*, ::Array<::GlobalNamespace::__OVRInput__HapticInfo*>*>, "hapticInfos",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE(float_t value) {
  ::cordl_internals::setStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_OPENVR_MAX_HAPTIC_AMPLITUDE() {
  return ::cordl_internals::getStaticField<float_t, "OPENVR_MAX_HAPTIC_AMPLITUDE", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_HAPTIC_VIBRATION_DURATION_SECONDS(float_t value) {
  ::cordl_internals::setStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<float_t>(value));
}
inline float_t GlobalNamespace::OVRInput::getStaticF_HAPTIC_VIBRATION_DURATION_SECONDS() {
  return ::cordl_internals::getStaticField<float_t, "HAPTIC_VIBRATION_DURATION_SECONDS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_TOUCH_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_TOUCH_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_TOUCH_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_VIVE_CONTROLLER_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_VIVE_CONTROLLER_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_VIVE_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW GlobalNamespace::OVRInput::getStaticF_OPENVR_WINDOWSMR_CONTROLLER_NAME() {
  return ::cordl_internals::getStaticField<::StringW, "OPENVR_WINDOWSMR_CONTROLLER_NAME", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline void GlobalNamespace::OVRInput::setStaticF_openVRControllerDetails(
    ::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*>, "openVRControllerDetails",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>(
      std::forward<::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*>>(value));
}
inline ::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*>
GlobalNamespace::OVRInput::getStaticF_openVRControllerDetails() {
  return ::cordl_internals::getStaticField<::ArrayW<::GlobalNamespace::__OVRInput__OpenVRControllerDetails, ::Array<::GlobalNamespace::__OVRInput__OpenVRControllerDetails>*>,
                                           "openVRControllerDetails", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get>();
}
inline bool GlobalNamespace::OVRInput::get_pluginSupportsActiveController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                             "get_pluginSupportsActiveController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::FixedUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "FixedUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRInput__InteractionProfile GlobalNamespace::OVRInput::GetCurrentInteractionProfile(::GlobalNamespace::__OVRInput__Hand hand) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetCurrentInteractionProfile", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__InteractionProfile, false>(nullptr, ___internal_method, hand);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationTracked(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationTracked", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerOrientationValid(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerOrientationValid", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionTracked(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionTracked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetControllerPositionValid(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerPositionValid", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::AreHandPosesGeneratedByControllerData(::GlobalNamespace::__OVRPlugin__Step stepId, ::GlobalNamespace::__OVRInput__Hand hand) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "AreHandPosesGeneratedByControllerData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRPlugin__Step>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stepId, hand);
}
inline bool GlobalNamespace::OVRInput::EnableSimultaneousHandsAndControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                             "EnableSimultaneousHandsAndControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::DisableSimultaneousHandsAndControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(),
                                                                             "DisableSimultaneousHandsAndControllers", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::__OVRInput__ControllerInHandState GlobalNamespace::OVRInput::GetControllerIsInHandState(::GlobalNamespace::__OVRInput__Hand hand) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerIsInHandState", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Hand>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__ControllerInHandState, false>(nullptr, ___internal_method, hand);
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::OVRInput::GetActiveControllerForHand(::GlobalNamespace::__OVRInput__Handedness handedness) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveControllerForHand", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Handedness>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__Controller, false>(nullptr, ___internal_method, handedness);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerPosition(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerPosition", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerVelocity(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerVelocity", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAcceleration", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Quaternion GlobalNamespace::OVRInput::GetLocalControllerRotation(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerRotation", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularVelocity(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularVelocity", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVRInput::GetLocalControllerAngularAcceleration(::GlobalNamespace::__OVRInput__Controller controllerType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerAngularAcceleration", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, controllerType);
}
inline bool GlobalNamespace::OVRInput::GetLocalControllerStatesWithoutPrediction(::GlobalNamespace::__OVRInput__Controller controllerType, ByRef<::UnityEngine::Vector3> position,
                                                                                 ByRef<::UnityEngine::Quaternion> rotation, ByRef<::UnityEngine::Vector3> velocity,
                                                                                 ByRef<::UnityEngine::Vector3> angularVelocity) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetLocalControllerStatesWithoutPrediction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Quaternion>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Vector3>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, position, rotation, velocity, angularVelocity);
}
inline ::GlobalNamespace::__OVRInput__Handedness GlobalNamespace::OVRInput::GetDominantHand() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDominantHand",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__Handedness, false>(nullptr, ___internal_method);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButton(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask,
                                                         ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButton", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonDown(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask,
                                                             ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__RawButton rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedButtonUp(::GlobalNamespace::__OVRInput__Button virtualMask, ::GlobalNamespace::__OVRInput__RawButton rawMask,
                                                           ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedButtonUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Button>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawButton>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouch(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask,
                                                        ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchDown(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask,
                                                            ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__RawTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedTouchUp(::GlobalNamespace::__OVRInput__Touch virtualMask, ::GlobalNamespace::__OVRInput__RawTouch rawMask,
                                                          ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedTouchUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Touch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouch(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                                            ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetDown(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchDown(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                                                ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchDown", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline bool GlobalNamespace::OVRInput::GetUp(::GlobalNamespace::__OVRInput__RawNearTouch rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline bool GlobalNamespace::OVRInput::GetResolvedNearTouchUp(::GlobalNamespace::__OVRInput__NearTouch virtualMask, ::GlobalNamespace::__OVRInput__RawNearTouch rawMask,
                                                              ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedNearTouchUp", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__NearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawNearTouch>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline float_t GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__RawAxis1D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis1D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline float_t GlobalNamespace::OVRInput::GetResolvedAxis1D(::GlobalNamespace::__OVRInput__Axis1D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis1D rawMask,
                                                            ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis1D", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis1D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis1D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::Get(::GlobalNamespace::__OVRInput__RawAxis2D rawMask, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "Get", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis2D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, rawMask, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::GetResolvedAxis2D(::GlobalNamespace::__OVRInput__Axis2D virtualMask, ::GlobalNamespace::__OVRInput__RawAxis2D rawMask,
                                                                           ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetResolvedAxis2D", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Axis2D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__RawAxis2D>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, virtualMask, rawMask, controllerMask);
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::OVRInput::GetConnectedControllers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetConnectedControllers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__Controller, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRInput::IsControllerConnected(::GlobalNamespace::__OVRInput__Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsControllerConnected", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controller);
}
inline ::GlobalNamespace::__OVRInput__Controller GlobalNamespace::OVRInput::GetActiveController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetActiveController",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__OVRInput__Controller, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::StartVibration(float_t amplitude, float_t duration, ::UnityEngine::XR::XRNode controllerNode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "StartVibration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, duration, controllerNode);
}
inline void GlobalNamespace::OVRInput::SetOpenVRLocalPose(::UnityEngine::Vector3 leftPos, ::UnityEngine::Vector3 rightPos, ::UnityEngine::Quaternion leftRot, ::UnityEngine::Quaternion rightRot) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetOpenVRLocalPose", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, leftPos, rightPos, leftRot, rightRot);
}
/// @param deviceId: uint32_t (default: static_cast<uint32_t>(0xffffff00u))
inline ::StringW GlobalNamespace::OVRInput::GetOpenVRStringProperty(::OVR::OpenVR::ETrackedDeviceProperty prop, uint32_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetOpenVRStringProperty", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::OVR::OpenVR::ETrackedDeviceProperty>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, prop, deviceId);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerNodeIds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerNodeIds",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::UpdateXRControllerHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "UpdateXRControllerHaptics",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::InitHapticInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "InitHapticInfo",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRInput::PlayHapticImpulse(float_t amplitude, ::UnityEngine::XR::XRNode deviceNode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "PlayHapticImpulse", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, amplitude, deviceNode);
}
inline bool GlobalNamespace::OVRInput::IsValidOpenVRDevice(uint32_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "IsValidOpenVRDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, deviceId);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline void GlobalNamespace::OVRInput::SetControllerVibration(float_t frequency, float_t amplitude, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerVibration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, frequency, amplitude, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline void GlobalNamespace::OVRInput::SetControllerLocalizedVibration(::GlobalNamespace::__OVRInput__HapticsLocation hapticsLocationMask, float_t frequency, float_t amplitude,
                                                                       ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerLocalizedVibration", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsLocation>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsLocationMask, frequency, amplitude, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline void GlobalNamespace::OVRInput::SetControllerHapticsAmplitudeEnvelope(::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration hapticsVibration,
                                                                             ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsAmplitudeEnvelope", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsAmplitudeEnvelopeVibration>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline int32_t GlobalNamespace::OVRInput::SetControllerHapticsPcm(::GlobalNamespace::__OVRInput__HapticsPcmVibration hapticsVibration, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "SetControllerHapticsPcm", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__HapticsPcmVibration>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, hapticsVibration, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline float_t GlobalNamespace::OVRInput::GetControllerSampleRateHz(::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerSampleRateHz", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, controllerMask);
}
/// @param controllerMask: ::GlobalNamespace::__OVRInput__Controller (default: static_cast<int32_t>(0x80000000))
inline uint8_t GlobalNamespace::OVRInput::GetControllerBatteryPercentRemaining(::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "GetControllerBatteryPercentRemaining", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(nullptr, ___internal_method, controllerMask);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateAbsMax(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, a, b);
}
inline float_t GlobalNamespace::OVRInput::CalculateAbsMax(float_t a, float_t b) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateAbsMax", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, b);
}
inline ::UnityEngine::Vector2 GlobalNamespace::OVRInput::CalculateDeadzone(::UnityEngine::Vector2 a, float_t deadzone) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(nullptr, ___internal_method, a, deadzone);
}
inline float_t GlobalNamespace::OVRInput::CalculateDeadzone(float_t a, float_t deadzone) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "CalculateDeadzone", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, a, deadzone);
}
inline bool GlobalNamespace::OVRInput::ShouldResolveController(::GlobalNamespace::__OVRInput__Controller controllerType, ::GlobalNamespace::__OVRInput__Controller controllerMask) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRInput*>::get(), "ShouldResolveController", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__OVRInput__Controller>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, controllerType, controllerMask);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRInput::OVRInput() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
