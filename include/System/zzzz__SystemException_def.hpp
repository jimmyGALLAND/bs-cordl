#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SystemException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System {
class SystemException;
}
// Write type traits
MARK_REF_PTR_T(::System::SystemException);
// Type: System::SystemException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2561))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2481))
// CS Name: ::System::SystemException*
class CORDL_TYPE SystemException : public ::System::Exception {
public:
  // Declarations
  static inline ::System::SystemException* New_ctor();

  /// @brief Method .ctor addr 0x25c5e64 size 0x80 virtual false final false
  inline void _ctor();

  static inline ::System::SystemException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x25bdf8c size 0x78 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::SystemException* New_ctor(::StringW message, ::System::Exception* innerException);

  /// @brief Method .ctor addr 0x25c5ee4 size 0x80 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* innerException);

  static inline ::System::SystemException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x25be058 size 0x80 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "SystemException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SystemException(SystemException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SystemException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SystemException(SystemException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SystemException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SystemException, 0x90>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::SystemException);
DEFINE_IL2CPP_ARG_TYPE(::System::SystemException*, "System", "SystemException");
