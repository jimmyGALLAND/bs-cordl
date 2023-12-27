#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeserializationEventHandler)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::Serialization {
class DeserializationEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Serialization::DeserializationEventHandler);
// Type: System.Runtime.Serialization::DeserializationEventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::Serialization {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3200))
// CS Name: ::System.Runtime.Serialization::DeserializationEventHandler*
class CORDL_TYPE DeserializationEventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Runtime::Serialization::DeserializationEventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x24b4878 size 0x12c virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x24b49a4 size 0x14 virtual true final false
  inline void Invoke(::System::Object* sender);

  // Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeserializationEventHandler(DeserializationEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeserializationEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeserializationEventHandler(DeserializationEventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeserializationEventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::DeserializationEventHandler, 0x80>, "Size mismatch!");

} // namespace System::Runtime::Serialization
NEED_NO_BOX(::System::Runtime::Serialization::DeserializationEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::DeserializationEventHandler*, "System.Runtime.Serialization", "DeserializationEventHandler");
