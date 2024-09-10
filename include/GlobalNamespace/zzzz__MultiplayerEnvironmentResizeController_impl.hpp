#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerEnvironmentResizeController.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerCenterResizeController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerEnvironmentResizeController_def.hpp"
#include "GlobalNamespace/zzzz__TubeBloomPrePassLight_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__MultiplayerEnvironmentResizeController__ResizeType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::__MultiplayerEnvironmentResizeController__ResizeType()   {
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::None{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Position{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType::Length{static_cast<int32_t>(0x2)};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_resizeType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c130;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_resizeType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_offset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c138;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_offset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_lights
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_lights",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData.get_otherTransforms
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_otherTransforms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::*)()>(&::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c150;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__resizeType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeType;
}
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__resizeType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeType;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_set__resizeType(::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resizeType = value;
}
constexpr float_t& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__offset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr float_t const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__offset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____offset;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_set__offset(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____offset = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__lights()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lights;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__lights() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lights;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_set__lights(::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__otherTransforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____otherTransforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> const& GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_get__otherTransforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____otherTransforms;
}
constexpr void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__cordl_internal_set__otherTransforms(::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____otherTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_resizeType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_resizeType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeType, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_offset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_offset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_lights()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_lights",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>,::Array<::UnityW<::GlobalNamespace::TubeBloomPrePassLight>>*>, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*> GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::get_otherTransforms()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        "get_otherTransforms",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Transform>,::Array<::UnityW<::UnityEngine::Transform>>*>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData* GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>());
}
inline void GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData::__MultiplayerEnvironmentResizeController__ResizeData()   {
}
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.get_isResizingFinished
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3bb44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "get_isResizingFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.add_resizingDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b3bb4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "add_resizingDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.remove_resizingDidFinishEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(::System::Action*)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b3bbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "remove_resizingDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Start)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x3b3bc84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x3b3bde0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleEdgeDistanceFromCenterWasCalculated
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b3bdb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "HandleEdgeDistanceFromCenterWasCalculated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.HandleSpawnCenterDistanceWasFound
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)(float_t)>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b3bdc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "HandleSpawnCenterDistanceWasFound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.TryResize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b3bf28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "TryResize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController.Resize
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::Resize)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x3b3bf40;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerEnvironmentResizeController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerEnvironmentResizeController::*)()>(&::GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b3c128;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__platformEnd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformEnd;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__platformEnd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____platformEnd;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__platformEnd(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____platformEnd)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__resizeData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeData;
}
constexpr ::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__resizeData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resizeData;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__resizeData(::ArrayW<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*,::Array<::GlobalNamespace::__MultiplayerEnvironmentResizeController__ResizeData*>*>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____resizeData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__centerResizeController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerResizeController;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerCenterResizeController> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__centerResizeController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____centerResizeController;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__centerResizeController(::UnityW<::GlobalNamespace::MultiplayerCenterResizeController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____centerResizeController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__beatmapObjectSpawnCenter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectSpawnCenter;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__beatmapObjectSpawnCenter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectSpawnCenter;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__beatmapObjectSpawnCenter(::UnityW<::GlobalNamespace::BeatmapObjectSpawnCenter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnCenter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get_resizingDidFinishEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizingDidFinishEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get_resizingDidFinishEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___resizingDidFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set_resizingDidFinishEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___resizingDidFinishEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__isResizingFinished()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResizingFinished;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__isResizingFinished() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isResizingFinished;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__isResizingFinished(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isResizingFinished = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__edgeDistanceFromCenterFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edgeDistanceFromCenterFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__edgeDistanceFromCenterFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____edgeDistanceFromCenterFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__edgeDistanceFromCenterFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____edgeDistanceFromCenterFound = value;
}
constexpr bool& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__spawnCenterDistanceFound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnCenterDistanceFound;
}
constexpr bool const& GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_get__spawnCenterDistanceFound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____spawnCenterDistanceFound;
}
constexpr void GlobalNamespace::MultiplayerEnvironmentResizeController::__cordl_internal_set__spawnCenterDistanceFound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____spawnCenterDistanceFound = value;
}
inline bool GlobalNamespace::MultiplayerEnvironmentResizeController::get_isResizingFinished()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "get_isResizingFinished",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::add_resizingDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "add_resizingDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::remove_resizingDidFinishEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "remove_resizingDidFinishEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleEdgeDistanceFromCenterWasCalculated(float_t  edgeDistanceFromCenter)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "HandleEdgeDistanceFromCenterWasCalculated",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, edgeDistanceFromCenter);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::HandleSpawnCenterDistanceWasFound(float_t  distance)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "HandleSpawnCenterDistanceWasFound",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, distance);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::TryResize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "TryResize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::Resize()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        "Resize",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerEnvironmentResizeController* GlobalNamespace::MultiplayerEnvironmentResizeController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MultiplayerEnvironmentResizeController*>());
}
inline void GlobalNamespace::MultiplayerEnvironmentResizeController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerEnvironmentResizeController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerEnvironmentResizeController::MultiplayerEnvironmentResizeController()   {
}
