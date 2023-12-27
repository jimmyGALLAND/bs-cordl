#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__SystemException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SecurityException)
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Security {
class SecurityException;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::SecurityException);
// Type: System.Security::SecurityException
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2481))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2889))
// CS Name: ::System.Security::SecurityException*
class CORDL_TYPE SecurityException : public ::System::SystemException {
public:
  // Declarations
  /// @brief Field permissionState, offset 0x90, size 0x8
  __declspec(property(get = __get_permissionState, put = __set_permissionState))::StringW permissionState;

  constexpr ::StringW& __get_permissionState();

  constexpr ::StringW const& __get_permissionState() const;

  constexpr void __set_permissionState(::StringW value);

  static inline ::System::Security::SecurityException* New_ctor();

  /// @brief Method .ctor addr 0x24545e4 size 0x68 virtual false final false
  inline void _ctor();

  static inline ::System::Security::SecurityException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x245464c size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::Security::SecurityException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2454670 size 0x10c virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  static inline ::System::Security::SecurityException* New_ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method .ctor addr 0x245477c size 0x24 virtual false final false
  inline void _ctor(::StringW message, ::System::Exception* inner);

  /// @brief Method GetObjectData addr 0x24547a0 size 0x100 virtual true final false
  inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method ToString addr 0x24548a0 size 0x8 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SecurityException(SecurityException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SecurityException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SecurityException(SecurityException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SecurityException();

public:
  /// @brief Field permissionState, offset: 0x90, size: 0x8, def value: None
  ::StringW ___permissionState;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::SecurityException, 0x98>, "Size mismatch!");

} // namespace System::Security
NEED_NO_BOX(::System::Security::SecurityException);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::SecurityException*, "System.Security", "SecurityException");
