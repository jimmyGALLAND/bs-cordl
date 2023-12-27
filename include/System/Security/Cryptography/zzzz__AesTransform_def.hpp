#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AesTransform)
namespace System::Security::Cryptography {
class Aes;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AesTransform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AesTransform);
// Type: System.Security.Cryptography::AesTransform
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2284))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14252))
// CS Name: ::System.Security.Cryptography::AesTransform*
class CORDL_TYPE AesTransform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field expandedKey, offset 0x58, size 0x8
  __declspec(property(get = __get_expandedKey, put = __set_expandedKey))::ArrayW<uint32_t, ::Array<uint32_t>*> expandedKey;

  /// @brief Field Nk, offset 0x60, size 0x4
  __declspec(property(get = __get_Nk, put = __set_Nk)) int32_t Nk;

  /// @brief Field Nr, offset 0x64, size 0x4
  __declspec(property(get = __get_Nr, put = __set_Nr)) int32_t Nr;

  /// @brief Field Rcon, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Rcon, put = setStaticF_Rcon))::ArrayW<uint32_t, ::Array<uint32_t>*> Rcon;

  /// @brief Field SBox, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_SBox, put = setStaticF_SBox))::ArrayW<uint8_t, ::Array<uint8_t>*> SBox;

  /// @brief Field iSBox, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iSBox, put = setStaticF_iSBox))::ArrayW<uint8_t, ::Array<uint8_t>*> iSBox;

  /// @brief Field T0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T0, put = setStaticF_T0))::ArrayW<uint32_t, ::Array<uint32_t>*> T0;

  /// @brief Field T1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T1, put = setStaticF_T1))::ArrayW<uint32_t, ::Array<uint32_t>*> T1;

  /// @brief Field T2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T2, put = setStaticF_T2))::ArrayW<uint32_t, ::Array<uint32_t>*> T2;

  /// @brief Field T3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_T3, put = setStaticF_T3))::ArrayW<uint32_t, ::Array<uint32_t>*> T3;

  /// @brief Field iT0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iT0, put = setStaticF_iT0))::ArrayW<uint32_t, ::Array<uint32_t>*> iT0;

  /// @brief Field iT1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iT1, put = setStaticF_iT1))::ArrayW<uint32_t, ::Array<uint32_t>*> iT1;

  /// @brief Field iT2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iT2, put = setStaticF_iT2))::ArrayW<uint32_t, ::Array<uint32_t>*> iT2;

  /// @brief Field iT3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_iT3, put = setStaticF_iT3))::ArrayW<uint32_t, ::Array<uint32_t>*> iT3;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_expandedKey();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_expandedKey() const;

  constexpr void __set_expandedKey(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr int32_t& __get_Nk();

  constexpr int32_t const& __get_Nk() const;

  constexpr void __set_Nk(int32_t value);

  constexpr int32_t& __get_Nr();

  constexpr int32_t const& __get_Nr() const;

  constexpr void __set_Nr(int32_t value);

  static inline void setStaticF_Rcon(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_Rcon();

  static inline void setStaticF_SBox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_SBox();

  static inline void setStaticF_iSBox(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_iSBox();

  static inline void setStaticF_T0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_T0();

  static inline void setStaticF_T1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_T1();

  static inline void setStaticF_T2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_T2();

  static inline void setStaticF_T3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_T3();

  static inline void setStaticF_iT0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_iT0();

  static inline void setStaticF_iT1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_iT1();

  static inline void setStaticF_iT2(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_iT2();

  static inline void setStaticF_iT3(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_iT3();

  static inline ::System::Security::Cryptography::AesTransform* New_ctor(::System::Security::Cryptography::Aes* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method .ctor addr 0x280d698 size 0x6f4 virtual false final false
  inline void _ctor(::System::Security::Cryptography::Aes* algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method ECB addr 0x280e0a8 size 0x14 virtual true final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  /// @brief Method SubByte addr 0x280dfe4 size 0xc4 virtual false final false
  inline uint32_t SubByte(uint32_t a);

  /// @brief Method Encrypt128 addr 0x280e0bc size 0x1e2c virtual false final false
  inline void Encrypt128(::ArrayW<uint8_t, ::Array<uint8_t>*> indata, ::ArrayW<uint8_t, ::Array<uint8_t>*> outdata, ::ArrayW<uint32_t, ::Array<uint32_t>*> ekey);

  /// @brief Method Decrypt128 addr 0x280fee8 size 0x1df0 virtual false final false
  inline void Decrypt128(::ArrayW<uint8_t, ::Array<uint8_t>*> indata, ::ArrayW<uint8_t, ::Array<uint8_t>*> outdata, ::ArrayW<uint32_t, ::Array<uint32_t>*> ekey);

  // Ctor Parameters [CppParam { name: "", ty: "AesTransform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AesTransform(AesTransform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AesTransform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AesTransform(AesTransform const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AesTransform();

public:
  /// @brief Field expandedKey, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___expandedKey;

  /// @brief Field Nk, offset: 0x60, size: 0x4, def value: None
  int32_t ___Nk;

  /// @brief Field Nr, offset: 0x64, size: 0x4, def value: None
  int32_t ___Nr;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AesTransform, 0x68>, "Size mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AesTransform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AesTransform*, "System.Security.Cryptography", "AesTransform");
