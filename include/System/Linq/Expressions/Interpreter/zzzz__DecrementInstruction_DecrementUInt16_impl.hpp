#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DecrementInstruction_DecrementUInt16.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DecrementInstruction_DecrementUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::Run)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x4034234;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::*)()>(&::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4034014;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16* System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>());
}
inline void System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__DecrementInstruction__DecrementUInt16::__DecrementInstruction__DecrementUInt16()   {
}
