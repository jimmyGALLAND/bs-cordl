#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Generator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerGenerator)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerGenerator);
// Type: Org.BouncyCastle.Asn1::DerGenerator
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(451))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(508))
// CS Name: ::Org.BouncyCastle.Asn1::DerGenerator*
class CORDL_TYPE DerGenerator : public ::Org::BouncyCastle::Asn1::Asn1Generator {
public:
  // Declarations
  /// @brief Field _tagged, offset 0x18, size 0x1
  __declspec(property(get = __get__tagged, put = __set__tagged)) bool _tagged;

  /// @brief Field _isExplicit, offset 0x19, size 0x1
  __declspec(property(get = __get__isExplicit, put = __set__isExplicit)) bool _isExplicit;

  /// @brief Field _tagNo, offset 0x1c, size 0x4
  __declspec(property(get = __get__tagNo, put = __set__tagNo)) int32_t _tagNo;

  constexpr bool& __get__tagged();

  constexpr bool const& __get__tagged() const;

  constexpr void __set__tagged(bool value);

  constexpr bool& __get__isExplicit();

  constexpr bool const& __get__isExplicit() const;

  constexpr void __set__isExplicit(bool value);

  constexpr int32_t& __get__tagNo();

  constexpr int32_t const& __get__tagNo() const;

  constexpr void __set__tagNo(int32_t value);

  static inline ::Org::BouncyCastle::Asn1::DerGenerator* New_ctor(::System::IO::Stream* outStream);

  /// @brief Method .ctor addr 0x11c2b18 size 0x2c virtual false final false
  inline void _ctor(::System::IO::Stream* outStream);

  static inline ::Org::BouncyCastle::Asn1::DerGenerator* New_ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method .ctor addr 0x11c2b44 size 0x4c virtual false final false
  inline void _ctor(::System::IO::Stream* outStream, int32_t tagNo, bool isExplicit);

  /// @brief Method WriteLength addr 0x11c2b90 size 0xac virtual false final false
  static inline void WriteLength(::System::IO::Stream* outStr, int32_t length);

  /// @brief Method WriteDerEncoded addr 0x11c2c3c size 0x60 virtual false final false
  static inline void WriteDerEncoded(::System::IO::Stream* outStream, int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteDerEncoded addr 0x11c2c9c size 0xe0 virtual false final false
  inline void WriteDerEncoded(int32_t tag, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes);

  /// @brief Method WriteDerEncoded addr 0x11c2d7c size 0x34 virtual false final false
  static inline void WriteDerEncoded(::System::IO::Stream* outStr, int32_t tag, ::System::IO::Stream* inStr);

  // Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DerGenerator(DerGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DerGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DerGenerator(DerGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DerGenerator();

public:
  /// @brief Field _tagged, offset: 0x18, size: 0x1, def value: None
  bool ____tagged;

  /// @brief Field _isExplicit, offset: 0x19, size: 0x1, def value: None
  bool ____isExplicit;

  /// @brief Field _tagNo, offset: 0x1c, size: 0x4, def value: None
  int32_t ____tagNo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerGenerator, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerGenerator*, "Org.BouncyCastle.Asn1", "DerGenerator");
