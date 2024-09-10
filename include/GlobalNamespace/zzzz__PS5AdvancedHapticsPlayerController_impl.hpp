#pragma once
// IWYU pragma private; include "GlobalNamespace/PS5AdvancedHapticsPlayerController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/zzzz__XRNode_impl.hpp"
#include "GlobalNamespace/zzzz__PS5AdvancedHapticsPlayerController_def.hpp"
#include "GlobalNamespace/zzzz__HapticsAudioClipPlayer_def.hpp"
#include "GlobalNamespace/zzzz__ICoroutineStarter_def.hpp"
#include "GlobalNamespace/zzzz__IHapticFeedbackPlayer_def.hpp"
#include "GlobalNamespace/zzzz__PS5AdvancedHapticsPlayerController_def.hpp"
#include "Libraries/HM/HMLib/VR/zzzz__HapticPresetSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/zzzz__XRNode_def.hpp"
#include "Zenject/zzzz__IInitializable_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::*)()>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39491b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0._PlayContinuousHapticPreset_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_PlayContinuousHapticPreset_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3949298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                        "<PlayContinuousHapticPreset>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_set_node(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get_hapticPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_get_hapticPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticPreset;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__cordl_internal_set_hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hapticPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>());
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::_PlayContinuousHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0*>::get(),
                        "<PlayContinuousHapticPreset>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0::__PS5AdvancedHapticsPlayerController____c__DisplayClass6_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::*)()>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39491bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0._PlayOneShotHapticPreset_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_PlayOneShotHapticPreset_b__0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3949344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                        "<PlayOneShotHapticPreset>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController*& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PS5AdvancedHapticsPlayerController*> const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_set___4__this(::GlobalNamespace::PS5AdvancedHapticsPlayerController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::XR::XRNode& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get_node()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr ::UnityEngine::XR::XRNode const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get_node() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___node;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_set_node(::UnityEngine::XR::XRNode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___node = value;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get_hapticPreset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticPreset;
}
constexpr ::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO> const& GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_get_hapticPreset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hapticPreset;
}
constexpr void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__cordl_internal_set_hapticPreset(::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___hapticPreset)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0* GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>());
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::_PlayOneShotHapticPreset_b__0(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0*>::get(),
                        "<PlayOneShotHapticPreset>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0::__PS5AdvancedHapticsPlayerController____c__DisplayClass7_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.Initialize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)()>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3948cf0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayHapticFeedback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayHapticFeedback)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3948cf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayHapticFeedback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.CanPlayHapticPreset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::Libraries::HM::HMLib::VR::HapticPresetSO*, ::UnityEngine::XR::XRNode)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::CanPlayHapticPreset)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x39490bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "CanPlayHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayContinuousHapticPreset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayContinuousHapticPreset)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x3948ee8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayContinuousHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.PlayOneShotHapticPreset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::UnityEngine::XR::XRNode, ::Libraries::HM::HMLib::VR::HapticPresetSO*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayOneShotHapticPreset)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x3948d18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayOneShotHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController.OnHapticPlayFinishedCallback
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)(::GlobalNamespace::HapticsAudioClipPlayer*)>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::OnHapticPlayFinishedCallback)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x39491c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "OnHapticPlayFinishedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PS5AdvancedHapticsPlayerController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::PS5AdvancedHapticsPlayerController::*)()>(&::GlobalNamespace::PS5AdvancedHapticsPlayerController::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x394921c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr  GlobalNamespace::PS5AdvancedHapticsPlayerController::operator ::GlobalNamespace::IHapticFeedbackPlayer*() noexcept {
return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IHapticFeedbackPlayer"
constexpr ::GlobalNamespace::IHapticFeedbackPlayer* GlobalNamespace::PS5AdvancedHapticsPlayerController::i___GlobalNamespace__IHapticFeedbackPlayer() noexcept {
return static_cast<::GlobalNamespace::IHapticFeedbackPlayer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Zenject::IInitializable"
constexpr  GlobalNamespace::PS5AdvancedHapticsPlayerController::operator ::Zenject::IInitializable*() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::Zenject::IInitializable"
constexpr ::Zenject::IInitializable* GlobalNamespace::PS5AdvancedHapticsPlayerController::i___Zenject__IInitializable() noexcept {
return static_cast<::Zenject::IInitializable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__HapticsAudioClipPlayer__Pool*& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__hapticsPlayerPool()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticsPlayerPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__HapticsAudioClipPlayer__Pool*> const& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__hapticsPlayerPool() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hapticsPlayerPool;
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_set__hapticsPlayerPool(::GlobalNamespace::__HapticsAudioClipPlayer__Pool*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hapticsPlayerPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ICoroutineStarter*& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__coroutineStarter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineStarter;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ICoroutineStarter*> const& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__coroutineStarter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____coroutineStarter;
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_set__coroutineStarter(::GlobalNamespace::ICoroutineStarter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____coroutineStarter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__activePlayers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePlayers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*> const& GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_get__activePlayers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activePlayers;
}
constexpr void GlobalNamespace::PS5AdvancedHapticsPlayerController::__cordl_internal_set__activePlayers(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::XR::XRNode,::UnityW<::Libraries::HM::HMLib::VR::HapticPresetSO>>,::UnityW<::GlobalNamespace::HapticsAudioClipPlayer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____activePlayers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::Initialize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "Initialize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayHapticFeedback(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayHapticFeedback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline bool GlobalNamespace::PS5AdvancedHapticsPlayerController::CanPlayHapticPreset(::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset, ::UnityEngine::XR::XRNode  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "CanPlayHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, hapticPreset, node);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayContinuousHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayContinuousHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::PlayOneShotHapticPreset(::UnityEngine::XR::XRNode  node, ::Libraries::HM::HMLib::VR::HapticPresetSO*  hapticPreset)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "PlayOneShotHapticPreset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::XR::XRNode>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Libraries::HM::HMLib::VR::HapticPresetSO*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, hapticPreset);
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::OnHapticPlayFinishedCallback(::GlobalNamespace::HapticsAudioClipPlayer*  player)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        "OnHapticPlayFinishedCallback",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::HapticsAudioClipPlayer*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, player);
}
inline ::GlobalNamespace::PS5AdvancedHapticsPlayerController* GlobalNamespace::PS5AdvancedHapticsPlayerController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>());
}
inline void GlobalNamespace::PS5AdvancedHapticsPlayerController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::PS5AdvancedHapticsPlayerController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PS5AdvancedHapticsPlayerController::PS5AdvancedHapticsPlayerController()   {
}
