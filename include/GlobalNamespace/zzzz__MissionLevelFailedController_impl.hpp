#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionLevelFailedController.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MissionLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectManager_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameSongController_def.hpp"
#include "GlobalNamespace/zzzz__ILevelEndActions_def.hpp"
#include "GlobalNamespace/zzzz__LevelFailedTextEffect_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelFailedController_def.hpp"
#include "GlobalNamespace/zzzz__MissionLevelScenesTransitionSetupDataSO_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveCheckersManager_def.hpp"
#include "GlobalNamespace/zzzz__PrepareLevelCompletionResults_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController__InitData._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelFailedController__InitData::*)(bool)>(&::GlobalNamespace::__MissionLevelFailedController__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b1ac1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__MissionLevelFailedController__InitData::__cordl_internal_get_autoRestart()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRestart;
}
constexpr bool const& GlobalNamespace::__MissionLevelFailedController__InitData::__cordl_internal_get_autoRestart() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoRestart;
}
constexpr void GlobalNamespace::__MissionLevelFailedController__InitData::__cordl_internal_set_autoRestart(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoRestart = value;
}
inline ::GlobalNamespace::__MissionLevelFailedController__InitData* GlobalNamespace::__MissionLevelFailedController__InitData::New_ctor(bool  autoRestart)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MissionLevelFailedController__InitData*>(autoRestart));
}
inline void GlobalNamespace::__MissionLevelFailedController__InitData::_ctor(bool  autoRestart)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController__InitData*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, autoRestart);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelFailedController__InitData::__MissionLevelFailedController__InitData()   {
}
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)(int32_t)>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3b1abec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3b1ac44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13.MoveNext
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::MoveNext)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x3b1ac48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1af48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x3b1af50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::*)()>(&::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1af88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController>& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelFailedController> const& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::MissionLevelFailedController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MissionCompletionResults*& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get__missionCompletionResults_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionCompletionResults_5__2;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MissionCompletionResults*> const& GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_get__missionCompletionResults_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionCompletionResults_5__2;
}
constexpr void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__cordl_internal_set__missionCompletionResults_5__2(::GlobalNamespace::MissionCompletionResults*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionCompletionResults_5__2)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>(__1__state));
}
inline void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.IDisposable.Dispose",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "MoveNext",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.Generic.IEnumerator<System.Object>.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.IEnumerator.Reset",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13*>::get(),
                        "System.Collections.IEnumerator.get_Current",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__MissionLevelFailedController___LevelFailedCoroutine_d__13::__MissionLevelFailedController___LevelFailedCoroutine_d__13()   {
}
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.Start
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::Start)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3b1a978;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.OnDestroy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::OnDestroy)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3b1aa6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.HandleLevelFailed
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::HandleLevelFailed)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3b1ab6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "HandleLevelFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController.LevelFailedCoroutine
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3b1ab8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "LevelFailedCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionLevelFailedController._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MissionLevelFailedController::*)()>(&::GlobalNamespace::MissionLevelFailedController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b1ac14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__levelFailedTextEffect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelFailedTextEffect;
}
constexpr ::UnityW<::GlobalNamespace::LevelFailedTextEffect> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__levelFailedTextEffect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____levelFailedTextEffect;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__levelFailedTextEffect(::UnityW<::GlobalNamespace::LevelFailedTextEffect>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____levelFailedTextEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionLevelSceneSetupData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionLevelSceneSetupData;
}
constexpr ::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionLevelSceneSetupData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionLevelSceneSetupData;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__missionLevelSceneSetupData(::UnityW<::GlobalNamespace::MissionLevelScenesTransitionSetupDataSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionLevelSceneSetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__prepareLevelCompletionResults()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prepareLevelCompletionResults;
}
constexpr ::UnityW<::GlobalNamespace::PrepareLevelCompletionResults> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__prepareLevelCompletionResults() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prepareLevelCompletionResults;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__prepareLevelCompletionResults(::UnityW<::GlobalNamespace::PrepareLevelCompletionResults>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____prepareLevelCompletionResults)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionObjectiveCheckersManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionObjectiveCheckersManager;
}
constexpr ::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__missionObjectiveCheckersManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____missionObjectiveCheckersManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__missionObjectiveCheckersManager(::UnityW<::GlobalNamespace::MissionObjectiveCheckersManager>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____missionObjectiveCheckersManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__MissionLevelFailedController__InitData*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__initData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__MissionLevelFailedController__InitData*> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__initData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initData;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__initData(::GlobalNamespace::__MissionLevelFailedController__InitData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectSpawnController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectSpawnController;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapObjectSpawnController> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectSpawnController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectSpawnController;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__beatmapObjectSpawnController(::UnityW<::GlobalNamespace::BeatmapObjectSpawnController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectSpawnController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::GameSongController>& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameSongController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr ::UnityW<::GlobalNamespace::GameSongController> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameSongController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameSongController;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__gameSongController(::UnityW<::GlobalNamespace::GameSongController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameSongController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::ILevelEndActions*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameplayManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplayManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ILevelEndActions*> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__gameplayManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gameplayManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__gameplayManager(::GlobalNamespace::ILevelEndActions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapObjectManager*& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectManager()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapObjectManager*> const& GlobalNamespace::MissionLevelFailedController::__cordl_internal_get__beatmapObjectManager() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____beatmapObjectManager;
}
constexpr void GlobalNamespace::MissionLevelFailedController::__cordl_internal_set__beatmapObjectManager(::GlobalNamespace::BeatmapObjectManager*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapObjectManager)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MissionLevelFailedController::Start()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "Start",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "OnDestroy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MissionLevelFailedController::HandleLevelFailed()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "HandleLevelFailed",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::MissionLevelFailedController::LevelFailedCoroutine()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        "LevelFailedCoroutine",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MissionLevelFailedController* GlobalNamespace::MissionLevelFailedController::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MissionLevelFailedController*>());
}
inline void GlobalNamespace::MissionLevelFailedController::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MissionLevelFailedController*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionLevelFailedController::MissionLevelFailedController()   {
}
