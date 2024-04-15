#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentBrandingManager_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__EnvironmentBrandingManager__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__EnvironmentBrandingManager__InitData::*)(bool)>(
    &::GlobalNamespace::__EnvironmentBrandingManager__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2515d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__EnvironmentBrandingManager__InitData::__cordl_internal_get_hideBranding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr bool const& GlobalNamespace::__EnvironmentBrandingManager__InitData::__cordl_internal_get_hideBranding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hideBranding;
}
constexpr void GlobalNamespace::__EnvironmentBrandingManager__InitData::__cordl_internal_set_hideBranding(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hideBranding = value;
}
inline ::GlobalNamespace::__EnvironmentBrandingManager__InitData* GlobalNamespace::__EnvironmentBrandingManager__InitData::New_ctor(bool hideBranding) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>(hideBranding));
}
inline void GlobalNamespace::__EnvironmentBrandingManager__InitData::_ctor(bool hideBranding) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__EnvironmentBrandingManager__InitData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hideBranding);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__EnvironmentBrandingManager__InitData::__EnvironmentBrandingManager__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::Start)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2515c40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::EnvironmentBrandingManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::EnvironmentBrandingManager::*)()>(&::GlobalNamespace::EnvironmentBrandingManager::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2515d0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__brandingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brandingObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__brandingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____brandingObjects;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__brandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____brandingObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*>&
GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__replacementBrandingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replacementBrandingObjects;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> const&
GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__replacementBrandingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____replacementBrandingObjects;
}
constexpr void
GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__replacementBrandingObjects(::ArrayW<::UnityW<::UnityEngine::GameObject>, ::Array<::UnityW<::UnityEngine::GameObject>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____replacementBrandingObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__EnvironmentBrandingManager__InitData*& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__EnvironmentBrandingManager__InitData*> const& GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::EnvironmentBrandingManager::__cordl_internal_set__initData(::GlobalNamespace::__EnvironmentBrandingManager__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::EnvironmentBrandingManager::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentBrandingManager* GlobalNamespace::EnvironmentBrandingManager::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::EnvironmentBrandingManager*>());
}
inline void GlobalNamespace::EnvironmentBrandingManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::EnvironmentBrandingManager*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::EnvironmentBrandingManager::EnvironmentBrandingManager() {}
