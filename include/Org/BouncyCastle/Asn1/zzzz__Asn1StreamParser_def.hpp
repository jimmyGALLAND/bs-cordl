#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Asn1StreamParser)
namespace Org::BouncyCastle::Asn1 {
class Asn1EncodableVector;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Convertible;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class Asn1StreamParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Asn1StreamParser);
// Type: Org.BouncyCastle.Asn1::Asn1StreamParser
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(467))
// CS Name: ::Org.BouncyCastle.Asn1::Asn1StreamParser*
class CORDL_TYPE Asn1StreamParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field _in, offset 0x10, size 0x8
  __declspec(property(get = __get__in, put = __set__in))::System::IO::Stream* _in;

  /// @brief Field _limit, offset 0x18, size 0x4
  __declspec(property(get = __get__limit, put = __set__limit)) int32_t _limit;

  /// @brief Field tmpBuffers, offset 0x20, size 0x8
  __declspec(property(get = __get_tmpBuffers, put = __set_tmpBuffers))::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> tmpBuffers;

  constexpr ::System::IO::Stream*& __get__in();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get__in() const;

  constexpr void __set__in(::System::IO::Stream* value);

  constexpr int32_t& __get__limit();

  constexpr int32_t const& __get__limit() const;

  constexpr void __set__limit(int32_t value);

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*>& __get_tmpBuffers();

  constexpr ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> const& __get_tmpBuffers() const;

  constexpr void __set_tmpBuffers(::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> value);

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::System::IO::Stream* inStream);

  /// @brief Method .ctor addr 0x11b4bd0 size 0x30 virtual false final false
  inline void _ctor(::System::IO::Stream* inStream);

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::System::IO::Stream* inStream, int32_t limit);

  /// @brief Method .ctor addr 0x11b632c size 0xf0 virtual false final false
  inline void _ctor(::System::IO::Stream* inStream, int32_t limit);

  static inline ::Org::BouncyCastle::Asn1::Asn1StreamParser* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method .ctor addr 0x11b9ed4 size 0x80 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> encoding);

  /// @brief Method ReadIndef addr 0x11b9f54 size 0x18c virtual false final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadIndef(int32_t tagValue);

  /// @brief Method ReadImplicit addr 0x11ba0e0 size 0x2c8 virtual false final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadImplicit(bool constructed, int32_t tag);

  /// @brief Method ReadTaggedObject addr 0x11b4c00 size 0x23c virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ReadTaggedObject(bool constructed, int32_t tag);

  /// @brief Method ReadObject addr 0x11ba5dc size 0x5dc virtual true final false
  inline ::Org::BouncyCastle::Asn1::IAsn1Convertible* ReadObject();

  /// @brief Method Set00Check addr 0x11babb8 size 0x90 virtual false final false
  inline void Set00Check(bool enabled);

  /// @brief Method ReadVector addr 0x11ba420 size 0x128 virtual false final false
  inline ::Org::BouncyCastle::Asn1::Asn1EncodableVector* ReadVector();

  // Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Asn1StreamParser(Asn1StreamParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Asn1StreamParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Asn1StreamParser(Asn1StreamParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Asn1StreamParser();

public:
  /// @brief Field _in, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Stream* ____in;

  /// @brief Field _limit, offset: 0x18, size: 0x4, def value: None
  int32_t ____limit;

  /// @brief Field tmpBuffers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::ArrayW<uint8_t, ::Array<uint8_t>*>, ::Array<::ArrayW<uint8_t, ::Array<uint8_t>*>>*> ___tmpBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Asn1StreamParser, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Asn1StreamParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Asn1StreamParser*, "Org.BouncyCastle.Asn1", "Asn1StreamParser");
