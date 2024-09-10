#pragma once
// IWYU pragma private; include "System/Linq/Expressions/ConstantCheck.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConstantCheck)
namespace System::Linq::Expressions {
struct AnalyzeTypeIsResult;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class TypeBinaryExpression;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class ConstantCheck;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::ConstantCheck);
// Type: System.Linq.Expressions::ConstantCheck
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::ConstantCheck*
class CORDL_TYPE ConstantCheck : public ::System::Object {
public:
// Declarations
/// @brief Method AnalyzeTypeIs, addr 0x401ca5c, size 0x1b8, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::Expression*  operand, ::System::Type*  testType) ;

/// @brief Method AnalyzeTypeIs, addr 0x401ca40, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Linq::Expressions::AnalyzeTypeIsResult AnalyzeTypeIs(::System::Linq::Expressions::TypeBinaryExpression*  typeIs) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantCheck() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantCheck", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantCheck(ConstantCheck && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantCheck", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantCheck(ConstantCheck const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::ConstantCheck, 0x10>, "Size mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::ConstantCheck);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::ConstantCheck*, "System.Linq.Expressions", "ConstantCheck");
