#pragma once
// IWYU pragma private; include "GlobalNamespace/StandardLevelGameplayManager.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelGameplayManager_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelGameplayManager_def.hpp"
#include "GlobalNamespace/zzzz__GameEnergyCounter_def.hpp"
#include "GlobalNamespace/zzzz__GameScenesManager_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__ILevelStartController_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PauseController_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelGameplayManager_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager__InitData::*)(bool)>(&::GlobalNamespace::__StandardLevelGameplayManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b10580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__StandardLevelGameplayManager__InitData::__cordl_internal_get_continueGameplayWith0Energy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueGameplayWith0Energy;
}
constexpr bool const& GlobalNamespace::__StandardLevelGameplayManager__InitData::__cordl_internal_get_continueGameplayWith0Energy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___continueGameplayWith0Energy;
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager__InitData::__cordl_internal_set_continueGameplayWith0Energy(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___continueGameplayWith0Energy = value;
}
inline ::GlobalNamespace::__StandardLevelGameplayManager__InitData* GlobalNamespace::__StandardLevelGameplayManager__InitData::New_ctor(bool  continueGameplayWith0Energy)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>(continueGameplayWith0Energy));
}
inline void GlobalNamespace::__StandardLevelGameplayManager__InitData::_ctor(bool  continueGameplayWith0Energy)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, continueGameplayWith0Energy);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__InitData::__StandardLevelGameplayManager__InitData()   {
}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState::__StandardLevelGameplayManager__GameState(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState::__StandardLevelGameplayManager__GameState()   {
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Intro{static_cast<int32_t>(0x0)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Playing{static_cast<int32_t>(0x1)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Paused{static_cast<int32_t>(0x2)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Finished{static_cast<int32_t>(0x3)};
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState  GlobalNamespace::__StandardLevelGameplayManager__GameState::Failed{static_cast<int32_t>(0x4)};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)(int32_t)>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b100d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b105a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x3b105ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1090c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b10914;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::*)()>(&::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1094c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelGameplayManager>& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::StandardLevelGameplayManager> const& GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::StandardLevelGameplayManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>(__1__state));
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__StandardLevelGameplayManager___Start_d__25::__StandardLevelGameplayManager___Start_d__25()   {
}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelWillStartIntroEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fb84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelWillStartIntroEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelWillStartIntroEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fc20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelDidStartEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fcbc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelDidStartEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelDidStartEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fd58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fdf4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelFinishedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0fe90;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.add_levelFailedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0ff2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.remove_levelFailedEvent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action*)>(&::GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3b0ffc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.get_levelEndStateType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::get_levelEndStateType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b10064;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "get_levelEndStateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Awake
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Awake)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1006c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Start)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b10074;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::OnDestroy)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x3b100fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.Update
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::Update)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b10350;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandleGameEnergyDidReach0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3b10494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandleGameEnergyDidReach0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandleSongDidFinish
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3b104ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandleSongDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerCanPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)(::System::Action_1<bool>*)>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3b10520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerCanPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerDidPause
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3b10544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager.HandlePauseControllerDidResume
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3b10560;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidResume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelGameplayManager._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::StandardLevelGameplayManager::*)()>(&::GlobalNamespace::StandardLevelGameplayManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b10578;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::ILevelEndActions"
constexpr  GlobalNamespace::StandardLevelGameplayManager::operator ::GlobalNamespace::ILevelEndActions*() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelEndActions"
constexpr ::GlobalNamespace::ILevelEndActions* GlobalNamespace::StandardLevelGameplayManager::i___GlobalNamespace__ILevelEndActions() noexcept {
return static_cast<::GlobalNamespace::ILevelEndActions*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILevelStartController"
constexpr  GlobalNamespace::StandardLevelGameplayManager::operator ::GlobalNamespace::ILevelStartController*() noexcept {
return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILevelStartController"
constexpr ::GlobalNamespace::ILevelStartController* GlobalNamespace::StandardLevelGameplayManager::i___GlobalNamespace__ILevelStartController() noexcept {
return static_cast<::GlobalNamespace::ILevelStartController*>(static_cast<void*>(this));
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager>& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameScenesManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr ::UnityW<::GlobalNamespace::GameScenesManager> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameScenesManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameScenesManager;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__gameScenesManager(::UnityW<::GlobalNamespace::GameScenesManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameScenesManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameSongController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameSongController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSongController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter>& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameEnergyCounter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEnergyCounter;
}
constexpr ::UnityW<::GlobalNamespace::GameEnergyCounter> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameEnergyCounter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameEnergyCounter;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__gameEnergyCounter(::UnityW<::GlobalNamespace::GameEnergyCounter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameEnergyCounter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PauseController>& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__pauseController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseController;
}
constexpr ::UnityW<::GlobalNamespace::PauseController> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__pauseController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pauseController;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__pauseController(::UnityW<::GlobalNamespace::PauseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pauseController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__InitData*& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__StandardLevelGameplayManager__InitData*> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__initData(::GlobalNamespace::__StandardLevelGameplayManager__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelWillStartIntroEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelWillStartIntroEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelWillStartIntroEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelWillStartIntroEvent;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set_levelWillStartIntroEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelWillStartIntroEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelDidStartEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidStartEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelDidStartEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelDidStartEvent;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set_levelDidStartEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelDidStartEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelFinishedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelFinishedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFinishedEvent;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set_levelFinishedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFinishedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelFailedEvent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFailedEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get_levelFailedEvent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___levelFailedEvent;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set_levelFailedEvent(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelFailedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState;
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__gameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameState;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__gameState(::GlobalNamespace::__StandardLevelGameplayManager__GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gameState = value;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__levelEndStateType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelEndStateType;
}
constexpr ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__levelEndStateType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelEndStateType;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__levelEndStateType(::GlobalNamespace::__LevelCompletionResults__LevelEndStateType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____levelEndStateType = value;
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__prePauseGameState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prePauseGameState;
}
constexpr ::GlobalNamespace::__StandardLevelGameplayManager__GameState const& GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_get__prePauseGameState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prePauseGameState;
}
constexpr void GlobalNamespace::StandardLevelGameplayManager::__cordl_internal_set__prePauseGameState(::GlobalNamespace::__StandardLevelGameplayManager__GameState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prePauseGameState = value;
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelWillStartIntroEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelWillStartIntroEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelDidStartEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelDidStartEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelFinishedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelFinishedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::add_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "add_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelGameplayManager::remove_levelFailedEvent(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "remove_levelFailedEvent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::__LevelCompletionResults__LevelEndStateType GlobalNamespace::StandardLevelGameplayManager::get_levelEndStateType()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "get_levelEndStateType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__LevelCompletionResults__LevelEndStateType, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::Awake()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Awake",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::StandardLevelGameplayManager::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "Update",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandleGameEnergyDidReach0()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandleGameEnergyDidReach0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandleSongDidFinish()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandleSongDidFinish",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerCanPause(::System::Action_1<bool>*  canPause)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerCanPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<bool>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, canPause);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidPause()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidPause",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelGameplayManager::HandlePauseControllerDidResume()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        "HandlePauseControllerDidResume",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelGameplayManager* GlobalNamespace::StandardLevelGameplayManager::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::StandardLevelGameplayManager*>());
}
inline void GlobalNamespace::StandardLevelGameplayManager::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandardLevelGameplayManager*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelGameplayManager::StandardLevelGameplayManager()   {
}
