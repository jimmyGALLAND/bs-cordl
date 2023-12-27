#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_impl.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__EdgeLookup_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__WingedEdge_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Edge_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__ProBuilderMesh_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "UnityEngine/ProBuilder/zzzz__Face_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::*)()>(
    &::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b86304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0._SortCommonIndexesByAdjacency_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::_SortCommonIndexesByAdjacency_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b86bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*>::get(), "<SortCommonIndexesByAdjacency>b__0",
        std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::__get_common() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___common;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<int32_t>*> const& UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::__get_common() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___common;
}
constexpr void UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::__set_common(::System::Collections::Generic::HashSet_1<int32_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___common)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0* UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*>());
}
inline void UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::_SortCommonIndexesByAdjacency_b__0(::UnityEngine::ProBuilder::WingedEdge* x) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0*>::get(), "<SortCommonIndexesByAdjacency>b__0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__WingedEdge____c__DisplayClass32_0::__WingedEdge____c__DisplayClass32_0() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::__WingedEdge____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::__WingedEdge____c::*)()>(&::UnityEngine::ProBuilder::__WingedEdge____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b86cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__WingedEdge____c._SortCommonIndexesByAdjacency_b__32_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Edge (::UnityEngine::ProBuilder::__WingedEdge____c::*)(
    ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::__WingedEdge____c::_SortCommonIndexesByAdjacency_b__32_1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2b86cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), "<SortCommonIndexesByAdjacency>b__32_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::__WingedEdge____c._SortCommonIndexesByAdjacency_b__32_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::__WingedEdge____c::*)(::UnityEngine::ProBuilder::Edge)>(
    &::UnityEngine::ProBuilder::__WingedEdge____c::_SortCommonIndexesByAdjacency_b__32_2)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b86cdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), "<SortCommonIndexesByAdjacency>b__32_2",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::ProBuilder::__WingedEdge____c::setStaticF___9(::UnityEngine::ProBuilder::__WingedEdge____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::ProBuilder::__WingedEdge____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>(
      std::forward<::UnityEngine::ProBuilder::__WingedEdge____c*>(value));
}
inline ::UnityEngine::ProBuilder::__WingedEdge____c* UnityEngine::ProBuilder::__WingedEdge____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::ProBuilder::__WingedEdge____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>();
}
inline void UnityEngine::ProBuilder::__WingedEdge____c::setStaticF___9__32_1(::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__32_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::__WingedEdge____c::getStaticF___9__32_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::Edge>*, "<>9__32_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>();
}
inline void UnityEngine::ProBuilder::__WingedEdge____c::setStaticF___9__32_2(::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>*, "<>9__32_2",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>*>(value));
}
inline ::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>* UnityEngine::ProBuilder::__WingedEdge____c::getStaticF___9__32_2() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::ProBuilder::Edge, int32_t>*, "<>9__32_2",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get>();
}
inline ::UnityEngine::ProBuilder::__WingedEdge____c* UnityEngine::ProBuilder::__WingedEdge____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::__WingedEdge____c*>());
}
inline void UnityEngine::ProBuilder::__WingedEdge____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::ProBuilder::Edge UnityEngine::ProBuilder::__WingedEdge____c::_SortCommonIndexesByAdjacency_b__32_1(::UnityEngine::ProBuilder::WingedEdge* y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), "<SortCommonIndexesByAdjacency>b__32_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Edge, false>(this, ___internal_method, y);
}
inline int32_t UnityEngine::ProBuilder::__WingedEdge____c::_SortCommonIndexesByAdjacency_b__32_2(::UnityEngine::ProBuilder::Edge x) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::__WingedEdge____c*>::get(), "<SortCommonIndexesByAdjacency>b__32_2",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Edge>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::__WingedEdge____c::__WingedEdge____c() {}
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_edge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::EdgeLookup (::UnityEngine::ProBuilder::WingedEdge::*)()>(
    &::UnityEngine::ProBuilder::WingedEdge::get_edge)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2b85134;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_edge",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_edge
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::EdgeLookup)>(
    &::UnityEngine::ProBuilder::WingedEdge::set_edge)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_edge", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_face
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::Face* (::UnityEngine::ProBuilder::WingedEdge::*)()>(
    &::UnityEngine::ProBuilder::WingedEdge::get_face)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_face",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_face
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::WingedEdge::set_face)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_face", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(
    &::UnityEngine::ProBuilder::WingedEdge::get_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85158;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_next",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_next
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge::set_next)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_next", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_previous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(
    &::UnityEngine::ProBuilder::WingedEdge::get_previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_previous",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_previous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge::set_previous)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_previous", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.get_opposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)()>(
    &::UnityEngine::ProBuilder::WingedEdge::get_opposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_opposite",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.set_opposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge::set_opposite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_opposite", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b85188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::WingedEdge::*)(::UnityEngine::ProBuilder::WingedEdge*)>(
    &::UnityEngine::ProBuilder::WingedEdge::Equals)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2b85190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::ProBuilder::WingedEdge::*)(::System::Object*)>(&::UnityEngine::ProBuilder::WingedEdge::Equals)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2b851c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::GetHashCode)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2b8529c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::Count)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x2b852bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "Count",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::ProBuilder::WingedEdge::*)()>(&::UnityEngine::ProBuilder::WingedEdge::ToString)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x2b852f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.MakeQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<int32_t, ::Array<int32_t>*> (*)(::UnityEngine::ProBuilder::WingedEdge*, ::UnityEngine::ProBuilder::WingedEdge*)>(&::UnityEngine::ProBuilder::WingedEdge::MakeQuad)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x2b854bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "MakeQuad", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetAdjacentEdgeWithCommonIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ProBuilder::WingedEdge* (::UnityEngine::ProBuilder::WingedEdge::*)(int32_t)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b85898;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetAdjacentEdgeWithCommonIndex",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortEdgesByAdjacency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* (*)(::UnityEngine::ProBuilder::Face*)>(
    &::UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2b8591c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortEdgesByAdjacency", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortEdgesByAdjacency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*)>(
    &::UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x2b85a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortEdgesByAdjacency", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetSpokes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetSpokes)> {
  constexpr static std::size_t size = 0x430;
  constexpr static std::size_t addrs = 0x2b85bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetSpokes", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.SortCommonIndexesByAdjacency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<int32_t>* (*)(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*,
                                                                     ::System::Collections::Generic::HashSet_1<int32_t>*)>(&::UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x2b86000;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortCommonIndexesByAdjacency", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetWingedEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, bool)>(&::UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b8630c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetWingedEdges", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ProBuilder::WingedEdge.GetWingedEdges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<
    ::UnityEngine::ProBuilder::WingedEdge*>* (*)(::UnityEngine::ProBuilder::ProBuilderMesh*, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*, bool)>(
    &::UnityEngine::ProBuilder::WingedEdge::GetWingedEdges)> {
  constexpr static std::size_t size = 0x744;
  constexpr static std::size_t addrs = 0x2b86404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetWingedEdges", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>"
constexpr UnityEngine::ProBuilder::WingedEdge::operator ::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*() noexcept {
  return static_cast<::System::IEquatable_1<::UnityEngine::ProBuilder::WingedEdge*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup& UnityEngine::ProBuilder::WingedEdge::__get__edge_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____edge_k__BackingField;
}
constexpr ::UnityEngine::ProBuilder::EdgeLookup const& UnityEngine::ProBuilder::WingedEdge::__get__edge_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____edge_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__set__edge_k__BackingField(::UnityEngine::ProBuilder::EdgeLookup value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____edge_k__BackingField = value;
}
constexpr ::UnityEngine::ProBuilder::Face*& UnityEngine::ProBuilder::WingedEdge::__get__face_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____face_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::Face*> const& UnityEngine::ProBuilder::WingedEdge::__get__face_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____face_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__set__face_k__BackingField(::UnityEngine::ProBuilder::Face* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____face_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__get__next_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____next_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& UnityEngine::ProBuilder::WingedEdge::__get__next_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____next_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__set__next_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____next_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__get__previous_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previous_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& UnityEngine::ProBuilder::WingedEdge::__get__previous_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____previous_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__set__previous_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____previous_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::ProBuilder::WingedEdge*& UnityEngine::ProBuilder::WingedEdge::__get__opposite_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____opposite_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ProBuilder::WingedEdge*> const& UnityEngine::ProBuilder::WingedEdge::__get__opposite_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____opposite_k__BackingField;
}
constexpr void UnityEngine::ProBuilder::WingedEdge::__set__opposite_k__BackingField(::UnityEngine::ProBuilder::WingedEdge* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____opposite_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void
UnityEngine::ProBuilder::WingedEdge::setStaticF_k_OppositeEdgeDictionary(::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*, "k_OppositeEdgeDictionary",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*
UnityEngine::ProBuilder::WingedEdge::getStaticF_k_OppositeEdgeDictionary() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::Edge, ::UnityEngine::ProBuilder::WingedEdge*>*, "k_OppositeEdgeDictionary",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get>();
}
inline ::UnityEngine::ProBuilder::EdgeLookup UnityEngine::ProBuilder::WingedEdge::get_edge() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_edge",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::EdgeLookup, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_edge(::UnityEngine::ProBuilder::EdgeLookup value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_edge", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::EdgeLookup>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::Face* UnityEngine::ProBuilder::WingedEdge::get_face() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_face",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::Face*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_face(::UnityEngine::ProBuilder::Face* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_face", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_next() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_next",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_next(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_next", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_previous() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_previous",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_previous(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_previous", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::get_opposite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "get_opposite",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(this, ___internal_method);
}
inline void UnityEngine::ProBuilder::WingedEdge::set_opposite(::UnityEngine::ProBuilder::WingedEdge* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "set_opposite", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::ProBuilder::WingedEdge*>());
}
inline void UnityEngine::ProBuilder::WingedEdge::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::ProBuilder::WingedEdge::Equals(::UnityEngine::ProBuilder::WingedEdge* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool UnityEngine::ProBuilder::WingedEdge::Equals(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "Equals", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t UnityEngine::ProBuilder::WingedEdge::GetHashCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetHashCode",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::ProBuilder::WingedEdge::Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "Count",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::ProBuilder::WingedEdge::ToString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "ToString",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> UnityEngine::ProBuilder::WingedEdge::MakeQuad(::UnityEngine::ProBuilder::WingedEdge* left, ::UnityEngine::ProBuilder::WingedEdge* right) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "MakeQuad", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::WingedEdge*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<int32_t, ::Array<int32_t>*>, false>(nullptr, ___internal_method, left, right);
}
inline ::UnityEngine::ProBuilder::WingedEdge* UnityEngine::ProBuilder::WingedEdge::GetAdjacentEdgeWithCommonIndex(int32_t common) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetAdjacentEdgeWithCommonIndex",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ProBuilder::WingedEdge*, false>(this, ___internal_method, common);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency(::UnityEngine::ProBuilder::Face* face) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortEdgesByAdjacency", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::Face*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*, false>(nullptr, ___internal_method, face);
}
inline void UnityEngine::ProBuilder::WingedEdge::SortEdgesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>* edges) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortEdgesByAdjacency", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::Edge>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, edges);
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*
UnityEngine::ProBuilder::WingedEdge::GetSpokes(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetSpokes", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<int32_t, ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>*, false>(
      nullptr, ___internal_method, wings);
}
inline ::System::Collections::Generic::List_1<int32_t>*
UnityEngine::ProBuilder::WingedEdge::SortCommonIndexesByAdjacency(::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* wings,
                                                                  ::System::Collections::Generic::HashSet_1<int32_t>* common) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "SortCommonIndexesByAdjacency", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int32_t>*, false>(nullptr, ___internal_method, wings, common);
}
/// @param oneWingPerFace: bool (default: false)
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>* UnityEngine::ProBuilder::WingedEdge::GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh,
                                                                                                                                           bool oneWingPerFace) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetWingedEdges", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, false>(nullptr, ___internal_method, mesh, oneWingPerFace);
}
/// @param oneWingPerFace: bool (default: false)
inline ::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*
UnityEngine::ProBuilder::WingedEdge::GetWingedEdges(::UnityEngine::ProBuilder::ProBuilderMesh* mesh, ::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>* faces,
                                                    bool oneWingPerFace) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::ProBuilder::WingedEdge*>::get(), "GetWingedEdges", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ProBuilder::ProBuilderMesh*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityEngine::ProBuilder::Face*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::ProBuilder::WingedEdge*>*, false>(nullptr, ___internal_method, mesh, faces, oneWingPerFace);
}
// Ctor Parameters []
constexpr ::UnityEngine::ProBuilder::WingedEdge::WingedEdge() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
