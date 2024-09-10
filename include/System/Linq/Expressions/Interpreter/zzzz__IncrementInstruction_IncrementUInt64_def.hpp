#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/IncrementInstruction_IncrementUInt64.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IncrementInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IncrementInstruction_IncrementUInt64)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __IncrementInstruction__IncrementUInt64;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64);
// Type: ::IncrementUInt64
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::IncrementInstruction::IncrementUInt64*
class CORDL_TYPE __IncrementInstruction__IncrementUInt64 : public ::System::Linq::Expressions::Interpreter::IncrementInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64* New_ctor() ;

/// @brief Method Run, addr 0x403baa4, size 0xa8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x403b640, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IncrementInstruction__IncrementUInt64() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IncrementInstruction__IncrementUInt64", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IncrementInstruction__IncrementUInt64(__IncrementInstruction__IncrementUInt64 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IncrementInstruction__IncrementUInt64", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IncrementInstruction__IncrementUInt64(__IncrementInstruction__IncrementUInt64 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__IncrementInstruction__IncrementUInt64*, "System.Linq.Expressions.Interpreter", "IncrementInstruction/IncrementUInt64");
