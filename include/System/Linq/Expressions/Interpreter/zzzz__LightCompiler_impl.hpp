#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/LightCompiler.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionVisitor_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightCompiler_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/Collections/ObjectModel/zzzz__ReadOnlyCollection_1_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__ByRefUpdater_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DebugInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__HybridReferenceDictionary_2_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InstructionList_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Interpreter_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeInfo_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LabelScopeKind_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightCompiler_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LightDelegateCreator_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalDefinition_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariable_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__LocalVariables_def.hpp"
#include "System/Linq/Expressions/zzzz__BinaryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__BlockExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__CatchBlock_def.hpp"
#include "System/Linq/Expressions/zzzz__ElementInit_def.hpp"
#include "System/Linq/Expressions/zzzz__ExpressionType_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_1_def.hpp"
#include "System/Linq/Expressions/zzzz__Expression_def.hpp"
#include "System/Linq/Expressions/zzzz__IArgumentProvider_def.hpp"
#include "System/Linq/Expressions/zzzz__IndexExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__LabelTarget_def.hpp"
#include "System/Linq/Expressions/zzzz__LambdaExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__MemberBinding_def.hpp"
#include "System/Linq/Expressions/zzzz__ParameterExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__StackGuard_def.hpp"
#include "System/Linq/Expressions/zzzz__SwitchCase_def.hpp"
#include "System/Linq/Expressions/zzzz__SwitchExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__TryExpression_def.hpp"
#include "System/Linq/Expressions/zzzz__UnaryExpression_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor.VisitParameter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitParameter)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x4052cd8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                  21
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor.VisitBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Expression* (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)(::System::Linq::Expressions::BlockExpression*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitBlock)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4052d64;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                  6
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor.VisitCatchBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::CatchBlock* (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)(::System::Linq::Expressions::CatchBlock*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitCatchBlock)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x40534c8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                                  22
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor.PushParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::PushParameters)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x4052dcc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        "PushParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor.PopParameters
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::PopParameters)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x4053148;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        "PopParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::*)()>(&::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x40535f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*& System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_get__definedParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____definedParameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*> const& System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_get__definedParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____definedParameters;
}
constexpr void System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_set__definedParameters(::System::Collections::Generic::Dictionary_2<::System::Linq::Expressions::ParameterExpression*,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____definedParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*& System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_get__hoistedParameters()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoistedParameters;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*> const& System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_get__hoistedParameters() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hoistedParameters;
}
constexpr void System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__cordl_internal_set__hoistedParameters(::System::Collections::Generic::HashSet_1<::System::Linq::Expressions::ParameterExpression*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hoistedParameters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitParameter(::System::Linq::Expressions::ParameterExpression*  node)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                    21
                )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitBlock(::System::Linq::Expressions::BlockExpression*  node)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                    6
                )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::CatchBlock* System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitCatchBlock(::System::Linq::Expressions::CatchBlock*  node)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                    22
                )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::CatchBlock*, false>(this, ___internal_method, node);
}
template<typename T>
inline ::System::Linq::Expressions::Expression* System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::VisitLambda(::System::Linq::Expressions::Expression_1<T>*  node)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                    15
                )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Expression*, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::PushParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        "PushParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::PopParameters(::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*  parameters)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        "PopParameters",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Linq::Expressions::ParameterExpression*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parameters);
}
inline ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor* System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>());
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__LightCompiler__QuoteVisitor::__LightCompiler__QuoteVisitor()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler____c._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LightCompiler____c::*)()>(&::System::Linq::Expressions::Interpreter::__LightCompiler____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4053718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler____c._CompileSwitchExpression_b__56_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::__LightCompiler____c::*)(::System::Linq::Expressions::SwitchCase*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileSwitchExpression_b__56_0)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4053720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileSwitchExpression>b__56_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::SwitchCase*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler____c._CompileSwitchExpression_b__56_1
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::__LightCompiler____c::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileSwitchExpression_b__56_1)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x405381c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileSwitchExpression>b__56_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__LightCompiler____c._CompileNoLabelPush_b__101_0
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__LightCompiler____c::*)(::System::Linq::Expressions::Interpreter::LightCompiler*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileNoLabelPush_b__101_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4053894;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileNoLabelPush>b__101_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::setStaticF___9(::System::Linq::Expressions::Interpreter::__LightCompiler____c*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::__LightCompiler____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>(std::forward<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>(value));
}
inline ::System::Linq::Expressions::Interpreter::__LightCompiler____c* System::Linq::Expressions::Interpreter::__LightCompiler____c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::__LightCompiler____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>();
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::setStaticF___9__56_1(::System::Func_2<::System::Linq::Expressions::Expression*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*, "<>9__56_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>(std::forward<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::Expression*,bool>* System::Linq::Expressions::Interpreter::__LightCompiler____c::getStaticF___9__56_1()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::Expression*,bool>*, "<>9__56_1", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>();
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::setStaticF___9__56_0(::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*, "<>9__56_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>(std::forward<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*>(value));
}
inline ::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>* System::Linq::Expressions::Interpreter::__LightCompiler____c::getStaticF___9__56_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Linq::Expressions::SwitchCase*,bool>*, "<>9__56_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>();
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::setStaticF___9__101_0(::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*  value)  {
::cordl_internals::setStaticField<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*, "<>9__101_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>(std::forward<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*>(value));
}
inline ::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>* System::Linq::Expressions::Interpreter::__LightCompiler____c::getStaticF___9__101_0()  {
return ::cordl_internals::getStaticField<::System::Action_2<::System::Linq::Expressions::Interpreter::LightCompiler*,::System::Linq::Expressions::Expression*>*, "<>9__101_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get>();
}
inline ::System::Linq::Expressions::Interpreter::__LightCompiler____c* System::Linq::Expressions::Interpreter::__LightCompiler____c::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>());
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileSwitchExpression_b__56_0(::System::Linq::Expressions::SwitchCase*  c)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileSwitchExpression>b__56_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::SwitchCase*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
inline bool System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileSwitchExpression_b__56_1(::System::Linq::Expressions::Expression*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileSwitchExpression>b__56_1",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, t);
}
inline void System::Linq::Expressions::Interpreter::__LightCompiler____c::_CompileNoLabelPush_b__101_0(::System::Linq::Expressions::Interpreter::LightCompiler*  _cordl_this, ::System::Linq::Expressions::Expression*  e)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__LightCompiler____c*>::get(),
                        "<CompileNoLabelPush>b__101_0",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _cordl_this, e);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__LightCompiler____c::__LightCompiler____c()   {
}
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::_ctor)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x4046304;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LightCompiler*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x40464d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.get_Instructions
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::InstructionList* (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::get_Instructions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40464f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "get_Instructions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTop
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LightDelegateCreator* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LambdaExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTop)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x4046500;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.MakeInterpreter
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Interpreter* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::StringW)>(&::System::Linq::Expressions::Interpreter::LightCompiler::MakeInterpreter)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x4046740;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "MakeInterpreter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConstantExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConstantExpression)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4046a5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConstantExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDefaultExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4046b04;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDefaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDefaultExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4046b38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDefaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EnsureAvailableForClosure
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EnsureAvailableForClosure)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x4046c60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EnsureAvailableForClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ResolveLocal
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LocalVariable* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ResolveLocal)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x4046d80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ResolveLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGetVariable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGetVariable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x4046dd0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGetVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitCopyValueType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitCopyValueType)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4046e8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitCopyValueType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.LoadLocalNoValueTypeCopy
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::LoadLocalNoValueTypeCopy)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4046e10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "LoadLocalNoValueTypeCopy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.MaybeMutableValueType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::MaybeMutableValueType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4046f14;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "MaybeMutableValueType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGetBoxedVariable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGetBoxedVariable)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x4046f70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGetBoxedVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileSetVariable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ParameterExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileSetVariable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x4046fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileSetVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileParameterExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileParameterExpression)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4047080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileParameterExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockExpression)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x4047104;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockStart
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BlockExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockStart)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x4047248;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BlockExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBlockEnd
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockEnd)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x40476d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileIndexExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexExpression)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x40478f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileIndexExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitIndexGet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::IndexExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitIndexGet)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x40479c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitIndexGet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IndexExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileIndexAssignment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexAssignment)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x4047ab8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileIndexAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberAssignment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4047d54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberAssignment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(bool, ::System::Reflection::MemberInfo*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x4047e1c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileVariableAssignment
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileVariableAssignment)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4048194;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileVariableAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAssignBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAssignBinaryExpression)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x4048240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAssignBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileBinaryExpression)> {
  constexpr static std::size_t size = 0xd0c;
  constexpr static std::size_t addrs = 0x4048394;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileEqual)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x40492d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNotEqual
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNotEqual)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4049344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNotEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileComparison
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileComparison)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x40493b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileComparison",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileArithmetic
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::ExpressionType, ::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileArithmetic)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x40490a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileArithmetic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConvertUnaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertUnaryExpression)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x4049544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConvertUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConvertToType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Type*, ::System::Type*, bool, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertToType)> {
  constexpr static std::size_t size = 0x558;
  constexpr static std::size_t addrs = 0x404a4d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConvertToType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNotExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNotExpression)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x404aa2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNotExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnaryExpression)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x404aa84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitUnaryMethodCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryMethodCall)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x404ad60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitUnaryMethodCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitUnaryBoolCheck
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryBoolCheck)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x404ae94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitUnaryBoolCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAndAlsoBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAndAlsoBinaryExpression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x404b078;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAndAlsoBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileOrElseBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileOrElseBinaryExpression)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x404b260;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileOrElseBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x404b100;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x404b2e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLiftedLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLiftedLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0x404b44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLiftedLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnliftedLogicalBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::BinaryExpression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnliftedLogicalBinaryExpression)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x404bb30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnliftedLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileConditionalExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileConditionalExpression)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x404bc10;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConditionalExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLoopExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLoopExpression)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x404be24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLoopExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileSwitchExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileSwitchExpression)> {
  constexpr static std::size_t size = 0xa34;
  constexpr static std::size_t addrs = 0x404c0f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileSwitchExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileStringSwitchExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::SwitchExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileStringSwitchExpression)> {
  constexpr static std::size_t size = 0x680;
  constexpr static std::size_t addrs = 0x404cb2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileStringSwitchExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::SwitchExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLabelExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLabelExpression)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x404d1ac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLabelExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileGotoExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileGotoExpression)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x404d348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGotoExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.PushLabelBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LightCompiler::PushLabelBlock)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x404bfe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "PushLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.PopLabelBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Interpreter::LabelScopeKind)>(&::System::Linq::Expressions::Interpreter::LightCompiler::PopLabelBlock)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x404c0d8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "PopLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EnsureLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EnsureLabel)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x404d554;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EnsureLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ReferenceLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ReferenceLabel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x404d520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ReferenceLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.DefineLabel
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::LabelInfo* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::LabelTarget*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::DefineLabel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x404c050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "DefineLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.TryPushLabelBlock
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::TryPushLabelBlock)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x404d624;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "TryPushLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.DefineBlockLabels
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::DefineBlockLabels)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x404dab0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "DefineBlockLabels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CheckRethrow
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)()>(&::System::Linq::Expressions::Interpreter::LightCompiler::CheckRethrow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x404dbe8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CheckRethrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileThrowUnaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileThrowUnaryExpression)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x404dc3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileThrowUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTryExpression)> {
  constexpr static std::size_t size = 0xb30;
  constexpr static std::size_t addrs = 0x404dd3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTryFaultExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::TryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTryFaultExpression)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x404e86c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTryFaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::TryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodCallExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x404eaa0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodCallExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMethodCallExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MethodInfo*, ::System::Linq::Expressions::IArgumentProvider*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x404eb3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodCallExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileArrayIndexAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::Expression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileArrayIndexAddress)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x404f080;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileArrayIndexAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.EmitThisForMethodCall
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::EmitThisForMethodCall)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40479c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitThisForMethodCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.ShouldWritebackNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::ShouldWritebackNode)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x404f280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ShouldWritebackNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAddress
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAddress)> {
  constexpr static std::size_t size = 0x950;
  constexpr static std::size_t addrs = 0x4049b84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMultiDimArrayAccess
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::ByRefUpdater* (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Linq::Expressions::IArgumentProvider*, int32_t)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMultiDimArrayAccess)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x404f404;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMultiDimArrayAccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNewExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNewExpression)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x404f7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNewExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberExpression)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x404fb98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMember
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, ::System::Reflection::MemberInfo*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMember)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x404fc38;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMember",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNewArrayExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNewArrayExpression)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x404ffa8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNewArrayExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileDebugInfoExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileDebugInfoExpression)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x405033c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDebugInfoExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileRuntimeVariablesExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileRuntimeVariablesExpression)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x40504d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileRuntimeVariablesExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileLambdaExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileLambdaExpression)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x40507d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLambdaExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileCoalesceBinaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileCoalesceBinaryExpression)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x40509ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileCoalesceBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileInvocationExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileInvocationExpression)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x4050f98;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileInvocationExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileListInitExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileListInitExpression)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4051204;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileListInitExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileListInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileListInit)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x4051280;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileListInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberInitExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInitExpression)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4051660;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberInitExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileMemberInit
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInit)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x40516dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.GetMemberType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::System::Reflection::MemberInfo*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::GetMemberType)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4051be0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "GetMemberType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileQuoteUnaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileQuoteUnaryExpression)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x4051d58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileQuoteUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileUnboxUnaryExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileUnboxUnaryExpression)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4052018;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnboxUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeEqualExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeEqualExpression)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0x405213c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeEqualExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeAsExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::UnaryExpression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeAsExpression)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x404ae48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeAsExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileTypeIsExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeIsExpression)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x4052334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeIsExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.Compile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*, bool)>(&::System::Linq::Expressions::Interpreter::LightCompiler::Compile)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x40476c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "Compile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileAsVoid
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileAsVoid)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x404776c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAsVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.CompileNoLabelPush
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::CompileNoLabelPush)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x405257c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNoLabelPush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::LightCompiler.Compile
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::LightCompiler::*)(::System::Linq::Expressions::Expression*)>(&::System::Linq::Expressions::Interpreter::LightCompiler::Compile)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x40466f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "Compile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Linq::Expressions::Interpreter::InstructionList*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__instructions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::InstructionList*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__instructions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____instructions;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__instructions(::System::Linq::Expressions::Interpreter::InstructionList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instructions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::LocalVariables*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__locals()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locals;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::LocalVariables*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__locals() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____locals;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__locals(::System::Linq::Expressions::Interpreter::LocalVariables*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____locals)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__debugInfos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugInfos;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__debugInfos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____debugInfos;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__debugInfos(::System::Collections::Generic::List_1<::System::Linq::Expressions::Interpreter::DebugInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____debugInfos)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__treeLabels()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeLabels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__treeLabels() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____treeLabels;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__treeLabels(::System::Linq::Expressions::Interpreter::HybridReferenceDictionary_2<::System::Linq::Expressions::LabelTarget*,::System::Linq::Expressions::Interpreter::LabelInfo*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____treeLabels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::LabelScopeInfo*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__labelBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelBlock;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::LabelScopeInfo*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__labelBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____labelBlock;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__labelBlock(::System::Linq::Expressions::Interpreter::LabelScopeInfo*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____labelBlock)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__exceptionForRethrowStack()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionForRethrowStack;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__exceptionForRethrowStack() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____exceptionForRethrowStack;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__exceptionForRethrowStack(::System::Collections::Generic::Stack_1<::System::Linq::Expressions::ParameterExpression*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____exceptionForRethrowStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__parent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::LightCompiler*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__parent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____parent;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__parent(::System::Linq::Expressions::Interpreter::LightCompiler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Linq::Expressions::StackGuard*& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__guard()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guard;
}
constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::StackGuard*> const& System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_get__guard() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____guard;
}
constexpr void System::Linq::Expressions::Interpreter::LightCompiler::__cordl_internal_set__guard(::System::Linq::Expressions::StackGuard*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____guard)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::setStaticF_s_emptyLocals(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>, "s_emptyLocals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get>(std::forward<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>>(value));
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> System::Linq::Expressions::Interpreter::LightCompiler::getStaticF_s_emptyLocals()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>, "s_emptyLocals", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get>();
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler* System::Linq::Expressions::Interpreter::LightCompiler::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LightCompiler*>());
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LightCompiler* System::Linq::Expressions::Interpreter::LightCompiler::New_ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::LightCompiler*>(parent));
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::_ctor(::System::Linq::Expressions::Interpreter::LightCompiler*  parent)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LightCompiler*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, parent);
}
inline ::System::Linq::Expressions::Interpreter::InstructionList* System::Linq::Expressions::Interpreter::LightCompiler::get_Instructions()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "get_Instructions",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::InstructionList*, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::LightDelegateCreator* System::Linq::Expressions::Interpreter::LightCompiler::CompileTop(::System::Linq::Expressions::LambdaExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTop",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LambdaExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LightDelegateCreator*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::Interpreter* System::Linq::Expressions::Interpreter::LightCompiler::MakeInterpreter(::StringW  lambdaName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "MakeInterpreter",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Interpreter*, false>(this, ___internal_method, lambdaName);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConstantExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConstantExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDefaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDefaultExpression(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDefaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LightCompiler::EnsureAvailableForClosure(::System::Linq::Expressions::ParameterExpression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EnsureAvailableForClosure",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*, false>(this, ___internal_method, expr);
}
inline ::System::Linq::Expressions::Interpreter::LocalVariable* System::Linq::Expressions::Interpreter::LightCompiler::ResolveLocal(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ResolveLocal",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LocalVariable*, false>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGetVariable(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGetVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitCopyValueType(::System::Type*  valueType)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitCopyValueType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, valueType);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::LoadLocalNoValueTypeCopy(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "LoadLocalNoValueTypeCopy",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::MaybeMutableValueType(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "MaybeMutableValueType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGetBoxedVariable(::System::Linq::Expressions::ParameterExpression*  variable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGetBoxedVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileSetVariable(::System::Linq::Expressions::ParameterExpression*  variable, bool  isVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileSetVariable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ParameterExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, variable, isVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileParameterExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileParameterExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, asVoid);
}
inline ::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*> System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockStart(::System::Linq::Expressions::BlockExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockStart",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BlockExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBlockEnd(::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>  locals)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBlockEnd",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Linq::Expressions::Interpreter::LocalDefinition,::Array<::System::Linq::Expressions::Interpreter::LocalDefinition>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, locals);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileIndexExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitIndexGet(::System::Linq::Expressions::IndexExpression*  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitIndexGet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IndexExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, index);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIndexAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileIndexAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberAssignment(bool  asVoid, ::System::Reflection::MemberInfo*  refMember, ::System::Linq::Expressions::Expression*  value, bool  forBinding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asVoid, refMember, value, forBinding);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileVariableAssignment(::System::Linq::Expressions::BinaryExpression*  node, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileVariableAssignment",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAssignBinaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAssignBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, left, right, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNotEqual(::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right, bool  liftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNotEqual",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, left, right, liftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileComparison(::System::Linq::Expressions::BinaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileComparison",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileArithmetic(::System::Linq::Expressions::ExpressionType  nodeType, ::System::Linq::Expressions::Expression*  left, ::System::Linq::Expressions::Expression*  right)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileArithmetic",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::ExpressionType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodeType, left, right);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConvertUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConvertToType(::System::Type*  typeFrom, ::System::Type*  typeTo, bool  isChecked, bool  isLiftedToNull)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConvertToType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeFrom, typeTo, isChecked, isLiftedToNull);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNotExpression(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNotExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryMethodCall(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitUnaryMethodCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitUnaryBoolCheck(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitUnaryBoolCheck",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAndAlsoBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAndAlsoBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileOrElseBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileOrElseBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  b, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, b, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLiftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  node, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLiftedLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnliftedLogicalBinaryExpression(::System::Linq::Expressions::BinaryExpression*  expr, bool  andAlso)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnliftedLogicalBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::BinaryExpression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, andAlso);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileConditionalExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileConditionalExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLoopExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLoopExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileSwitchExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileSwitchExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
template<typename T>
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileIntSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node)  {
static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                    "CompileIntSwitchExpression",
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()},
                    ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::SwitchExpression*>::get()}
                )));
static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(
                    ___internal_method_base,
                    std::array<const Il2CppClass*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}
                ));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileStringSwitchExpression(::System::Linq::Expressions::SwitchExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileStringSwitchExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::SwitchExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLabelExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLabelExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileGotoExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileGotoExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::PushLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "PushLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::PopLabelBlock(::System::Linq::Expressions::Interpreter::LabelScopeKind  kind)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "PopLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Interpreter::LabelScopeKind>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, kind);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::EnsureLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EnsureLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::ReferenceLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ReferenceLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*, false>(this, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::LabelInfo* System::Linq::Expressions::Interpreter::LightCompiler::DefineLabel(::System::Linq::Expressions::LabelTarget*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "DefineLabel",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::LabelTarget*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::LabelInfo*, false>(this, ___internal_method, node);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::TryPushLabelBlock(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "TryPushLabelBlock",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::DefineBlockLabels(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "DefineBlockLabels",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CheckRethrow()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CheckRethrow",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileThrowUnaryExpression(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileThrowUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTryFaultExpression(::System::Linq::Expressions::TryExpression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTryFaultExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::TryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodCallExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMethodCallExpression(::System::Linq::Expressions::Expression*  object, ::System::Reflection::MethodInfo*  method, ::System::Linq::Expressions::IArgumentProvider*  arguments)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMethodCallExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MethodInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method, arguments);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileArrayIndexAddress(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::Expression*  index, int32_t  argumentIndex)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileArrayIndexAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*, false>(this, ___internal_method, array, index, argumentIndex);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::EmitThisForMethodCall(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "EmitThisForMethodCall",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline bool System::Linq::Expressions::Interpreter::LightCompiler::ShouldWritebackNode(::System::Linq::Expressions::Expression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "ShouldWritebackNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, node);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileAddress(::System::Linq::Expressions::Expression*  node, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAddress",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*, false>(this, ___internal_method, node, index);
}
inline ::System::Linq::Expressions::Interpreter::ByRefUpdater* System::Linq::Expressions::Interpreter::LightCompiler::CompileMultiDimArrayAccess(::System::Linq::Expressions::Expression*  array, ::System::Linq::Expressions::IArgumentProvider*  arguments, int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMultiDimArrayAccess",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::IArgumentProvider*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::ByRefUpdater*, false>(this, ___internal_method, array, arguments, index);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNewExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNewExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMember(::System::Linq::Expressions::Expression*  from, ::System::Reflection::MemberInfo*  member, bool  forBinding)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMember",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, member, forBinding);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNewArrayExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNewArrayExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileDebugInfoExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileDebugInfoExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileRuntimeVariablesExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileRuntimeVariablesExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileLambdaExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileLambdaExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileCoalesceBinaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileCoalesceBinaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileInvocationExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileInvocationExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileListInitExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileListInitExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileListInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*  initializers)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileListInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::ElementInit*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, initializers);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInitExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberInitExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileMemberInit(::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*  bindings)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileMemberInit",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ObjectModel::ReadOnlyCollection_1<::System::Linq::Expressions::MemberBinding*>*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bindings);
}
inline ::System::Type* System::Linq::Expressions::Interpreter::LightCompiler::GetMemberType(::System::Reflection::MemberInfo*  member)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "GetMemberType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::MemberInfo*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, member);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileQuoteUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileQuoteUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileUnboxUnaryExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileUnboxUnaryExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeEqualExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeEqualExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeAsExpression(::System::Linq::Expressions::UnaryExpression*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeAsExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::UnaryExpression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileTypeIsExpression(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileTypeIsExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::Compile(::System::Linq::Expressions::Expression*  expr, bool  asVoid)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "Compile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr, asVoid);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileAsVoid(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileAsVoid",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::CompileNoLabelPush(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "CompileNoLabelPush",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
inline void System::Linq::Expressions::Interpreter::LightCompiler::Compile(::System::Linq::Expressions::Expression*  expr)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::LightCompiler*>::get(),
                        "Compile",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Linq::Expressions::Expression*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, expr);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::LightCompiler::LightCompiler()   {
}
