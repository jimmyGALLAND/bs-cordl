#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_impl.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Bevel_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__FaceRebuildData_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SimpleTuple_2_def.hpp"
#include "UnityEngine/ProBuilder/MeshOperations/zzzz__Bevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Vertex_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__SharedVertex_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba0188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0._BevelEdges_b__7
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_BevelEdges_b__7)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba10a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), "<BevelEdges>b__7",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0._BevelEdges_b__8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::*)(int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_BevelEdges_b__8)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba10e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), "<BevelEdges>b__8",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*&
UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get_ignore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ignore;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>*> const&
UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get_ignore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ignore;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__set_ignore(
    ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Face*, ::System::Collections::Generic::List_1<int32_t>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ignore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*>&
UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get_sharedIndexes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sharedIndexes;
}
constexpr ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> const&
UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get_sharedIndexes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___sharedIndexes;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__set_sharedIndexes(
    ::ArrayW<::UnityEngine::ProBuilder::SharedVertex*, ::Array<::UnityEngine::ProBuilder::SharedVertex*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___sharedIndexes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get___9__7() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__7;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get___9__7() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__7;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__set___9__7(::System::Func_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__7)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Func_2<int32_t, int32_t>*& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get___9__8() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__8;
}
constexpr ::cordl_internals::to_const_pointer<::System::Func_2<int32_t, int32_t>*> const& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__get___9__8() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->_____9__8;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__set___9__8(::System::Func_2<int32_t, int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____9__8)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_BevelEdges_b__7(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), "<BevelEdges>b__7",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::_BevelEdges_b__8(int32_t x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*>::get(), "<BevelEdges>b__8",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0::__Bevel____c__DisplayClass0_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba0190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1._BevelEdges_b__4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::_BevelEdges_b__4)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2ba111c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*>::get(), "<BevelEdges>b__4", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ProBuilder::EdgeLookup& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::__get_lup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lup;
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::__get_lup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lup;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::__set_lup(::UnityEngine::ProBuilder::EdgeLookup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lup = value;
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1* UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::_BevelEdges_b__4(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1*>::get(), "<BevelEdges>b__4", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_1::__Bevel____c__DisplayClass0_1() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba0e1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2._BevelEdges_b__5
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::_BevelEdges_b__5)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x2ba1158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*>::get(), "<BevelEdges>b__5", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__get_c() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___c;
}
constexpr int32_t const& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__get_c() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___c;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__set_c(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___c = value;
}
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*& UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__get_CS$__8__locals1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CS$__8__locals1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0*> const&
UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__get_CS$__8__locals1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___CS$__8__locals1;
}
constexpr void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__set_CS$__8__locals1(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_0* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CS$__8__locals1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2* UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::_BevelEdges_b__5(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2*>::get(), "<BevelEdges>b__5", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c__DisplayClass0_2::__Bevel____c__DisplayClass0_2() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)()>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2ba12bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._BevelEdges_b__0_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_0)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba12c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._BevelEdges_b__0_6
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)(
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>)>(
    &::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_6)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2ba12dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_6", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._BevelEdges_b__0_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba132c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._BevelEdges_b__0_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_2)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba1344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_2", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c._BevelEdges_b__0_3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (
    ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::*)(::UnityEngine::ProBuilder::FaceRebuildData*)>(&::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_3)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2ba135c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_3", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9(::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>(value));
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9__0_0(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9__0_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9__0_6(
    ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*,
                                    "<>9__0_6", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*
UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9__0_6() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>, int32_t>*, "<>9__0_6",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9__0_1(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9__0_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9__0_2(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9__0_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::setStaticF___9__0_3(::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_3",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::getStaticF___9__0_3() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::UnityEngine::ProBuilder::Face*>*, "<>9__0_3",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get>();
}
inline ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>());
}
inline void UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_0(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
inline int32_t UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_6(
    ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*> x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_6", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_1(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_2(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_2", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::MeshOperations::__Bevel____c::_BevelEdges_b__0_3(::UnityEngine::ProBuilder::FaceRebuildData* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::__Bevel____c*>::get(), "<BevelEdges>b__0_3", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::FaceRebuildData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::__Bevel____c::__Bevel____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.BevelEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*,
                                                                                  float_t)>(&::UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges)> {
  constexpr static std::size_t size = 0x2748;
  constexpr static std::size_t addrs = 0x2b9da40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "BevelEdges", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.GetBridgeFaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::
        FaceRebuildData*>* (*)(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*,
                               ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                                         ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces)> {
  constexpr static std::size_t size = 0x8b4;
  constexpr static std::size_t addrs = 0x2ba0568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "GetBridgeFaces", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                          ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.SlideEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*, ::UnityEngine::ProBuilder::WingedEdge*, float_t)>(&::UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2ba0198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "SlideEdge", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::MeshOperations::Bevel.GetLeadingEdge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (*)(::UnityEngine::ProBuilder::WingedEdge*, int32_t)>(
    &::UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2ba0f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "GetLeadingEdge", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::MeshOperations::Bevel::setStaticF_k_BridgeIndexesTri(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_BridgeIndexesTri",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::MeshOperations::Bevel::getStaticF_k_BridgeIndexesTri() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "k_BridgeIndexesTri",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get>();
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*
UnityEngine::ProBuilder::MeshOperations::Bevel::BevelEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>* edges,
                                                           float_t amount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "BevelEdges", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Edge>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Face*>*, false>(nullptr, ___internal_method, mesh, edges, amount);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>* UnityEngine::ProBuilder::MeshOperations::Bevel::GetBridgeFaces(
    ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right,
    ::System::Collections::Generic::Dictionary_2<
        int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*
        holes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "GetBridgeFaces", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
              ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::SimpleTuple_2<
                                                                        ::UnityEngine::ProBuilder::FaceRebuildData*, ::System::Collections::Generic::List_1<int32_t>*>>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::FaceRebuildData*>*, false>(nullptr, ___internal_method, vertices, left, right, holes);
}
inline void UnityEngine::ProBuilder::MeshOperations::Bevel::SlideEdge(::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>* vertices, ::UnityEngine::ProBuilder::WingedEdge* we,
                                                                      float_t amount) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "SlideEdge", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::Vertex*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertices, we, amount);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::MeshOperations::Bevel::GetLeadingEdge(::UnityEngine::ProBuilder::WingedEdge* wing, int32_t common) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::MeshOperations::Bevel*>::get(), "GetLeadingEdge", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(nullptr, ___internal_method, wing, common);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::MeshOperations::Bevel::Bevel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
