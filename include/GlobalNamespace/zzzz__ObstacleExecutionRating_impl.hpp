#pragma once
#include "GlobalNamespace/zzzz__BeatmapObjectExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_impl.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleExecutionRating_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating::__ObstacleExecutionRating__Rating(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating::__ObstacleExecutionRating__Rating() {}
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating GlobalNamespace::__ObstacleExecutionRating__Rating::OK{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating GlobalNamespace::__ObstacleExecutionRating__Rating::NotGood{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating.get_rating
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::__ObstacleExecutionRating__Rating (::GlobalNamespace::ObstacleExecutionRating::*)()>(
    &::GlobalNamespace::ObstacleExecutionRating::get_rating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2364698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(), "get_rating",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ObstacleExecutionRating._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ObstacleExecutionRating::*)(float_t, ::GlobalNamespace::__ObstacleExecutionRating__Rating)>(
    &::GlobalNamespace::ObstacleExecutionRating::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x23646a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleExecutionRating__Rating>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating& GlobalNamespace::ObstacleExecutionRating::__get__rating_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rating_k__BackingField;
}
constexpr ::GlobalNamespace::__ObstacleExecutionRating__Rating const& GlobalNamespace::ObstacleExecutionRating::__get__rating_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____rating_k__BackingField;
}
constexpr void GlobalNamespace::ObstacleExecutionRating::__set__rating_k__BackingField(::GlobalNamespace::__ObstacleExecutionRating__Rating value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____rating_k__BackingField = value;
}
inline ::GlobalNamespace::__ObstacleExecutionRating__Rating GlobalNamespace::ObstacleExecutionRating::get_rating() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(), "get_rating",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::__ObstacleExecutionRating__Rating, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ObstacleExecutionRating* GlobalNamespace::ObstacleExecutionRating::New_ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ObstacleExecutionRating*>(time, rating));
}
inline void GlobalNamespace::ObstacleExecutionRating::_ctor(float_t time, ::GlobalNamespace::__ObstacleExecutionRating__Rating rating) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ObstacleExecutionRating*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__ObstacleExecutionRating__Rating>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, time, rating);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ObstacleExecutionRating::ObstacleExecutionRating() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
