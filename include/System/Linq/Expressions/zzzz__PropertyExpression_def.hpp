#pragma once
// IWYU pragma private; include "System/Linq/Expressions/PropertyExpression.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MemberExpression_def.hpp"
CORDL_MODULE_EXPORT(PropertyExpression)
namespace System::Linq::Expressions {
class Expression;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Linq::Expressions {
class PropertyExpression;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::PropertyExpression);
// Type: System.Linq.Expressions::PropertyExpression
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::PropertyExpression*
class CORDL_TYPE PropertyExpression : public ::System::Linq::Expressions::MemberExpression {
public:
// Declarations
 __declspec(property(get=get_Type)) ::System::Type*  Type;

/// @brief Field _property, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__property, put=__cordl_internal_set__property)) ::System::Reflection::PropertyInfo*  _property;

/// @brief Method GetMember, addr 0x40286b8, size 0x8, virtual true, abstract: false, final false
inline ::System::Reflection::MemberInfo* GetMember() ;

static inline ::System::Linq::Expressions::PropertyExpression* New_ctor(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::PropertyInfo*  member) ;

constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get__property() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __cordl_internal_get__property() const;

constexpr void __cordl_internal_set__property(::System::Reflection::PropertyInfo*  value) ;

/// @brief Method .ctor, addr 0x4028580, size 0x24, virtual false, abstract: false, final false
inline void _ctor(::System::Linq::Expressions::Expression*  expression, ::System::Reflection::PropertyInfo*  member) ;

/// @brief Method get_Type, addr 0x40286c0, size 0x24, virtual true, abstract: false, final true
inline ::System::Type* get_Type() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PropertyExpression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PropertyExpression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PropertyExpression(PropertyExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PropertyExpression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PropertyExpression(PropertyExpression const& ) = delete;

/// @brief Field _property, offset: 0x18, size: 0x8, def value: None
 ::System::Reflection::PropertyInfo*  ____property;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::PropertyExpression, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::PropertyExpression, ____property) == 0x18, "Offset mismatch!");

} // namespace end def System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::PropertyExpression);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::PropertyExpression*, "System.Linq.Expressions", "PropertyExpression");
