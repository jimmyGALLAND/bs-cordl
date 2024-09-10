#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelGameplayManager.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelGameplayManager__InitData::*)(bool)>(&::GlobalNamespace::__MissionLevelGameplayManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b0f270;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__MissionLevelGameplayManager__InitData::__cordl_internal_get_failOn0Energy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failOn0Energy;
}
constexpr bool const& GlobalNamespace::__MissionLevelGameplayManager__InitData::__cordl_internal_get_failOn0Energy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___failOn0Energy;
}
constexpr void GlobalNamespace::__MissionLevelGameplayManager__InitData::__cordl_internal_set_failOn0Energy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___failOn0Energy = value;
}
inline ::GlobalNamespace::__MissionLevelGameplayManager__InitData* GlobalNamespace::__MissionLevelGameplayManager__InitData::New_ctor(bool  failOn0Energy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MissionLevelGameplayManager__InitData*>(failOn0Energy));
}
inline void GlobalNamespace::__MissionLevelGameplayManager__InitData::_ctor(bool  failOn0Energy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, failOn0Energy);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__InitData::__MissionLevelGameplayManager__InitData()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState::__MissionLevelGameplayManager__GameState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState::__MissionLevelGameplayManager__GameState()   {
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState  GlobalNamespace::__MissionLevelGameplayManager__GameState::Intro{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState  GlobalNamespace::__MissionLevelGameplayManager__GameState::Playing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState  GlobalNamespace::__MissionLevelGameplayManager__GameState::Paused{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState  GlobalNamespace::__MissionLevelGameplayManager__GameState::Finished{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState  GlobalNamespace::__MissionLevelGameplayManager__GameState::Failed{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)(int32_t)>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b0ebdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)()>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b0f298;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)()>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x3b0f29c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)()>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b0f8c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)()>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b0f8cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::*)()>(&::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b0f904;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager>& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelGameplayManager> const& GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelGameplayManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>(__1__state));
}
inline void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelGameplayManager___Start_d__26::__MissionLevelGameplayManager___Start_d__26()   {
}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelWillStartIntroEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::add_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e68c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelWillStartIntroEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::remove_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e728;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelDidStartEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::add_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e7c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelDidStartEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::remove_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e860;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e8fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0e998;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.add_levelFailedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0ea34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.remove_levelFailedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0ead0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.get_levelEndStateType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::get_levelEndStateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b0eb6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "get_levelEndStateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b0eb74;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b0eb7c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::OnDestroy)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x3b0ec04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleGameEnergyDidReach0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x3b0f148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleGameEnergyDidReach0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleMissionObjectiveCheckersManagerObjectiveDidFail
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b0f1a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleMissionObjectiveCheckersManagerObjectiveDidFail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandleSongDidFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b0f1e0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleSongDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerCanPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b0f214;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerCanPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerDidPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b0f238;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager.HandlePauseControllerDidResume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b0f250;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidResume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelGameplayManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelGameplayManager::*)()>(&::GlobalNamespace::MissionLevelGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b0f268;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr  GlobalNamespace::MissionLevelGameplayManager::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelEndActions"
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::MissionLevelGameplayManager::i___GlobalNamespace__ILevelEndActions() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
constexpr  GlobalNamespace::MissionLevelGameplayManager::operator ::GlobalNamespace::ILevelStartController*() noexcept {
return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelStartController"
constexpr ::GlobalNamespace::ILevelStartController* GlobalNamespace::MissionLevelGameplayManager::i___GlobalNamespace__ILevelStartController() noexcept {
return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__missionObjectiveCheckersManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__missionObjectiveCheckersManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameScenesManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameScenesManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameSongController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameSongController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSongController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameEnergyCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEnergyCounter;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameEnergyCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameEnergyCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__pauseController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__pauseController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseController;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__InitData*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelGameplayManager__InitData*> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__initData(::GlobalNamespace::__MissionLevelGameplayManager__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelWillStartIntroEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelWillStartIntroEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelWillStartIntroEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelWillStartIntroEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelWillStartIntroEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelWillStartIntroEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelDidStartEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidStartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelDidStartEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidStartEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelDidStartEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDidStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelFinishedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFailedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get_levelFailedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFailedEvent;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set_levelFailedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState;
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__gameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__gameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameState = value;
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__prePauseGameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prePauseGameState;
}
constexpr ::GlobalNamespace::__MissionLevelGameplayManager__GameState const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__prePauseGameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prePauseGameState;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__prePauseGameState(::GlobalNamespace::__MissionLevelGameplayManager__GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prePauseGameState = value;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__levelEndStateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelEndStateType;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_get__levelEndStateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelEndStateType;
}
constexpr void GlobalNamespace::MissionLevelGameplayManager::__cordl_internal_set__levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levelEndStateType = value;
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::add_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "add_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::MissionLevelGameplayManager::remove_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "remove_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType GlobalNamespace::MissionLevelGameplayManager::get_levelEndStateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "get_levelEndStateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleGameEnergyDidReach0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleGameEnergyDidReach0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleMissionObjectiveCheckersManagerObjectiveDidFail()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleMissionObjectiveCheckersManagerObjectiveDidFail",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandleSongDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandleSongDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerCanPause(::System::Action_1<bool>*  canPause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerCanPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canPause);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelGameplayManager::HandlePauseControllerDidResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidResume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelGameplayManager* GlobalNamespace::MissionLevelGameplayManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionLevelGameplayManager*>());
}
inline void GlobalNamespace::MissionLevelGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelGameplayManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelGameplayManager::MissionLevelGameplayManager()   {
}
