#pragma once
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_RightShiftUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__InterpretedFrame_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32.Run
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::*)(
    ::System::Linq::Expressions::Interpreter::InterpretedFrame*)>(&::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::Run)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2b49f4c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::*)()>(
    &::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b4996c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline int32_t System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, frame);
}
inline ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32* System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>());
}
inline void System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftUInt32::__RightShiftInstruction__RightShiftUInt32() {}
