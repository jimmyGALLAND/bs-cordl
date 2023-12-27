#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReceiveState)
namespace System::Net {
class CommandStream;
}
namespace System::Net {
class ResponseDescription;
}
// Forward declare root types
namespace System::Net {
class ReceiveState;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ReceiveState);
// Type: System.Net::ReceiveState
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9038))
// CS Name: ::System.Net::ReceiveState*
class CORDL_TYPE ReceiveState : public ::System::Object {
public:
  // Declarations
  /// @brief Field Resp, offset 0x10, size 0x8
  __declspec(property(get = __get_Resp, put = __set_Resp))::System::Net::ResponseDescription* Resp;

  /// @brief Field ValidThrough, offset 0x18, size 0x4
  __declspec(property(get = __get_ValidThrough, put = __set_ValidThrough)) int32_t ValidThrough;

  /// @brief Field Buffer, offset 0x20, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Connection, offset 0x28, size 0x8
  __declspec(property(get = __get_Connection, put = __set_Connection))::System::Net::CommandStream* Connection;

  constexpr ::System::Net::ResponseDescription*& __get_Resp();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::ResponseDescription*> const& __get_Resp() const;

  constexpr void __set_Resp(::System::Net::ResponseDescription* value);

  constexpr int32_t& __get_ValidThrough();

  constexpr int32_t const& __get_ValidThrough() const;

  constexpr void __set_ValidThrough(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Net::CommandStream*& __get_Connection();

  constexpr ::cordl_internals::to_const_pointer<::System::Net::CommandStream*> const& __get_Connection() const;

  constexpr void __set_Connection(::System::Net::CommandStream* value);

  static inline ::System::Net::ReceiveState* New_ctor(::System::Net::CommandStream* connection);

  /// @brief Method .ctor addr 0x298ea3c size 0xa0 virtual false final false
  inline void _ctor(::System::Net::CommandStream* connection);

  // Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReceiveState(ReceiveState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReceiveState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReceiveState(ReceiveState const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReceiveState();

public:
  /// @brief Field Resp, offset: 0x10, size: 0x8, def value: None
  ::System::Net::ResponseDescription* ___Resp;

  /// @brief Field ValidThrough, offset: 0x18, size: 0x4, def value: None
  int32_t ___ValidThrough;

  /// @brief Field Buffer, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Connection, offset: 0x28, size: 0x8, def value: None
  ::System::Net::CommandStream* ___Connection;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ReceiveState, 0x30>, "Size mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::ReceiveState);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ReceiveState*, "System.Net", "ReceiveState");
