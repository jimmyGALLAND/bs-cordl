#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotEqualInstruction_NotEqualBoolean.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotEqualInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotEqualInstruction_NotEqualBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NotEqualInstruction__NotEqualBoolean;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean);
// Type: ::NotEqualBoolean
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NotEqualInstruction::NotEqualBoolean*
class CORDL_TYPE __NotEqualInstruction__NotEqualBoolean : public ::System::Linq::Expressions::Interpreter::NotEqualInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean* New_ctor() ;

/// @brief Method Run, addr 0x405e080, size 0xe4, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x405e018, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __NotEqualInstruction__NotEqualBoolean() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__NotEqualInstruction__NotEqualBoolean", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NotEqualInstruction__NotEqualBoolean(__NotEqualInstruction__NotEqualBoolean && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NotEqualInstruction__NotEqualBoolean", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NotEqualInstruction__NotEqualBoolean(__NotEqualInstruction__NotEqualBoolean const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NotEqualInstruction__NotEqualBoolean*, "System.Linq.Expressions.Interpreter", "NotEqualInstruction/NotEqualBoolean");
