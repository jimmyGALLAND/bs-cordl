#pragma once
// IWYU pragma private; include "System/Data/ExprException.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExprException)
namespace System::Data {
class EvaluateException;
}
namespace System::Data {
class InvalidExpressionException;
}
namespace System::Data {
class OperatorInfo;
}
namespace System::Data {
class SyntaxErrorException;
}
namespace System::Data {
struct Tokens;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class OverflowException;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Data {
class ExprException;
}
// Write type traits
MARK_REF_PTR_T(::System::Data::ExprException);
// Type: System.Data::ExprException
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Data {
// Is value type: false
// CS Name: ::System.Data::ExprException*
class CORDL_TYPE ExprException : public ::System::Object {
public:
// Declarations
/// @brief Method AggregateArgument, addr 0x40e9280, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateArgument() ;

/// @brief Method AggregateUnbound, addr 0x40dd0b0, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* AggregateUnbound(::StringW  expr) ;

/// @brief Method AmbiguousBinop, addr 0x40e56cc, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method ArgumentType, addr 0x40ea368, size 0xc8, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentType(::StringW  function, int32_t  arg, ::System::Type*  type) ;

/// @brief Method ArgumentTypeInteger, addr 0x40ea430, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypeInteger(::StringW  function, int32_t  arg) ;

/// @brief Method BindFailure, addr 0x40ea4d4, size 0x50, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* BindFailure(::StringW  relationName) ;

/// @brief Method ComputeNotAggregate, addr 0x40dd740, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ComputeNotAggregate(::StringW  expr) ;

/// @brief Method DatatypeConvertion, addr 0x40ea20c, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatatypeConvertion(::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method DatavalueConvertion, addr 0x40e7f48, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* DatavalueConvertion(::System::Object*  value, ::System::Type*  type, ::System::Exception*  innerException) ;

/// @brief Method EvalNoContext, addr 0x40dd68c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* EvalNoContext() ;

/// @brief Method ExpressionTooComplex, addr 0x40e92c0, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTooComplex() ;

/// @brief Method ExpressionUnbound, addr 0x40ea524, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionUnbound(::StringW  expr) ;

/// @brief Method FilterConvertion, addr 0x40e80f4, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FilterConvertion(::StringW  expr) ;

/// @brief Method FunctionArgumentCount, addr 0x40ea1bc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentCount(::StringW  name) ;

/// @brief Method FunctionArgumentOutOfRange, addr 0x40ea154, size 0x68, virtual false, abstract: false, final false
static inline ::System::Exception* FunctionArgumentOutOfRange(::StringW  arg, ::StringW  func) ;

/// @brief Method InWithoutList, addr 0x40ea328, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutList() ;

/// @brief Method InWithoutParentheses, addr 0x40e5360, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InWithoutParentheses() ;

/// @brief Method InvalidDate, addr 0x40e9afc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidDate(::StringW  date) ;

/// @brief Method InvalidHoursArgument, addr 0x40ea5c4, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidHoursArgument() ;

/// @brief Method InvalidIsSyntax, addr 0x40e3458, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidIsSyntax() ;

/// @brief Method InvalidMinutesArgument, addr 0x40ea604, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMinutesArgument() ;

/// @brief Method InvalidName, addr 0x40ea298, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidName(::StringW  name) ;

/// @brief Method InvalidNameBracketing, addr 0x40e9aac, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNameBracketing(::StringW  name) ;

/// @brief Method InvalidPattern, addr 0x40e6074, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidPattern(::StringW  pat) ;

/// @brief Method InvalidString, addr 0x40e9b78, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidString(::StringW  str) ;

/// @brief Method InvalidTimeZoneRange, addr 0x40ea644, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTimeZoneRange() ;

/// @brief Method InvalidType, addr 0x40ea574, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidType(::StringW  typeName) ;

/// @brief Method InvokeArgument, addr 0x40e80b0, size 0x44, virtual false, abstract: false, final false
static inline ::System::Exception* InvokeArgument() ;

/// @brief Method LookupArgument, addr 0x40e8c58, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* LookupArgument() ;

/// @brief Method MismatchKindandTimeSpan, addr 0x40ea684, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MismatchKindandTimeSpan() ;

/// @brief Method MissingOperand, addr 0x40e86b0, size 0x90, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperand(::System::Data::OperatorInfo*  before) ;

/// @brief Method MissingOperandBefore, addr 0x40e9160, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperandBefore(::StringW  op) ;

/// @brief Method MissingOperator, addr 0x40e89a8, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* MissingOperator(::StringW  token) ;

/// @brief Method MissingRightParen, addr 0x40e8968, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* MissingRightParen() ;

/// @brief Method NYI, addr 0x40ea0b4, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* NYI(::StringW  moreinfo) ;

/// @brief Method NonConstantArgument, addr 0x40ea2e8, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* NonConstantArgument() ;

/// @brief Method Overflow, addr 0x40e5424, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* Overflow(::System::Type*  type) ;

/// @brief Method SyntaxError, addr 0x40e8dfc, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* SyntaxError() ;

/// @brief Method TooManyRightParentheses, addr 0x40e9120, size 0x40, virtual false, abstract: false, final false
static inline ::System::Exception* TooManyRightParentheses() ;

/// @brief Method TypeMismatch, addr 0x40ea104, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatch(::StringW  expr) ;

/// @brief Method TypeMismatchInBinop, addr 0x40e37ac, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMismatchInBinop(int32_t  op, ::System::Type*  type1, ::System::Type*  type2) ;

/// @brief Method UnboundName, addr 0x40dd160, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UnboundName(::StringW  name) ;

/// @brief Method UndefinedFunction, addr 0x40dcdfc, size 0x50, virtual false, abstract: false, final false
static inline ::System::Exception* UndefinedFunction(::StringW  name) ;

/// @brief Method UnknownToken, addr 0x40e9300, size 0x110, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::System::Data::Tokens  tokExpected, ::System::Data::Tokens  tokCurr, int32_t  position) ;

/// @brief Method UnknownToken, addr 0x40e91dc, size 0xa4, virtual false, abstract: false, final false
static inline ::System::Exception* UnknownToken(::StringW  token, int32_t  position) ;

/// @brief Method UnresolvedRelation, addr 0x40dd100, size 0x60, virtual false, abstract: false, final false
static inline ::System::Exception* UnresolvedRelation(::StringW  name, ::StringW  expr) ;

/// @brief Method UnsupportedDataType, addr 0x40e6ee4, size 0x74, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedDataType(::System::Type*  type) ;

/// @brief Method UnsupportedOperator, addr 0x40e53a0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* UnsupportedOperator(int32_t  op) ;

/// @brief Method _Eval, addr 0x40e9fe4, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error) ;

/// @brief Method _Eval, addr 0x40ea04c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::EvaluateException* _Eval(::StringW  error, ::System::Exception*  innerException) ;

/// @brief Method _Expr, addr 0x40e9f14, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::InvalidExpressionException* _Expr(::StringW  error) ;

/// @brief Method _Overflow, addr 0x40e9eac, size 0x68, virtual false, abstract: false, final false
static inline ::System::OverflowException* _Overflow(::StringW  error) ;

/// @brief Method _Syntax, addr 0x40e9f7c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Data::SyntaxErrorException* _Syntax(::StringW  error) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ExprException() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExprException(ExprException && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExprException", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExprException(ExprException const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Data::ExprException, 0x10>, "Size mismatch!");

} // namespace end def System::Data
NEED_NO_BOX(::System::Data::ExprException);
DEFINE_IL2CPP_ARG_TYPE(::System::Data::ExprException*, "System.Data", "ExprException");
