#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/Instruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Instruction)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::Instruction);
// Type: System.Linq.Expressions.Interpreter::Instruction
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::Instruction*
class CORDL_TYPE Instruction : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_ConsumedContinuations)) int32_t  ConsumedContinuations;

 __declspec(property(get=get_ConsumedStack)) int32_t  ConsumedStack;

 __declspec(property(get=get_ContinuationsBalance)) int32_t  ContinuationsBalance;

 __declspec(property(get=get_InstructionName)) ::StringW  InstructionName;

 __declspec(property(get=get_ProducedContinuations)) int32_t  ProducedContinuations;

 __declspec(property(get=get_ProducedStack)) int32_t  ProducedStack;

 __declspec(property(get=get_StackBalance)) int32_t  StackBalance;

static inline ::System::Linq::Expressions::Interpreter::Instruction* New_ctor() ;

/// @brief Method NullCheck, addr 0x40386a8, size 0x10, virtual false, abstract: false, final false
static inline void NullCheck(::System::Object*  o) ;

/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method ToDebugString, addr 0x403bd94, size 0xc, virtual true, abstract: false, final false
inline ::StringW ToDebugString(int32_t  instructionIndex, ::System::Object*  cookie, ::System::Func_2<int32_t,int32_t>*  labelIndexer, ::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*  objects) ;

/// @brief Method ToString, addr 0x403bd3c, size 0x58, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x4038478, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ConsumedContinuations, addr 0x403bcb4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ConsumedContinuations() ;

/// @brief Method get_ConsumedStack, addr 0x403bca4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ConsumedStack() ;

/// @brief Method get_ContinuationsBalance, addr 0x403bd00, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_ContinuationsBalance() ;

/// @brief Method get_InstructionName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_InstructionName() ;

/// @brief Method get_ProducedContinuations, addr 0x403bcbc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ProducedContinuations() ;

/// @brief Method get_ProducedStack, addr 0x403bcac, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ProducedStack() ;

/// @brief Method get_StackBalance, addr 0x403bcc4, size 0x3c, virtual false, abstract: false, final false
inline int32_t get_StackBalance() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Instruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Instruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Instruction(Instruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Instruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Instruction(Instruction const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::Instruction, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::Instruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::Instruction*, "System.Linq.Expressions.Interpreter", "Instruction");
