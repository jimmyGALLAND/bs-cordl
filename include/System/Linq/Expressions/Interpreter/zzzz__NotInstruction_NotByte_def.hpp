#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/NotInstruction_NotByte.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__NotInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NotInstruction_NotByte)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __NotInstruction__NotByte;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__NotInstruction__NotByte);
// Type: ::NotByte
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::NotInstruction::NotByte*
class CORDL_TYPE __NotInstruction__NotByte : public ::System::Linq::Expressions::Interpreter::NotInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__NotInstruction__NotByte* New_ctor() ;

/// @brief Method Run, addr 0x405fe98, size 0xa4, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x405f9e4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __NotInstruction__NotByte() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotByte", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__NotInstruction__NotByte(__NotInstruction__NotByte && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__NotInstruction__NotByte", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__NotInstruction__NotByte(__NotInstruction__NotByte const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__NotInstruction__NotByte, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__NotInstruction__NotByte);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__NotInstruction__NotByte*, "System.Linq.Expressions.Interpreter", "NotInstruction/NotByte");
