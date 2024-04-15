#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__ExclusiveOrInstruction_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ExclusiveOrInstruction_ExclusiveOrBoolean)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class __ExclusiveOrInstruction__ExclusiveOrBoolean;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrBoolean);
// Type: ::ExclusiveOrBoolean
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::ExclusiveOrInstruction::ExclusiveOrBoolean*
class CORDL_TYPE __ExclusiveOrInstruction__ExclusiveOrBoolean : public ::System::Linq::Expressions::Interpreter::ExclusiveOrInstruction {
public:
  // Declarations
  static inline ::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrBoolean* New_ctor();

  /// @brief Method Run, addr 0x2b1d3cc, size 0xe8, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b1d57c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ExclusiveOrInstruction__ExclusiveOrBoolean();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ExclusiveOrInstruction__ExclusiveOrBoolean", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ExclusiveOrInstruction__ExclusiveOrBoolean(__ExclusiveOrInstruction__ExclusiveOrBoolean&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ExclusiveOrInstruction__ExclusiveOrBoolean", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ExclusiveOrInstruction__ExclusiveOrBoolean(__ExclusiveOrInstruction__ExclusiveOrBoolean const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrBoolean, 0x10>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrBoolean);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::__ExclusiveOrInstruction__ExclusiveOrBoolean*, "System.Linq.Expressions.Interpreter", "ExclusiveOrInstruction/ExclusiveOrBoolean");
