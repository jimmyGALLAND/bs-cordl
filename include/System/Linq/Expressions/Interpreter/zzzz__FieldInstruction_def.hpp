#pragma once
// IWYU pragma private; include "System/Linq/Expressions/Interpreter/FieldInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/Interpreter/zzzz__Instruction_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FieldInstruction)
namespace System::Reflection {
class FieldInfo;
}
// Forward declare root types
namespace System::Linq::Expressions::Interpreter {
class FieldInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::Interpreter::FieldInstruction);
// Type: System.Linq.Expressions.Interpreter::FieldInstruction
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions::Interpreter {
// Is value type: false
// CS Name: ::System.Linq.Expressions.Interpreter::FieldInstruction*
class CORDL_TYPE FieldInstruction : public ::System::Linq::Expressions::Interpreter::Instruction {
public:
// Declarations
/// @brief Field _field, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__field, put=__cordl_internal_set__field)) ::System::Reflection::FieldInfo*  _field;

static inline ::System::Linq::Expressions::Interpreter::FieldInstruction* New_ctor(::System::Reflection::FieldInfo*  field) ;

/// @brief Method ToString, addr 0x4038480, size 0xa0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get__field() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __cordl_internal_get__field() const;

constexpr void __cordl_internal_set__field(::System::Reflection::FieldInfo*  value) ;

/// @brief Method .ctor, addr 0x4038450, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::FieldInfo*  field) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FieldInstruction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FieldInstruction", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FieldInstruction(FieldInstruction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FieldInstruction", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FieldInstruction(FieldInstruction const& ) = delete;

/// @brief Field _field, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::FieldInfo*  ____field;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::Interpreter::FieldInstruction, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::Interpreter::FieldInstruction, ____field) == 0x10, "Offset mismatch!");

} // namespace end def System::Linq::Expressions::Interpreter
NEED_NO_BOX(::System::Linq::Expressions::Interpreter::FieldInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::Interpreter::FieldInstruction*, "System.Linq.Expressions.Interpreter", "FieldInstruction");
