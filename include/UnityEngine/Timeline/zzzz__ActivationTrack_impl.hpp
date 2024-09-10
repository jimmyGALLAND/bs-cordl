#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/ActivationTrack.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationMixerPlayable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ActivationTrack_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::__ActivationTrack__PostPlaybackState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::__ActivationTrack__PostPlaybackState()   {
}
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Active{static_cast<int32_t>(0x0)};
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Inactive{static_cast<int32_t>(0x1)};
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::Revert{static_cast<int32_t>(0x2)};
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  UnityEngine::Timeline::__ActivationTrack__PostPlaybackState::LeaveAsIs{static_cast<int32_t>(0x3)};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CanCompileClips
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::CanCompileClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x477a300;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                  33
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.get_postPlaybackState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::get_postPlaybackState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x477a40c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "get_postPlaybackState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.set_postPlaybackState
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState)>(&::UnityEngine::Timeline::ActivationTrack::set_postPlaybackState)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x477a414;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "set_postPlaybackState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.CreateTrackMixer
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::ActivationTrack::CreateTrackMixer)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x477a43c;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                  24
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.UpdateTrackMode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::UpdateTrackMode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x477a428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "UpdateTrackMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.GatherProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::ActivationTrack::GatherProperties)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x477a518;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                  29
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack.OnCreateClip
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)(::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::ActivationTrack::OnCreateClip)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x477a7bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                                  30
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::ActivationTrack._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::ActivationTrack::*)()>(&::UnityEngine::Timeline::ActivationTrack::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x477a810;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_PostPlaybackState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostPlaybackState;
}
constexpr ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState const& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_PostPlaybackState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PostPlaybackState;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__cordl_internal_set_m_PostPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PostPlaybackState = value;
}
constexpr ::UnityEngine::Timeline::ActivationMixerPlayable*& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_ActivationMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationMixer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::ActivationMixerPlayable*> const& UnityEngine::Timeline::ActivationTrack::__cordl_internal_get_m_ActivationMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivationMixer;
}
constexpr void UnityEngine::Timeline::ActivationTrack::__cordl_internal_set_m_ActivationMixer(::UnityEngine::Timeline::ActivationMixerPlayable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ActivationMixer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::Timeline::ActivationTrack::CanCompileClips()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                    33
                )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState UnityEngine::Timeline::ActivationTrack::get_postPlaybackState()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "get_postPlaybackState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::set_postPlaybackState(::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "set_postPlaybackState",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__ActivationTrack__PostPlaybackState>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::ActivationTrack::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph  graph, ::UnityEngine::GameObject*  go, int32_t  inputCount)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                    24
                )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, inputCount);
}
inline void UnityEngine::Timeline::ActivationTrack::UpdateTrackMode()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        "UpdateTrackMode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::ActivationTrack::GatherProperties(::UnityEngine::Playables::PlayableDirector*  director, ::UnityEngine::Timeline::IPropertyCollector*  driver)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                    29
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, director, driver);
}
inline void UnityEngine::Timeline::ActivationTrack::OnCreateClip(::UnityEngine::Timeline::TimelineClip*  clip)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                    30
                )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline ::UnityEngine::Timeline::ActivationTrack* UnityEngine::Timeline::ActivationTrack::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::ActivationTrack*>());
}
inline void UnityEngine::Timeline::ActivationTrack::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::ActivationTrack*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::ActivationTrack::ActivationTrack()   {
}
