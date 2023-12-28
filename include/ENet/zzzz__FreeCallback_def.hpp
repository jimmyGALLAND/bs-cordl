#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FreeCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class Object;
}
namespace System {
class IAsyncResult;
}
// Forward declare root types
namespace ENet {
class FreeCallback;
}
// Write type traits
MARK_REF_PTR_T(::ENet::FreeCallback);
// Type: ENet::FreeCallback
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15222))
// CS Name: ::ENet::FreeCallback*
class CORDL_TYPE FreeCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::ENet::FreeCallback* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x21eee3c size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x21eef00 size 0x14 virtual true final false
  inline void Invoke(void* memory);

  /// @brief Method BeginInvoke addr 0x21eef14 size 0x84 virtual true final false
  inline ::System::IAsyncResult* BeginInvoke(void* memory, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke addr 0x21eef98 size 0xc virtual true final false
  inline void EndInvoke(::System::IAsyncResult* result);

  // Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FreeCallback(FreeCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FreeCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FreeCallback(FreeCallback const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FreeCallback();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::ENet::FreeCallback, 0x80>, "Size mismatch!");

} // namespace ENet
NEED_NO_BOX(::ENet::FreeCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::FreeCallback*, "ENet", "FreeCallback");
