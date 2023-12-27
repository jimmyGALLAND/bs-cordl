#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerConnectedPlayerObstacleClippingController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController.SetClippingParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x23d7a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get(), "SetClippingParams", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::*)()>(
    &::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23d7ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>&
GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__get__materialPropertyBlockControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const&
GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__get__materialPropertyBlockControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____materialPropertyBlockControllers;
}
constexpr void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::__set__materialPropertyBlockControllers(
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::setStaticF__clippingPlanePositionID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_clippingPlanePositionID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::getStaticF__clippingPlanePositionID() {
  return ::cordl_internals::getStaticField<int32_t, "_clippingPlanePositionID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get>();
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::setStaticF__clippingPlaneNormalID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_clippingPlaneNormalID",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::getStaticF__clippingPlaneNormalID() {
  return ::cordl_internals::getStaticField<int32_t, "_clippingPlaneNormalID",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get>();
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::SetClippingParams(::UnityEngine::Vector3 position, ::UnityEngine::Vector3 normal) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get(), "SetClippingParams", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position, normal);
}
inline ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController* GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>());
}
inline void GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerConnectedPlayerObstacleClippingController::MultiplayerConnectedPlayerObstacleClippingController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
