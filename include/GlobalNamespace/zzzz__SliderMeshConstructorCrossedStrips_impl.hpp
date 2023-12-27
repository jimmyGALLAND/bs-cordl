#pragma once
#include "GlobalNamespace/zzzz__SliderMeshConstructor_impl.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructorCrossedStrips_def.hpp"
#include "GlobalNamespace/zzzz__VertexPath_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.CreateSliderMeshInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x2394750;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetVertexCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2394b0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips.GetTrianglesCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)(::GlobalNamespace::VertexPath*)>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2394b28;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderMeshConstructorCrossedStrips._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderMeshConstructorCrossedStrips::*)()>(
    &::GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2394b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& GlobalNamespace::SliderMeshConstructorCrossedStrips::__get__triangleMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____triangleMap;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& GlobalNamespace::SliderMeshConstructorCrossedStrips::__get__triangleMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____triangleMap;
}
constexpr void GlobalNamespace::SliderMeshConstructorCrossedStrips::__set__triangleMap(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____triangleMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::CreateSliderMeshInternal(::GlobalNamespace::VertexPath* path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), "CreateSliderMeshInternal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VertexPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetVertexCount(::GlobalNamespace::VertexPath* path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), "GetVertexCount", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VertexPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path);
}
inline int32_t GlobalNamespace::SliderMeshConstructorCrossedStrips::GetTrianglesCount(::GlobalNamespace::VertexPath* path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(), "GetTrianglesCount",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::VertexPath*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, path);
}
inline ::GlobalNamespace::SliderMeshConstructorCrossedStrips* GlobalNamespace::SliderMeshConstructorCrossedStrips::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>());
}
inline void GlobalNamespace::SliderMeshConstructorCrossedStrips::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderMeshConstructorCrossedStrips*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderMeshConstructorCrossedStrips::SliderMeshConstructorCrossedStrips() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
