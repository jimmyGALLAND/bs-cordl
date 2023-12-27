#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Protocol/Ntlm/zzzz__MessageBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Type2Message)
// Forward declare root types
namespace Mono::Security::Protocol::Ntlm {
class Type2Message;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Protocol::Ntlm::Type2Message);
// Type: Mono.Security.Protocol.Ntlm::Type2Message
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Protocol::Ntlm {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13765))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13770))
// CS Name: ::Mono.Security.Protocol.Ntlm::Type2Message*
class CORDL_TYPE Type2Message : public ::Mono::Security::Protocol::Ntlm::MessageBase {
public:
  // Declarations
  /// @brief Field _nonce, offset 0x18, size 0x8
  __declspec(property(get = __get__nonce, put = __set__nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> _nonce;

  /// @brief Field _targetName, offset 0x20, size 0x8
  __declspec(property(get = __get__targetName, put = __set__targetName))::StringW _targetName;

  /// @brief Field _targetInfo, offset 0x28, size 0x8
  __declspec(property(get = __get__targetInfo, put = __set__targetInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> _targetInfo;

  __declspec(property(get = get_Nonce))::ArrayW<uint8_t, ::Array<uint8_t>*> Nonce;

  __declspec(property(get = get_TargetName))::StringW TargetName;

  __declspec(property(get = get_TargetInfo))::ArrayW<uint8_t, ::Array<uint8_t>*> TargetInfo;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__nonce();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__nonce() const;

  constexpr void __set__nonce(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::StringW& __get__targetName();

  constexpr ::StringW const& __get__targetName() const;

  constexpr void __set__targetName(::StringW value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__targetInfo();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__targetInfo() const;

  constexpr void __set__targetInfo(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Mono::Security::Protocol::Ntlm::Type2Message* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method .ctor addr 0x24018d8 size 0xa4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method Finalize addr 0x240197c size 0xa8 virtual true final false
  inline void Finalize();

  /// @brief Method get_Nonce addr 0x24009c0 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Nonce();

  /// @brief Method get_TargetName addr 0x2401a24 size 0x8 virtual false final false
  inline ::StringW get_TargetName();

  /// @brief Method get_TargetInfo addr 0x2400948 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_TargetInfo();

  /// @brief Method Decode addr 0x2401a2c size 0x180 virtual true final false
  inline void Decode(::ArrayW<uint8_t, ::Array<uint8_t>*> message);

  /// @brief Method GetBytes addr 0x2401bac size 0xb8 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  // Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Type2Message(Type2Message&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Type2Message", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Type2Message(Type2Message const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Type2Message();

public:
  /// @brief Field _nonce, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____nonce;

  /// @brief Field _targetName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____targetName;

  /// @brief Field _targetInfo, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____targetInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Protocol::Ntlm::Type2Message, 0x30>, "Size mismatch!");

} // namespace Mono::Security::Protocol::Ntlm
NEED_NO_BOX(::Mono::Security::Protocol::Ntlm::Type2Message);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Protocol::Ntlm::Type2Message*, "Mono.Security.Protocol.Ntlm", "Type2Message");
