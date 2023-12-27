#pragma once
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_impl.hpp"
#include "UnityEngine/Timeline/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/Timeline/zzzz__MarkerList_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyCollector_def.hpp"
#include "UnityEngine/Timeline/zzzz__IPropertyPreview_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBinding_def.hpp"
#include "UnityEngine/Timeline/zzzz__IntervalTree_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackBindingTypeAttribute_def.hpp"
#include "UnityEngine/Timeline/zzzz__IMarker_def.hpp"
#include "UnityEngine/Timeline/zzzz__ICurvesOwner_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayableAsset_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineAsset_def.hpp"
#include "UnityEngine/zzzz__AnimationClip_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/Timeline/zzzz__RuntimeElement_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions::__TrackAsset__Versions(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions::__TrackAsset__Versions() {}
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions UnityEngine::Timeline::__TrackAsset__Versions::Initial{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions UnityEngine::Timeline::__TrackAsset__Versions::RotationAsEuler{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions UnityEngine::Timeline::__TrackAsset__Versions::RootMotionUpgrade{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Timeline::__TrackAsset__Versions UnityEngine::Timeline::__TrackAsset__Versions::AnimatedTrackProperties{ static_cast<int32_t>(0x3) };
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TrackAsset__TrackAssetUpgrade::__TrackAsset__TrackAssetUpgrade() {}
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset__TransientBuildData.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::__TrackAsset__TransientBuildData (*)()>(
    &::UnityEngine::Timeline::__TrackAsset__TransientBuildData::Create)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c6151c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset__TransientBuildData>::get(),
                                                                               "Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset__TransientBuildData.Clear
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TrackAsset__TransientBuildData::*)()>(
    &::UnityEngine::Timeline::__TrackAsset__TransientBuildData::Clear)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2c5f01c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset__TransientBuildData>::get(),
                                                                               "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData UnityEngine::Timeline::__TrackAsset__TransientBuildData::Create() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset__TransientBuildData>::get(),
                                                                             "Create", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::__TrackAsset__TransientBuildData, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Timeline::__TrackAsset__TransientBuildData::Clear() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset__TransientBuildData>::get(),
                                                                             "Clear", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "trackList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "clipList", ty: "::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "markerList", ty:
// "::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::Timeline::__TrackAsset__TransientBuildData::__TrackAsset__TransientBuildData(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TrackAsset*>* trackList,
                                                                                                      ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* clipList,
                                                                                                      ::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markerList) noexcept {
  this->trackList = trackList;
  this->clipList = clipList;
  this->markerList = markerList;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TrackAsset__TransientBuildData::__TrackAsset__TransientBuildData() {}
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)(int32_t)>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c5c02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c61628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                 "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::MoveNext)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x2c6162c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(), "MoveNext",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableBinding (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c61870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                    "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c61880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c618c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>* (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
        &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2c61920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                    "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::*)()>(
    &::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c619c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::operator ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>"
constexpr UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::operator ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr int32_t const& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____1__state;
}
constexpr void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____1__state = value;
}
constexpr ::UnityEngine::Playables::PlayableBinding& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr ::UnityEngine::Playables::PlayableBinding const& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____2__current;
}
constexpr void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__set___2__current(::UnityEngine::Playables::PlayableBinding value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____2__current = value;
}
constexpr int32_t& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____l__initialThreadId;
}
constexpr void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::UnityEngine::Timeline::TrackAsset*& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Timeline::TrackAsset*> const& UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____4__this;
}
constexpr void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__set___4__this(::UnityEngine::Timeline::TrackAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65* UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>(__1__state));
}
inline void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                                             "System.IDisposable.Dispose", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                                             "MoveNext", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableBinding UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerator_UnityEngine_Playables_PlayableBinding__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                  "System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableBinding, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                                             "System.Collections.IEnumerator.Reset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                                             "System.Collections.IEnumerator.get_Current", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*
UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_Generic_IEnumerable_UnityEngine_Playables_PlayableBinding__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                  "System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityEngine::Playables::PlayableBinding>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65*>::get(),
                                                                             "System.Collections.IEnumerable.GetEnumerator", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TrackAsset___get_outputs_d__65::__TrackAsset___get_outputs_d__65() {}
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TrackAsset____c::*)()>(&::UnityEngine::Timeline::__TrackAsset____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c61a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TrackAsset____c._SortClips_b__121_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::__TrackAsset____c::*)(
    ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::__TrackAsset____c::_SortClips_b__121_0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c61a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get(), "<SortClips>b__121_0", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::__TrackAsset____c::setStaticF___9(::UnityEngine::Timeline::__TrackAsset____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::__TrackAsset____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get>(
      std::forward<::UnityEngine::Timeline::__TrackAsset____c*>(value));
}
inline ::UnityEngine::Timeline::__TrackAsset____c* UnityEngine::Timeline::__TrackAsset____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::__TrackAsset____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get>();
}
inline void UnityEngine::Timeline::__TrackAsset____c::setStaticF___9__121_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__121_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::__TrackAsset____c::getStaticF___9__121_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__121_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get>();
}
inline ::UnityEngine::Timeline::__TrackAsset____c* UnityEngine::Timeline::__TrackAsset____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::__TrackAsset____c*>());
}
inline void UnityEngine::Timeline::__TrackAsset____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::__TrackAsset____c::_SortClips_b__121_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TrackAsset____c*>::get(), "<SortClips>b__121_0", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, clip1, clip2);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TrackAsset____c::__TrackAsset____c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnBeforeTrackSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5b320;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnAfterTrackDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5b324;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 21));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnUpgradeFromVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(&::UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5b328;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 22));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2c5b32c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2c5b488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                 "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpgradeToLatestVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5b8cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "UpgradeToLatestVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnClipPlayableCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*)>(&::UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c5b8ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "add_OnClipPlayableCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnClipPlayableCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*)>(&::UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c5b9e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "remove_OnClipPlayableCreate", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.add_OnTrackAnimationPlayableCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*)>(
        &::UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c5bad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "add_OnTrackAnimationPlayableCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.remove_OnTrackAnimationPlayableCreate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*)>(
        &::UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2c5bbc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "remove_OnTrackAnimationPlayableCreate", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5bcbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_end
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_end)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c593e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_end",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_duration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c5be28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_duration",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_muted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5be90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_muted",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_muted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_muted)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5be98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_muted", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_mutedInHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2c590b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "get_mutedInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_timelineAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineAsset* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_timelineAsset)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x2c597b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_timelineAsset",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableAsset* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5bea4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_parent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_parent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::set_parent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5beac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_parent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetClips)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c54c78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetClips",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_clips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> (
    ::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_clips)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2c510ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_clips",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isEmpty)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2c5beb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 23));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasClips)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x2c4ed70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_hasClips",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_hasCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_hasCurves)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2c5bf20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_hasCurves",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_isSubTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_isSubTrack)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x2c519e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_isSubTrack",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_outputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* (
    ::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_outputs)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c5bfb4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetChildTracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* (
    ::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetChildTracks)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2c535a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetChildTracks",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_customPlayableTypename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c26c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "get_customPlayableTypename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_customPlayableTypename
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(
    &::UnityEngine::Timeline::TrackAsset::set_customPlayableTypename)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_customPlayableTypename",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_curves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AnimationClip* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_curves",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_curves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::AnimationClip*)>(
    &::UnityEngine::Timeline::TrackAsset::set_curves)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_curves", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2c5c28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                 "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_asset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5c2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "UnityEngine.Timeline.ICurvesOwner.get_asset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_assetOwner
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Object* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5c2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UnityEngine_Timeline_ICurvesOwner_get_targetTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TrackAsset* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c5c2d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_subTracksObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::get_subTracksObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c2d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "get_subTracksObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_locked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_locked)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5c2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_locked",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.set_locked
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(bool)>(&::UnityEngine::Timeline::TrackAsset::set_locked)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5c2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_locked", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_lockedInHierarchy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2c5c2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "get_lockedInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.get_supportsNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::get_supportsNotifications)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c5c480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "get_supportsNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.__internalAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::__internalAwake)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2c5c534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "__internalAwake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateCurves
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::StringW)>(&::UnityEngine::Timeline::TrackAsset::CreateCurves)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2c5c600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateCurves", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateTrackMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, int32_t)>(&::UnityEngine::Timeline::TrackAsset::CreateTrackMixer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2c5c6b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 24));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2c5c724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreatePlayable", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateDefaultClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::CreateDefaultClip)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x2c5c774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateDefaultClip",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::TrackAsset::DeleteClip)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2c5ca70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteClip", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*, double_t)>(
    &::UnityEngine::Timeline::TrackAsset::CreateMarker)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c5cb84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateMarker", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::IMarker*)>(
    &::UnityEngine::Timeline::TrackAsset::DeleteMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5ce90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteMarker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkers)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c5b8d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkerCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5bfac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkerCount",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::IMarker* (::UnityEngine::Timeline::TrackAsset::*)(int32_t)>(
    &::UnityEngine::Timeline::TrackAsset::GetMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5d0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClip)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2c5d14c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClip", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateAndAddNewClipOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2c5ca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateAndAddNewClipOfType",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipOfType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClipOfType)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x2c5d4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipOfType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromPlayableAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (
    ::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::IPlayableAsset*)>(&::UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x2c5d97c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipFromPlayableAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::IPlayableAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateClipFromAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateClipFromAsset)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x2c5d6dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipFromAsset", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetMarkersRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>* (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetMarkersRaw)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5de5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkersRaw",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearMarkers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearMarkers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5de64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ClearMarkers",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Timeline::TrackAsset::AddMarker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c5dedc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddMarker", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.DeleteMarkerRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c5dfd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteMarkerRaw", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetTimeRangeHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetTimeRangeHash)> {
  constexpr static std::size_t size = 0x314;
  constexpr static std::size_t addrs = 0x2c5e0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetTimeRangeHash",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::TrackAsset::AddClip)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2c55c38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddClip", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNotificationsPlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Playables::Playable, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable)> {
  constexpr static std::size_t size = 0x2d0;
  constexpr static std::size_t addrs = 0x2c5e3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateNotificationsPlayable", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayableGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::CreatePlayableGraph)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x2c5ea28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreatePlayableGraph", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CompileClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*,
    ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(&::UnityEngine::Timeline::TrackAsset::CompileClips)> {
  constexpr static std::size_t size = 0x428;
  constexpr static std::size_t addrs = 0x2c5f0fc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 25));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherCompilableTracks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>*)>(&::UnityEngine::Timeline::TrackAsset::GatherCompilableTracks)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0x2c5f680;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GatherCompilableTracks", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*)>(&::UnityEngine::Timeline::TrackAsset::GatherNotifications)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x2c5e6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GatherNotifications", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateMixerPlayableGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*)>(
    &::UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0x2c5fa88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ConfigureTrackAnimation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x2c5f524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ConfigureTrackAnimation", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.SortClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::SortClips)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x2c60030;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "SortClips",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearClipsInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearClipsInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c60158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "ClearClipsInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ClearSubTracksInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2c601d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "ClearSubTracksInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnClipMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::OnClipMove)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c558bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "OnClipMove",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreateNewClipContainerInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Timeline::TimelineClip* (::UnityEngine::Timeline::TrackAsset::*)()>(
    &::UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2c5dc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "CreateNewClipContainerInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.AddChild
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::AddChild)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c5a720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddChild", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.MoveLastTrackBefore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x2c60248;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "MoveLastTrackBefore", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveSubTrack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::TrackAsset::RemoveSubTrack)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c589dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "RemoveSubTrack", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.RemoveClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::TrackAsset::RemoveClip)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2c55bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "RemoveClip", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetEvaluationTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(ByRef<double_t>, ByRef<double_t>)>(
    &::UnityEngine::Timeline::TrackAsset::GetEvaluationTime)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x2c54070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetSequenceTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(ByRef<double_t>, ByRef<double_t>)>(
    &::UnityEngine::Timeline::TrackAsset::GetSequenceTime)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c543c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GatherProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*)>(&::UnityEngine::Timeline::TrackAsset::GatherProperties)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x2c60454;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetGameObjectBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GameObject* (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Playables::PlayableDirector*)>(
    &::UnityEngine::Timeline::TrackAsset::GetGameObjectBinding)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x2c4f060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetGameObjectBinding", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.ValidateClipType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)(::System::Type*)>(
    &::UnityEngine::Timeline::TrackAsset::ValidateClipType)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x2c5d27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ValidateClipType", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.OnCreateClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)(::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::TrackAsset::OnCreateClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2c4f228;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateDuration)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2c5bd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "UpdateDuration",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CalculateItemsHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CalculateItemsHash)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c51cc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 31));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::Playable (::UnityEngine::Timeline::TrackAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::TrackAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x2c60c90;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Invalidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Invalidate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c5b844;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "Invalidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetNotificationDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetNotificationDuration)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2c543d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "GetNotificationDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileClips
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileClips)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c4edc4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateTrackMixer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c60f34;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 34));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.IsCompilable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::IsCompilable)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x2c60f44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "IsCompilable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.UpdateChildTrackCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x2c5c060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "UpdateChildTrackCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.Hash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::Hash)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2c61310;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetClipsHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::GetClipsHash)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x2c60b28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetClipsHash",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.GetAnimationClipHash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::UnityEngine::AnimationClip*)>(&::UnityEngine::Timeline::TrackAsset::GetAnimationClipHash)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2c51bdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetAnimationClipHash", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.HasNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::HasNotifications)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2c60438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "HasNotifications",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCompileNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCompileNotifications)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2c5fa54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "CanCompileNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset.CanCreateMixerRecursive
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0x2c5ece8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                               "CanCreateMixerRecursive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TrackAsset._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TrackAsset::*)()>(&::UnityEngine::Timeline::TrackAsset::_ctor)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x2c4f288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::IPropertyPreview"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::IPropertyPreview*() noexcept {
  return static_cast<::UnityEngine::Timeline::IPropertyPreview*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Timeline::ICurvesOwner"
constexpr UnityEngine::Timeline::TrackAsset::operator ::UnityEngine::Timeline::ICurvesOwner*() noexcept {
  return static_cast<::UnityEngine::Timeline::ICurvesOwner*>(static_cast<void*>(this));
}
constexpr int32_t& UnityEngine::Timeline::TrackAsset::__get_m_Version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset::__get_m_Version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Version;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Version = value;
}
constexpr ::UnityEngine::AnimationClip*& UnityEngine::Timeline::TrackAsset::__get_m_AnimClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AnimClip;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& UnityEngine::Timeline::TrackAsset::__get_m_AnimClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_AnimClip;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_AnimClip(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_AnimClip)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__get_m_Locked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Locked;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__get_m_Locked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Locked;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Locked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Locked = value;
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__get_m_Muted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Muted;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__get_m_Muted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Muted;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Muted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Muted = value;
}
constexpr ::StringW& UnityEngine::Timeline::TrackAsset::__get_m_CustomPlayableFullTypename() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CustomPlayableFullTypename;
}
constexpr ::StringW const& UnityEngine::Timeline::TrackAsset::__get_m_CustomPlayableFullTypename() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CustomPlayableFullTypename;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_CustomPlayableFullTypename(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CustomPlayableFullTypename)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::AnimationClip*& UnityEngine::Timeline::TrackAsset::__get_m_Curves() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Curves;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& UnityEngine::Timeline::TrackAsset::__get_m_Curves() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Curves;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Curves(::UnityEngine::AnimationClip* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Curves)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Playables::PlayableAsset*& UnityEngine::Timeline::TrackAsset::__get_m_Parent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Parent;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Playables::PlayableAsset*> const& UnityEngine::Timeline::TrackAsset::__get_m_Parent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Parent;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Parent(::UnityEngine::Playables::PlayableAsset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*& UnityEngine::Timeline::TrackAsset::__get_m_Children() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Children;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*> const& UnityEngine::Timeline::TrackAsset::__get_m_Children() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Children;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Children(::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Children)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& UnityEngine::Timeline::TrackAsset::__get_m_ItemsHash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ItemsHash;
}
constexpr int32_t const& UnityEngine::Timeline::TrackAsset::__get_m_ItemsHash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ItemsHash;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_ItemsHash(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_ItemsHash = value;
}
constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>& UnityEngine::Timeline::TrackAsset::__get_m_ClipsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClipsCache;
}
constexpr ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> const& UnityEngine::Timeline::TrackAsset::__get_m_ClipsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClipsCache;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_ClipsCache(::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClipsCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Timeline::DiscreteTime& UnityEngine::Timeline::TrackAsset::__get_m_Start() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Start;
}
constexpr ::UnityEngine::Timeline::DiscreteTime const& UnityEngine::Timeline::TrackAsset::__get_m_Start() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Start;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Start(::UnityEngine::Timeline::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Start = value;
}
constexpr ::UnityEngine::Timeline::DiscreteTime& UnityEngine::Timeline::TrackAsset::__get_m_End() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_End;
}
constexpr ::UnityEngine::Timeline::DiscreteTime const& UnityEngine::Timeline::TrackAsset::__get_m_End() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_End;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_End(::UnityEngine::Timeline::DiscreteTime value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_End = value;
}
constexpr bool& UnityEngine::Timeline::TrackAsset::__get_m_CacheSorted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CacheSorted;
}
constexpr bool const& UnityEngine::Timeline::TrackAsset::__get_m_CacheSorted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_CacheSorted;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_CacheSorted(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_CacheSorted = value;
}
constexpr ::System::Nullable_1<bool>& UnityEngine::Timeline::TrackAsset::__get_m_SupportsNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SupportsNotifications;
}
constexpr ::System::Nullable_1<bool> const& UnityEngine::Timeline::TrackAsset::__get_m_SupportsNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_SupportsNotifications;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_SupportsNotifications(::System::Nullable_1<bool> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_SupportsNotifications = value;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*& UnityEngine::Timeline::TrackAsset::__get_m_ChildTrackCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ChildTrackCache;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*> const&
UnityEngine::Timeline::TrackAsset::__get_m_ChildTrackCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ChildTrackCache;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_ChildTrackCache(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ChildTrackCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*& UnityEngine::Timeline::TrackAsset::__get_m_Clips() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Clips;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>*> const& UnityEngine::Timeline::TrackAsset::__get_m_Clips() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Clips;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Clips(::System::Collections::Generic::List_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Clips)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Timeline::MarkerList& UnityEngine::Timeline::TrackAsset::__get_m_Markers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Markers;
}
constexpr ::UnityEngine::Timeline::MarkerList const& UnityEngine::Timeline::TrackAsset::__get_m_Markers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Markers;
}
constexpr void UnityEngine::Timeline::TrackAsset::__set_m_Markers(::UnityEngine::Timeline::MarkerList value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Markers = value;
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_BuildData(::UnityEngine::Timeline::__TrackAsset__TransientBuildData value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::__TrackAsset__TransientBuildData, "s_BuildData",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>(
      std::forward<::UnityEngine::Timeline::__TrackAsset__TransientBuildData>(value));
}
inline ::UnityEngine::Timeline::__TrackAsset__TransientBuildData UnityEngine::Timeline::TrackAsset::getStaticF_s_BuildData() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::__TrackAsset__TransientBuildData, "s_BuildData",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>();
}
inline void
UnityEngine::Timeline::TrackAsset::setStaticF_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*, "OnClipPlayableCreate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>(
      std::forward<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>(value));
}
inline ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*
UnityEngine::Timeline::TrackAsset::getStaticF_OnClipPlayableCreate() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*, "OnClipPlayableCreate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_OnTrackAnimationPlayableCreate(
    ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*, "OnTrackAnimationPlayableCreate",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>(
      std::forward<::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>(value));
}
inline ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*
UnityEngine::Timeline::TrackAsset::getStaticF_OnTrackAnimationPlayableCreate() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*, "OnTrackAnimationPlayableCreate",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_EmptyCache(::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*>, "s_EmptyCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>(
      std::forward<::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*>>(value));
}
inline ::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*> UnityEngine::Timeline::TrackAsset::getStaticF_s_EmptyCache() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Timeline::TrackAsset*, ::Array<::UnityEngine::Timeline::TrackAsset*>*>, "s_EmptyCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>();
}
inline void UnityEngine::Timeline::TrackAsset::setStaticF_s_TrackBindingTypeAttributeCache(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*, "s_TrackBindingTypeAttributeCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*
UnityEngine::Timeline::TrackAsset::getStaticF_s_TrackBindingTypeAttributeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::UnityEngine::Timeline::TrackBindingTypeAttribute*>*, "s_TrackBindingTypeAttributeCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get>();
}
inline void UnityEngine::Timeline::TrackAsset::OnBeforeTrackSerialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "OnBeforeTrackSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnAfterTrackDeserialize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "OnAfterTrackDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnUpgradeFromVersion(int32_t oldVersion) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "OnUpgradeFromVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, oldVersion);
}
inline void UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                               "UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UpgradeToLatestVersion() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "UpgradeToLatestVersion", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
UnityEngine::Timeline::TrackAsset::add_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "add_OnClipPlayableCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void
UnityEngine::Timeline::TrackAsset::remove_OnClipPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "remove_OnClipPlayableCreate", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::System::Action_3<::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void
UnityEngine::Timeline::TrackAsset::add_OnTrackAnimationPlayableCreate(::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "add_OnTrackAnimationPlayableCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::Timeline::TrackAsset::remove_OnTrackAnimationPlayableCreate(
    ::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "remove_OnTrackAnimationPlayableCreate", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_3<::UnityEngine::Timeline::TrackAsset*, ::UnityEngine::GameObject*, ::UnityEngine::Playables::Playable>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_end() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_end",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_duration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_muted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_muted",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_muted(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_muted", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TrackAsset::get_mutedInHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "get_mutedInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineAsset* UnityEngine::Timeline::TrackAsset::get_timelineAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_timelineAsset",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineAsset*, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableAsset* UnityEngine::Timeline::TrackAsset::get_parent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_parent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableAsset*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_parent(::UnityEngine::Playables::PlayableAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_parent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::TrackAsset::GetClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetClips",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TimelineClip*>*, false>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> UnityEngine::Timeline::TrackAsset::get_clips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_clips",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_isEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_isEmpty",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_hasClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_hasClips",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_hasCurves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_hasCurves",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_isSubTrack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_isSubTrack",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>* UnityEngine::Timeline::TrackAsset::get_outputs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_outputs",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Playables::PlayableBinding>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>* UnityEngine::Timeline::TrackAsset::GetChildTracks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetChildTracks",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::TrackAsset*>*, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::Timeline::TrackAsset::get_customPlayableTypename() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "get_customPlayableTypename", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_customPlayableTypename(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_customPlayableTypename",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationClip* UnityEngine::Timeline::TrackAsset::get_curves() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_curves",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationClip*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_curves(::UnityEngine::AnimationClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_curves", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_defaultCurvesName() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                               "UnityEngine.Timeline.ICurvesOwner.get_defaultCurvesName", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_asset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "UnityEngine.Timeline.ICurvesOwner.get_asset", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::Object* UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_assetOwner() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "UnityEngine.Timeline.ICurvesOwner.get_assetOwner", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Object*, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::TrackAsset::UnityEngine_Timeline_ICurvesOwner_get_targetTrack() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "UnityEngine.Timeline.ICurvesOwner.get_targetTrack", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TrackAsset*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>* UnityEngine::Timeline::TrackAsset::get_subTracksObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "get_subTracksObjects", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ScriptableObject*>*, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_locked() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "get_locked",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::set_locked(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "set_locked", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Timeline::TrackAsset::get_lockedInHierarchy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "get_lockedInHierarchy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::get_supportsNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "get_supportsNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::__internalAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "__internalAwake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::CreateCurves(::StringW curvesClipName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateCurves", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, curvesClipName);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, int32_t inputCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateTrackMixer", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, inputCount);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreatePlayable", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateDefaultClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateDefaultClip",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method);
}
template <typename T> inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClip() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClip",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clip);
}
inline ::UnityEngine::Timeline::IMarker* UnityEngine::Timeline::TrackAsset::CreateMarker(::System::Type* type, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateMarker", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker*, false>(this, ___internal_method, type, time);
}
template <typename T> inline T UnityEngine::Timeline::TrackAsset::CreateMarker(double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateMarker",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method, time);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteMarker(::UnityEngine::Timeline::IMarker* marker) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteMarker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IMarker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, marker);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>* UnityEngine::Timeline::TrackAsset::GetMarkers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::Timeline::IMarker*>*, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetMarkerCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkerCount",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::IMarker* UnityEngine::Timeline::TrackAsset::GetMarker(int32_t idx) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::IMarker*, false>(this, ___internal_method, idx);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClip(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateAndAddNewClipOfType(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateAndAddNewClipOfType",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipOfType(::System::Type* requestedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipOfType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method, requestedType);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipFromPlayableAsset(::UnityEngine::Playables::IPlayableAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipFromPlayableAsset", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::IPlayableAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method, asset);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateClipFromAsset(::UnityEngine::ScriptableObject* playableAsset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateClipFromAsset", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method, playableAsset);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>* UnityEngine::Timeline::TrackAsset::GetMarkersRaw() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetMarkersRaw",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ScriptableObject*>*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearMarkers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ClearMarkers",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddMarker(::UnityEngine::ScriptableObject* e) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddMarker", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e);
}
inline bool UnityEngine::Timeline::TrackAsset::DeleteMarkerRaw(::UnityEngine::ScriptableObject* marker) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "DeleteMarkerRaw", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, marker);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetTimeRangeHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetTimeRangeHash",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddClip(::UnityEngine::Timeline::TimelineClip* newClip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newClip);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateNotificationsPlayable(::UnityEngine::Playables::PlayableGraph graph,
                                                                                                         ::UnityEngine::Playables::Playable mixerPlayable, ::UnityEngine::GameObject* go,
                                                                                                         ::UnityEngine::Playables::Playable timelinePlayable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateNotificationsPlayable", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, mixerPlayable, go, timelinePlayable);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                 ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree,
                                                                                                 ::UnityEngine::Playables::Playable timelinePlayable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreatePlayableGraph", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, tree, timelinePlayable);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CompileClips(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                          ::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>* timelineClips,
                                                                                          ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CompileClips", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TimelineClip*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, timelineClips, tree);
}
inline void UnityEngine::Timeline::TrackAsset::GatherCompilableTracks(::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>* tracks) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GatherCompilableTracks", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::Timeline::TrackAsset*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tracks);
}
inline void UnityEngine::Timeline::TrackAsset::GatherNotifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>* markers) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GatherNotifications", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::Timeline::IMarker*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markers);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreateMixerPlayableGraph(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go,
                                                                                                      ::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreateMixerPlayableGraph", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, go, tree);
}
inline void UnityEngine::Timeline::TrackAsset::ConfigureTrackAnimation(::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>* tree, ::UnityEngine::GameObject* go,
                                                                       ::UnityEngine::Playables::Playable blend) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ConfigureTrackAnimation", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IntervalTree_1<::UnityEngine::Timeline::RuntimeElement*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tree, go, blend);
}
inline void UnityEngine::Timeline::TrackAsset::SortClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "SortClips",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearClipsInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ClearClipsInternal",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::ClearSubTracksInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "ClearSubTracksInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::OnClipMove() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "OnClipMove",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TimelineClip* UnityEngine::Timeline::TrackAsset::CreateNewClipContainerInternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "CreateNewClipContainerInternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::TimelineClip*, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::AddChild(::UnityEngine::Timeline::TrackAsset* child) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "AddChild", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, child);
}
inline void UnityEngine::Timeline::TrackAsset::MoveLastTrackBefore(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "MoveLastTrackBefore", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline bool UnityEngine::Timeline::TrackAsset::RemoveSubTrack(::UnityEngine::Timeline::TrackAsset* child) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "RemoveSubTrack", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, child);
}
inline void UnityEngine::Timeline::TrackAsset::RemoveClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "RemoveClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::TrackAsset::GetEvaluationTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetEvaluationTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::TrackAsset::GetSequenceTime(ByRef<double_t> outStart, ByRef<double_t> outDuration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetSequenceTime", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<double_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, outStart, outDuration);
}
inline void UnityEngine::Timeline::TrackAsset::GatherProperties(::UnityEngine::Playables::PlayableDirector* director, ::UnityEngine::Timeline::IPropertyCollector* driver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GatherProperties", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::IPropertyCollector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, director, driver);
}
inline ::UnityEngine::GameObject* UnityEngine::Timeline::TrackAsset::GetGameObjectBinding(::UnityEngine::Playables::PlayableDirector* director) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetGameObjectBinding", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableDirector*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GameObject*, false>(this, ___internal_method, director);
}
inline bool UnityEngine::Timeline::TrackAsset::ValidateClipType(::System::Type* clipType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "ValidateClipType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, clipType);
}
inline void UnityEngine::Timeline::TrackAsset::OnCreateClip(::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "OnCreateClip", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, clip);
}
inline void UnityEngine::Timeline::TrackAsset::UpdateDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "UpdateDuration",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::CalculateItemsHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CalculateItemsHash",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Timeline::TrackAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject,
                                                                                            ::UnityEngine::Timeline::TimelineClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CreatePlayable", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable, false>(this, ___internal_method, graph, gameObject, clip);
}
inline void UnityEngine::Timeline::TrackAsset::Invalidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "Invalidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline double_t UnityEngine::Timeline::TrackAsset::GetNotificationDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "GetNotificationDuration", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCompileClips() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CanCompileClips",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCreateTrackMixer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "CanCreateTrackMixer",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::IsCompilable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "IsCompilable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Timeline::TrackAsset::UpdateChildTrackCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "UpdateChildTrackCache", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::Hash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "Hash",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetClipsHash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetClipsHash",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::TrackAsset::GetAnimationClipHash(::UnityEngine::AnimationClip* clip) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "GetAnimationClipHash", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AnimationClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, clip);
}
inline bool UnityEngine::Timeline::TrackAsset::HasNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), "HasNotifications",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCompileNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "CanCompileNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TrackAsset::CanCreateMixerRecursive() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(),
                                                                             "CanCreateMixerRecursive", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Timeline::TrackAsset* UnityEngine::Timeline::TrackAsset::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TrackAsset*>());
}
inline void UnityEngine::Timeline::TrackAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TrackAsset*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TrackAsset::TrackAsset() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
