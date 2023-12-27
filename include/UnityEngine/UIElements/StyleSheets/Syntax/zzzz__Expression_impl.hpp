#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__DataType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionCombinator_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionMultiplier_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionType_impl.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__Expression_def.hpp"
#include "UnityEngine/UIElements/StyleSheets/Syntax/zzzz__ExpressionType_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::StyleSheets::Syntax::Expression._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::StyleSheets::Syntax::Expression::*)(
    ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType)>(&::UnityEngine::UIElements::StyleSheets::Syntax::Expression::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2df7bc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType const& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___type;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_type(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___type = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiplier;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier const& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___multiplier;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_multiplier(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionMultiplier value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___multiplier = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_dataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dataType;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::DataType const& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_dataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___dataType;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_dataType(::UnityEngine::UIElements::StyleSheets::Syntax::DataType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___dataType = value;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_combinator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___combinator;
}
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator const& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_combinator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___combinator;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_combinator(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionCombinator value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___combinator = value;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*>&
UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_subExpressions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subExpressions;
}
constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> const&
UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_subExpressions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___subExpressions;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_subExpressions(
    ::ArrayW<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*, ::Array<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___subExpressions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_keyword() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyword;
}
constexpr ::StringW const& UnityEngine::UIElements::StyleSheets::Syntax::Expression::__get_keyword() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___keyword;
}
constexpr void UnityEngine::UIElements::StyleSheets::Syntax::Expression::__set_keyword(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyword)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::UIElements::StyleSheets::Syntax::Expression*
UnityEngine::UIElements::StyleSheets::Syntax::Expression::New_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>(type));
}
inline void UnityEngine::UIElements::StyleSheets::Syntax::Expression::_ctor(::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::StyleSheets::Syntax::Expression*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::StyleSheets::Syntax::ExpressionType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::StyleSheets::Syntax::Expression::Expression() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
