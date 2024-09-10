#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/RightShiftInstruction_RightShiftInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__RightShiftInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RightShiftInstruction_RightShiftInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __RightShiftInstruction__RightShiftInt16;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16);
// Type: ::RightShiftInt16
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::RightShiftInstruction::RightShiftInt16*
class CORDL_TYPE __RightShiftInstruction__RightShiftInt16 : public ::System::Linq::Expressions::Interpreter::RightShiftInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16* New_ctor() ;

/// @brief Method Run, addr 0x406355c, size 0xf8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x406342c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __RightShiftInstruction__RightShiftInt16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__RightShiftInstruction__RightShiftInt16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__RightShiftInstruction__RightShiftInt16(__RightShiftInstruction__RightShiftInt16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__RightShiftInstruction__RightShiftInt16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__RightShiftInstruction__RightShiftInt16(__RightShiftInstruction__RightShiftInt16 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__RightShiftInstruction__RightShiftInt16*, "System.Linq.Expressions.Interpreter", "RightShiftInstruction/RightShiftInt16");
