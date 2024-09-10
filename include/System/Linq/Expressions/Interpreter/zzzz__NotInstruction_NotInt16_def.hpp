#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NotInstruction__NotInt16;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NotInstruction__NotInt16);
// Type: ::NotInt16
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NotInstruction::NotInt16*
class CORDL_TYPE __NotInstruction__NotInt16 : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__NotInstruction__NotInt16* New_ctor() ;

/// @brief Method Run, addr 0x405fbf0, size 0xa4, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x405f9c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __NotInstruction__NotInt16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotInt16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NotInstruction__NotInt16(__NotInstruction__NotInt16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotInt16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NotInstruction__NotInt16(__NotInstruction__NotInt16 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NotInstruction__NotInt16, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NotInstruction__NotInt16);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NotInstruction__NotInt16*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotInt16");
