#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Expression)
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::CompilerServices {
template <typename TKey, typename TValue> class ConditionalWeakTable_2;
}
namespace System {
class Type;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System::Dynamic::Utils {
template <typename TKey, typename TValue> class CacheDict_2;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Expression);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ExtensionInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
// Type: ::LambdaExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14296))
// CS Name: ::Expression::LambdaExpressionProxy*
class CORDL_TYPE __Expression__LambdaExpressionProxy : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Expression__LambdaExpressionProxy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__LambdaExpressionProxy, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
// Type: ::MemberExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14297))
// CS Name: ::Expression::MemberExpressionProxy*
class CORDL_TYPE __Expression__MemberExpressionProxy : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Expression__MemberExpressionProxy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__MemberExpressionProxy, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
// Type: ::UnaryExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14298))
// CS Name: ::Expression::UnaryExpressionProxy*
class CORDL_TYPE __Expression__UnaryExpressionProxy : public ::System::Object {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Expression__UnaryExpressionProxy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__UnaryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
// Type: ::ExtensionInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14302))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14299))
// CS Name: ::Expression::ExtensionInfo*
class CORDL_TYPE __Expression__ExtensionInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field NodeType, offset 0x10, size 0x4
  __declspec(property(get = __get_NodeType, put = __set_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  constexpr ::System::Linq::Expressions::ExpressionType& __get_NodeType();

  constexpr ::System::Linq::Expressions::ExpressionType const& __get_NodeType() const;

  constexpr void __set_NodeType(::System::Linq::Expressions::ExpressionType value);

  // Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Expression__ExtensionInfo(__Expression__ExtensionInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Expression__ExtensionInfo(__Expression__ExtensionInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Expression__ExtensionInfo();

public:
  /// @brief Field NodeType, offset: 0x10, size: 0x4, def value: None
  ::System::Linq::Expressions::ExpressionType ___NodeType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ExtensionInfo, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions
// Type: System.Linq.Expressions::Expression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14300))
// CS Name: ::System.Linq.Expressions::Expression*
class CORDL_TYPE Expression : public ::System::Object {
public:
  // Declarations
  using ExtensionInfo = ::System::Linq::Expressions::__Expression__ExtensionInfo;

  using UnaryExpressionProxy = ::System::Linq::Expressions::__Expression__UnaryExpressionProxy;

  using MemberExpressionProxy = ::System::Linq::Expressions::__Expression__MemberExpressionProxy;

  using LambdaExpressionProxy = ::System::Linq::Expressions::__Expression__LambdaExpressionProxy;

  /// @brief Field s_lambdaDelegateCache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_lambdaDelegateCache,
                             put = setStaticF_s_lambdaDelegateCache))::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* s_lambdaDelegateCache;

  /// @brief Field s_legacyCtorSupportTable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_legacyCtorSupportTable, put = setStaticF_s_legacyCtorSupportTable))::System::Runtime::CompilerServices::ConditionalWeakTable_2<
      ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::__Expression__ExtensionInfo*>* s_legacyCtorSupportTable;

  __declspec(property(get = get_NodeType))::System::Linq::Expressions::ExpressionType NodeType;

  static inline void setStaticF_s_lambdaDelegateCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* value);

  static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*, ::System::Reflection::MethodInfo*>* getStaticF_s_lambdaDelegateCache();

  static inline void setStaticF_s_legacyCtorSupportTable(
      ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::__Expression__ExtensionInfo*>* value);

  static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::__Expression__ExtensionInfo*>*
  getStaticF_s_legacyCtorSupportTable();

  /// @brief Method get_NodeType addr 0x2813b1c size 0xf0 virtual true final false
  inline ::System::Linq::Expressions::ExpressionType get_NodeType();

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Expression(Expression&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Expression(Expression const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Expression();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Expression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression*, "System.Linq.Expressions", "Expression");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ExtensionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ExtensionInfo*, "System.Linq.Expressions", "Expression/ExtensionInfo");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__LambdaExpressionProxy*, "System.Linq.Expressions", "Expression/LambdaExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__MemberExpressionProxy*, "System.Linq.Expressions", "Expression/MemberExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__UnaryExpressionProxy*, "System.Linq.Expressions", "Expression/UnaryExpressionProxy");
