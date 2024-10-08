#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Strings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Strings)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class Strings;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Strings);
// Type: System.Linq.Expressions::Strings
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::Strings*
class CORDL_TYPE Strings : public ::System::Object {
public:
// Declarations
/// @brief Method AmbiguousJump, addr 0x40224ac, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousJump(::System::Object*  p0) ;

/// @brief Method AmbiguousMatchInExpandoObject, addr 0x401d590, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW AmbiguousMatchInExpandoObject(::System::Object*  p0) ;

/// @brief Method BinaryOperatorNotDefined, addr 0x401ff28, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method BinderNotCompatibleWithCallSite, addr 0x401da3c, size 0x64, virtual false, abstract: false, final false
static inline ::StringW BinderNotCompatibleWithCallSite(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method CannotAutoInitializeValueTypeMemberThroughProperty, addr 0x402083c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW CannotAutoInitializeValueTypeMemberThroughProperty(::System::Object*  p0) ;

/// @brief Method CoercionOperatorNotDefined, addr 0x401fd70, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW CoercionOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DuplicateVariable, addr 0x401f7e0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW DuplicateVariable(::System::Object*  p0) ;

/// @brief Method DynamicBinderResultNotAssignable, addr 0x401ddd0, size 0x64, virtual false, abstract: false, final false
static inline ::StringW DynamicBinderResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method DynamicBindingNeedsRestrictions, addr 0x401db1c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW DynamicBindingNeedsRestrictions(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method DynamicObjectResultNotAssignable, addr 0x401dc0c, size 0x140, virtual false, abstract: false, final false
static inline ::StringW DynamicObjectResultNotAssignable(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3) ;

/// @brief Method ExpressionTypeCannotInitializeArrayType, addr 0x4020a90, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeCannotInitializeArrayType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchAssignment, addr 0x4020c40, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchAssignment(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchConstructorParameter, addr 0x40234a8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchConstructorParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchLabel, addr 0x4020d18, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchLabel(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchMethodParameter, addr 0x40230e4, size 0x64, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchMethodParameter(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method ExpressionTypeDoesNotMatchParameter, addr 0x4023208, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchParameter(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeDoesNotMatchReturn, addr 0x4020b68, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeDoesNotMatchReturn(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ExpressionTypeNotInvocable, addr 0x4020df0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExpressionTypeNotInvocable(::System::Object*  p0) ;

/// @brief Method ExtensionNodeMustOverrideProperty, addr 0x401fb18, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW ExtensionNodeMustOverrideProperty(::System::Object*  p0) ;

/// @brief Method FieldInfoNotDefinedForType, addr 0x4020f98, size 0x64, virtual false, abstract: false, final false
static inline ::StringW FieldInfoNotDefinedForType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method GenericMethodWithArgsDoesNotExistOnType, addr 0x4021e64, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW GenericMethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method IncorrectNumberOfMethodCallArguments, addr 0x40233d8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectNumberOfMethodCallArguments(::System::Object*  p0) ;

/// @brief Method IncorrectTypeForTypeAs, addr 0x4020904, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW IncorrectTypeForTypeAs(::System::Object*  p0) ;

/// @brief Method InstanceAndMethodTypeMismatch, addr 0x4021894, size 0x64, virtual false, abstract: false, final false
static inline ::StringW InstanceAndMethodTypeMismatch(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method InstanceFieldNotDefinedForType, addr 0x4020eb8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstanceFieldNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InstancePropertyNotDefinedForType, addr 0x40217b4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InstancePropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method InvalidLvalue, addr 0x40227cc, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidLvalue(::System::Object*  p0) ;

/// @brief Method InvalidMetaObjectCreated, addr 0x401d4d8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidMetaObjectCreated(::System::Object*  p0) ;

/// @brief Method InvalidNullValue, addr 0x402376c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW InvalidNullValue(::System::Object*  p0) ;

/// @brief Method InvalidObjectType, addr 0x4023870, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW InvalidObjectType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method KeyDoesNotExistInExpando, addr 0x401d720, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW KeyDoesNotExistInExpando(::System::Object*  p0) ;

/// @brief Method LabelTargetAlreadyDefined, addr 0x40221b4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetAlreadyDefined(::System::Object*  p0) ;

/// @brief Method LabelTargetUndefined, addr 0x402226c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW LabelTargetUndefined(::System::Object*  p0) ;

/// @brief Method LogicalOperatorMustHaveBooleanOperators, addr 0x4021cb4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW LogicalOperatorMustHaveBooleanOperators(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MemberNotFieldOrProperty, addr 0x40212d4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MemberNotFieldOrProperty(::System::Object*  p0) ;

/// @brief Method MethodContainsGenericParameters, addr 0x402139c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method MethodIsGeneric, addr 0x4021464, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW MethodIsGeneric(::System::Object*  p0) ;

/// @brief Method MethodWithArgsDoesNotExistOnType, addr 0x4021d8c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithArgsDoesNotExistOnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MethodWithMoreThanOneMatch, addr 0x4021f3c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MethodWithMoreThanOneMatch(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method MustRewriteChildToSameType, addr 0x4022a48, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteChildToSameType(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteToSameNode, addr 0x4022960, size 0x64, virtual false, abstract: false, final false
static inline ::StringW MustRewriteToSameNode(::System::Object*  p0, ::System::Object*  p1, ::System::Object*  p2) ;

/// @brief Method MustRewriteWithoutMethod, addr 0x4022b28, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW MustRewriteWithoutMethod(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method NonLocalJumpWithValue, addr 0x40226ec, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW NonLocalJumpWithValue(::System::Object*  p0) ;

/// @brief Method OperandTypesDoNotMatchParameters, addr 0x40200e0, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OperandTypesDoNotMatchParameters(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OutOfRange, addr 0x40220ec, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OutOfRange(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method OverloadOperatorTypeDoesNotMatchConversionType, addr 0x40201b8, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW OverloadOperatorTypeDoesNotMatchConversionType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ParameterExpressionNotValidAsDelegate, addr 0x40215f4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ParameterExpressionNotValidAsDelegate(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method PropertyDoesNotHaveAccessor, addr 0x402152c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW PropertyDoesNotHaveAccessor(::System::Object*  p0) ;

/// @brief Method PropertyNotDefinedForType, addr 0x40216d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW PropertyNotDefinedForType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method ReferenceEqualityNotDefined, addr 0x4020008, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW ReferenceEqualityNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method SameKeyExistsInExpando, addr 0x401d668, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW SameKeyExistsInExpando(::System::Object*  p0) ;

/// @brief Method TypeContainsGenericParameters, addr 0x4022e30, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeContainsGenericParameters(::System::Object*  p0) ;

/// @brief Method TypeIsGeneric, addr 0x4022f1c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeIsGeneric(::System::Object*  p0) ;

/// @brief Method TypeParameterIsNotDelegate, addr 0x401e2a4, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW TypeParameterIsNotDelegate(::System::Object*  p0) ;

/// @brief Method UnaryOperatorNotDefined, addr 0x401fe48, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UnaryOperatorNotDefined(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UnhandledBinary, addr 0x4021974, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledBinary(::System::Object*  p0) ;

/// @brief Method UnhandledUnary, addr 0x4021a3c, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UnhandledUnary(::System::Object*  p0) ;

/// @brief Method UserDefinedOpMustHaveConsistentTypes, addr 0x4021b04, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveConsistentTypes(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOpMustHaveValidReturnType, addr 0x4021bdc, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOpMustHaveValidReturnType(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method UserDefinedOperatorMustBeStatic, addr 0x401fbe0, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustBeStatic(::System::Object*  p0) ;

/// @brief Method UserDefinedOperatorMustNotBeVoid, addr 0x401fca8, size 0x4c, virtual false, abstract: false, final false
static inline ::StringW UserDefinedOperatorMustNotBeVoid(::System::Object*  p0) ;

/// @brief Method VariableMustNotBeByRef, addr 0x401f6d4, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW VariableMustNotBeByRef(::System::Object*  p0, ::System::Object*  p1) ;

/// @brief Method get_AccessorsCannotHaveByRefArgs, addr 0x401e51c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveByRefArgs() ;

/// @brief Method get_AccessorsCannotHaveVarArgs, addr 0x401e448, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_AccessorsCannotHaveVarArgs() ;

/// @brief Method get_ArgumentCannotBeOfTypeVoid, addr 0x402202c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentCannotBeOfTypeVoid() ;

/// @brief Method get_ArgumentMustBeArray, addr 0x402036c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArray() ;

/// @brief Method get_ArgumentMustBeArrayIndexType, addr 0x40205f8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeArrayIndexType() ;

/// @brief Method get_ArgumentMustBeBoolean, addr 0x4020440, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeBoolean() ;

/// @brief Method get_ArgumentMustBeInteger, addr 0x4020514, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeInteger() ;

/// @brief Method get_ArgumentMustBeSingleDimensionalArrayType, addr 0x40206cc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustBeSingleDimensionalArrayType() ;

/// @brief Method get_ArgumentMustNotHaveValueType, addr 0x401f2d0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentMustNotHaveValueType() ;

/// @brief Method get_ArgumentTypesMustMatch, addr 0x4020790, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ArgumentTypesMustMatch() ;

/// @brief Method get_BindingCannotBeNull, addr 0x401deb8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BindingCannotBeNull() ;

/// @brief Method get_BodyOfCatchMustHaveSameTypeAsBodyOfTry, addr 0x401fa6c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BodyOfCatchMustHaveSameTypeAsBodyOfTry() ;

/// @brief Method get_BothAccessorsMustBeStatic, addr 0x401ed14, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BothAccessorsMustBeStatic() ;

/// @brief Method get_BoundsCannotBeLessThanOne, addr 0x401e81c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_BoundsCannotBeLessThanOne() ;

/// @brief Method get_CoalesceUsedOnNonNullType, addr 0x40209d4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CoalesceUsedOnNonNullType() ;

/// @brief Method get_CollectionModifiedWhileEnumerating, addr 0x401d7f0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionModifiedWhileEnumerating() ;

/// @brief Method get_CollectionReadOnly, addr 0x401d8b4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_CollectionReadOnly() ;

/// @brief Method get_ControlCannotEnterExpression, addr 0x4022640, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterExpression() ;

/// @brief Method get_ControlCannotEnterTry, addr 0x402257c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotEnterTry() ;

/// @brief Method get_ControlCannotLeaveFilterTest, addr 0x4022400, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFilterTest() ;

/// @brief Method get_ControlCannotLeaveFinally, addr 0x402233c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ControlCannotLeaveFinally() ;

/// @brief Method get_ConversionIsNotSupportedForArithmeticTypes, addr 0x4020298, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ConversionIsNotSupportedForArithmeticTypes() ;

/// @brief Method get_EnumerationIsDone, addr 0x4022d74, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_EnumerationIsDone() ;

/// @brief Method get_ExpressionMustBeReadable, addr 0x40235cc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeReadable() ;

/// @brief Method get_ExpressionMustBeWriteable, addr 0x401f1fc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ExpressionMustBeWriteable() ;

/// @brief Method get_FaultCannotHaveCatchOrFinally, addr 0x401f8e4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FaultCannotHaveCatchOrFinally() ;

/// @brief Method get_FirstArgumentMustBeCallSite, addr 0x401e374, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_FirstArgumentMustBeCallSite() ;

/// @brief Method get_IncorrectNumberOfConstructorArguments, addr 0x4023010, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfConstructorArguments() ;

/// @brief Method get_IncorrectNumberOfIndexes, addr 0x4021080, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfIndexes() ;

/// @brief Method get_IncorrectNumberOfLambdaArguments, addr 0x402331c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaArguments() ;

/// @brief Method get_IncorrectNumberOfLambdaDeclarationParameters, addr 0x4021144, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IncorrectNumberOfLambdaDeclarationParameters() ;

/// @brief Method get_IndexesOfSetGetMustMatch, addr 0x401e1f8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_IndexesOfSetGetMustMatch() ;

/// @brief Method get_InvalidArgumentValue, addr 0x40236b0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidArgumentValue() ;

/// @brief Method get_InvalidUnboxType, addr 0x401f128, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_InvalidUnboxType() ;

/// @brief Method get_LabelMustBeVoidOrHaveExpression, addr 0x401f468, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelMustBeVoidOrHaveExpression() ;

/// @brief Method get_LabelTypeMustBeVoid, addr 0x401f53c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LabelTypeMustBeVoid() ;

/// @brief Method get_LambdaTypeMustBeDerivedFromSystemDelegate, addr 0x4021218, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LambdaTypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_MustBeReducible, addr 0x401f394, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustBeReducible() ;

/// @brief Method get_MustReduceToDifferent, addr 0x401d978, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_MustReduceToDifferent() ;

/// @brief Method get_NoOrInvalidRuleProduced, addr 0x401e748, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NoOrInvalidRuleProduced() ;

/// @brief Method get_NonAbstractConstructorRequired, addr 0x4022c5c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_NonAbstractConstructorRequired() ;

/// @brief Method get_OnlyStaticFieldsHaveNullInstance, addr 0x401ede8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticFieldsHaveNullInstance() ;

/// @brief Method get_OnlyStaticMethodsHaveNullInstance, addr 0x401ef80, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticMethodsHaveNullInstance() ;

/// @brief Method get_OnlyStaticPropertiesHaveNullInstance, addr 0x401eebc, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_OnlyStaticPropertiesHaveNullInstance() ;

/// @brief Method get_PropertyCannotHaveRefType, addr 0x401e124, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyCannotHaveRefType() ;

/// @brief Method get_PropertyTypeCannotBeVoid, addr 0x401f054, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeCannotBeVoid() ;

/// @brief Method get_PropertyTypeMustMatchGetter, addr 0x401eb6c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchGetter() ;

/// @brief Method get_PropertyTypeMustMatchSetter, addr 0x401ec40, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_PropertyTypeMustMatchSetter() ;

/// @brief Method get_QuotedExpressionMustBeLambda, addr 0x401f610, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_QuotedExpressionMustBeLambda() ;

/// @brief Method get_ReducedNotCompatible, addr 0x401df7c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducedNotCompatible() ;

/// @brief Method get_ReducibleMustOverrideReduce, addr 0x401d42c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_ReducibleMustOverrideReduce() ;

/// @brief Method get_RethrowRequiresCatch, addr 0x402289c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_RethrowRequiresCatch() ;

/// @brief Method get_SetterHasNoParams, addr 0x401e050, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterHasNoParams() ;

/// @brief Method get_SetterMustBeVoid, addr 0x401ea98, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_SetterMustBeVoid() ;

/// @brief Method get_TryMustHaveCatchFinallyOrFault, addr 0x401f9a8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TryMustHaveCatchFinallyOrFault() ;

/// @brief Method get_TypeMustBeDerivedFromSystemDelegate, addr 0x401e684, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustBeDerivedFromSystemDelegate() ;

/// @brief Method get_TypeMustNotBeByRef, addr 0x401e8f0, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBeByRef() ;

/// @brief Method get_TypeMustNotBePointer, addr 0x401e9c4, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_TypeMustNotBePointer() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Strings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Strings(Strings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Strings", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Strings(Strings const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Strings, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::Strings);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Strings*, "System.Linq.Expressions", "Strings");
