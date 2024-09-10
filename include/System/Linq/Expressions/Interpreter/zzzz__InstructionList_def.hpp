#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/InstructionList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InstructionList)
namespace GlobalNamespace {
struct __InstructionList__DebugView__InstructionView;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Linq::Expressions::Interpreter {
class BranchLabel;
}
namespace System::Linq::Expressions::Interpreter {
class ByRefUpdater;
}
namespace System::Linq::Expressions::Interpreter {
class EnterTryFaultInstruction;
}
namespace System::Linq::Expressions::Interpreter {
struct InstructionArray;
}
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class LightDelegateCreator;
}
namespace System::Linq::Expressions::Interpreter {
class OffsetInstruction;
}
namespace System::Linq::Expressions::Interpreter {
struct RuntimeLabel;
}
namespace System::Linq::Expressions::Interpreter {
class __InstructionList__DebugView;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Runtime::CompilerServices {
template<typename T>
class StrongBox_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
struct TypeCode;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class InstructionList;
}
namespace System::Linq::Expressions::Interpreter {
class __InstructionList__DebugView;
}
namespace GlobalNamespace {
struct __InstructionList__DebugView__InstructionView;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::InstructionList);
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__InstructionList__DebugView);
MARK_VAL_T(::GlobalNamespace::__InstructionList__DebugView__InstructionView);
// Type: ::InstructionView
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::InstructionList::DebugView::InstructionView
struct CORDL_TYPE __InstructionList__DebugView__InstructionView {
public:
// Declarations
/// @brief Method GetValue, addr 0x4041cac, size 0x8, virtual false, abstract: false, final false
inline ::StringW GetValue() ;

/// @brief Method .ctor, addr 0x4041c9c, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::System::Linq::Expressions::Interpreter::Instruction*  instruction, ::StringW  name, int32_t  index, int32_t  stackDepth, int32_t  continuationsDepth) ;

// Ctor Parameters []
// @brief default ctor
constexpr __InstructionList__DebugView__InstructionView() ;

// Ctor Parameters [CppParam { name: "_index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_stackDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_continuationsDepth", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_instruction", ty: "::System::Linq::Expressions::Interpreter::Instruction*", modifiers: "", def_value: None }]
constexpr __InstructionList__DebugView__InstructionView(int32_t  _index, int32_t  _stackDepth, int32_t  _continuationsDepth, ::StringW  _name, ::System::Linq::Expressions::Interpreter::Instruction*  _instruction) noexcept;

/// @brief Field _index, offset: 0x0, size: 0x4, def value: None
 int32_t  _index;

/// @brief Field _stackDepth, offset: 0x4, size: 0x4, def value: None
 int32_t  _stackDepth;

/// @brief Field _continuationsDepth, offset: 0x8, size: 0x4, def value: None
 int32_t  _continuationsDepth;

/// @brief Field _name, offset: 0x10, size: 0x8, def value: None
 ::StringW  _name;

/// @brief Field _instruction, offset: 0x18, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::Instruction*  _instruction;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__InstructionList__DebugView__InstructionView, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__InstructionList__DebugView__InstructionView, _index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InstructionList__DebugView__InstructionView, _stackDepth) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InstructionList__DebugView__InstructionView, _continuationsDepth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InstructionList__DebugView__InstructionView, _name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__InstructionList__DebugView__InstructionView, _instruction) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::DebugView
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::InstructionList::DebugView*
class CORDL_TYPE __InstructionList__DebugView : public ::System::Object {
public:
// Declarations
using InstructionView = ::GlobalNamespace::__InstructionList__DebugView__InstructionView;

/// @brief Method GetInstructionViews, addr 0x403befc, size 0x5d0, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::__InstructionList__DebugView__InstructionView,::Array<::GlobalNamespace::__InstructionList__DebugView__InstructionView>*> GetInstructionViews(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Interpreter::Instruction*>*  instructions, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*  objects, ::System::Func_2<int32_t,int32_t>*  labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  debugCookies) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __InstructionList__DebugView() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__InstructionList__DebugView", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__InstructionList__DebugView(__InstructionList__DebugView && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__InstructionList__DebugView", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__InstructionList__DebugView(__InstructionList__DebugView const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__InstructionList__DebugView, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
// Type: System.Linq.Expressions.Interpreter::InstructionList
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::InstructionList*
class CORDL_TYPE InstructionList : public ::System::Object {
public:
// Declarations
using DebugView = ::System::Linq::Expressions::Interpreter::__InstructionList__DebugView;

 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_CurrentContinuationsDepth)) int32_t  CurrentContinuationsDepth;

 __declspec(property(get=get_CurrentStackDepth)) int32_t  CurrentStackDepth;

/// @brief Field _currentContinuationsDepth, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentContinuationsDepth, put=__cordl_internal_set__currentContinuationsDepth)) int32_t  _currentContinuationsDepth;

/// @brief Field _currentStackDepth, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentStackDepth, put=__cordl_internal_set__currentStackDepth)) int32_t  _currentStackDepth;

/// @brief Field _debugCookies, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__debugCookies, put=__cordl_internal_set__debugCookies)) ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  _debugCookies;

/// @brief Field _instructions, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__instructions, put=__cordl_internal_set__instructions)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  _instructions;

/// @brief Field _labels, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__labels, put=__cordl_internal_set__labels)) ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  _labels;

/// @brief Field _maxContinuationDepth, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxContinuationDepth, put=__cordl_internal_set__maxContinuationDepth)) int32_t  _maxContinuationDepth;

/// @brief Field _maxStackDepth, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get__maxStackDepth, put=__cordl_internal_set__maxStackDepth)) int32_t  _maxStackDepth;

/// @brief Field _objects, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__objects, put=__cordl_internal_set__objects)) ::System::Collections::Generic::List_1<::System::Object*>*  _objects;

/// @brief Field _runtimeLabelCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__runtimeLabelCount, put=__cordl_internal_set__runtimeLabelCount)) int32_t  _runtimeLabelCount;

/// @brief Field s_Ints, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_Ints, put=setStaticF_s_Ints)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_Ints;

/// @brief Field s_assignLocal, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_assignLocal, put=setStaticF_s_assignLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_assignLocal;

/// @brief Field s_assignLocalBoxed, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_assignLocalBoxed, put=setStaticF_s_assignLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_assignLocalBoxed;

/// @brief Field s_assignLocalToClosure, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_assignLocalToClosure, put=setStaticF_s_assignLocalToClosure)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_assignLocalToClosure;

/// @brief Field s_emptyRuntimeLabels, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_emptyRuntimeLabels, put=setStaticF_s_emptyRuntimeLabels)) ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>  s_emptyRuntimeLabels;

/// @brief Field s_false, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_false, put=setStaticF_s_false)) ::System::Linq::Expressions::Interpreter::Instruction*  s_false;

/// @brief Field s_loadFields, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadFields, put=setStaticF_s_loadFields)) ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*  s_loadFields;

/// @brief Field s_loadLocal, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadLocal, put=setStaticF_s_loadLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_loadLocal;

/// @brief Field s_loadLocalBoxed, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadLocalBoxed, put=setStaticF_s_loadLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_loadLocalBoxed;

/// @brief Field s_loadLocalFromClosure, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadLocalFromClosure, put=setStaticF_s_loadLocalFromClosure)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_loadLocalFromClosure;

/// @brief Field s_loadLocalFromClosureBoxed, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadLocalFromClosureBoxed, put=setStaticF_s_loadLocalFromClosureBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_loadLocalFromClosureBoxed;

/// @brief Field s_loadObjectCached, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_loadObjectCached, put=setStaticF_s_loadObjectCached)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_loadObjectCached;

/// @brief Field s_null, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_null, put=setStaticF_s_null)) ::System::Linq::Expressions::Interpreter::Instruction*  s_null;

/// @brief Field s_storeLocal, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_storeLocal, put=setStaticF_s_storeLocal)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_storeLocal;

/// @brief Field s_storeLocalBoxed, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_storeLocalBoxed, put=setStaticF_s_storeLocalBoxed)) ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  s_storeLocalBoxed;

/// @brief Field s_true, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_s_true, put=setStaticF_s_true)) ::System::Linq::Expressions::Interpreter::Instruction*  s_true;

/// @brief Method AssignLocalBoxed, addr 0x403df88, size 0x1cc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* AssignLocalBoxed(int32_t  index) ;

/// @brief Method BuildRuntimeLabels, addr 0x403c8cc, size 0x26c, virtual false, abstract: false, final false
inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> BuildRuntimeLabels() ;

/// @brief Method Emit, addr 0x403c500, size 0xa8, virtual false, abstract: false, final false
inline void Emit(::System::Linq::Expressions::Interpreter::Instruction*  instruction) ;

/// @brief Method EmitAdd, addr 0x403eae4, size 0x38, virtual false, abstract: false, final false
inline void EmitAdd(::System::Type*  type, bool  checked) ;

/// @brief Method EmitAnd, addr 0x403ebf8, size 0x24, virtual false, abstract: false, final false
inline void EmitAnd(::System::Type*  type) ;

/// @brief Method EmitArrayLength, addr 0x4040878, size 0x60, virtual false, abstract: false, final false
inline void EmitArrayLength() ;

/// @brief Method EmitAssignLocal, addr 0x403db64, size 0x1dc, virtual false, abstract: false, final false
inline void EmitAssignLocal(int32_t  index) ;

/// @brief Method EmitAssignLocalBoxed, addr 0x403df1c, size 0x6c, virtual false, abstract: false, final false
inline void EmitAssignLocalBoxed(int32_t  index) ;

/// @brief Method EmitAssignLocalToClosure, addr 0x403e38c, size 0x1dc, virtual false, abstract: false, final false
inline void EmitAssignLocalToClosure(int32_t  index) ;

/// @brief Method EmitBranch, addr 0x4041210, size 0x40, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::OffsetInstruction*  instruction, ::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method EmitBranch, addr 0x4041250, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method EmitBranch, addr 0x40412bc, size 0x84, virtual false, abstract: false, final false
inline void EmitBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue) ;

/// @brief Method EmitBranchFalse, addr 0x4041418, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranchFalse(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel) ;

/// @brief Method EmitBranchTrue, addr 0x40413ac, size 0x6c, virtual false, abstract: false, final false
inline void EmitBranchTrue(::System::Linq::Expressions::Interpreter::BranchLabel*  elseLabel) ;

/// @brief Method EmitByRefCall, addr 0x4040dd0, size 0xac, virtual false, abstract: false, final false
inline void EmitByRefCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>  byrefArgs) ;

/// @brief Method EmitByRefNew, addr 0x4040728, size 0x84, virtual false, abstract: false, final false
inline void EmitByRefNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters, ::ArrayW<::System::Linq::Expressions::Interpreter::ByRefUpdater*,::Array<::System::Linq::Expressions::Interpreter::ByRefUpdater*>*>  updaters) ;

/// @brief Method EmitCall, addr 0x4040d28, size 0x80, virtual false, abstract: false, final false
inline void EmitCall(::System::Reflection::MethodInfo*  method) ;

/// @brief Method EmitCall, addr 0x4040da8, size 0x28, virtual false, abstract: false, final false
inline void EmitCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters) ;

/// @brief Method EmitCast, addr 0x4040520, size 0x24, virtual false, abstract: false, final false
inline void EmitCast(::System::Type*  toType) ;

/// @brief Method EmitCastReferenceToEnum, addr 0x40405b0, size 0x6c, virtual false, abstract: false, final false
inline void EmitCastReferenceToEnum(::System::Type*  toType) ;

/// @brief Method EmitCastToEnum, addr 0x4040544, size 0x6c, virtual false, abstract: false, final false
inline void EmitCastToEnum(::System::Type*  toType) ;

/// @brief Method EmitCoalescingBranch, addr 0x4041340, size 0x6c, virtual false, abstract: false, final false
inline void EmitCoalescingBranch(::System::Linq::Expressions::Interpreter::BranchLabel*  leftNotNull) ;

/// @brief Method EmitConvertToUnderlying, addr 0x40404ac, size 0x74, virtual false, abstract: false, final false
inline void EmitConvertToUnderlying(::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitCreateDelegate, addr 0x40407ac, size 0x6c, virtual false, abstract: false, final false
inline void EmitCreateDelegate(::System::Linq::Expressions::Interpreter::LightDelegateCreator*  creator) ;

/// @brief Method EmitDecrement, addr 0x4040940, size 0x24, virtual false, abstract: false, final false
inline void EmitDecrement(::System::Type*  type) ;

/// @brief Method EmitDefaultValue, addr 0x4040640, size 0x6c, virtual false, abstract: false, final false
inline void EmitDefaultValue(::System::Type*  type) ;

/// @brief Method EmitDiv, addr 0x403eb8c, size 0x24, virtual false, abstract: false, final false
inline void EmitDiv(::System::Type*  type) ;

/// @brief Method EmitDup, addr 0x403d1b4, size 0x60, virtual false, abstract: false, final false
inline void EmitDup() ;

/// @brief Method EmitEnterExceptionFilter, addr 0x4041898, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionFilter() ;

/// @brief Method EmitEnterExceptionHandlerNonVoid, addr 0x4041958, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionHandlerNonVoid() ;

/// @brief Method EmitEnterExceptionHandlerVoid, addr 0x40419b8, size 0x60, virtual false, abstract: false, final false
inline void EmitEnterExceptionHandlerVoid() ;

/// @brief Method EmitEnterFault, addr 0x40417b4, size 0x84, virtual false, abstract: false, final false
inline void EmitEnterFault(::System::Linq::Expressions::Interpreter::BranchLabel*  faultStartLabel) ;

/// @brief Method EmitEnterFinally, addr 0x40416d0, size 0x84, virtual false, abstract: false, final false
inline void EmitEnterFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel) ;

/// @brief Method EmitEnterTryCatch, addr 0x4041628, size 0x20, virtual false, abstract: false, final false
inline void EmitEnterTryCatch() ;

/// @brief Method EmitEnterTryFault, addr 0x4041648, size 0x88, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::EnterTryFaultInstruction* EmitEnterTryFault(::System::Linq::Expressions::Interpreter::BranchLabel*  tryEnd) ;

/// @brief Method EmitEnterTryFinally, addr 0x4041604, size 0x24, virtual false, abstract: false, final false
inline void EmitEnterTryFinally(::System::Linq::Expressions::Interpreter::BranchLabel*  finallyStartLabel) ;

/// @brief Method EmitEqual, addr 0x403efec, size 0x2c, virtual false, abstract: false, final false
inline void EmitEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitExclusiveOr, addr 0x403ebd4, size 0x24, virtual false, abstract: false, final false
inline void EmitExclusiveOr(::System::Type*  type) ;

/// @brief Method EmitGetArrayItem, addr 0x403e8d0, size 0x60, virtual false, abstract: false, final false
inline void EmitGetArrayItem() ;

/// @brief Method EmitGoto, addr 0x404116c, size 0xa4, virtual false, abstract: false, final false
inline void EmitGoto(::System::Linq::Expressions::Interpreter::BranchLabel*  label, bool  hasResult, bool  hasValue, bool  labelTargetGetsValue) ;

/// @brief Method EmitGreaterThan, addr 0x4040354, size 0x28, virtual false, abstract: false, final false
inline void EmitGreaterThan(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitGreaterThanOrEqual, addr 0x404037c, size 0x28, virtual false, abstract: false, final false
inline void EmitGreaterThanOrEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitIncrement, addr 0x4040920, size 0x20, virtual false, abstract: false, final false
inline void EmitIncrement(::System::Type*  type) ;

/// @brief Method EmitInitializeLocal, addr 0x403e580, size 0x108, virtual false, abstract: false, final false
inline void EmitInitializeLocal(int32_t  index, ::System::Type*  type) ;

/// @brief Method EmitInitializeParameter, addr 0x403e6e4, size 0x6c, virtual false, abstract: false, final false
inline void EmitInitializeParameter(int32_t  index) ;

/// @brief Method EmitIntSwitch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void EmitIntSwitch(::System::Collections::Generic::Dictionary_2<T,int32_t>*  cases) ;

/// @brief Method EmitLeaveExceptionFilter, addr 0x40418f8, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveExceptionFilter() ;

/// @brief Method EmitLeaveExceptionHandler, addr 0x4041a18, size 0x8c, virtual false, abstract: false, final false
inline void EmitLeaveExceptionHandler(bool  hasValue, ::System::Linq::Expressions::Interpreter::BranchLabel*  tryExpressionEndLabel) ;

/// @brief Method EmitLeaveFault, addr 0x4041838, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveFault() ;

/// @brief Method EmitLeaveFinally, addr 0x4041754, size 0x60, virtual false, abstract: false, final false
inline void EmitLeaveFinally() ;

/// @brief Method EmitLeftShift, addr 0x403ec40, size 0x20, virtual false, abstract: false, final false
inline void EmitLeftShift(::System::Type*  type) ;

/// @brief Method EmitLessThan, addr 0x403f044, size 0x28, virtual false, abstract: false, final false
inline void EmitLessThan(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitLessThanOrEqual, addr 0x403f9cc, size 0x28, virtual false, abstract: false, final false
inline void EmitLessThanOrEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitLoad, addr 0x403cb38, size 0x8, virtual false, abstract: false, final false
inline void EmitLoad(::System::Object*  value) ;

/// @brief Method EmitLoad, addr 0x403cb40, size 0x510, virtual false, abstract: false, final false
inline void EmitLoad(::System::Object*  value, ::System::Type*  type) ;

/// @brief Method EmitLoad, addr 0x403d050, size 0x164, virtual false, abstract: false, final false
inline void EmitLoad(bool  value) ;

/// @brief Method EmitLoadField, addr 0x4040a3c, size 0x1c, virtual false, abstract: false, final false
inline void EmitLoadField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method EmitLoadLocal, addr 0x403d398, size 0x1dc, virtual false, abstract: false, final false
inline void EmitLoadLocal(int32_t  index) ;

/// @brief Method EmitLoadLocalBoxed, addr 0x403d574, size 0x6c, virtual false, abstract: false, final false
inline void EmitLoadLocalBoxed(int32_t  index) ;

/// @brief Method EmitLoadLocalFromClosure, addr 0x403d7ac, size 0x1dc, virtual false, abstract: false, final false
inline void EmitLoadLocalFromClosure(int32_t  index) ;

/// @brief Method EmitLoadLocalFromClosureBoxed, addr 0x403d988, size 0x1dc, virtual false, abstract: false, final false
inline void EmitLoadLocalFromClosureBoxed(int32_t  index) ;

/// @brief Method EmitModulo, addr 0x403ebb0, size 0x24, virtual false, abstract: false, final false
inline void EmitModulo(::System::Type*  type) ;

/// @brief Method EmitMul, addr 0x403eb54, size 0x38, virtual false, abstract: false, final false
inline void EmitMul(::System::Type*  type, bool  checked) ;

/// @brief Method EmitNegate, addr 0x40408d8, size 0x24, virtual false, abstract: false, final false
inline void EmitNegate(::System::Type*  type) ;

/// @brief Method EmitNegateChecked, addr 0x40408fc, size 0x24, virtual false, abstract: false, final false
inline void EmitNegateChecked(::System::Type*  type) ;

/// @brief Method EmitNew, addr 0x40406ac, size 0x7c, virtual false, abstract: false, final false
inline void EmitNew(::System::Reflection::ConstructorInfo*  constructorInfo, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters) ;

/// @brief Method EmitNewArray, addr 0x403e990, size 0x6c, virtual false, abstract: false, final false
inline void EmitNewArray(::System::Type*  elementType) ;

/// @brief Method EmitNewArrayBounds, addr 0x403e9fc, size 0x74, virtual false, abstract: false, final false
inline void EmitNewArrayBounds(::System::Type*  elementType, int32_t  rank) ;

/// @brief Method EmitNewArrayInit, addr 0x403ea70, size 0x74, virtual false, abstract: false, final false
inline void EmitNewArrayInit(::System::Type*  elementType, int32_t  elementCount) ;

/// @brief Method EmitNewRuntimeVariables, addr 0x403e864, size 0x6c, virtual false, abstract: false, final false
inline void EmitNewRuntimeVariables(int32_t  count) ;

/// @brief Method EmitNot, addr 0x404061c, size 0x24, virtual false, abstract: false, final false
inline void EmitNot(::System::Type*  type) ;

/// @brief Method EmitNotEqual, addr 0x403f018, size 0x2c, virtual false, abstract: false, final false
inline void EmitNotEqual(::System::Type*  type, bool  liftedToNull) ;

/// @brief Method EmitNullableCall, addr 0x4040e7c, size 0x54, virtual false, abstract: false, final false
inline void EmitNullableCall(::System::Reflection::MethodInfo*  method, ::ArrayW<::System::Reflection::ParameterInfo*,::Array<::System::Reflection::ParameterInfo*>*>  parameters) ;

/// @brief Method EmitNumericConvertChecked, addr 0x40403a4, size 0x84, virtual false, abstract: false, final false
inline void EmitNumericConvertChecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitNumericConvertUnchecked, addr 0x4040428, size 0x84, virtual false, abstract: false, final false
inline void EmitNumericConvertUnchecked(::System::TypeCode  from, ::System::TypeCode  to, bool  isLiftedToNull) ;

/// @brief Method EmitOr, addr 0x403ec1c, size 0x24, virtual false, abstract: false, final false
inline void EmitOr(::System::Type*  type) ;

/// @brief Method EmitPop, addr 0x403d214, size 0x60, virtual false, abstract: false, final false
inline void EmitPop() ;

/// @brief Method EmitRethrow, addr 0x4041544, size 0x60, virtual false, abstract: false, final false
inline void EmitRethrow() ;

/// @brief Method EmitRethrowVoid, addr 0x40415a4, size 0x60, virtual false, abstract: false, final false
inline void EmitRethrowVoid() ;

/// @brief Method EmitRightShift, addr 0x403efc8, size 0x24, virtual false, abstract: false, final false
inline void EmitRightShift(::System::Type*  type) ;

/// @brief Method EmitSetArrayItem, addr 0x403e930, size 0x60, virtual false, abstract: false, final false
inline void EmitSetArrayItem() ;

/// @brief Method EmitStoreField, addr 0x4040c8c, size 0x9c, virtual false, abstract: false, final false
inline void EmitStoreField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method EmitStoreLocal, addr 0x403dd40, size 0x1dc, virtual false, abstract: false, final false
inline void EmitStoreLocal(int32_t  index) ;

/// @brief Method EmitStoreLocalBoxed, addr 0x403e154, size 0x6c, virtual false, abstract: false, final false
inline void EmitStoreLocalBoxed(int32_t  index) ;

/// @brief Method EmitStoreLocalToClosure, addr 0x403e568, size 0x18, virtual false, abstract: false, final false
inline void EmitStoreLocalToClosure(int32_t  index) ;

/// @brief Method EmitStringSwitch, addr 0x4041aa4, size 0x74, virtual false, abstract: false, final false
inline void EmitStringSwitch(::System::Collections::Generic::Dictionary_2<::StringW,int32_t>*  cases, ::System::Runtime::CompilerServices::StrongBox_1<int32_t>*  nullCase) ;

/// @brief Method EmitSub, addr 0x403eb1c, size 0x38, virtual false, abstract: false, final false
inline void EmitSub(::System::Type*  type, bool  checked) ;

/// @brief Method EmitThrow, addr 0x4041484, size 0x60, virtual false, abstract: false, final false
inline void EmitThrow() ;

/// @brief Method EmitThrowVoid, addr 0x40414e4, size 0x60, virtual false, abstract: false, final false
inline void EmitThrowVoid() ;

/// @brief Method EmitTypeAs, addr 0x40409d0, size 0x6c, virtual false, abstract: false, final false
inline void EmitTypeAs(::System::Type*  type) ;

/// @brief Method EmitTypeEquals, addr 0x4040818, size 0x60, virtual false, abstract: false, final false
inline void EmitTypeEquals() ;

/// @brief Method EmitTypeIs, addr 0x4040964, size 0x6c, virtual false, abstract: false, final false
inline void EmitTypeIs(::System::Type*  type) ;

/// @brief Method EnsureLabelIndex, addr 0x40410c4, size 0x4c, virtual false, abstract: false, final false
inline int32_t EnsureLabelIndex(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method FixupBranch, addr 0x4040fe0, size 0xe4, virtual false, abstract: false, final false
inline void FixupBranch(int32_t  branchIndex, int32_t  offset) ;

/// @brief Method GetInstruction, addr 0x403c7b4, size 0x58, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::Instruction* GetInstruction(int32_t  index) ;

/// @brief Method GetLoadField, addr 0x4040a58, size 0x234, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::Instruction* GetLoadField(::System::Reflection::FieldInfo*  field) ;

/// @brief Method InitImmutableRefBox, addr 0x403e808, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* InitImmutableRefBox(int32_t  index) ;

/// @brief Method InitReference, addr 0x403e688, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* InitReference(int32_t  index) ;

/// @brief Method LoadLocalBoxed, addr 0x403d5e0, size 0x1cc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* LoadLocalBoxed(int32_t  index) ;

/// @brief Method MakeLabel, addr 0x4040ed0, size 0x110, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::BranchLabel* MakeLabel() ;

/// @brief Method MarkLabel, addr 0x404114c, size 0x20, virtual false, abstract: false, final false
inline void MarkLabel(::System::Linq::Expressions::Interpreter::BranchLabel*  label) ;

/// @brief Method MarkRuntimeLabel, addr 0x4041110, size 0x3c, virtual false, abstract: false, final false
inline int32_t MarkRuntimeLabel() ;

static inline ::System::Linq::Expressions::Interpreter::InstructionList* New_ctor() ;

/// @brief Method Parameter, addr 0x403e750, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* Parameter(int32_t  index) ;

/// @brief Method ParameterBox, addr 0x403e7ac, size 0x5c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* ParameterBox(int32_t  index) ;

/// @brief Method StoreLocalBoxed, addr 0x403e1c0, size 0x1cc, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::Instruction* StoreLocalBoxed(int32_t  index) ;

/// @brief Method SwitchToBoxed, addr 0x403d274, size 0x124, virtual false, abstract: false, final false
inline void SwitchToBoxed(int32_t  index, int32_t  instructionIndex) ;

/// @brief Method ToArray, addr 0x403c80c, size 0xc0, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::InstructionArray ToArray() ;

/// @brief Method UnEmit, addr 0x403c654, size 0x108, virtual false, abstract: false, final false
inline void UnEmit() ;

/// @brief Method UpdateStackDepth, addr 0x403c5a8, size 0xac, virtual false, abstract: false, final false
inline void UpdateStackDepth(::System::Linq::Expressions::Interpreter::Instruction*  instruction) ;

constexpr int32_t const& __cordl_internal_get__currentContinuationsDepth() const;

constexpr int32_t& __cordl_internal_get__currentContinuationsDepth() ;

constexpr int32_t const& __cordl_internal_get__currentStackDepth() const;

constexpr int32_t& __cordl_internal_get__currentStackDepth() ;

constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*& __cordl_internal_get__debugCookies() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*> const& __cordl_internal_get__debugCookies() const;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*& __cordl_internal_get__instructions() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*> const& __cordl_internal_get__instructions() const;

constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*& __cordl_internal_get__labels() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*> const& __cordl_internal_get__labels() const;

constexpr int32_t const& __cordl_internal_get__maxContinuationDepth() const;

constexpr int32_t& __cordl_internal_get__maxContinuationDepth() ;

constexpr int32_t const& __cordl_internal_get__maxStackDepth() const;

constexpr int32_t& __cordl_internal_get__maxStackDepth() ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>*& __cordl_internal_get__objects() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> const& __cordl_internal_get__objects() const;

constexpr int32_t const& __cordl_internal_get__runtimeLabelCount() const;

constexpr int32_t& __cordl_internal_get__runtimeLabelCount() ;

constexpr void __cordl_internal_set__currentContinuationsDepth(int32_t  value) ;

constexpr void __cordl_internal_set__currentStackDepth(int32_t  value) ;

constexpr void __cordl_internal_set__debugCookies(::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  value) ;

constexpr void __cordl_internal_set__instructions(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  value) ;

constexpr void __cordl_internal_set__labels(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  value) ;

constexpr void __cordl_internal_set__maxContinuationDepth(int32_t  value) ;

constexpr void __cordl_internal_set__maxStackDepth(int32_t  value) ;

constexpr void __cordl_internal_set__objects(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__runtimeLabelCount(int32_t  value) ;

/// @brief Method .ctor, addr 0x4041b18, size 0x7c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_Ints() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_assignLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_assignLocalBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_assignLocalToClosure() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*> getStaticF_s_emptyRuntimeLabels() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_false() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>* getStaticF_s_loadFields() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_loadLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_loadLocalBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_loadLocalFromClosure() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_loadLocalFromClosureBoxed() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_loadObjectCached() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_null() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_storeLocal() ;

static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_storeLocalBoxed() ;

static inline ::System::Linq::Expressions::Interpreter::Instruction* getStaticF_s_true() ;

/// @brief Method get_Count, addr 0x403c75c, size 0x48, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_CurrentContinuationsDepth, addr 0x403c7ac, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentContinuationsDepth() ;

/// @brief Method get_CurrentStackDepth, addr 0x403c7a4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_CurrentStackDepth() ;

static inline void setStaticF_s_Ints(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_assignLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_assignLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_assignLocalToClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_emptyRuntimeLabels(::ArrayW<::System::Linq::Expressions::Interpreter::RuntimeLabel,::Array<::System::Linq::Expressions::Interpreter::RuntimeLabel>*>  value) ;

static inline void setStaticF_s_false(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

static inline void setStaticF_s_loadFields(::System::Collections::Generic::Dictionary_2<::System::Reflection::FieldInfo*,::System::Linq::Expressions::Interpreter::Instruction*>*  value) ;

static inline void setStaticF_s_loadLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_loadLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_loadLocalFromClosure(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_loadLocalFromClosureBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_loadObjectCached(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_null(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

static inline void setStaticF_s_storeLocal(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_storeLocalBoxed(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*,::Array<::System::Linq::Expressions::Interpreter::Instruction*>*>  value) ;

static inline void setStaticF_s_true(::System::Linq::Expressions::Interpreter::Instruction*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InstructionList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InstructionList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstructionList(InstructionList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstructionList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstructionList(InstructionList const& ) = delete;

/// @brief Field _instructions, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::Instruction*>*  ____instructions;

/// @brief Field _objects, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Object*>*  ____objects;

/// @brief Field _currentStackDepth, offset: 0x20, size: 0x4, def value: None
 int32_t  ____currentStackDepth;

/// @brief Field _maxStackDepth, offset: 0x24, size: 0x4, def value: None
 int32_t  ____maxStackDepth;

/// @brief Field _currentContinuationsDepth, offset: 0x28, size: 0x4, def value: None
 int32_t  ____currentContinuationsDepth;

/// @brief Field _maxContinuationDepth, offset: 0x2c, size: 0x4, def value: None
 int32_t  ____maxContinuationDepth;

/// @brief Field _runtimeLabelCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ____runtimeLabelCount;

/// @brief Field _labels, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::BranchLabel*>*  ____labels;

/// @brief Field _debugCookies, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::System::Collections::Generic::KeyValuePair_2<int32_t,::System::Object*>>*  ____debugCookies;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::InstructionList, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____instructions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____objects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____currentStackDepth) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____maxStackDepth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____currentContinuationsDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____maxContinuationDepth) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____runtimeLabelCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____labels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::InstructionList, ____debugCookies) == 0x40, "Offset mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::InstructionList);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::InstructionList*, "System.Linq.Expressions.Interpreter", "InstructionList");
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__InstructionList__DebugView);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__InstructionList__DebugView*, "System.Linq.Expressions.Interpreter", "InstructionList/DebugView");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__InstructionList__DebugView__InstructionView, "System.Linq.Expressions.Interpreter", "InstructionList/DebugView/InstructionView");
