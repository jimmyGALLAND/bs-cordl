#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualSByte.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_EqualSByte_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::Run)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x4035fa8;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::*)()>(&::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4035e68;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte* System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>());
}
inline void System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualSByte::__EqualInstruction__EqualSByte()   {
}
