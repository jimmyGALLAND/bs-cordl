#pragma once
// IWYU pragma private; include "GlobalNamespace/TimelineExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__TimelineExtensions_def.hpp"
#include "GlobalNamespace/zzzz__TimelineExtensions_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::*)()>(&::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3aa67ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0._JumpToTimelineMarker_b__0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::*)(::UnityEngine::Timeline::IMarker*)>(&::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::_JumpToTimelineMarker_b__0)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3aa67b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0*>::get(),
                        "<JumpToTimelineMarker>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Type*& GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::__cordl_internal_get_markerType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___markerType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::__cordl_internal_get_markerType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___markerType;
}
constexpr void GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::__cordl_internal_set_markerType(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___markerType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0* GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::_JumpToTimelineMarker_b__0(::UnityEngine::Timeline::IMarker*  marker)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0*>::get(),
                        "<JumpToTimelineMarker>b__0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, marker);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__TimelineExtensions____c__DisplayClass0_0::__TimelineExtensions____c__DisplayClass0_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::TimelineExtensions.JumpToTimelineMarker
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Playables::PlayableDirector*, ::System::Type*)>(&::GlobalNamespace::TimelineExtensions::JumpToTimelineMarker)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3aa65e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineExtensions*>::get(),
                        "JumpToTimelineMarker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::TimelineExtensions::JumpToTimelineMarker(::UnityEngine::Playables::PlayableDirector*  playableDirector, ::System::Type*  markerType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TimelineExtensions*>::get(),
                        "JumpToTimelineMarker",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playableDirector, markerType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimelineExtensions::TimelineExtensions()   {
}
