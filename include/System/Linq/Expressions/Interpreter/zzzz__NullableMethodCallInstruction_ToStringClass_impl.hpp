#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NullableMethodCallInstruction_ToStringClass.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NullableMethodCallInstruction_ToStringClass_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::Run)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4066c34;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::*)()>(&::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4066970;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass* System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>());
}
inline void System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__NullableMethodCallInstruction__ToStringClass::__NullableMethodCallInstruction__ToStringClass()   {
}
