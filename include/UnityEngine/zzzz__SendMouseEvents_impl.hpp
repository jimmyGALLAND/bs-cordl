#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_def.hpp"
#include "UnityEngine/zzzz__SendMouseEvents_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::__SendMouseEvents__HitInfo.SendMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::__SendMouseEvents__HitInfo::*)(::StringW)>(
    &::UnityEngine::__SendMouseEvents__HitInfo::SendMessage)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2d0fb04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "SendMessage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__SendMouseEvents__HitInfo.op_Implicit_bool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::__SendMouseEvents__HitInfo)>(&::UnityEngine::__SendMouseEvents__HitInfo::op_Implicit_bool)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2d0fa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::__SendMouseEvents__HitInfo.Compare
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::__SendMouseEvents__HitInfo, ::UnityEngine::__SendMouseEvents__HitInfo)>(
    &::UnityEngine::__SendMouseEvents__HitInfo::Compare)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d0fb28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "Compare", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::__SendMouseEvents__HitInfo::SendMessage(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "SendMessage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, name);
}
inline bool UnityEngine::__SendMouseEvents__HitInfo::op_Implicit_bool(::UnityEngine::__SendMouseEvents__HitInfo exists) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "op_Implicit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, exists);
}
inline bool UnityEngine::__SendMouseEvents__HitInfo::Compare(::UnityEngine::__SendMouseEvents__HitInfo lhs, ::UnityEngine::__SendMouseEvents__HitInfo rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::__SendMouseEvents__HitInfo>::get(), "Compare", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
// Ctor Parameters [CppParam { name: "target", ty: "::UnityEngine::GameObject*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "camera", ty: "::UnityEngine::Camera*", modifiers: "",
// def_value: Some("nullptr") }]
constexpr ::UnityEngine::__SendMouseEvents__HitInfo::__SendMouseEvents__HitInfo(::UnityEngine::GameObject* target, ::UnityEngine::Camera* camera) noexcept {
  this->target = target;
  this->camera = camera;
}
// Ctor Parameters []
constexpr ::UnityEngine::__SendMouseEvents__HitInfo::__SendMouseEvents__HitInfo() {}
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.UpdateMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::UpdateMouse)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x2d0ead8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "UpdateMouse",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SetMouseMoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::SendMouseEvents::SetMouseMoved)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d0ec9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "SetMouseMoved",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.DoSendMouseEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::UnityEngine::SendMouseEvents::DoSendMouseEvents)> {
  constexpr static std::size_t size = 0x94c;
  constexpr static std::size_t addrs = 0x2d0ecf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "DoSendMouseEvents", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::SendMouseEvents.SendEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t, ::UnityEngine::__SendMouseEvents__HitInfo)>(&::UnityEngine::SendMouseEvents::SendEvents)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2d0f644;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "SendEvents", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseUsed(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseUsed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseUsed() {
  return ::cordl_internals::getStaticField<bool, "s_MouseUsed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_LastHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_LastHit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>>(value));
}
inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> UnityEngine::SendMouseEvents::getStaticF_m_LastHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_LastHit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_MouseDownHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_MouseDownHit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>>(value));
}
inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> UnityEngine::SendMouseEvents::getStaticF_m_MouseDownHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_MouseDownHit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_CurrentHit(::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_CurrentHit",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>>(value));
}
inline ::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*> UnityEngine::SendMouseEvents::getStaticF_m_CurrentHit() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::__SendMouseEvents__HitInfo, ::Array<::UnityEngine::__SendMouseEvents__HitInfo>*>, "m_CurrentHit",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_m_Cameras(::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>, "m_Cameras",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>>(value));
}
inline ::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*> UnityEngine::SendMouseEvents::getStaticF_m_Cameras() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Camera*, ::Array<::UnityEngine::Camera*>*>, "m_Cameras",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_GetMouseState(::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*, "s_GetMouseState",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*>(value));
}
inline ::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>* UnityEngine::SendMouseEvents::getStaticF_s_GetMouseState() {
  return ::cordl_internals::getStaticField<::System::Func_1<::System::Collections::Generic::KeyValuePair_2<int32_t, ::UnityEngine::Vector2>>*, "s_GetMouseState",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MousePosition(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "s_MousePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(
      std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 UnityEngine::SendMouseEvents::getStaticF_s_MousePosition() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "s_MousePosition", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseButtonPressedThisFrame(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseButtonPressedThisFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseButtonPressedThisFrame() {
  return ::cordl_internals::getStaticField<bool, "s_MouseButtonPressedThisFrame", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::setStaticF_s_MouseButtonIsPressed(bool value) {
  ::cordl_internals::setStaticField<bool, "s_MouseButtonIsPressed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::SendMouseEvents::getStaticF_s_MouseButtonIsPressed() {
  return ::cordl_internals::getStaticField<bool, "s_MouseButtonIsPressed", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get>();
}
inline void UnityEngine::SendMouseEvents::UpdateMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "UpdateMouse",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::SendMouseEvents::SetMouseMoved() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "SetMouseMoved",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::SendMouseEvents::DoSendMouseEvents(int32_t skipRTCameras) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "DoSendMouseEvents", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, skipRTCameras);
}
inline void UnityEngine::SendMouseEvents::SendEvents(int32_t i, ::UnityEngine::__SendMouseEvents__HitInfo hit) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::SendMouseEvents*>::get(), "SendEvents", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::__SendMouseEvents__HitInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, i, hit);
}
// Ctor Parameters []
constexpr ::UnityEngine::SendMouseEvents::SendMouseEvents() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
