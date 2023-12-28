#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__DSA_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DSACryptoServiceProvider)
namespace Mono::Security::Cryptography {
class DSAManaged;
}
namespace Mono::Security::Cryptography {
class KeyPairPersistence;
}
namespace System::Security::Cryptography {
struct DSAParameters;
}
namespace System {
class Object;
}
namespace System {
class EventArgs;
}
// Forward declare root types
namespace System::Security::Cryptography {
class DSACryptoServiceProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::DSACryptoServiceProvider);
// Type: System.Security.Cryptography::DSACryptoServiceProvider
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2931))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2979))
// CS Name: ::System.Security.Cryptography::DSACryptoServiceProvider*
class CORDL_TYPE DSACryptoServiceProvider : public ::System::Security::Cryptography::DSA {
public:
  // Declarations
  /// @brief Field store, offset 0x20, size 0x8
  __declspec(property(get = __get_store, put = __set_store))::Mono::Security::Cryptography::KeyPairPersistence* store;

  /// @brief Field persistKey, offset 0x28, size 0x1
  __declspec(property(get = __get_persistKey, put = __set_persistKey)) bool persistKey;

  /// @brief Field persisted, offset 0x29, size 0x1
  __declspec(property(get = __get_persisted, put = __set_persisted)) bool persisted;

  /// @brief Field privateKeyExportable, offset 0x2a, size 0x1
  __declspec(property(get = __get_privateKeyExportable, put = __set_privateKeyExportable)) bool privateKeyExportable;

  /// @brief Field m_disposed, offset 0x2b, size 0x1
  __declspec(property(get = __get_m_disposed, put = __set_m_disposed)) bool m_disposed;

  /// @brief Field dsa, offset 0x30, size 0x8
  __declspec(property(get = __get_dsa, put = __set_dsa))::Mono::Security::Cryptography::DSAManaged* dsa;

  /// @brief Field useMachineKeyStore, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_useMachineKeyStore, put = setStaticF_useMachineKeyStore)) bool useMachineKeyStore;

  __declspec(property(get = get_KeySize)) int32_t KeySize;

  __declspec(property(get = get_PublicOnly)) bool PublicOnly;

  constexpr ::Mono::Security::Cryptography::KeyPairPersistence*& __get_store();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::KeyPairPersistence*> const& __get_store() const;

  constexpr void __set_store(::Mono::Security::Cryptography::KeyPairPersistence* value);

  constexpr bool& __get_persistKey();

  constexpr bool const& __get_persistKey() const;

  constexpr void __set_persistKey(bool value);

  constexpr bool& __get_persisted();

  constexpr bool const& __get_persisted() const;

  constexpr void __set_persisted(bool value);

  constexpr bool& __get_privateKeyExportable();

  constexpr bool const& __get_privateKeyExportable() const;

  constexpr void __set_privateKeyExportable(bool value);

  constexpr bool& __get_m_disposed();

  constexpr bool const& __get_m_disposed() const;

  constexpr void __set_m_disposed(bool value);

  constexpr ::Mono::Security::Cryptography::DSAManaged*& __get_dsa();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Security::Cryptography::DSAManaged*> const& __get_dsa() const;

  constexpr void __set_dsa(::Mono::Security::Cryptography::DSAManaged* value);

  static inline void setStaticF_useMachineKeyStore(bool value);

  static inline bool getStaticF_useMachineKeyStore();

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor();

  /// @brief Method .ctor addr 0x246e3ec size 0x2c virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::DSACryptoServiceProvider* New_ctor(int32_t dwKeySize);

  /// @brief Method .ctor addr 0x2470584 size 0x38 virtual false final false
  inline void _ctor(int32_t dwKeySize);

  /// @brief Method Common addr 0x24705bc size 0x224 virtual false final false
  inline void Common(int32_t dwKeySize, bool parameters);

  /// @brief Method Finalize addr 0x24707e0 size 0xa0 virtual true final false
  inline void Finalize();

  /// @brief Method get_KeySize addr 0x2470880 size 0x20 virtual true final false
  inline int32_t get_KeySize();

  /// @brief Method get_PublicOnly addr 0x24708a0 size 0x1c virtual false final false
  inline bool get_PublicOnly();

  /// @brief Method ExportParameters addr 0x24708bc size 0xb4 virtual true final false
  inline ::System::Security::Cryptography::DSAParameters ExportParameters(bool includePrivateParameters);

  /// @brief Method ImportParameters addr 0x2470970 size 0x54 virtual true final false
  inline void ImportParameters(::System::Security::Cryptography::DSAParameters parameters);

  /// @brief Method VerifySignature addr 0x24709c4 size 0x20 virtual true final false
  inline bool VerifySignature(::ArrayW<uint8_t, ::Array<uint8_t>*> rgbHash, ::ArrayW<uint8_t, ::Array<uint8_t>*> rgbSignature);

  /// @brief Method Dispose addr 0x24709e4 size 0x54 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method OnKeyGenerated addr 0x2470a38 size 0x84 virtual false final false
  inline void OnKeyGenerated(::System::Object* sender, ::System::EventArgs* e);

  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DSACryptoServiceProvider(DSACryptoServiceProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DSACryptoServiceProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DSACryptoServiceProvider(DSACryptoServiceProvider const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DSACryptoServiceProvider();

public:
  /// @brief Field store, offset: 0x20, size: 0x8, def value: None
  ::Mono::Security::Cryptography::KeyPairPersistence* ___store;

  /// @brief Field persistKey, offset: 0x28, size: 0x1, def value: None
  bool ___persistKey;

  /// @brief Field persisted, offset: 0x29, size: 0x1, def value: None
  bool ___persisted;

  /// @brief Field privateKeyExportable, offset: 0x2a, size: 0x1, def value: None
  bool ___privateKeyExportable;

  /// @brief Field m_disposed, offset: 0x2b, size: 0x1, def value: None
  bool ___m_disposed;

  /// @brief Field dsa, offset: 0x30, size: 0x8, def value: None
  ::Mono::Security::Cryptography::DSAManaged* ___dsa;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::DSACryptoServiceProvider, 0x38>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::DSACryptoServiceProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::DSACryptoServiceProvider*, "System.Security.Cryptography", "DSACryptoServiceProvider");
