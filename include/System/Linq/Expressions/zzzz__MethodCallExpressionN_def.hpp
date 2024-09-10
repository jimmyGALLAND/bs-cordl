#pragma once
// IWYU pragma private; include "System/Linq/Expressions/MethodCallExpressionN.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCallExpressionN)
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Linq::Expressions {
class IArgumentProvider;
}
namespace System::Linq::Expressions {
class MethodCallExpression;
}
namespace System::Reflection {
class MethodInfo;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodCallExpressionN;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodCallExpressionN);
// Type: System.Linq.Expressions::MethodCallExpressionN
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MethodCallExpressionN*
class CORDL_TYPE MethodCallExpressionN : public ::System::Linq::Expressions::MethodCallExpression {
public:
// Declarations
 __declspec(property(get=get_ArgumentCount)) int32_t  ArgumentCount;

/// @brief Field _arguments, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__arguments, put=__cordl_internal_set__arguments)) ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  _arguments;

/// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
constexpr operator  ::System::Linq::Expressions::IArgumentProvider*() noexcept;

/// @brief Method GetArgument, addr 0x40288a0, size 0xa8, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::Expression* GetArgument(int32_t  index) ;

static inline ::System::Linq::Expressions::MethodCallExpressionN* New_ctor(::System::Reflection::MethodInfo*  method, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  args) ;

/// @brief Method Rewrite, addr 0x40289e8, size 0x6c, virtual true, abstract: false, final false
inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression*  instance, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  args) ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*& __cordl_internal_get__arguments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*> const& __cordl_internal_get__arguments() const;

constexpr void __cordl_internal_set__arguments(::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  value) ;

/// @brief Method .ctor, addr 0x402887c, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::MethodInfo*  method, ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  args) ;

/// @brief Method get_ArgumentCount, addr 0x4028948, size 0xa0, virtual true, abstract: false, final false
inline int32_t get_ArgumentCount() ;

/// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MethodCallExpressionN() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MethodCallExpressionN", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MethodCallExpressionN(MethodCallExpressionN && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MethodCallExpressionN", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MethodCallExpressionN(MethodCallExpressionN const& ) = delete;

/// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>*  ____arguments;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodCallExpressionN, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpressionN, ____arguments) == 0x18, "Offset mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpressionN);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpressionN*, "System.Linq.Expressions", "MethodCallExpressionN");
