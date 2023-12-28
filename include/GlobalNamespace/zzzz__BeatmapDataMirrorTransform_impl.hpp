#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataMirrorTransform_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataMirrorTransform_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::*)()>(
    &::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223a28c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0._CreateTransformedData_g__ProcessData_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::*)(::GlobalNamespace::BeatmapDataItem*)>(
        &::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x223a294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*>::get(), "<CreateTransformedData>g__ProcessData|0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::__get_numberOfLines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfLines;
}
constexpr int32_t const& GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::__get_numberOfLines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numberOfLines;
}
constexpr void GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::__set_numberOfLines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numberOfLines = value;
}
inline ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0* GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*>());
}
inline void GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataItem*
GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::_CreateTransformedData_g__ProcessData_0(::GlobalNamespace::BeatmapDataItem* beatmapDataItem) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0*>::get(), "<CreateTransformedData>g__ProcessData|0",
      std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDataItem*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*, false>(this, ___internal_method, beatmapDataItem);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataMirrorTransform____c__DisplayClass0_0::__BeatmapDataMirrorTransform____c__DisplayClass0_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataMirrorTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*)>(
    &::GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x223a0fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataMirrorTransform*>::get(), "CreateTransformedData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData* GlobalNamespace::BeatmapDataMirrorTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataMirrorTransform*>::get(), "CreateTransformedData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataMirrorTransform::BeatmapDataMirrorTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
