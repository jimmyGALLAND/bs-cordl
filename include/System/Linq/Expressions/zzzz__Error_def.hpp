#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Error.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Error)
namespace System::Linq::Expressions {
struct ExpressionType;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Error;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Error);
// Type: System.Linq.Expressions::Error
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Error*
class CORDL_TYPE Error : public ::System::Object {
public:
// Declarations
/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x401e488, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName) ;

/// @brief Method AccessorsCannotHaveByRefArgs, addr 0x401e55c, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveByRefArgs(::StringW  paramName, int32_t  index) ;

/// @brief Method AccessorsCannotHaveVarArgs, addr 0x401e3b4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* AccessorsCannotHaveVarArgs(::StringW  paramName) ;

/// @brief Method AmbiguousJump, addr 0x4022440, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x401d524, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method ArgumentCannotBeOfTypeVoid, addr 0x4021f98, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentCannotBeOfTypeVoid(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArray, addr 0x40202d8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArray(::StringW  paramName) ;

/// @brief Method ArgumentMustBeArrayIndexType, addr 0x4020564, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeArrayIndexType(::StringW  paramName) ;

/// @brief Method ArgumentMustBeBoolean, addr 0x40203ac, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeBoolean(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x4020480, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName) ;

/// @brief Method ArgumentMustBeInteger, addr 0x4020554, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeInteger(::StringW  paramName, int32_t  index) ;

/// @brief Method ArgumentMustBeSingleDimensionalArrayType, addr 0x4020638, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustBeSingleDimensionalArrayType(::StringW  paramName) ;

/// @brief Method ArgumentMustNotHaveValueType, addr 0x401f23c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentMustNotHaveValueType(::StringW  paramName) ;

/// @brief Method ArgumentOutOfRange, addr 0x401b508, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentOutOfRange(::StringW  paramName) ;

/// @brief Method ArgumentTypesMustMatch, addr 0x402070c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ArgumentTypesMustMatch() ;

/// @brief Method BinaryOperatorNotDefined, addr 0x401fea4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x401d9b8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BindingCannotBeNull, addr 0x401de34, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BindingCannotBeNull() ;

/// @brief Method BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x401f9e8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method BothAccessorsMustBeStatic, addr 0x401ec80, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BothAccessorsMustBeStatic(::StringW  paramName) ;

/// @brief Method BoundsCannotBeLessThanOne, addr 0x401e788, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* BoundsCannotBeLessThanOne(::StringW  paramName) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x40207d0, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoalesceUsedOnNonNullType, addr 0x4020950, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CoalesceUsedOnNonNullType() ;

/// @brief Method CoercionOperatorNotDefined, addr 0x401fcf4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method CollectionModifiedWhileEnumerating, addr 0x401d76c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionModifiedWhileEnumerating() ;

/// @brief Method CollectionReadOnly, addr 0x401d830, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* CollectionReadOnly() ;

/// @brief Method ControlCannotEnterExpression, addr 0x40225bc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterExpression() ;

/// @brief Method ControlCannotEnterTry, addr 0x40224f8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotEnterTry() ;

/// @brief Method ControlCannotLeaveFilterTest, addr 0x402237c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFilterTest() ;

/// @brief Method ControlCannotLeaveFinally, addr 0x40222b8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ControlCannotLeaveFinally() ;

/// @brief Method ConversionIsNotSupportedForArithmeticTypes, addr 0x4020214, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method DuplicateVariable, addr 0x401f764, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method DuplicateVariable, addr 0x401f82c, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* DuplicateVariable(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x401dd4c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x401daa0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x401db78, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method EnumerationIsDone, addr 0x4022cf0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* EnumerationIsDone() ;

/// @brief Method ExpressionMustBeReadable, addr 0x4023538, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName) ;

/// @brief Method ExpressionMustBeReadable, addr 0x402360c, size 0x10, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeReadable(::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionMustBeWriteable, addr 0x401f168, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionMustBeWriteable(::StringW  paramName) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x4020a14, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x4020bc4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x4023424, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x4023504, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x4020c9c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x4023050, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x4023148, size 0x3c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x4023184, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x4023264, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x4020aec, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x4020d74, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ExpressionTypeNotInvocable(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x401faac, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FaultCannotHaveCatchOrFinally, addr 0x401f850, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* FaultCannotHaveCatchOrFinally(::StringW  paramName) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x4020f14, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method FirstArgumentMustBeCallSite, addr 0x401e2f0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* FirstArgumentMustBeCallSite() ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x4021de8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method GetParamName, addr 0x401e56c, size 0x94, virtual false, abstract: false, final false
static inline ::StringW GetParamName(::StringW  paramName, int32_t  index) ;

/// @brief Method IncorrectNumberOfConstructorArguments, addr 0x4022f8c, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfConstructorArguments() ;

/// @brief Method IncorrectNumberOfIndexes, addr 0x4020ffc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfIndexes() ;

/// @brief Method IncorrectNumberOfLambdaArguments, addr 0x4023298, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaArguments() ;

/// @brief Method IncorrectNumberOfLambdaDeclarationParameters, addr 0x40210c0, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x402335c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectNumberOfMethodCallArguments(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x4020888, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* IncorrectTypeForTypeAs(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method IndexesOfSetGetMustMatch, addr 0x401e164, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* IndexesOfSetGetMustMatch(::StringW  paramName) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x4021810, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x4020e3c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x4021730, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method InvalidArgumentValue, addr 0x402361c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidArgumentValue(::StringW  paramName) ;

/// @brief Method InvalidLvalue, addr 0x4022738, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidLvalue(::System::Linq::Expressions::ExpressionType  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x401d46c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x40236f0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidNullValue(::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidProgram, addr 0x4022c9c, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidProgram() ;

/// @brief Method InvalidTypeException, addr 0x40237b8, size 0xb8, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidTypeException(::System::Object*  value, ::System::Type*  type, ::StringW  paramName) ;

/// @brief Method InvalidUnboxType, addr 0x401f094, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* InvalidUnboxType(::StringW  paramName) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x401d6b4, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelMustBeVoidOrHaveExpression, addr 0x401f3d4, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelMustBeVoidOrHaveExpression(::StringW  paramName) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x4022148, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x4022200, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LabelTypeMustBeVoid, addr 0x401f4a8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LabelTypeMustBeVoid(::StringW  paramName) ;

/// @brief Method LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x4021184, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* LambdaTypeMustBeDerivedFromSystemDelegate(::StringW  paramName) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x4021c38, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x4021258, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MemberNotFieldOrProperty(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodContainsGenericParameters, addr 0x4021320, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodIsGeneric, addr 0x40213e8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x4021d10, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x4021ec0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustBeReducible, addr 0x401f310, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustBeReducible() ;

/// @brief Method MustReduceToDifferent, addr 0x401d8f4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustReduceToDifferent() ;

/// @brief Method MustRewriteChildToSameType, addr 0x40229c4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x40228dc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x4022aac, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NoOrInvalidRuleProduced, addr 0x401e6c4, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NoOrInvalidRuleProduced() ;

/// @brief Method NonAbstractConstructorRequired, addr 0x4022bd8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* NonAbstractConstructorRequired() ;

/// @brief Method NonLocalJumpWithValue, addr 0x4022680, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method NotSupported, addr 0x4022b84, size 0x54, virtual false, abstract: false, final false
static inline ::System::Exception* NotSupported() ;

/// @brief Method OnlyStaticFieldsHaveNullInstance, addr 0x401ed54, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticFieldsHaveNullInstance(::StringW  paramName) ;

/// @brief Method OnlyStaticMethodsHaveNullInstance, addr 0x401eefc, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method OnlyStaticPropertiesHaveNullInstance, addr 0x401ee28, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* OnlyStaticPropertiesHaveNullInstance(::StringW  paramName) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x4020064, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x402206c, size 0x80, virtual false, abstract: false, final false
static inline ::System::Exception* OutOfRange(::StringW  paramName, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x402013c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x4021578, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyCannotHaveRefType, addr 0x401e090, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyCannotHaveRefType(::StringW  paramName) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x40214b0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyDoesNotHaveAccessor(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method PropertyNotDefinedForType, addr 0x4021650, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method PropertyTypeCannotBeVoid, addr 0x401efc0, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeCannotBeVoid(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchGetter, addr 0x401ead8, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchGetter(::StringW  paramName) ;

/// @brief Method PropertyTypeMustMatchSetter, addr 0x401ebac, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* PropertyTypeMustMatchSetter(::StringW  paramName) ;

/// @brief Method QuotedExpressionMustBeLambda, addr 0x401f57c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* QuotedExpressionMustBeLambda(::StringW  paramName) ;

/// @brief Method ReducedNotCompatible, addr 0x401def8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducedNotCompatible() ;

/// @brief Method ReducibleMustOverrideReduce, addr 0x401d3a8, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* ReducibleMustOverrideReduce() ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x401ff8c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method RethrowRequiresCatch, addr 0x4022818, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* RethrowRequiresCatch() ;

/// @brief Method SameKeyExistsInExpando, addr 0x401d5dc, size 0x8c, virtual false, abstract: false, final false
static inline ::System::Exception* SameKeyExistsInExpando(::System::Object*  key) ;

/// @brief Method SetterHasNoParams, addr 0x401dfbc, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterHasNoParams(::StringW  paramName) ;

/// @brief Method SetterMustBeVoid, addr 0x401ea04, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* SetterMustBeVoid(::StringW  paramName) ;

/// @brief Method TryMustHaveCatchFinallyOrFault, addr 0x401f924, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TryMustHaveCatchFinallyOrFault() ;

/// @brief Method TypeContainsGenericParameters, addr 0x4022db4, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeContainsGenericParameters, addr 0x4022e7c, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeContainsGenericParameters(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeIsGeneric, addr 0x4022ea0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method TypeIsGeneric, addr 0x4022f68, size 0x24, virtual false, abstract: false, final false
static inline ::System::Exception* TypeIsGeneric(::System::Object*  p0, ::StringW  paramName, int32_t  index) ;

/// @brief Method TypeMustBeDerivedFromSystemDelegate, addr 0x401e600, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method TypeMustNotBeByRef, addr 0x401e85c, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBeByRef(::StringW  paramName) ;

/// @brief Method TypeMustNotBePointer, addr 0x401e930, size 0x94, virtual false, abstract: false, final false
static inline ::System::Exception* TypeMustNotBePointer(::StringW  paramName) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x401e238, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x401fdcc, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x40218f8, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledBinary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UnhandledUnary, addr 0x40219c0, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UnhandledUnary(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x4021a88, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x4021b60, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x401fb64, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustBeStatic(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x401fc2c, size 0x7c, virtual false, abstract: false, final false
static inline ::System::Exception* UserDefinedOperatorMustNotBeVoid(::System::Object*  p0, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x401f650, size 0x84, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName) ;

/// @brief Method VariableMustNotBeByRef, addr 0x401f730, size 0x34, virtual false, abstract: false, final false
static inline ::System::Exception* VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1, ::StringW  paramName, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Error() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Error(Error && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Error", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Error(Error const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Error, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Error);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Error*, "System.Linq.Expressions", "Error");
