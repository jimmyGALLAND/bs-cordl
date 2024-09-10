#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Expression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Expression)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Dynamic::Utils {
template<typename TKey,typename TValue>
class CacheDict_2;
}
namespace System::Linq::Expressions {
class BinaryExpression;
}
namespace System::Linq::Expressions {
class BlockExpression;
}
namespace System::Linq::Expressions {
class CatchBlock;
}
namespace System::Linq::Expressions {
class ConditionalExpression;
}
namespace System::Linq::Expressions {
class ConstantExpression;
}
namespace System::Linq::Expressions {
class DefaultExpression;
}
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System::Linq::Expressions {
class ExpressionVisitor;
}
namespace System::Linq::Expressions {
template<typename TDelegate>
class Expression_1;
}
namespace System::Linq::Expressions {
struct GotoExpressionKind;
}
namespace System::Linq::Expressions {
class GotoExpression;
}
namespace System::Linq::Expressions {
class IndexExpression;
}
namespace System::Linq::Expressions {
class InvocationExpression;
}
namespace System::Linq::Expressions {
class LabelExpression;
}
namespace System::Linq::Expressions {
class LabelTarget;
}
namespace System::Linq::Expressions {
class LambdaExpression;
}
namespace System::Linq::Expressions {
class LoopExpression;
}
namespace System::Linq::Expressions {
class MemberExpression;
}
namespace System::Linq::Expressions {
class MethodCallExpression;
}
namespace System::Linq::Expressions {
class NewArrayExpression;
}
namespace System::Linq::Expressions {
class ParameterExpression;
}
namespace System::Linq::Expressions {
class TryExpression;
}
namespace System::Linq::Expressions {
class TypeBinaryExpression;
}
namespace System::Linq::Expressions {
class UnaryExpression;
}
namespace System::Linq::Expressions {
class __Expression__BinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__BlockExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__CatchBlockProxy;
}
namespace System::Linq::Expressions {
class __Expression__ConditionalExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ConstantExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__DebugInfoExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__DefaultExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Linq::Expressions {
class __Expression__GotoExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__IndexExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__InvocationExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LabelExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ListInitExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LoopExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberInitExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MethodCallExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__NewArrayExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__NewExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ParameterExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__RuntimeVariablesExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__SwitchCaseProxy;
}
namespace System::Linq::Expressions {
class __Expression__SwitchExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__TryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__TypeBinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodBase;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename TResult>
class Func_5;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class __Expression__BinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__BlockExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__CatchBlockProxy;
}
namespace System::Linq::Expressions {
class __Expression__ConditionalExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ConstantExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__DebugInfoExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__DefaultExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ExtensionInfo;
}
namespace System::Linq::Expressions {
class __Expression__GotoExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__IndexExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__InvocationExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LabelExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LambdaExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ListInitExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__LoopExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MemberInitExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__MethodCallExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__NewArrayExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__NewExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__ParameterExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__RuntimeVariablesExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__SwitchCaseProxy;
}
namespace System::Linq::Expressions {
class __Expression__SwitchExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__TryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__TypeBinaryExpressionProxy;
}
namespace System::Linq::Expressions {
class __Expression__UnaryExpressionProxy;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Expression);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__BinaryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__BlockExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__CatchBlockProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ConditionalExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ConstantExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__DebugInfoExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__DefaultExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ExtensionInfo);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__GotoExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__IndexExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__InvocationExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__LabelExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ListInitExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__LoopExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__MemberInitExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__MethodCallExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__NewArrayExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__NewExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__ParameterExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__RuntimeVariablesExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__SwitchCaseProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__SwitchExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__TryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__TypeBinaryExpressionProxy);
MARK_REF_PTR_T(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
// Type: ::BinaryExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::BinaryExpressionProxy*
class CORDL_TYPE __Expression__BinaryExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__BinaryExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__BinaryExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__BinaryExpressionProxy(__Expression__BinaryExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__BinaryExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__BinaryExpressionProxy(__Expression__BinaryExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__BinaryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::BlockExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::BlockExpressionProxy*
class CORDL_TYPE __Expression__BlockExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__BlockExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__BlockExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__BlockExpressionProxy(__Expression__BlockExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__BlockExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__BlockExpressionProxy(__Expression__BlockExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__BlockExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::CatchBlockProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::CatchBlockProxy*
class CORDL_TYPE __Expression__CatchBlockProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__CatchBlockProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__CatchBlockProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__CatchBlockProxy(__Expression__CatchBlockProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__CatchBlockProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__CatchBlockProxy(__Expression__CatchBlockProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__CatchBlockProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ConditionalExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::ConditionalExpressionProxy*
class CORDL_TYPE __Expression__ConditionalExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__ConditionalExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ConditionalExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ConditionalExpressionProxy(__Expression__ConditionalExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ConditionalExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ConditionalExpressionProxy(__Expression__ConditionalExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ConditionalExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ConstantExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::ConstantExpressionProxy*
class CORDL_TYPE __Expression__ConstantExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__ConstantExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ConstantExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ConstantExpressionProxy(__Expression__ConstantExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ConstantExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ConstantExpressionProxy(__Expression__ConstantExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ConstantExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::DebugInfoExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::DebugInfoExpressionProxy*
class CORDL_TYPE __Expression__DebugInfoExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__DebugInfoExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__DebugInfoExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__DebugInfoExpressionProxy(__Expression__DebugInfoExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__DebugInfoExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__DebugInfoExpressionProxy(__Expression__DebugInfoExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__DebugInfoExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::DefaultExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::DefaultExpressionProxy*
class CORDL_TYPE __Expression__DefaultExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__DefaultExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__DefaultExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__DefaultExpressionProxy(__Expression__DefaultExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__DefaultExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__DefaultExpressionProxy(__Expression__DefaultExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__DefaultExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::GotoExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::GotoExpressionProxy*
class CORDL_TYPE __Expression__GotoExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__GotoExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__GotoExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__GotoExpressionProxy(__Expression__GotoExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__GotoExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__GotoExpressionProxy(__Expression__GotoExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__GotoExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::IndexExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::IndexExpressionProxy*
class CORDL_TYPE __Expression__IndexExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__IndexExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__IndexExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__IndexExpressionProxy(__Expression__IndexExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__IndexExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__IndexExpressionProxy(__Expression__IndexExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__IndexExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::InvocationExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::InvocationExpressionProxy*
class CORDL_TYPE __Expression__InvocationExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__InvocationExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__InvocationExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__InvocationExpressionProxy(__Expression__InvocationExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__InvocationExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__InvocationExpressionProxy(__Expression__InvocationExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__InvocationExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::LabelExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::LabelExpressionProxy*
class CORDL_TYPE __Expression__LabelExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__LabelExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LabelExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__LabelExpressionProxy(__Expression__LabelExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LabelExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__LabelExpressionProxy(__Expression__LabelExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__LabelExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::LambdaExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::LambdaExpressionProxy*
class CORDL_TYPE __Expression__LambdaExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__LambdaExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LambdaExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__LambdaExpressionProxy(__Expression__LambdaExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__LambdaExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ListInitExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::ListInitExpressionProxy*
class CORDL_TYPE __Expression__ListInitExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__ListInitExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ListInitExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ListInitExpressionProxy(__Expression__ListInitExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ListInitExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ListInitExpressionProxy(__Expression__ListInitExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ListInitExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::LoopExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::LoopExpressionProxy*
class CORDL_TYPE __Expression__LoopExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__LoopExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LoopExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__LoopExpressionProxy(__Expression__LoopExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__LoopExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__LoopExpressionProxy(__Expression__LoopExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__LoopExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::MemberExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::MemberExpressionProxy*
class CORDL_TYPE __Expression__MemberExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__MemberExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__MemberExpressionProxy(__Expression__MemberExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__MemberExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::MemberInitExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::MemberInitExpressionProxy*
class CORDL_TYPE __Expression__MemberInitExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__MemberInitExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberInitExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__MemberInitExpressionProxy(__Expression__MemberInitExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MemberInitExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__MemberInitExpressionProxy(__Expression__MemberInitExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__MemberInitExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::MethodCallExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::MethodCallExpressionProxy*
class CORDL_TYPE __Expression__MethodCallExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__MethodCallExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MethodCallExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__MethodCallExpressionProxy(__Expression__MethodCallExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__MethodCallExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__MethodCallExpressionProxy(__Expression__MethodCallExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__MethodCallExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::NewArrayExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::NewArrayExpressionProxy*
class CORDL_TYPE __Expression__NewArrayExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__NewArrayExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__NewArrayExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__NewArrayExpressionProxy(__Expression__NewArrayExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__NewArrayExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__NewArrayExpressionProxy(__Expression__NewArrayExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__NewArrayExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::NewExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::NewExpressionProxy*
class CORDL_TYPE __Expression__NewExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__NewExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__NewExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__NewExpressionProxy(__Expression__NewExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__NewExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__NewExpressionProxy(__Expression__NewExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__NewExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ParameterExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::ParameterExpressionProxy*
class CORDL_TYPE __Expression__ParameterExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__ParameterExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ParameterExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ParameterExpressionProxy(__Expression__ParameterExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ParameterExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ParameterExpressionProxy(__Expression__ParameterExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ParameterExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::RuntimeVariablesExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::RuntimeVariablesExpressionProxy*
class CORDL_TYPE __Expression__RuntimeVariablesExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__RuntimeVariablesExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__RuntimeVariablesExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__RuntimeVariablesExpressionProxy(__Expression__RuntimeVariablesExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__RuntimeVariablesExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__RuntimeVariablesExpressionProxy(__Expression__RuntimeVariablesExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__RuntimeVariablesExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::SwitchCaseProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::SwitchCaseProxy*
class CORDL_TYPE __Expression__SwitchCaseProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__SwitchCaseProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__SwitchCaseProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__SwitchCaseProxy(__Expression__SwitchCaseProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__SwitchCaseProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__SwitchCaseProxy(__Expression__SwitchCaseProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__SwitchCaseProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::SwitchExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::SwitchExpressionProxy*
class CORDL_TYPE __Expression__SwitchExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__SwitchExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__SwitchExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__SwitchExpressionProxy(__Expression__SwitchExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__SwitchExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__SwitchExpressionProxy(__Expression__SwitchExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__SwitchExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::TryExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::TryExpressionProxy*
class CORDL_TYPE __Expression__TryExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__TryExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__TryExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__TryExpressionProxy(__Expression__TryExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__TryExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__TryExpressionProxy(__Expression__TryExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__TryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::TypeBinaryExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::TypeBinaryExpressionProxy*
class CORDL_TYPE __Expression__TypeBinaryExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__TypeBinaryExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__TypeBinaryExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__TypeBinaryExpressionProxy(__Expression__TypeBinaryExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__TypeBinaryExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__TypeBinaryExpressionProxy(__Expression__TypeBinaryExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__TypeBinaryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::UnaryExpressionProxy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::UnaryExpressionProxy*
class CORDL_TYPE __Expression__UnaryExpressionProxy : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__UnaryExpressionProxy() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__UnaryExpressionProxy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__UnaryExpressionProxy(__Expression__UnaryExpressionProxy const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__UnaryExpressionProxy, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
// Type: ::ExtensionInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::Expression::ExtensionInfo*
class CORDL_TYPE __Expression__ExtensionInfo : public ::System::Object {
public:
// Declarations
/// @brief Field NodeType, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_NodeType, put=__cordl_internal_set_NodeType)) ::System::Linq::Expressions::ExpressionType  NodeType;

/// @brief Field Type, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_Type, put=__cordl_internal_set_Type)) ::System::Type*  Type;

constexpr ::System::Linq::Expressions::ExpressionType const& __cordl_internal_get_NodeType() const;

constexpr ::System::Linq::Expressions::ExpressionType& __cordl_internal_get_NodeType() ;

constexpr ::System::Type*& __cordl_internal_get_Type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

constexpr void __cordl_internal_set_NodeType(::System::Linq::Expressions::ExpressionType  value) ;

constexpr void __cordl_internal_set_Type(::System::Type*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Expression__ExtensionInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Expression__ExtensionInfo(__Expression__ExtensionInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Expression__ExtensionInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Expression__ExtensionInfo(__Expression__ExtensionInfo const& ) = delete;

/// @brief Field NodeType, offset: 0x10, size: 0x4, def value: None
 ::System::Linq::Expressions::ExpressionType  ___NodeType;

/// @brief Field Type, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___Type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::__Expression__ExtensionInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__Expression__ExtensionInfo, ___NodeType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::__Expression__ExtensionInfo, ___Type) == 0x18, "Offset mismatch!");

} // namespace end def System::Linq::Expressions
// Type: System.Linq.Expressions::Expression
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Expression*
class CORDL_TYPE Expression : public ::System::Object {
public:
// Declarations
using BinaryExpressionProxy = ::System::Linq::Expressions::__Expression__BinaryExpressionProxy;

using BlockExpressionProxy = ::System::Linq::Expressions::__Expression__BlockExpressionProxy;

using CatchBlockProxy = ::System::Linq::Expressions::__Expression__CatchBlockProxy;

using ConditionalExpressionProxy = ::System::Linq::Expressions::__Expression__ConditionalExpressionProxy;

using ConstantExpressionProxy = ::System::Linq::Expressions::__Expression__ConstantExpressionProxy;

using DebugInfoExpressionProxy = ::System::Linq::Expressions::__Expression__DebugInfoExpressionProxy;

using DefaultExpressionProxy = ::System::Linq::Expressions::__Expression__DefaultExpressionProxy;

using ExtensionInfo = ::System::Linq::Expressions::__Expression__ExtensionInfo;

using GotoExpressionProxy = ::System::Linq::Expressions::__Expression__GotoExpressionProxy;

using IndexExpressionProxy = ::System::Linq::Expressions::__Expression__IndexExpressionProxy;

using InvocationExpressionProxy = ::System::Linq::Expressions::__Expression__InvocationExpressionProxy;

using LabelExpressionProxy = ::System::Linq::Expressions::__Expression__LabelExpressionProxy;

using LambdaExpressionProxy = ::System::Linq::Expressions::__Expression__LambdaExpressionProxy;

using ListInitExpressionProxy = ::System::Linq::Expressions::__Expression__ListInitExpressionProxy;

using LoopExpressionProxy = ::System::Linq::Expressions::__Expression__LoopExpressionProxy;

using MemberExpressionProxy = ::System::Linq::Expressions::__Expression__MemberExpressionProxy;

using MemberInitExpressionProxy = ::System::Linq::Expressions::__Expression__MemberInitExpressionProxy;

using MethodCallExpressionProxy = ::System::Linq::Expressions::__Expression__MethodCallExpressionProxy;

using NewArrayExpressionProxy = ::System::Linq::Expressions::__Expression__NewArrayExpressionProxy;

using NewExpressionProxy = ::System::Linq::Expressions::__Expression__NewExpressionProxy;

using ParameterExpressionProxy = ::System::Linq::Expressions::__Expression__ParameterExpressionProxy;

using RuntimeVariablesExpressionProxy = ::System::Linq::Expressions::__Expression__RuntimeVariablesExpressionProxy;

using SwitchCaseProxy = ::System::Linq::Expressions::__Expression__SwitchCaseProxy;

using SwitchExpressionProxy = ::System::Linq::Expressions::__Expression__SwitchExpressionProxy;

using TryExpressionProxy = ::System::Linq::Expressions::__Expression__TryExpressionProxy;

using TypeBinaryExpressionProxy = ::System::Linq::Expressions::__Expression__TypeBinaryExpressionProxy;

using UnaryExpressionProxy = ::System::Linq::Expressions::__Expression__UnaryExpressionProxy;

 __declspec(property(get=get_CanReduce)) bool  CanReduce;

 __declspec(property(get=get_NodeType)) ::System::Linq::Expressions::ExpressionType  NodeType;

 __declspec(property(get=get_Type)) ::System::Type*  Type;

/// @brief Field s_lambdaDelegateCache, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_lambdaDelegateCache, put=setStaticF_s_lambdaDelegateCache)) ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*  s_lambdaDelegateCache;

/// @brief Field s_lambdaFactories, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_lambdaFactories, put=setStaticF_s_lambdaFactories)) ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Func_5<::System::Linq::Expressions::Expression*,::StringW,bool,::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,::System::Linq::Expressions::LambdaExpression*>*>*  s_lambdaFactories;

/// @brief Field s_legacyCtorSupportTable, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_legacyCtorSupportTable, put=setStaticF_s_legacyCtorSupportTable)) ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*  s_legacyCtorSupportTable;

/// @brief Method Accept, addr 0x40100a4, size 0x28, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* Accept(::System::Linq::Expressions::ExpressionVisitor*  visitor) ;

/// @brief Method Add, addr 0x400756c, size 0x244, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Add(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method AddAssign, addr 0x400aee8, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AddAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method AddAssignChecked, addr 0x400ca20, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AddAssignChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method AddChecked, addr 0x40077b0, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AddChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method And, addr 0x4008b74, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* And(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method AndAlso, addr 0x400d920, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method AndAlso, addr 0x4008dbc, size 0x4ec, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AndAlso(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method AndAssign, addr 0x400b180, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* AndAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method ApplyTypeArgs, addr 0x40163f8, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* ApplyTypeArgs(::System::Reflection::MethodInfo*  m, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  typeArgs) ;

/// @brief Method ArrayAccess, addr 0x4010dc4, size 0x64, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression*  array, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  indexes) ;

/// @brief Method ArrayAccess, addr 0x4010910, size 0x4b4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::IndexExpression* ArrayAccess(::System::Linq::Expressions::Expression*  array, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  indexes) ;

/// @brief Method ArrayIndex, addr 0x400a8c4, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ArrayIndex(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::Expression*  index) ;

/// @brief Method ArrayLength, addr 0x4018d90, size 0x1dc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* ArrayLength(::System::Linq::Expressions::Expression*  array) ;

/// @brief Method Assign, addr 0x40032ac, size 0x1ec, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Assign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method Block, addr 0x400dd58, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1) ;

/// @brief Method Block, addr 0x400de14, size 0xf0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2) ;

/// @brief Method Block, addr 0x400df04, size 0x124, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3) ;

/// @brief Method Block, addr 0x400e028, size 0x150, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3, ::System::Linq::Expressions::Expression*  arg4) ;

/// @brief Method Block, addr 0x400e178, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method Block, addr 0x400e204, size 0x88, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type*  type, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  expressions) ;

/// @brief Method Block, addr 0x400e28c, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type*  type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method Block, addr 0x400e5b8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type*  type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  variables, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  expressions) ;

/// @brief Method Block, addr 0x400e328, size 0x22c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Type*  type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  variables, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method Block, addr 0x400e554, size 0x64, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  variables, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  expressions) ;

/// @brief Method Block, addr 0x40036d4, size 0x174, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* Block(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  variables, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method BlockCore, addr 0x400f030, size 0x388, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* BlockCore(::System::Type*  type, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*  variables, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method Break, addr 0x40100d4, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* Break(::System::Linq::Expressions::LabelTarget*  target) ;

/// @brief Method Call, addr 0x40159e4, size 0x10c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Call, addr 0x4015af0, size 0x184, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0) ;

/// @brief Method Call, addr 0x4015c74, size 0x1f0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1) ;

/// @brief Method Call, addr 0x4015e64, size 0x25c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2) ;

/// @brief Method Call, addr 0x4014fec, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  arguments) ;

/// @brief Method Call, addr 0x40150c0, size 0x924, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  arguments) ;

/// @brief Method Call, addr 0x4004494, size 0x160, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Linq::Expressions::Expression*  instance, ::StringW  methodName, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  typeArguments, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  arguments) ;

/// @brief Method Call, addr 0x4014698, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method) ;

/// @brief Method Call, addr 0x40045f4, size 0x148, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0) ;

/// @brief Method Call, addr 0x400473c, size 0x1b0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1) ;

/// @brief Method Call, addr 0x40147fc, size 0x218, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2) ;

/// @brief Method Call, addr 0x4014a14, size 0x280, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3) ;

/// @brief Method Call, addr 0x4014c94, size 0x2f0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3, ::System::Linq::Expressions::Expression*  arg4) ;

/// @brief Method Call, addr 0x4014f84, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  arguments) ;

/// @brief Method Call, addr 0x4015058, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MethodCallExpression* Call(::System::Reflection::MethodInfo*  method, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  arguments) ;

/// @brief Method Coalesce, addr 0x400a418, size 0x4ac, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Coalesce(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method Condition, addr 0x4004b98, size 0x1f8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression*  test, ::System::Linq::Expressions::Expression*  ifTrue, ::System::Linq::Expressions::Expression*  ifFalse) ;

/// @brief Method Condition, addr 0x400f7ec, size 0x288, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ConditionalExpression* Condition(::System::Linq::Expressions::Expression*  test, ::System::Linq::Expressions::Expression*  ifTrue, ::System::Linq::Expressions::Expression*  ifFalse, ::System::Type*  type) ;

/// @brief Method Constant, addr 0x400fbdc, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object*  value) ;

/// @brief Method Constant, addr 0x4004954, size 0x244, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ConstantExpression* Constant(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method Convert, addr 0x40048ec, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method Convert, addr 0x4018f6c, size 0x210, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Convert(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ConvertChecked, addr 0x401917c, size 0x22c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* ConvertChecked(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method CreateLambda, addr 0x4013354, size 0x46c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LambdaExpression* CreateLambda(::System::Type*  delegateType, ::System::Linq::Expressions::Expression*  body, ::StringW  name, bool  tailCall, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method Decrement, addr 0x4019c8c, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Decrement(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Default, addr 0x400fc38, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::DefaultExpression* Default(::System::Type*  type) ;

/// @brief Method Divide, addr 0x4008318, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Divide(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method DivideAssign, addr 0x400b418, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* DivideAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method Empty, addr 0x400fb34, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::DefaultExpression* Empty() ;

/// @brief Method Equal, addr 0x400d1e8, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method Equal, addr 0x4009f70, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Equal(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ExclusiveOr, addr 0x400a1d0, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOr(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ExclusiveOrAssign, addr 0x400b6b0, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ExclusiveOrAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method Field, addr 0x40140d8, size 0x19c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::FieldInfo*  field) ;

/// @brief Method Field, addr 0x4014274, size 0x170, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MemberExpression* Field(::System::Linq::Expressions::Expression*  expression, ::StringW  fieldName) ;

/// @brief Method FindMethod, addr 0x40160c0, size 0x250, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* FindMethod(::System::Type*  type, ::StringW  methodName, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  typeArgs, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  args, ::System::Reflection::BindingFlags  flags) ;

/// @brief Method GetComparisonOperator, addr 0x400d6dc, size 0x244, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetComparisonOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::StringW  opName, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull) ;

/// @brief Method GetEqualityComparisonOperator, addr 0x400d254, size 0x41c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetEqualityComparisonOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::StringW  opName, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull) ;

/// @brief Method GetInvokeMethod, addr 0x4011bf0, size 0x208, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetInvokeMethod(::System::Linq::Expressions::Expression*  expression) ;

/// @brief Method GetMethodBasedAssignOperator, addr 0x400603c, size 0x268, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedAssignOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion, bool  liftToNull) ;

/// @brief Method GetMethodBasedBinaryOperator, addr 0x40057c8, size 0x59c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetMethodBasedBinaryOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, bool  liftToNull) ;

/// @brief Method GetMethodBasedCoercionOperator, addr 0x401a994, size 0x398, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedCoercionOperator(::System::Linq::Expressions::ExpressionType  unaryType, ::System::Linq::Expressions::Expression*  operand, ::System::Type*  convertToType, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method GetMethodBasedUnaryOperator, addr 0x401a454, size 0x3a4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetMethodBasedUnaryOperator(::System::Linq::Expressions::ExpressionType  unaryType, ::System::Linq::Expressions::Expression*  operand, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method GetOptimizedBlockExpression, addr 0x400e76c, size 0x8c4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BlockExpression* GetOptimizedBlockExpression(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  expressions) ;

/// @brief Method GetParametersForValidation, addr 0x4011df8, size 0x8, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> GetParametersForValidation(::System::Reflection::MethodBase*  method, ::System::Linq::Expressions::ExpressionType  nodeKind) ;

/// @brief Method GetResultTypeOfShift, addr 0x400dbf0, size 0x168, virtual false, abstract: false, final false
static inline ::System::Type* GetResultTypeOfShift(::System::Type*  left, ::System::Type*  right) ;

/// @brief Method GetUserDefinedAssignOperatorOrThrow, addr 0x4006738, size 0x268, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedAssignOperatorOrThrow(::System::Linq::Expressions::ExpressionType  binaryType, ::StringW  name, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Linq::Expressions::LambdaExpression*  conversion, bool  liftToNull) ;

/// @brief Method GetUserDefinedBinaryOperator, addr 0x40051dc, size 0x3d0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::StringW  name, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull) ;

/// @brief Method GetUserDefinedBinaryOperator, addr 0x40055ac, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Reflection::MethodInfo* GetUserDefinedBinaryOperator(::System::Linq::Expressions::ExpressionType  binaryType, ::System::Type*  leftType, ::System::Type*  rightType, ::StringW  name) ;

/// @brief Method GetUserDefinedBinaryOperatorOrThrow, addr 0x400651c, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GetUserDefinedBinaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType  binaryType, ::StringW  name, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull) ;

/// @brief Method GetUserDefinedCoercion, addr 0x401a8ac, size 0xe8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercion(::System::Linq::Expressions::ExpressionType  coercionType, ::System::Linq::Expressions::Expression*  expression, ::System::Type*  convertToType) ;

/// @brief Method GetUserDefinedCoercionOrThrow, addr 0x401a7f8, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedCoercionOrThrow(::System::Linq::Expressions::ExpressionType  coercionType, ::System::Linq::Expressions::Expression*  expression, ::System::Type*  convertToType) ;

/// @brief Method GetUserDefinedUnaryOperator, addr 0x401a150, size 0x304, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperator(::System::Linq::Expressions::ExpressionType  unaryType, ::StringW  name, ::System::Linq::Expressions::Expression*  operand) ;

/// @brief Method GetUserDefinedUnaryOperatorOrThrow, addr 0x4019fcc, size 0x184, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* GetUserDefinedUnaryOperatorOrThrow(::System::Linq::Expressions::ExpressionType  unaryType, ::StringW  name, ::System::Linq::Expressions::Expression*  operand) ;

/// @brief Method Goto, addr 0x40103ec, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget*  target, ::System::Type*  type) ;

/// @brief Method Goto, addr 0x4010458, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* Goto(::System::Linq::Expressions::LabelTarget*  target, ::System::Linq::Expressions::Expression*  value) ;

/// @brief Method GreaterThan, addr 0x4009d10, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GreaterThan(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method GreaterThanOrEqual, addr 0x4009e40, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* GreaterThanOrEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method IfThen, addr 0x400fa74, size 0xc0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ConditionalExpression* IfThen(::System::Linq::Expressions::Expression*  test, ::System::Linq::Expressions::Expression*  ifTrue) ;

/// @brief Method Increment, addr 0x4019aec, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Increment(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Invoke, addr 0x4011aec, size 0x104, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression) ;

/// @brief Method Invoke, addr 0x4003150, size 0x15c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Linq::Expressions::Expression*  arg0) ;

/// @brief Method Invoke, addr 0x4011e14, size 0x1b4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1) ;

/// @brief Method Invoke, addr 0x4011fc8, size 0x204, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2) ;

/// @brief Method Invoke, addr 0x40121cc, size 0x25c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3) ;

/// @brief Method Invoke, addr 0x4012428, size 0x2b4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Linq::Expressions::Expression*  arg0, ::System::Linq::Expressions::Expression*  arg1, ::System::Linq::Expressions::Expression*  arg2, ::System::Linq::Expressions::Expression*  arg3, ::System::Linq::Expressions::Expression*  arg4) ;

/// @brief Method Invoke, addr 0x40126dc, size 0x8d4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::InvocationExpression* Invoke(::System::Linq::Expressions::Expression*  expression, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  arguments) ;

/// @brief Method IsCompatible, addr 0x40164ac, size 0x240, virtual false, abstract: false, final false
static inline bool IsCompatible(::System::Reflection::MethodBase*  m, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  arguments) ;

/// @brief Method IsFalse, addr 0x40188b0, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* IsFalse(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method IsLiftingConditionalLogicalOperator, addr 0x40069a0, size 0xcc, virtual false, abstract: false, final false
static inline bool IsLiftingConditionalLogicalOperator(::System::Type*  left, ::System::Type*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::ExpressionType  binaryType) ;

/// @brief Method IsNullComparison, addr 0x4006afc, size 0x100, virtual false, abstract: false, final false
static inline bool IsNullComparison(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method IsNullConstant, addr 0x4006bfc, size 0x84, virtual false, abstract: false, final false
static inline bool IsNullConstant(::System::Linq::Expressions::Expression*  e) ;

/// @brief Method IsSimpleShift, addr 0x400daf8, size 0xf8, virtual false, abstract: false, final false
static inline bool IsSimpleShift(::System::Type*  left, ::System::Type*  right) ;

/// @brief Method IsTrue, addr 0x4018a50, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* IsTrue(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method IsValidLiftedConditionalLogicalOperator, addr 0x40072a4, size 0x104, virtual false, abstract: false, final false
static inline bool IsValidLiftedConditionalLogicalOperator(::System::Type*  left, ::System::Type*  right, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  pms) ;

/// @brief Method Label, addr 0x4012fb8, size 0x58, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget*  target) ;

/// @brief Method Label, addr 0x4013010, size 0xd4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelExpression* Label(::System::Linq::Expressions::LabelTarget*  target, ::System::Linq::Expressions::Expression*  defaultValue) ;

/// @brief Method Label, addr 0x40130e4, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelTarget* Label() ;

/// @brief Method Label, addr 0x401324c, size 0xb0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelTarget* Label(::StringW  name) ;

/// @brief Method Label, addr 0x40132fc, size 0x58, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type*  type) ;

/// @brief Method Label, addr 0x4013188, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LabelTarget* Label(::System::Type*  type, ::StringW  name) ;

/// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression*  body, ::StringW  name, bool  tailCall, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression*  body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*,::Array<::System::Linq::Expressions::ParameterExpression*>*>  parameters) ;

/// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression*  body, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method Lambda, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TDelegate>
static inline ::System::Linq::Expressions::Expression_1<TDelegate>* Lambda(::System::Linq::Expressions::Expression*  body, bool  tailCall, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method Lambda, addr 0x4013834, size 0xe0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type*  delegateType, ::System::Linq::Expressions::Expression*  body, ::StringW  name, bool  tailCall, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters) ;

/// @brief Method Lambda, addr 0x40137c0, size 0x74, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LambdaExpression* Lambda(::System::Type*  delegateType, ::System::Linq::Expressions::Expression*  body, ::ArrayW<::System::Linq::Expressions::ParameterExpression*,::Array<::System::Linq::Expressions::ParameterExpression*>*>  parameters) ;

/// @brief Method LeftShift, addr 0x400accc, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* LeftShift(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method LeftShiftAssign, addr 0x400b948, size 0x26c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* LeftShiftAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method LessThan, addr 0x4009ab0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* LessThan(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method LessThanOrEqual, addr 0x4009be0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* LessThanOrEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Loop, addr 0x4013fac, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::LoopExpression* Loop(::System::Linq::Expressions::Expression*  body, ::System::Linq::Expressions::LabelTarget*  _cordl_break, ::System::Linq::Expressions::LabelTarget*  _cordl_continue) ;

/// @brief Method MakeBinary, addr 0x40030c8, size 0x88, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType  binaryType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method MakeBinary, addr 0x4001c64, size 0xa30, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* MakeBinary(::System::Linq::Expressions::ExpressionType  binaryType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method MakeCatchBlock, addr 0x400f560, size 0x28c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::CatchBlock* MakeCatchBlock(::System::Type*  type, ::System::Linq::Expressions::ParameterExpression*  variable, ::System::Linq::Expressions::Expression*  body, ::System::Linq::Expressions::Expression*  filter) ;

/// @brief Method MakeGoto, addr 0x401018c, size 0xec, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* MakeGoto(::System::Linq::Expressions::GotoExpressionKind  kind, ::System::Linq::Expressions::LabelTarget*  target, ::System::Linq::Expressions::Expression*  value, ::System::Type*  type) ;

/// @brief Method MakeIndex, addr 0x4003848, size 0x9c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::IndexExpression* MakeIndex(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::PropertyInfo*  indexer, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  arguments) ;

/// @brief Method MakeIndexProperty, addr 0x4010e28, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::IndexExpression* MakeIndexProperty(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::PropertyInfo*  indexer, ::StringW  paramName, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*  argList) ;

/// @brief Method MakeMemberAccess, addr 0x4003510, size 0x1c4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MemberExpression* MakeMemberAccess(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MemberInfo*  member) ;

/// @brief Method MakeOpAssignUnary, addr 0x401ade0, size 0x294, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* MakeOpAssignUnary(::System::Linq::Expressions::ExpressionType  kind, ::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method MakeTry, addr 0x4016ff8, size 0x234, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::TryExpression* MakeTry(::System::Type*  type, ::System::Linq::Expressions::Expression*  body, ::System::Linq::Expressions::Expression*  finally, ::System::Linq::Expressions::Expression*  fault, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::CatchBlock*>*  handlers) ;

/// @brief Method MakeUnary, addr 0x4017dd8, size 0x54c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* MakeUnary(::System::Linq::Expressions::ExpressionType  unaryType, ::System::Linq::Expressions::Expression*  operand, ::System::Type*  type, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Modulo, addr 0x4008560, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Modulo(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ModuloAssign, addr 0x400bbb4, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ModuloAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method Multiply, addr 0x4007e88, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Multiply(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method MultiplyAssign, addr 0x400be4c, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method MultiplyAssignChecked, addr 0x400cf50, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* MultiplyAssignChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method MultiplyChecked, addr 0x40080d0, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* MultiplyChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Negate, addr 0x4018324, size 0x1d8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Negate(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method NegateChecked, addr 0x40184fc, size 0x1d8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* NegateChecked(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method NewArrayBounds, addr 0x4016b60, size 0x2a4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayBounds(::System::Type*  type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  bounds) ;

/// @brief Method NewArrayInit, addr 0x40166ec, size 0x64, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type*  type, ::ArrayW<::System::Linq::Expressions::Expression*,::Array<::System::Linq::Expressions::Expression*>*>  initializers) ;

/// @brief Method NewArrayInit, addr 0x4016750, size 0x410, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::NewArrayExpression* NewArrayInit(::System::Type*  type, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  initializers) ;

static inline ::System::Linq::Expressions::Expression* New_ctor() ;

/// @brief Method Not, addr 0x401ad2c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression*  expression) ;

/// @brief Method Not, addr 0x40186d4, size 0x1dc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Not(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method NotEqual, addr 0x400d670, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method NotEqual, addr 0x400a0a0, size 0x130, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* NotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftToNull, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method OnesComplement, addr 0x4018bf0, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* OnesComplement(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Or, addr 0x40092a8, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Or(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method OrAssign, addr 0x400c0e4, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* OrAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method OrElse, addr 0x40094f0, size 0x5c0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* OrElse(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Parameter, addr 0x4016e04, size 0x58, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type*  type) ;

/// @brief Method Parameter, addr 0x4004274, size 0xac, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ParameterExpression* Parameter(::System::Type*  type, ::StringW  name) ;

/// @brief Method ParameterIsAssignable, addr 0x4005ebc, size 0xa4, virtual false, abstract: false, final false
static inline bool ParameterIsAssignable(::System::Reflection::ParameterInfo*  pi, ::System::Type*  argType) ;

/// @brief Method PostDecrementAssign, addr 0x4019f64, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* PostDecrementAssign(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method PostIncrementAssign, addr 0x4019e94, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* PostIncrementAssign(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Power, addr 0x40087a8, size 0x3cc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Power(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method PowerAssign, addr 0x400c37c, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* PowerAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method PreDecrementAssign, addr 0x4019efc, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* PreDecrementAssign(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method PreIncrementAssign, addr 0x401ad84, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression*  expression) ;

/// @brief Method PreIncrementAssign, addr 0x4019e2c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* PreIncrementAssign(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Property, addr 0x401085c, size 0xb4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::IndexExpression* Property(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::PropertyInfo*  indexer, ::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::Expression*>*  arguments) ;

/// @brief Method Property, addr 0x40143e4, size 0x2b4, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::PropertyInfo*  property) ;

/// @brief Method Property, addr 0x4004320, size 0x174, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::MemberExpression* Property(::System::Linq::Expressions::Expression*  expression, ::StringW  propertyName) ;

/// @brief Method Quote, addr 0x4019658, size 0x118, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Quote(::System::Linq::Expressions::Expression*  expression) ;

/// @brief Method Reduce, addr 0x400fee4, size 0x48, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* Reduce() ;

/// @brief Method ReduceAndCheck, addr 0x400ffa0, size 0x104, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Expression* ReduceAndCheck() ;

/// @brief Method ReferenceEqual, addr 0x40018c8, size 0x188, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ReferenceEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method ReferenceNotEqual, addr 0x4001a50, size 0x188, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* ReferenceNotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right) ;

/// @brief Method RequiresCanRead, addr 0x400e624, size 0x148, virtual false, abstract: false, final false
static inline void RequiresCanRead(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  items, ::StringW  paramName) ;

/// @brief Method RequiresCanWrite, addr 0x4004f8c, size 0x250, virtual false, abstract: false, final false
static inline void RequiresCanWrite(::System::Linq::Expressions::Expression*  expression, ::StringW  paramName) ;

/// @brief Method Return, addr 0x4010278, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget*  target) ;

/// @brief Method Return, addr 0x4010330, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::GotoExpression* Return(::System::Linq::Expressions::LabelTarget*  target, ::System::Linq::Expressions::Expression*  value) ;

/// @brief Method RightShift, addr 0x400aab0, size 0x21c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* RightShift(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method RightShiftAssign, addr 0x400c51c, size 0x26c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* RightShiftAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method Subtract, addr 0x40079f8, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* Subtract(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method SubtractAssign, addr 0x400c788, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssign(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method SubtractAssignChecked, addr 0x400ccb8, size 0x298, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* SubtractAssignChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::LambdaExpression*  conversion) ;

/// @brief Method SubtractChecked, addr 0x4007c40, size 0x248, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::BinaryExpression* SubtractChecked(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Throw, addr 0x40193a8, size 0x148, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Throw(::System::Linq::Expressions::Expression*  value, ::System::Type*  type) ;

/// @brief Method ToString, addr 0x40100cc, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryFinally, addr 0x4016f88, size 0x70, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::TryExpression* TryFinally(::System::Linq::Expressions::Expression*  body, ::System::Linq::Expressions::Expression*  finally) ;

/// @brief Method TryQuote, addr 0x4010854, size 0x8, virtual false, abstract: false, final false
static inline bool TryQuote(::System::Type*  parameterType, ByRef<::System::Linq::Expressions::Expression*>  argument) ;

/// @brief Method TypeAs, addr 0x40194f0, size 0x168, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* TypeAs(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method TypeEqual, addr 0x4017cd8, size 0x100, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeEqual(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method TypeIs, addr 0x4017bd8, size 0x100, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::TypeBinaryExpression* TypeIs(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method UnaryPlus, addr 0x4019770, size 0x1a0, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* UnaryPlus(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method Unbox, addr 0x4019910, size 0x1dc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::UnaryExpression* Unbox(::System::Linq::Expressions::Expression*  expression, ::System::Type*  type) ;

/// @brief Method Validate, addr 0x4016e5c, size 0x12c, virtual false, abstract: false, final false
static inline void Validate(::System::Type*  type, bool  allowByRef) ;

/// @brief Method ValidateAccessor, addr 0x4011460, size 0x1b0, virtual false, abstract: false, final false
static inline void ValidateAccessor(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  indexes, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>  arguments, ::StringW  paramName) ;

/// @brief Method ValidateAccessorArgumentTypes, addr 0x40116c8, size 0x424, virtual false, abstract: false, final false
static inline void ValidateAccessorArgumentTypes(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  indexes, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>  arguments, ::StringW  paramName) ;

/// @brief Method ValidateArgumentCount, addr 0x4011e00, size 0x8, virtual false, abstract: false, final false
static inline void ValidateArgumentCount(::System::Reflection::MethodBase*  method, ::System::Linq::Expressions::ExpressionType  nodeKind, int32_t  count, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  pis) ;

/// @brief Method ValidateArgumentTypes, addr 0x4012fb0, size 0x8, virtual false, abstract: false, final false
static inline void ValidateArgumentTypes(::System::Reflection::MethodBase*  method, ::System::Linq::Expressions::ExpressionType  nodeKind, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>  arguments, ::StringW  methodParamName) ;

/// @brief Method ValidateCallInstanceType, addr 0x4011610, size 0xb8, virtual false, abstract: false, final false
static inline void ValidateCallInstanceType(::System::Type*  instanceType, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ValidateCoalesceArgTypes, addr 0x400d988, size 0x170, virtual false, abstract: false, final false
static inline ::System::Type* ValidateCoalesceArgTypes(::System::Type*  left, ::System::Type*  right) ;

/// @brief Method ValidateGoto, addr 0x4010514, size 0x1bc, virtual false, abstract: false, final false
static inline void ValidateGoto(::System::Linq::Expressions::LabelTarget*  target, ByRef<::System::Linq::Expressions::Expression*>  value, ::StringW  targetParameter, ::StringW  valueParameter, ::System::Type*  type) ;

/// @brief Method ValidateGotoType, addr 0x40106d0, size 0x184, virtual false, abstract: false, final false
static inline void ValidateGotoType(::System::Type*  expectedType, ByRef<::System::Linq::Expressions::Expression*>  value, ::StringW  paramName) ;

/// @brief Method ValidateIndexedProperty, addr 0x4010ee4, size 0x57c, virtual false, abstract: false, final false
static inline void ValidateIndexedProperty(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::PropertyInfo*  indexer, ::StringW  paramName, ByRef<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::Expression*>*>  argList) ;

/// @brief Method ValidateLambdaArgs, addr 0x4013914, size 0x698, virtual false, abstract: false, final false
static inline void ValidateLambdaArgs(::System::Type*  delegateType, ByRef<::System::Linq::Expressions::Expression*>  body, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*  parameters, ::StringW  paramName) ;

/// @brief Method ValidateMethodAndGetParameters, addr 0x4014768, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*> ValidateMethodAndGetParameters(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ValidateMethodInfo, addr 0x4006a6c, size 0x90, virtual false, abstract: false, final false
static inline void ValidateMethodInfo(::System::Reflection::MethodInfo*  method, ::StringW  paramName) ;

/// @brief Method ValidateOneArgument, addr 0x4011e08, size 0xc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Expression* ValidateOneArgument(::System::Reflection::MethodBase*  method, ::System::Linq::Expressions::ExpressionType  nodeKind, ::System::Linq::Expressions::Expression*  arg, ::System::Reflection::ParameterInfo*  pi, ::StringW  methodParamName, ::StringW  argumentParamName) ;

/// @brief Method ValidateOpAssignConversionLambda, addr 0x40062a4, size 0x278, virtual false, abstract: false, final false
static inline void ValidateOpAssignConversionLambda(::System::Linq::Expressions::LambdaExpression*  conversion, ::System::Linq::Expressions::Expression*  left, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::ExpressionType  nodeType) ;

/// @brief Method ValidateOperator, addr 0x4005d64, size 0x158, virtual false, abstract: false, final false
static inline void ValidateOperator(::System::Reflection::MethodInfo*  method) ;

/// @brief Method ValidateParamswithOperandsOrThrow, addr 0x4005f60, size 0xdc, virtual false, abstract: false, final false
static inline void ValidateParamswithOperandsOrThrow(::System::Type*  paramType, ::System::Type*  operandType, ::System::Linq::Expressions::ExpressionType  exprType, ::StringW  name) ;

/// @brief Method ValidateStaticOrInstanceMethod, addr 0x4016310, size 0xe8, virtual false, abstract: false, final false
static inline void ValidateStaticOrInstanceMethod(::System::Linq::Expressions::Expression*  instance, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ValidateTryAndCatchHaveSameType, addr 0x401722c, size 0x9ac, virtual false, abstract: false, final false
static inline void ValidateTryAndCatchHaveSameType(::System::Type*  type, ::System::Linq::Expressions::Expression*  tryBody, ::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::CatchBlock*>*  handlers) ;

/// @brief Method ValidateUserDefinedConditionalLogicOperator, addr 0x4006c80, size 0x624, virtual false, abstract: false, final false
static inline void ValidateUserDefinedConditionalLogicOperator(::System::Linq::Expressions::ExpressionType  nodeType, ::System::Type*  left, ::System::Type*  right, ::System::Reflection::MethodInfo*  method) ;

/// @brief Method ValidateVariables, addr 0x400f3b8, size 0x1a8, virtual false, abstract: false, final false
static inline void ValidateVariables(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*  varList, ::StringW  collectionName) ;

/// @brief Method Variable, addr 0x4003498, size 0x78, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::ParameterExpression* Variable(::System::Type*  type, ::StringW  name) ;

/// @brief Method VerifyOpTrueFalse, addr 0x40073a8, size 0x1c4, virtual false, abstract: false, final false
static inline void VerifyOpTrueFalse(::System::Linq::Expressions::ExpressionType  nodeType, ::System::Type*  left, ::System::Reflection::MethodInfo*  opTrue, ::StringW  paramName) ;

/// @brief Method VisitChildren, addr 0x400ff2c, size 0x74, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* VisitChildren(::System::Linq::Expressions::ExpressionVisitor*  visitor) ;

/// @brief Method .ctor, addr 0x4001624, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>* getStaticF_s_lambdaDelegateCache() ;

static inline ::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Func_5<::System::Linq::Expressions::Expression*,::StringW,bool,::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,::System::Linq::Expressions::LambdaExpression*>*>* getStaticF_s_lambdaFactories() ;

static inline ::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>* getStaticF_s_legacyCtorSupportTable() ;

/// @brief Method get_CanReduce, addr 0x400fedc, size 0x8, virtual true, abstract: false, final false
inline bool get_CanReduce() ;

/// @brief Method get_NodeType, addr 0x400fcf4, size 0xf4, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::ExpressionType get_NodeType() ;

/// @brief Method get_Type, addr 0x400fde8, size 0xf4, virtual true, abstract: false, final false
inline ::System::Type* get_Type() ;

static inline void setStaticF_s_lambdaDelegateCache(::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Reflection::MethodInfo*>*  value) ;

static inline void setStaticF_s_lambdaFactories(::System::Dynamic::Utils::CacheDict_2<::System::Type*,::System::Func_5<::System::Linq::Expressions::Expression*,::StringW,bool,::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ParameterExpression*>*,::System::Linq::Expressions::LambdaExpression*>*>*  value) ;

static inline void setStaticF_s_legacyCtorSupportTable(::System::Runtime::CompilerServices::ConditionalWeakTable_2<::System::Linq::Expressions::Expression*,::System::Linq::Expressions::__Expression__ExtensionInfo*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Expression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Expression(Expression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Expression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Expression(Expression const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Expression, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Expression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Expression*, "System.Linq.Expressions", "Expression");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__BinaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__BinaryExpressionProxy*, "System.Linq.Expressions", "Expression/BinaryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__BlockExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__BlockExpressionProxy*, "System.Linq.Expressions", "Expression/BlockExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__CatchBlockProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__CatchBlockProxy*, "System.Linq.Expressions", "Expression/CatchBlockProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ConditionalExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ConditionalExpressionProxy*, "System.Linq.Expressions", "Expression/ConditionalExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ConstantExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ConstantExpressionProxy*, "System.Linq.Expressions", "Expression/ConstantExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__DebugInfoExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__DebugInfoExpressionProxy*, "System.Linq.Expressions", "Expression/DebugInfoExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__DefaultExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__DefaultExpressionProxy*, "System.Linq.Expressions", "Expression/DefaultExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ExtensionInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ExtensionInfo*, "System.Linq.Expressions", "Expression/ExtensionInfo");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__GotoExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__GotoExpressionProxy*, "System.Linq.Expressions", "Expression/GotoExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__IndexExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__IndexExpressionProxy*, "System.Linq.Expressions", "Expression/IndexExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__InvocationExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__InvocationExpressionProxy*, "System.Linq.Expressions", "Expression/InvocationExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__LabelExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__LabelExpressionProxy*, "System.Linq.Expressions", "Expression/LabelExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__LambdaExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__LambdaExpressionProxy*, "System.Linq.Expressions", "Expression/LambdaExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ListInitExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ListInitExpressionProxy*, "System.Linq.Expressions", "Expression/ListInitExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__LoopExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__LoopExpressionProxy*, "System.Linq.Expressions", "Expression/LoopExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__MemberExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__MemberExpressionProxy*, "System.Linq.Expressions", "Expression/MemberExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__MemberInitExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__MemberInitExpressionProxy*, "System.Linq.Expressions", "Expression/MemberInitExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__MethodCallExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__MethodCallExpressionProxy*, "System.Linq.Expressions", "Expression/MethodCallExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__NewArrayExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__NewArrayExpressionProxy*, "System.Linq.Expressions", "Expression/NewArrayExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__NewExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__NewExpressionProxy*, "System.Linq.Expressions", "Expression/NewExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__ParameterExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__ParameterExpressionProxy*, "System.Linq.Expressions", "Expression/ParameterExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__RuntimeVariablesExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__RuntimeVariablesExpressionProxy*, "System.Linq.Expressions", "Expression/RuntimeVariablesExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__SwitchCaseProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__SwitchCaseProxy*, "System.Linq.Expressions", "Expression/SwitchCaseProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__SwitchExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__SwitchExpressionProxy*, "System.Linq.Expressions", "Expression/SwitchExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__TryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__TryExpressionProxy*, "System.Linq.Expressions", "Expression/TryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__TypeBinaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__TypeBinaryExpressionProxy*, "System.Linq.Expressions", "Expression/TypeBinaryExpressionProxy");
NEED_NO_BOX(::System::Linq::Expressions::__Expression__UnaryExpressionProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::__Expression__UnaryExpressionProxy*, "System.Linq.Expressions", "Expression/UnaryExpressionProxy");
