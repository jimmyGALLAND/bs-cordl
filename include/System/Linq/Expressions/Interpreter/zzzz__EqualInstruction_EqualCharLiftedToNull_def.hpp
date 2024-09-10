#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EqualInstruction_EqualCharLiftedToNull.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__EqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EqualInstruction_EqualCharLiftedToNull)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __EqualInstruction__EqualCharLiftedToNull;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull);
// Type: ::EqualCharLiftedToNull
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::EqualInstruction::EqualCharLiftedToNull*
class CORDL_TYPE __EqualInstruction__EqualCharLiftedToNull : public ::System::Linq::Expressions::Interpreter::EqualInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull* New_ctor() ;

/// @brief Method Run, addr 0x4036c64, size 0xe8, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x4035e18, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __EqualInstruction__EqualCharLiftedToNull() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__EqualInstruction__EqualCharLiftedToNull", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EqualInstruction__EqualCharLiftedToNull(__EqualInstruction__EqualCharLiftedToNull && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EqualInstruction__EqualCharLiftedToNull", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EqualInstruction__EqualCharLiftedToNull(__EqualInstruction__EqualCharLiftedToNull const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__EqualInstruction__EqualCharLiftedToNull*, "System.Linq.Expressions.Interpreter", "EqualInstruction/EqualCharLiftedToNull");
