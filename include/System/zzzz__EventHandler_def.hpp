#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EventHandler)
namespace System {
class EventArgs;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class EventHandler;
}
// Write type traits
MARK_REF_PTR_T(::System::EventHandler);
// Type: System::EventHandler
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2377))
// CS Name: ::System::EventHandler*
class CORDL_TYPE EventHandler : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::EventHandler* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x2596fdc size 0x130 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x259710c size 0x14 virtual true final false
  inline void Invoke(::System::Object* sender, ::System::EventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EventHandler(EventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EventHandler(EventHandler const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EventHandler();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::EventHandler, 0x80>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::EventHandler);
DEFINE_IL2CPP_ARG_TYPE(::System::EventHandler*, "System", "EventHandler");
