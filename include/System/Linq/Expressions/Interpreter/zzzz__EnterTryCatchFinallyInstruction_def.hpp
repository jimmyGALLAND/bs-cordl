#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/EnterTryCatchFinallyInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__IndexedBranchInstruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnterTryCatchFinallyInstruction)
namespace System::Linq::Expressions::Interpreter {
class InterpretedFrame;
}
namespace System::Linq::Expressions::Interpreter {
class TryCatchFinallyHandler;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class EnterTryCatchFinallyInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction);
// Type: System.Linq.Expressions.Interpreter::EnterTryCatchFinallyInstruction
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::EnterTryCatchFinallyInstruction*
class CORDL_TYPE EnterTryCatchFinallyInstruction : public ::System::Linq::Expressions::Interpreter::IndexedBranchInstruction {
public:
// Declarations
 __declspec(property(get=get_Handler)) ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*  Handler;

 __declspec(property(get=get_InstructionName)) ::StringW  InstructionName;

 __declspec(property(get=get_ProducedContinuations)) int32_t  ProducedContinuations;

/// @brief Field _hasFinally, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasFinally, put=__cordl_internal_set__hasFinally)) bool  _hasFinally;

/// @brief Field _tryHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__tryHandler, put=__cordl_internal_set__tryHandler)) ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*  _tryHandler;

/// @brief Method CreateTryCatch, addr 0x4032524, size 0x60, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryCatch() ;

/// @brief Method CreateTryFinally, addr 0x40324c0, size 0x64, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* CreateTryFinally(int32_t  labelIndex) ;

static inline ::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction* New_ctor(int32_t  targetIndex, bool  hasFinally) ;

/// @brief Method Run, addr 0x4032584, size 0x4b0, virtual true, abstract: false, final false
inline int32_t Run(::System::Linq::Expressions::Interpreter::InterpretedFrame*  frame) ;

/// @brief Method SetTryHandler, addr 0x4032478, size 0x8, virtual false, abstract: false, final false
inline void SetTryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*  tryHandler) ;

/// @brief Method ToString, addr 0x4032aa0, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get__hasFinally() const;

constexpr bool& __cordl_internal_get__hasFinally() ;

constexpr ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*& __cordl_internal_get__tryHandler() ;

constexpr ::cordl_internals::to_const_pointer<::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*> const& __cordl_internal_get__tryHandler() const;

constexpr void __cordl_internal_set__hasFinally(bool  value) ;

constexpr void __cordl_internal_set__tryHandler(::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*  value) ;

/// @brief Method .ctor, addr 0x4032490, size 0x30, virtual false, abstract: false, final false
inline void _ctor(int32_t  targetIndex, bool  hasFinally) ;

/// @brief Method get_Handler, addr 0x4032480, size 0x8, virtual false, abstract: false, final false
inline ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler* get_Handler() ;

/// @brief Method get_InstructionName, addr 0x4032a34, size 0x6c, virtual true, abstract: false, final false
inline ::StringW get_InstructionName() ;

/// @brief Method get_ProducedContinuations, addr 0x4032488, size 0x8, virtual true, abstract: false, final false
inline int32_t get_ProducedContinuations() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnterTryCatchFinallyInstruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnterTryCatchFinallyInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnterTryCatchFinallyInstruction(EnterTryCatchFinallyInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnterTryCatchFinallyInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnterTryCatchFinallyInstruction(EnterTryCatchFinallyInstruction const& ) = delete;

/// @brief Field _hasFinally, offset: 0x14, size: 0x1, def value: None
 bool  ____hasFinally;

/// @brief Field _tryHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Linq::Expressions::Interpreter::TryCatchFinallyHandler*  ____tryHandler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction, ____hasFinally) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction, ____tryHandler) == 0x18, "Offset mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::EnterTryCatchFinallyInstruction*, "System.Linq.Expressions.Interpreter", "EnterTryCatchFinallyInstruction");
