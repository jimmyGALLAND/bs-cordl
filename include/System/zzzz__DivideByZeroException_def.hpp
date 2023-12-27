#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ArithmeticException_def.hpp"
CORDL_MODULE_EXPORT(DivideByZeroException)
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
// Forward declare root types
namespace System {
class DivideByZeroException;
}
// Write type traits
MARK_REF_PTR_T(::System::DivideByZeroException);
// Type: System::DivideByZeroException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2347))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2372))
// CS Name: ::System::DivideByZeroException*
class CORDL_TYPE DivideByZeroException : public ::System::ArithmeticException {
public:
  // Declarations
  static inline ::System::DivideByZeroException* New_ctor();

  /// @brief Method .ctor addr 0x2595628 size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::DivideByZeroException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2595684 size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DivideByZeroException(DivideByZeroException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DivideByZeroException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DivideByZeroException(DivideByZeroException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DivideByZeroException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::DivideByZeroException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::DivideByZeroException);
DEFINE_IL2CPP_ARG_TYPE(::System::DivideByZeroException*, "System", "DivideByZeroException");
