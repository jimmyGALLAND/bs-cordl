#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CmsContentInfoParser)
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Asn1::Cms {
class ContentInfoParser;
}
// Forward declare root types
namespace Org::BouncyCastle::Cms {
class CmsContentInfoParser;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Cms::CmsContentInfoParser);
// Type: Org.BouncyCastle.Cms::CmsContentInfoParser
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(620))
// CS Name: ::Org.BouncyCastle.Cms::CmsContentInfoParser*
class CORDL_TYPE CmsContentInfoParser : public ::System::Object {
public:
  // Declarations
  /// @brief Field contentInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_contentInfo, put = __set_contentInfo))::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* contentInfo;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::IO::Stream* data;

  constexpr ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*& __get_contentInfo();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::ContentInfoParser*> const& __get_contentInfo() const;

  constexpr void __set_contentInfo(::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* value);

  constexpr ::System::IO::Stream*& __get_data();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_data() const;

  constexpr void __set_data(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Cms::CmsContentInfoParser* New_ctor(::System::IO::Stream* data);

  /// @brief Method .ctor addr 0x11da548 size 0x248 virtual false final false
  inline void _ctor(::System::IO::Stream* data);

  /// @brief Method Close addr 0x11da790 size 0x5c virtual false final false
  inline void Close();

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CmsContentInfoParser(CmsContentInfoParser&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CmsContentInfoParser", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CmsContentInfoParser(CmsContentInfoParser const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CmsContentInfoParser();

public:
  /// @brief Field contentInfo, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::ContentInfoParser* ___contentInfo;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Cms::CmsContentInfoParser, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Cms
NEED_NO_BOX(::Org::BouncyCastle::Cms::CmsContentInfoParser);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Cms::CmsContentInfoParser*, "Org.BouncyCastle.Cms", "CmsContentInfoParser");
