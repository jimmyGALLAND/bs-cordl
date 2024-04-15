#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Linq/Expressions/zzzz__MethodCallExpression_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MethodCallExpression1)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
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
namespace System {
class Object;
}
// Forward declare root types
namespace System::Linq::Expressions {
class MethodCallExpression1;
}
// Write type traits
MARK_REF_PTR_T(::System::Linq::Expressions::MethodCallExpression1);
// Type: System.Linq.Expressions::MethodCallExpression1
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Linq::Expressions {
// Is value type: false
// CS Name: ::System.Linq.Expressions::MethodCallExpression1*
class CORDL_TYPE MethodCallExpression1 : public ::System::Linq::Expressions::MethodCallExpression {
public:
  // Declarations
  __declspec(property(get = get_ArgumentCount)) int32_t ArgumentCount;

  /// @brief Field _arg0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arg0, put = __cordl_internal_set__arg0))::System::Object* _arg0;

  /// @brief Convert operator to "::System::Linq::Expressions::IArgumentProvider"
  constexpr operator ::System::Linq::Expressions::IArgumentProvider*() noexcept;

  /// @brief Method GetArgument, addr 0x2b0cd78, size 0x9c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::Expression* GetArgument(int32_t index);

  static inline ::System::Linq::Expressions::MethodCallExpression1* New_ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method Rewrite, addr 0x2b0ce1c, size 0x10c, virtual true, abstract: false, final false
  inline ::System::Linq::Expressions::MethodCallExpression* Rewrite(::System::Linq::Expressions::Expression* instance,
                                                                    ::System::Collections::Generic::IReadOnlyList_1<::System::Linq::Expressions::Expression*>* args);

  constexpr ::System::Object*& __cordl_internal_get__arg0();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get__arg0() const;

  constexpr void __cordl_internal_set__arg0(::System::Object* value);

  /// @brief Method .ctor, addr 0x2b0cd54, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* method, ::System::Linq::Expressions::Expression* arg0);

  /// @brief Method get_ArgumentCount, addr 0x2b0ce14, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_ArgumentCount();

  /// @brief Convert to "::System::Linq::Expressions::IArgumentProvider"
  constexpr ::System::Linq::Expressions::IArgumentProvider* i___System__Linq__Expressions__IArgumentProvider() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MethodCallExpression1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MethodCallExpression1(MethodCallExpression1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MethodCallExpression1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MethodCallExpression1(MethodCallExpression1 const&) = delete;

  /// @brief Field _arg0, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____arg0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Linq::Expressions::MethodCallExpression1, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Linq::Expressions::MethodCallExpression1, ____arg0) == 0x18, "Offset mismatch!");

} // namespace System::Linq::Expressions
NEED_NO_BOX(::System::Linq::Expressions::MethodCallExpression1);
DEFINE_IL2CPP_ARG_TYPE(::System::Linq::Expressions::MethodCallExpression1*, "System.Linq.Expressions", "MethodCallExpression1");
