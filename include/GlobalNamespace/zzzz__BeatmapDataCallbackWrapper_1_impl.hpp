#pragma once
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_1_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallback_1_def.hpp"
template <typename T> constexpr ::GlobalNamespace::BeatmapDataCallback_1<T>*& GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__get__callback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapDataCallback_1<T>*> const& GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__get__callback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____callback;
}
template <typename T> constexpr void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::__set__callback(::GlobalNamespace::BeatmapDataCallback_1<T>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____callback)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T>
inline ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>* GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::New_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime,
                                                                                                                      ::ArrayW<int32_t, ::Array<int32_t>*> beatmapEventSubtypeIdentifiers) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>(callback, aheadTime, beatmapEventSubtypeIdentifiers));
}
template <typename T>
inline void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::_ctor(::GlobalNamespace::BeatmapDataCallback_1<T>* callback, float_t aheadTime,
                                                                    ::ArrayW<int32_t, ::Array<int32_t>*> beatmapEventSubtypeIdentifiers) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataCallback_1<T>*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, callback, aheadTime, beatmapEventSubtypeIdentifiers);
}
template <typename T> inline void GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::CallCallback(::GlobalNamespace::BeatmapDataItem* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>*>::get(), "CallCallback", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beatmapData);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper_1<T>::BeatmapDataCallbackWrapper_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
