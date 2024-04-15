#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisSpawner_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__INoteDebrisDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteDebris_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)()>(&::GlobalNamespace::NoteDebrisSpawner::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x25c51e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner.SpawnDebris
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)(
    ::GlobalNamespace::__NoteData__GameplayType, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion,
    ::UnityEngine::Vector3, ::GlobalNamespace::ColorType, float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::NoteDebrisSpawner::SpawnDebris)> {
  constexpr static std::size_t size = 0x890;
  constexpr static std::size_t addrs = 0x25c4620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "SpawnDebris", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner.HandleNoteDebrisDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteDebris*)>(
    &::GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x25c53b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "HandleNoteDebrisDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteDebris*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner.SpawnNoteDebris
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)(
    ::GlobalNamespace::__NoteData__GameplayType, ByRef<::GlobalNamespace::NoteDebris*>, ByRef<::GlobalNamespace::NoteDebris*>)>(&::GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x25c52a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "SpawnNoteDebris", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteDebris*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteDebris*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner.DespawnNoteDebris
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)(::GlobalNamespace::NoteDebris*)>(
    &::GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x25c5470;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "DespawnNoteDebris", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteDebris*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteDebrisSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoteDebrisSpawner::*)()>(&::GlobalNamespace::NoteDebrisSpawner::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x25c5514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::INoteDebrisDidFinishEvent"
constexpr GlobalNamespace::NoteDebrisSpawner::operator ::GlobalNamespace::INoteDebrisDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::INoteDebrisDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::INoteDebrisDidFinishEvent"
constexpr ::GlobalNamespace::INoteDebrisDidFinishEvent* GlobalNamespace::NoteDebrisSpawner::i___GlobalNamespace__INoteDebrisDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::INoteDebrisDidFinishEvent*>(static_cast<void*>(this));
}
constexpr float_t& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__rotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr float_t const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__rotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotation;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__rotation(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotation = value;
}
constexpr float_t& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__cutDirMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirMultiplier;
}
constexpr float_t const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__cutDirMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirMultiplier;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__cutDirMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutDirMultiplier = value;
}
constexpr float_t& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__fromCenterSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromCenterSpeed;
}
constexpr float_t const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__fromCenterSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fromCenterSpeed;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__fromCenterSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fromCenterSpeed = value;
}
constexpr float_t& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__moveSpeedMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeedMultiplier;
}
constexpr float_t const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__moveSpeedMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveSpeedMultiplier;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__moveSpeedMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveSpeedMultiplier = value;
}
constexpr ::GlobalNamespace::__NoteDebris__Pool*& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__normalNotesDebrisPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalNotesDebrisPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__normalNotesDebrisPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____normalNotesDebrisPool;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__normalNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____normalNotesDebrisPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NoteDebris__Pool*& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__burstSliderHeadNotesDebrisPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotesDebrisPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__burstSliderHeadNotesDebrisPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderHeadNotesDebrisPool;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__burstSliderHeadNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderHeadNotesDebrisPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__NoteDebris__Pool*& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__burstSliderElementNotesDebrisPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderElementNotesDebrisPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__NoteDebris__Pool*> const& GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__burstSliderElementNotesDebrisPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____burstSliderElementNotesDebrisPool;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__burstSliderElementNotesDebrisPool(::GlobalNamespace::__NoteDebris__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____burstSliderElementNotesDebrisPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*&
GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__poolForNoteGameplayType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolForNoteGameplayType;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__poolForNoteGameplayType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolForNoteGameplayType;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__poolForNoteGameplayType(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::__NoteData__GameplayType, ::GlobalNamespace::__NoteDebris__Pool*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poolForNoteGameplayType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>*&
GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__poolForNoteDebris() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolForNoteDebris;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>*> const&
GlobalNamespace::NoteDebrisSpawner::__cordl_internal_get__poolForNoteDebris() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____poolForNoteDebris;
}
constexpr void GlobalNamespace::NoteDebrisSpawner::__cordl_internal_set__poolForNoteDebris(
    ::System::Collections::Generic::Dictionary_2<::UnityW<::GlobalNamespace::NoteDebris>, ::GlobalNamespace::__NoteDebris__Pool*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____poolForNoteDebris)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::NoteDebrisSpawner::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::NoteDebrisSpawner::SpawnDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ::UnityEngine::Vector3 cutPoint, ::UnityEngine::Vector3 cutNormal,
                                                            float_t saberSpeed, ::UnityEngine::Vector3 saberDir, ::UnityEngine::Vector3 notePos, ::UnityEngine::Quaternion noteRotation,
                                                            ::UnityEngine::Vector3 noteScale, ::GlobalNamespace::ColorType colorType, float_t timeToNextColorNote, ::UnityEngine::Vector3 moveVec) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "SpawnDebris", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ColorType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteGameplayType, cutPoint, cutNormal, saberSpeed, saberDir, notePos, noteRotation, noteScale, colorType,
                                                          timeToNextColorNote, moveVec);
}
inline void GlobalNamespace::NoteDebrisSpawner::HandleNoteDebrisDidFinish(::GlobalNamespace::NoteDebris* noteDebris) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "HandleNoteDebrisDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteDebris*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteDebris);
}
inline void GlobalNamespace::NoteDebrisSpawner::SpawnNoteDebris(::GlobalNamespace::__NoteData__GameplayType noteGameplayType, ByRef<::GlobalNamespace::NoteDebris*> debris0,
                                                                ByRef<::GlobalNamespace::NoteDebris*> debris1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "SpawnNoteDebris", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__NoteData__GameplayType>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteDebris*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::NoteDebris*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteGameplayType, debris0, debris1);
}
inline void GlobalNamespace::NoteDebrisSpawner::DespawnNoteDebris(::GlobalNamespace::NoteDebris* noteDebris) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), "DespawnNoteDebris", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteDebris*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, noteDebris);
}
inline ::GlobalNamespace::NoteDebrisSpawner* GlobalNamespace::NoteDebrisSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoteDebrisSpawner*>());
}
inline void GlobalNamespace::NoteDebrisSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoteDebrisSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteDebrisSpawner::NoteDebrisSpawner() {}
