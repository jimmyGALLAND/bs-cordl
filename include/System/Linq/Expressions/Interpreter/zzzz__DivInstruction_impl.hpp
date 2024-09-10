#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/DivInstruction.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_impl.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivDouble_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivSingle_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivUInt16_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivUInt32_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__DivInstruction_DivUInt64_def.hpp"
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DivInstruction.get_ConsumedStack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::DivInstruction::*)()>(&::System::Linq::Expressions::Interpreter::DivInstruction::get_ConsumedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40346b4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                  4
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DivInstruction.get_ProducedStack
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Linq::Expressions::Interpreter::DivInstruction::*)()>(&::System::Linq::Expressions::Interpreter::DivInstruction::get_ProducedStack)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x40346bc;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                  5
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DivInstruction.get_InstructionName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Linq::Expressions::Interpreter::DivInstruction::*)()>(&::System::Linq::Expressions::Interpreter::DivInstruction::get_InstructionName)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x40346c4;

  inline static const ::MethodInfo* methodInfo() {
    
                            static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
                                ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                                  9
                                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DivInstruction._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Linq::Expressions::Interpreter::DivInstruction::*)()>(&::System::Linq::Expressions::Interpreter::DivInstruction::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4034704;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Linq::Expressions::Interpreter::DivInstruction.Create
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Linq::Expressions::Interpreter::Instruction* (*)(::System::Type*)>(&::System::Linq::Expressions::Interpreter::DivInstruction::Create)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x403470c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_Int16(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_Int16()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_Int32(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_Int32()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_Int64(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_Int64()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Int64", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_UInt16(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_UInt16()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt16", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_UInt32(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_UInt32()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt32", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_UInt64(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_UInt64()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_UInt64", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_Single(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_Single()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Single", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::setStaticF_s_Double(::System::Linq::Expressions::Interpreter::Instruction*  value)  {
::cordl_internals::setStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>(std::forward<::System::Linq::Expressions::Interpreter::Instruction*>(value));
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::getStaticF_s_Double()  {
return ::cordl_internals::getStaticField<::System::Linq::Expressions::Interpreter::Instruction*, "s_Double", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get>();
}
inline int32_t System::Linq::Expressions::Interpreter::DivInstruction::get_ConsumedStack()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                    4
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Linq::Expressions::Interpreter::DivInstruction::get_ProducedStack()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                    5
                )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW System::Linq::Expressions::Interpreter::DivInstruction::get_InstructionName()  {
auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
                    il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                    9
                )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::DivInstruction* System::Linq::Expressions::Interpreter::DivInstruction::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Linq::Expressions::Interpreter::DivInstruction*>());
}
inline void System::Linq::Expressions::Interpreter::DivInstruction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Linq::Expressions::Interpreter::Instruction* System::Linq::Expressions::Interpreter::DivInstruction::Create(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Linq::Expressions::Interpreter::DivInstruction*>::get(),
                        "Create",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Linq::Expressions::Interpreter::Instruction*, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters []
constexpr ::System::Linq::Expressions::Interpreter::DivInstruction::DivInstruction()   {
}
