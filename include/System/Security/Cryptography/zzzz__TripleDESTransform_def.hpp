#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TripleDESTransform)
namespace System::Security::Cryptography {
class TripleDES;
}
namespace System::Security::Cryptography {
class DESTransform;
}
// Forward declare root types
namespace System::Security::Cryptography {
class TripleDESTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::TripleDESTransform);
// Type: System.Security.Cryptography::TripleDESTransform
// SizeInfo { instance_size: 136, native_size: -1, calculated_instance_size: 136, calculated_native_size: 136, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2987))
// CS Name: ::System.Security.Cryptography::TripleDESTransform*
class CORDL_TYPE TripleDESTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field E1, offset 0x58, size 0x8
  __declspec(property(get = __get_E1, put = __set_E1))::System::Security::Cryptography::DESTransform* E1;

  /// @brief Field D2, offset 0x60, size 0x8
  __declspec(property(get = __get_D2, put = __set_D2))::System::Security::Cryptography::DESTransform* D2;

  /// @brief Field E3, offset 0x68, size 0x8
  __declspec(property(get = __get_E3, put = __set_E3))::System::Security::Cryptography::DESTransform* E3;

  /// @brief Field D1, offset 0x70, size 0x8
  __declspec(property(get = __get_D1, put = __set_D1))::System::Security::Cryptography::DESTransform* D1;

  /// @brief Field E2, offset 0x78, size 0x8
  __declspec(property(get = __get_E2, put = __set_E2))::System::Security::Cryptography::DESTransform* E2;

  /// @brief Field D3, offset 0x80, size 0x8
  __declspec(property(get = __get_D3, put = __set_D3))::System::Security::Cryptography::DESTransform* D3;

  constexpr ::System::Security::Cryptography::DESTransform*& __get_E1();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_E1() const;

  constexpr void __set_E1(::System::Security::Cryptography::DESTransform* value);

  constexpr ::System::Security::Cryptography::DESTransform*& __get_D2();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_D2() const;

  constexpr void __set_D2(::System::Security::Cryptography::DESTransform* value);

  constexpr ::System::Security::Cryptography::DESTransform*& __get_E3();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_E3() const;

  constexpr void __set_E3(::System::Security::Cryptography::DESTransform* value);

  constexpr ::System::Security::Cryptography::DESTransform*& __get_D1();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_D1() const;

  constexpr void __set_D1(::System::Security::Cryptography::DESTransform* value);

  constexpr ::System::Security::Cryptography::DESTransform*& __get_E2();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_E2() const;

  constexpr void __set_E2(::System::Security::Cryptography::DESTransform* value);

  constexpr ::System::Security::Cryptography::DESTransform*& __get_D3();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::DESTransform*> const& __get_D3() const;

  constexpr void __set_D3(::System::Security::Cryptography::DESTransform* value);

  static inline ::System::Security::Cryptography::TripleDESTransform* New_ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                               ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor addr 0x246b81c size 0x320 virtual false final false
  inline void _ctor(::System::Security::Cryptography::TripleDES* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method ECB addr 0x2474970 size 0x120 virtual true final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method GetStrongKey addr 0x24748cc size 0xa4 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetStrongKey();

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TripleDESTransform(TripleDESTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TripleDESTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TripleDESTransform(TripleDESTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TripleDESTransform();

public:
  /// @brief Field E1, offset: 0x58, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E1;

  /// @brief Field D2, offset: 0x60, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D2;

  /// @brief Field E3, offset: 0x68, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E3;

  /// @brief Field D1, offset: 0x70, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D1;

  /// @brief Field E2, offset: 0x78, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___E2;

  /// @brief Field D3, offset: 0x80, size: 0x8, def value: None
  ::System::Security::Cryptography::DESTransform* ___D3;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::TripleDESTransform, 0x88>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::TripleDESTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::TripleDESTransform*, "System.Security.Cryptography", "TripleDESTransform");
