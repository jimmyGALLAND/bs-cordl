#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/GreaterThanInstruction_GreaterThanInt16.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__GreaterThanInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GreaterThanInstruction_GreaterThanInt16)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __GreaterThanInstruction__GreaterThanInt16;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16);
// Type: ::GreaterThanInt16
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::GreaterThanInstruction::GreaterThanInt16*
class CORDL_TYPE __GreaterThanInstruction__GreaterThanInt16 : public ::System::Linq::Expressions::Interpreter::GreaterThanInstruction {
public:
// Declarations
static inline ::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16* New_ctor(::System::Object*  nullValue) ;

/// @brief Method Run, addr 0x403949c, size 0xdc, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x4039230, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  nullValue) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __GreaterThanInstruction__GreaterThanInt16() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__GreaterThanInstruction__GreaterThanInt16", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GreaterThanInstruction__GreaterThanInt16(__GreaterThanInstruction__GreaterThanInt16 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GreaterThanInstruction__GreaterThanInt16", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GreaterThanInstruction__GreaterThanInt16(__GreaterThanInstruction__GreaterThanInt16 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16, 0x18>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__GreaterThanInstruction__GreaterThanInt16*, "System.Linq.Expressions.Interpreter", "GreaterThanInstruction/GreaterThanInt16");
