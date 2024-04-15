#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__OffsetInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CoalescingBranchInstruction)
namespace System::Linq::Expressions::Interpreter {
class Instruction;
}
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class CoalescingBranchInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction);
// Type: System.Linq.Expressions.Interpreter::CoalescingBranchInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 20, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::CoalescingBranchInstruction*
class CORDL_TYPE CoalescingBranchInstruction : public ::System::Linq::Expressions::Interpreter::OffsetInstruction {
public:
  // Declarations
  __declspec(property(get = get_Cache))::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> Cache;

  __declspec(property(get = get_ConsumedStack)) int32_t ConsumedStack;

  __declspec(property(get = get_InstructionName))::StringW InstructionName;

  __declspec(property(get = get_ProducedStack)) int32_t ProducedStack;

  /// @brief Field s_cache, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_cache,
                             put = setStaticF_s_cache))::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> s_cache;

  static inline ::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction* New_ctor();

  /// @brief Method Run, addr 0x2b15d2c, size 0x34, virtual true, abstract: false, final false
  inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame* frame);

  /// @brief Method .ctor, addr 0x2b15d60, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> getStaticF_s_cache();

  /// @brief Method get_Cache, addr 0x2b15c58, size 0x84, virtual true, abstract: false, final false
  inline ::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> get_Cache();

  /// @brief Method get_ConsumedStack, addr 0x2b15d1c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ConsumedStack();

  /// @brief Method get_InstructionName, addr 0x2b15cdc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_InstructionName();

  /// @brief Method get_ProducedStack, addr 0x2b15d24, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ProducedStack();

  static inline void setStaticF_s_cache(::ArrayW<::System::Linq::Expressions::Interpreter::Instruction*, ::Array<::System::Linq::Expressions::Interpreter::Instruction*>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CoalescingBranchInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CoalescingBranchInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CoalescingBranchInstruction(CoalescingBranchInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CoalescingBranchInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CoalescingBranchInstruction(CoalescingBranchInstruction const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction, 0x18>, "Size mismatch!");

} // namespace System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::CoalescingBranchInstruction*, "System.Linq.Expressions.Interpreter", "CoalescingBranchInstruction");
