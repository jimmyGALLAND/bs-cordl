#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualSingleLiftedToNull.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_NotEqualSingleLiftedToNull_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull.Run
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::*)(::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::Run)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x405f3bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>::get(),
                                  8
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::*)()>(&::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x405e008;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame)  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>::get(),
                    8
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull* System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>());
}
inline void System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualSingleLiftedToNull::__NotEqualInstruction__NotEqualSingleLiftedToNull()   {
}
