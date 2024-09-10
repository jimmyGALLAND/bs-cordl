#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/StoreStaticFieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__FieldInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StoreStaticFieldInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class StoreStaticFieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction);
// Type: System.Linq.Expressions.Interpreter::StoreStaticFieldInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::StoreStaticFieldInstruction*
class CORDL_TYPE StoreStaticFieldInstruction : public ::System::Linq::Expressions::Interpreter::FieldInstruction {
public:
// Declarations
 __declspec(property(get=get_ConsumedStack)) int32_t  ConsumedStack;

 __declspec(property(get=get_InstructionName)) ::StringW  InstructionName;

static inline ::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction* New_ctor(::System::Reflection::FieldInfo*  field) ;

/// @brief Method Run, addr 0x40387f0, size 0x40, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method .ctor, addr 0x4038780, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::FieldInfo*  field) ;

/// @brief Method get_ConsumedStack, addr 0x40387e8, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ConsumedStack() ;

/// @brief Method get_InstructionName, addr 0x40387a8, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_InstructionName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StoreStaticFieldInstruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StoreStaticFieldInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StoreStaticFieldInstruction(StoreStaticFieldInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StoreStaticFieldInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StoreStaticFieldInstruction(StoreStaticFieldInstruction const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction, 0x18>, "Size mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::StoreStaticFieldInstruction*, "System.Linq.Expressions.Interpreter", "StoreStaticFieldInstruction");
