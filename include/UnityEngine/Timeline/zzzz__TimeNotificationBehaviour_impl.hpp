#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__Playable_impl.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_impl.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimeNotificationBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Playables/zzzz__INotification_def.hpp"
#include "UnityEngine/Timeline/zzzz__NotificationFlags_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameData_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableOutput_def.hpp"
#include "UnityEngine/Playables/zzzz__ScriptPlayable_1_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry.get_triggerInEditor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::*)()>(
    &::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_triggerInEditor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c6e450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                                 "get_triggerInEditor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry.get_prewarm
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::*)()>(
    &::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_prewarm)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c6e444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(), "get_prewarm",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry.get_triggerOnce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::*)()>(
    &::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_triggerOnce)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2c6db80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                                 "get_triggerOnce", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_triggerInEditor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                               "get_triggerInEditor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_prewarm() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(), "get_prewarm",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::get_triggerOnce() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                               "get_triggerOnce", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "payload", ty: "::UnityEngine::Playables::INotification*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "notificationFired", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty: "::UnityEngine::Timeline::NotificationFlags",
// modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::__TimeNotificationBehaviour__NotificationEntry(double_t time, ::UnityEngine::Playables::INotification* payload,
                                                                                                                                  bool notificationFired,
                                                                                                                                  ::UnityEngine::Timeline::NotificationFlags flags) noexcept {
  this->time = time;
  this->payload = payload;
  this->notificationFired = notificationFired;
  this->flags = flags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry::__TimeNotificationBehaviour__NotificationEntry() {}
//  Writing Method size for method: ::UnityEngine::Timeline::__TimeNotificationBehaviour____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::__TimeNotificationBehaviour____c::*)()>(
    &::UnityEngine::Timeline::__TimeNotificationBehaviour____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6e53c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::__TimeNotificationBehaviour____c._SortNotifications_b__12_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::__TimeNotificationBehaviour____c::*)(
    ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry)>(
    &::UnityEngine::Timeline::__TimeNotificationBehaviour____c::_SortNotifications_b__12_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2c6e544;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get(), "<SortNotifications>b__12_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::__TimeNotificationBehaviour____c::setStaticF___9(::UnityEngine::Timeline::__TimeNotificationBehaviour____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get>(
      std::forward<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>(value));
}
inline ::UnityEngine::Timeline::__TimeNotificationBehaviour____c* UnityEngine::Timeline::__TimeNotificationBehaviour____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get>();
}
inline void UnityEngine::Timeline::__TimeNotificationBehaviour____c::setStaticF___9__12_0(::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*, "<>9__12_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* UnityEngine::Timeline::__TimeNotificationBehaviour____c::getStaticF___9__12_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*, "<>9__12_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get>();
}
inline ::UnityEngine::Timeline::__TimeNotificationBehaviour____c* UnityEngine::Timeline::__TimeNotificationBehaviour____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>());
}
inline void UnityEngine::Timeline::__TimeNotificationBehaviour____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::__TimeNotificationBehaviour____c::_SortNotifications_b__12_0(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry x,
                                                                                                   ::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::__TimeNotificationBehaviour____c*>::get(), "<SortNotifications>b__12_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::__TimeNotificationBehaviour____c::__TimeNotificationBehaviour____c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.set_timeSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6d690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "set_timeSource", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*> (*)(
    ::UnityEngine::Playables::PlayableGraph, double_t, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::Create)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2c6d698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Create", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.AddNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    double_t, ::UnityEngine::Playables::INotification*, ::UnityEngine::Timeline::NotificationFlags)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2c6d7b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "AddNotification", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::NotificationFlags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.OnGraphStart
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2c6d8ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.OnBehaviourPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2c6db8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.PrepareFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x2c6ddc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.SortNotifications
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x2c6da70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                                               "SortNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.CanRestoreNotification
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry, ::UnityEngine::Playables::FrameData,
                                                                                           double_t, double_t)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2c6e3e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "CanRestoreNotification", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.TriggerNotificationsInRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(
    double_t, double_t, ::UnityEngine::Playables::FrameData, ::UnityEngine::Playables::Playable, bool)>(&::UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2c6e220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "TriggerNotificationsInRange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.SyncDurationWithExternalSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2c6e11c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "SyncDurationWithExternalSource",
                                   std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Trigger_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::UnityEngine::Playables::Playable, ::UnityEngine::Playables::PlayableOutput, ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>)>(
        &::UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2c6dd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Trigger_internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutput>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour.Restore_internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>)>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2c6e43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Restore_internal", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::TimeNotificationBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::TimeNotificationBehaviour::*)()>(
    &::UnityEngine::Timeline::TimeNotificationBehaviour::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2c6e45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_Notifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Notifications;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>*> const&
UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_Notifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Notifications;
}
constexpr void
UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_Notifications(::System::Collections::Generic::List_1<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Notifications)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr double_t& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_PreviousTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PreviousTime;
}
constexpr double_t const& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_PreviousTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_PreviousTime;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_PreviousTime(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_PreviousTime = value;
}
constexpr bool& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_NeedSortNotifications() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NeedSortNotifications;
}
constexpr bool const& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_NeedSortNotifications() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_NeedSortNotifications;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_NeedSortNotifications(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_NeedSortNotifications = value;
}
constexpr ::UnityEngine::Playables::Playable& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_TimeSource() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TimeSource;
}
constexpr ::UnityEngine::Playables::Playable const& UnityEngine::Timeline::TimeNotificationBehaviour::__get_m_TimeSource() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_TimeSource;
}
constexpr void UnityEngine::Timeline::TimeNotificationBehaviour::__set_m_TimeSource(::UnityEngine::Playables::Playable value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_TimeSource = value;
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::set_timeSource(::UnityEngine::Playables::Playable value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "set_timeSource", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>
UnityEngine::Timeline::TimeNotificationBehaviour::Create(::UnityEngine::Playables::PlayableGraph graph, double_t duration, ::UnityEngine::Playables::DirectorWrapMode loopMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Create", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableGraph>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::ScriptPlayable_1<::UnityEngine::Timeline::TimeNotificationBehaviour*>, false>(nullptr, ___internal_method, graph, duration,
                                                                                                                                                     loopMode);
}
/// @param flags: ::UnityEngine::Timeline::NotificationFlags (default: static_cast<int16_t>(0x2))
inline void UnityEngine::Timeline::TimeNotificationBehaviour::AddNotification(double_t time, ::UnityEngine::Playables::INotification* payload, ::UnityEngine::Timeline::NotificationFlags flags) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "AddNotification", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::INotification*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::NotificationFlags>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, payload, flags);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::OnGraphStart(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "OnGraphStart", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::OnBehaviourPause(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "OnBehaviourPause", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::PrepareFrame(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::FrameData info) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "PrepareFrame", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable, info);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::SortNotifications() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                                             "SortNotifications", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Timeline::TimeNotificationBehaviour::CanRestoreNotification(::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry e,
                                                                                     ::UnityEngine::Playables::FrameData info, double_t currentTime, double_t previousTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "CanRestoreNotification", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, e, info, currentTime, previousTime);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::TriggerNotificationsInRange(double_t start, double_t end, ::UnityEngine::Playables::FrameData info,
                                                                                          ::UnityEngine::Playables::Playable playable, bool checkState) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "TriggerNotificationsInRange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameData>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, start, end, info, playable, checkState);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::SyncDurationWithExternalSource(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "SyncDurationWithExternalSource",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playable);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::Trigger_internal(::UnityEngine::Playables::Playable playable, ::UnityEngine::Playables::PlayableOutput output,
                                                                               ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Trigger_internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::Playable>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableOutput>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, playable, output, e);
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::Restore_internal(ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry> e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(), "Restore_internal", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Timeline::__TimeNotificationBehaviour__NotificationEntry>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, e);
}
inline ::UnityEngine::Timeline::TimeNotificationBehaviour* UnityEngine::Timeline::TimeNotificationBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::Timeline::TimeNotificationBehaviour*>());
}
inline void UnityEngine::Timeline::TimeNotificationBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::TimeNotificationBehaviour*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::TimeNotificationBehaviour::TimeNotificationBehaviour() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
