#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__IOException_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DriveNotFoundException)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::IO {
class DriveNotFoundException;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::DriveNotFoundException);
// Type: System.IO::DriveNotFoundException
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 140, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3565))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3588))
// CS Name: ::System.IO::DriveNotFoundException*
class CORDL_TYPE DriveNotFoundException : public ::System::IO::IOException {
public:
  // Declarations
  static inline ::System::IO::DriveNotFoundException* New_ctor();

  /// @brief Method .ctor addr 0x250999c size 0x5c virtual false final false
  inline void _ctor();

  static inline ::System::IO::DriveNotFoundException* New_ctor(::StringW message);

  /// @brief Method .ctor addr 0x25099f8 size 0x24 virtual false final false
  inline void _ctor(::StringW message);

  static inline ::System::IO::DriveNotFoundException* New_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  /// @brief Method .ctor addr 0x2509a1c size 0x8 virtual false final false
  inline void _ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context);

  // Ctor Parameters [CppParam { name: "", ty: "DriveNotFoundException", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DriveNotFoundException(DriveNotFoundException&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DriveNotFoundException", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DriveNotFoundException(DriveNotFoundException const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DriveNotFoundException();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::DriveNotFoundException, 0x90>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::DriveNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::DriveNotFoundException*, "System.IO", "DriveNotFoundException");
