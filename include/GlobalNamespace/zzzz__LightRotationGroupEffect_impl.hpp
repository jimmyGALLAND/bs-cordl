#pragma once
// IWYU pragma private; include "GlobalNamespace/LightRotationGroupEffect.hpp"
#include "GlobalNamespace/zzzz__LightAxis_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__LightAxis_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationDirection_def.hpp"
#include "GlobalNamespace/zzzz__LightRotationGroupEffect_def.hpp"
#include "Tweening/zzzz__FloatTween_def.hpp"
#include "Tweening/zzzz__SongTimeTweeningManager_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__LightRotationGroupEffect__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__LightRotationGroupEffect__InitData::*)(int32_t, int32_t, ::GlobalNamespace::LightAxis, bool, ::UnityEngine::Transform*)>(&::GlobalNamespace::__LightRotationGroupEffect__InitData::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3afc79c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightRotationGroupEffect__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_groupId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr int32_t const& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_groupId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___groupId;
}
constexpr void GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_set_groupId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___groupId = value;
}
constexpr int32_t& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_elementId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementId;
}
constexpr int32_t const& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_elementId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___elementId;
}
constexpr void GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_set_elementId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___elementId = value;
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___axis;
}
constexpr void GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_set_axis(::GlobalNamespace::LightAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___axis = value;
}
constexpr bool& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_mirrored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrored;
}
constexpr bool const& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_mirrored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___mirrored;
}
constexpr void GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_set_mirrored(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___mirrored = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_get_transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transform;
}
constexpr void GlobalNamespace::__LightRotationGroupEffect__InitData::__cordl_internal_set_transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__LightRotationGroupEffect__InitData* GlobalNamespace::__LightRotationGroupEffect__InitData::New_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::LightAxis  axis, bool  mirrored, ::UnityEngine::Transform*  transform)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__LightRotationGroupEffect__InitData*>(groupId, elementId, axis, mirrored, transform));
}
inline void GlobalNamespace::__LightRotationGroupEffect__InitData::_ctor(int32_t  groupId, int32_t  elementId, ::GlobalNamespace::LightAxis  axis, bool  mirrored, ::UnityEngine::Transform*  transform)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__LightRotationGroupEffect__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightAxis>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupId, elementId, axis, mirrored, transform);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__LightRotationGroupEffect__InitData::__LightRotationGroupEffect__InitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)(::GlobalNamespace::__LightRotationGroupEffect__InitData*, ::Tweening::SongTimeTweeningManager*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::LightRotationGroupEffect::_ctor)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x3afc1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightRotationGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.Cleanup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)()>(&::GlobalNamespace::LightRotationGroupEffect::Cleanup)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3afc3c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "Cleanup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.HandleRotationChangeBeatmapEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)(::GlobalNamespace::LightRotationBeatmapEventData*)>(&::GlobalNamespace::LightRotationGroupEffect::HandleRotationChangeBeatmapEvent)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x3afc460;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "HandleRotationChangeBeatmapEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationBeatmapEventData*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.SetRotation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightRotationGroupEffect::*)(float_t)>(&::GlobalNamespace::LightRotationGroupEffect::SetRotation)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x3afc5e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "SetRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LightRotationGroupEffect.ComputeTargetAngle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, float_t, int32_t, ::GlobalNamespace::LightRotationDirection)>(&::GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3afc6c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "ComputeTargetAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__transform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__transform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____transform;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__transform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transform)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::LightAxis& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__axis()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr ::GlobalNamespace::LightAxis const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__axis() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____axis;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__axis(::GlobalNamespace::LightAxis  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____axis = value;
}
constexpr bool& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__mirrored()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrored;
}
constexpr bool const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__mirrored() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrored;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__mirrored(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrored = value;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager>& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__tweeningManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweeningManager;
}
constexpr ::UnityW<::Tweening::SongTimeTweeningManager> const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__tweeningManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tweeningManager;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__tweeningManager(::UnityW<::Tweening::SongTimeTweeningManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tweeningManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__beatmapCallbacksController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCallbacksController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCallbacksController*> const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__beatmapCallbacksController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Tweening::FloatTween*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__rotationTween()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationTween;
}
constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__rotationTween() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rotationTween;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__rotationTween(::Tweening::FloatTween*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationTween)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__lightRotationBeatmapEventCallbackWrapper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightRotationBeatmapEventCallbackWrapper;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallbackWrapper*> const& GlobalNamespace::LightRotationGroupEffect::__cordl_internal_get__lightRotationBeatmapEventCallbackWrapper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lightRotationBeatmapEventCallbackWrapper;
}
constexpr void GlobalNamespace::LightRotationGroupEffect::__cordl_internal_set__lightRotationBeatmapEventCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightRotationBeatmapEventCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::LightRotationGroupEffect* GlobalNamespace::LightRotationGroupEffect::New_ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightRotationGroupEffect*>(initData, tweeningManager, beatmapCallbacksController));
}
inline void GlobalNamespace::LightRotationGroupEffect::_ctor(::GlobalNamespace::__LightRotationGroupEffect__InitData*  initData, ::Tweening::SongTimeTweeningManager*  tweeningManager, ::GlobalNamespace::BeatmapCallbacksController*  beatmapCallbacksController)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__LightRotationGroupEffect__InitData*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Tweening::SongTimeTweeningManager*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initData, tweeningManager, beatmapCallbacksController);
}
inline void GlobalNamespace::LightRotationGroupEffect::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "Cleanup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LightRotationGroupEffect::HandleRotationChangeBeatmapEvent(::GlobalNamespace::LightRotationBeatmapEventData*  currentEventData)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "HandleRotationChangeBeatmapEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationBeatmapEventData*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEventData);
}
inline void GlobalNamespace::LightRotationGroupEffect::SetRotation(float_t  rotation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "SetRotation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotation);
}
inline float_t GlobalNamespace::LightRotationGroupEffect::ComputeTargetAngle(float_t  startAngle, float_t  targetAngle, int32_t  loopCount, ::GlobalNamespace::LightRotationDirection  rotationOrientation)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightRotationGroupEffect*>::get(),
                        "ComputeTargetAngle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightRotationDirection>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, startAngle, targetAngle, loopCount, rotationOrientation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightRotationGroupEffect::LightRotationGroupEffect()   {
}
