#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BerApplicationSpecificParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1ApplicationSpecificParser;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class BerApplicationSpecificParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::BerApplicationSpecificParser);
// Type: Org.BouncyCastle.Asn1::BerApplicationSpecificParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(474))
// CS Name: ::Org.BouncyCastle.Asn1::BerApplicationSpecificParser*
class CORDL_TYPE BerApplicationSpecificParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field tag, offset 0x10, size 0x4
  __declspec(property(get = __get_tag, put = __set_tag)) int32_t tag;

  /// @brief Field parser, offset 0x18, size 0x8
  __declspec(property(get = __get_parser, put = __set_parser))::Org::BouncyCastle::Asn1::Asn1StreamParser* parser;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1ApplicationSpecificParser*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Convertible"
  constexpr operator ::Org::BouncyCastle::Asn1::IAsn1Convertible*() noexcept;

  constexpr int32_t& __get_tag();

  constexpr int32_t const& __get_tag() const;

  constexpr void __set_tag(int32_t value);

  constexpr ::Org::BouncyCastle::Asn1::Asn1StreamParser*& __get_parser();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1StreamParser*> const& __get_parser() const;

  constexpr void __set_parser(::Org::BouncyCastle::Asn1::Asn1StreamParser* value);

  static inline ::Org::BouncyCastle::Asn1::BerApplicationSpecificParser* New_ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method .ctor addr 0x11b641c size 0x30 virtual false final false
  inline void _ctor(int32_t tag, ::Org::BouncyCastle::Asn1::Asn1StreamParser* parser);

  /// @brief Method ReadObject addr 0x11bbb98 size 0x20 virtual true final true
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method ToAsn1Object addr 0x11b644c size 0x7c virtual true final true
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  // Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecificParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BerApplicationSpecificParser(BerApplicationSpecificParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BerApplicationSpecificParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BerApplicationSpecificParser(BerApplicationSpecificParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BerApplicationSpecificParser();

public:
  /// @brief Field tag, offset: 0x10, size: 0x4, def value: None
  int32_t ___tag;

  /// @brief Field parser, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Asn1StreamParser* ___parser;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::BerApplicationSpecificParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::BerApplicationSpecificParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::BerApplicationSpecificParser*, "Org.BouncyCastle.Asn1", "BerApplicationSpecificParser");
