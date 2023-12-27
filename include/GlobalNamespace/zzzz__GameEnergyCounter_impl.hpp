#pragma once
#include "GlobalNamespace/zzzz__GameplayModifiers_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__SaberClashChecker_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "GlobalNamespace/zzzz__IGameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerHeadAndObstacleInteraction_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__NoteController_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutInfo_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__GameEnergyCounter__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__GameEnergyCounter__InitData::*)(
    ::GlobalNamespace::__GameplayModifiers__EnergyType, bool, bool, bool)>(&::GlobalNamespace::__GameEnergyCounter__InitData::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x225fc20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameEnergyCounter__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& GlobalNamespace::__GameEnergyCounter__InitData::__get_energyType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___energyType;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& GlobalNamespace::__GameEnergyCounter__InitData::__get_energyType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___energyType;
}
constexpr void GlobalNamespace::__GameEnergyCounter__InitData::__set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___energyType = value;
}
constexpr bool& GlobalNamespace::__GameEnergyCounter__InitData::__get_noFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noFail;
}
constexpr bool const& GlobalNamespace::__GameEnergyCounter__InitData::__get_noFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___noFail;
}
constexpr void GlobalNamespace::__GameEnergyCounter__InitData::__set_noFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___noFail = value;
}
constexpr bool& GlobalNamespace::__GameEnergyCounter__InitData::__get_instaFail() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___instaFail;
}
constexpr bool const& GlobalNamespace::__GameEnergyCounter__InitData::__get_instaFail() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___instaFail;
}
constexpr void GlobalNamespace::__GameEnergyCounter__InitData::__set_instaFail(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___instaFail = value;
}
constexpr bool& GlobalNamespace::__GameEnergyCounter__InitData::__get_failOnSaberClash() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___failOnSaberClash;
}
constexpr bool const& GlobalNamespace::__GameEnergyCounter__InitData::__get_failOnSaberClash() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___failOnSaberClash;
}
constexpr void GlobalNamespace::__GameEnergyCounter__InitData::__set_failOnSaberClash(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___failOnSaberClash = value;
}
inline ::GlobalNamespace::__GameEnergyCounter__InitData* GlobalNamespace::__GameEnergyCounter__InitData::New_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFail,
                                                                                                                  bool instaFail, bool failOnSaberClash) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__GameEnergyCounter__InitData*>(energyType, noFail, instaFail, failOnSaberClash));
}
inline void GlobalNamespace::__GameEnergyCounter__InitData::_ctor(::GlobalNamespace::__GameplayModifiers__EnergyType energyType, bool noFail, bool instaFail, bool failOnSaberClash) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__GameEnergyCounter__InitData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, energyType, noFail, instaFail, failOnSaberClash);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__GameEnergyCounter__InitData::__GameEnergyCounter__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.add_didInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(
    &::GlobalNamespace::GameEnergyCounter::add_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225efc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_didInitEvent", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.remove_didInitEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(
    &::GlobalNamespace::GameEnergyCounter::remove_didInitEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_didInitEvent",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.add_gameEnergyDidReach0Event
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(
    &::GlobalNamespace::GameEnergyCounter::add_gameEnergyDidReach0Event)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_gameEnergyDidReach0Event",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.remove_gameEnergyDidReach0Event
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action*)>(
    &::GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidReach0Event)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x225f194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_gameEnergyDidReach0Event",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.add_gameEnergyDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::GameEnergyCounter::add_gameEnergyDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x225f230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.remove_gameEnergyDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidChangeEvent)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x225f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_gameEnergyDidChangeEvent",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_isInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_isInitialized)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(),
                                                                               "get_isInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_energy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_energy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_energy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.set_energy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(float_t)>(&::GlobalNamespace::GameEnergyCounter::set_energy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_energy", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_batteryEnergy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_batteryEnergy)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x225f3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(),
                                                                               "get_batteryEnergy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_batteryLives
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_batteryLives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_batteryLives",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_energyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__GameplayModifiers__EnergyType (::GlobalNamespace::GameEnergyCounter::*)()>(
    &::GlobalNamespace::GameEnergyCounter::get_energyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f430;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_energyType",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.set_energyType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::__GameplayModifiers__EnergyType)>(
    &::GlobalNamespace::GameEnergyCounter::set_energyType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_energyType", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_noFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_noFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_noFail",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.set_noFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(bool)>(&::GlobalNamespace::GameEnergyCounter::set_noFail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x225f448;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_noFail", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_instaFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_instaFail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_instaFail",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.set_instaFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(bool)>(&::GlobalNamespace::GameEnergyCounter::set_instaFail)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x225f45c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_instaFail", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.get_failOnSaberClash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::get_failOnSaberClash)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x225f468;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(),
                                                                               "get_failOnSaberClash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.set_failOnSaberClash
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(bool)>(&::GlobalNamespace::GameEnergyCounter::set_failOnSaberClash)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x225f470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_failOnSaberClash",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::Start)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x225f47c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::OnDestroy)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x225f610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "OnDestroy",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::LateUpdate)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x225f714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "LateUpdate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.HandleNoteWasCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::NoteController*, ByRef<::GlobalNamespace::NoteCutInfo>)>(&::GlobalNamespace::GameEnergyCounter::HandleNoteWasCut)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x225fac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.HandleNoteWasMissed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(::GlobalNamespace::NoteController*)>(
    &::GlobalNamespace::GameEnergyCounter::HandleNoteWasMissed)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x225fba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "HandleNoteWasMissed", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter.ProcessEnergyChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)(float_t)>(
    &::GlobalNamespace::GameEnergyCounter::ProcessEnergyChange)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x225f86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "ProcessEnergyChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameEnergyCounter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameEnergyCounter::*)()>(&::GlobalNamespace::GameEnergyCounter::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x225fc08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IGameEnergyCounter"
constexpr GlobalNamespace::GameEnergyCounter::operator ::GlobalNamespace::IGameEnergyCounter*() noexcept {
  return static_cast<::GlobalNamespace::IGameEnergyCounter*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::GameEnergyCounter::__get__batteryLives() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____batteryLives;
}
constexpr int32_t const& GlobalNamespace::GameEnergyCounter::__get__batteryLives() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____batteryLives;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__batteryLives(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____batteryLives = value;
}
constexpr ::GlobalNamespace::__GameEnergyCounter__InitData*& GlobalNamespace::GameEnergyCounter::__get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__GameEnergyCounter__InitData*> const& GlobalNamespace::GameEnergyCounter::__get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__initData(::GlobalNamespace::__GameEnergyCounter__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::SaberClashChecker*& GlobalNamespace::GameEnergyCounter::__get__saberClashChecker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberClashChecker;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberClashChecker*> const& GlobalNamespace::GameEnergyCounter::__get__saberClashChecker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____saberClashChecker;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__saberClashChecker(::GlobalNamespace::SaberClashChecker* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____saberClashChecker)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::GameEnergyCounter::__get__beatmapObjectManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::GameEnergyCounter::__get__beatmapObjectManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::PlayerHeadAndObstacleInteraction*& GlobalNamespace::GameEnergyCounter::__get__playerHeadAndObstacleInteraction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PlayerHeadAndObstacleInteraction*> const& GlobalNamespace::GameEnergyCounter::__get__playerHeadAndObstacleInteraction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____playerHeadAndObstacleInteraction;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__playerHeadAndObstacleInteraction(::GlobalNamespace::PlayerHeadAndObstacleInteraction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerHeadAndObstacleInteraction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameEnergyCounter::__get_didInitEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didInitEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameEnergyCounter::__get_didInitEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___didInitEvent;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set_didInitEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___didInitEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameEnergyCounter::__get_gameEnergyDidReach0Event() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameEnergyDidReach0Event;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::GameEnergyCounter::__get_gameEnergyDidReach0Event() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameEnergyDidReach0Event;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set_gameEnergyDidReach0Event(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameEnergyDidReach0Event)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::GameEnergyCounter::__get_gameEnergyDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameEnergyDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<float_t>*> const& GlobalNamespace::GameEnergyCounter::__get_gameEnergyDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___gameEnergyDidChangeEvent;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___gameEnergyDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::GameEnergyCounter::__get__energy_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____energy_k__BackingField;
}
constexpr float_t const& GlobalNamespace::GameEnergyCounter::__get__energy_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____energy_k__BackingField;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__energy_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____energy_k__BackingField = value;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType& GlobalNamespace::GameEnergyCounter::__get__energyType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____energyType_k__BackingField;
}
constexpr ::GlobalNamespace::__GameplayModifiers__EnergyType const& GlobalNamespace::GameEnergyCounter::__get__energyType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____energyType_k__BackingField;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__energyType_k__BackingField(::GlobalNamespace::__GameplayModifiers__EnergyType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____energyType_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEnergyCounter::__get__noFail_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noFail_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEnergyCounter::__get__noFail_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____noFail_k__BackingField;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__noFail_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____noFail_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEnergyCounter::__get__instaFail_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____instaFail_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEnergyCounter::__get__instaFail_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____instaFail_k__BackingField;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__instaFail_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____instaFail_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEnergyCounter::__get__failOnSaberClash_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failOnSaberClash_k__BackingField;
}
constexpr bool const& GlobalNamespace::GameEnergyCounter::__get__failOnSaberClash_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____failOnSaberClash_k__BackingField;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__failOnSaberClash_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____failOnSaberClash_k__BackingField = value;
}
constexpr bool& GlobalNamespace::GameEnergyCounter::__get__isInitialized() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isInitialized;
}
constexpr bool const& GlobalNamespace::GameEnergyCounter::__get__isInitialized() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____isInitialized;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__isInitialized(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____isInitialized = value;
}
constexpr bool& GlobalNamespace::GameEnergyCounter::__get__didReach0Energy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didReach0Energy;
}
constexpr bool const& GlobalNamespace::GameEnergyCounter::__get__didReach0Energy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____didReach0Energy;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__didReach0Energy(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____didReach0Energy = value;
}
constexpr float_t& GlobalNamespace::GameEnergyCounter::__get__nextFrameEnergyChange() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextFrameEnergyChange;
}
constexpr float_t const& GlobalNamespace::GameEnergyCounter::__get__nextFrameEnergyChange() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____nextFrameEnergyChange;
}
constexpr void GlobalNamespace::GameEnergyCounter::__set__nextFrameEnergyChange(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____nextFrameEnergyChange = value;
}
inline void GlobalNamespace::GameEnergyCounter::add_didInitEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_didInitEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::remove_didInitEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_didInitEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::add_gameEnergyDidReach0Event(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_gameEnergyDidReach0Event",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidReach0Event(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_gameEnergyDidReach0Event",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::add_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "add_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::remove_gameEnergyDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "remove_gameEnergyDidChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<float_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEnergyCounter::get_isInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_isInitialized",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::GameEnergyCounter::get_energy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_energy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::set_energy(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_energy", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::GameEnergyCounter::get_batteryEnergy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_batteryEnergy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::GameEnergyCounter::get_batteryLives() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_batteryLives",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::__GameplayModifiers__EnergyType GlobalNamespace::GameEnergyCounter::get_energyType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_energyType",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__GameplayModifiers__EnergyType, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::set_energyType(::GlobalNamespace::__GameplayModifiers__EnergyType value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_energyType", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__GameplayModifiers__EnergyType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEnergyCounter::get_noFail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_noFail",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::set_noFail(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_noFail", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEnergyCounter::get_instaFail() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "get_instaFail",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::set_instaFail(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_instaFail", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::GameEnergyCounter::get_failOnSaberClash() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(),
                                                                             "get_failOnSaberClash", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::set_failOnSaberClash(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "set_failOnSaberClash",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameEnergyCounter::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "OnDestroy",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "LateUpdate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameEnergyCounter::HandleNoteWasCut(::GlobalNamespace::NoteController* noteController, ByRef<::GlobalNamespace::NoteCutInfo> noteCutInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "HandleNoteWasCut", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteCutInfo>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController, noteCutInfo);
}
inline void GlobalNamespace::GameEnergyCounter::HandleNoteWasMissed(::GlobalNamespace::NoteController* noteController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "HandleNoteWasMissed", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteController);
}
inline void GlobalNamespace::GameEnergyCounter::ProcessEnergyChange(float_t energyChange) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), "ProcessEnergyChange", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, energyChange);
}
inline ::GlobalNamespace::GameEnergyCounter* GlobalNamespace::GameEnergyCounter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::GameEnergyCounter*>());
}
inline void GlobalNamespace::GameEnergyCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameEnergyCounter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameEnergyCounter::GameEnergyCounter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
