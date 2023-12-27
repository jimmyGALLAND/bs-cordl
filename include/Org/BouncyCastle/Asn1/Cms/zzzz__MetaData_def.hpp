#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
CORDL_MODULE_EXPORT(MetaData)
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class DerIA5String;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Asn1::Cms {
class Attributes;
}
namespace Org::BouncyCastle::Asn1 {
class DerBoolean;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cms {
class MetaData;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cms::MetaData);
// Type: Org.BouncyCastle.Asn1.Cms::MetaData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cms {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(80))
// CS Name: ::Org.BouncyCastle.Asn1.Cms::MetaData*
class CORDL_TYPE MetaData : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
  // Declarations
  /// @brief Field hashProtected, offset 0x10, size 0x8
  __declspec(property(get = __get_hashProtected, put = __set_hashProtected))::Org::BouncyCastle::Asn1::DerBoolean* hashProtected;

  /// @brief Field fileName, offset 0x18, size 0x8
  __declspec(property(get = __get_fileName, put = __set_fileName))::Org::BouncyCastle::Asn1::DerUtf8String* fileName;

  /// @brief Field mediaType, offset 0x20, size 0x8
  __declspec(property(get = __get_mediaType, put = __set_mediaType))::Org::BouncyCastle::Asn1::DerIA5String* mediaType;

  /// @brief Field otherMetaData, offset 0x28, size 0x8
  __declspec(property(get = __get_otherMetaData, put = __set_otherMetaData))::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData;

  __declspec(property(get = get_IsHashProtected)) bool IsHashProtected;

  __declspec(property(get = get_FileName))::Org::BouncyCastle::Asn1::DerUtf8String* FileName;

  __declspec(property(get = get_MediaType))::Org::BouncyCastle::Asn1::DerIA5String* MediaType;

  __declspec(property(get = get_OtherMetaData))::Org::BouncyCastle::Asn1::Cms::Attributes* OtherMetaData;

  constexpr ::Org::BouncyCastle::Asn1::DerBoolean*& __get_hashProtected();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerBoolean*> const& __get_hashProtected() const;

  constexpr void __set_hashProtected(::Org::BouncyCastle::Asn1::DerBoolean* value);

  constexpr ::Org::BouncyCastle::Asn1::DerUtf8String*& __get_fileName();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerUtf8String*> const& __get_fileName() const;

  constexpr void __set_fileName(::Org::BouncyCastle::Asn1::DerUtf8String* value);

  constexpr ::Org::BouncyCastle::Asn1::DerIA5String*& __get_mediaType();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::DerIA5String*> const& __get_mediaType() const;

  constexpr void __set_mediaType(::Org::BouncyCastle::Asn1::DerIA5String* value);

  constexpr ::Org::BouncyCastle::Asn1::Cms::Attributes*& __get_otherMetaData();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Cms::Attributes*> const& __get_otherMetaData() const;

  constexpr void __set_otherMetaData(::Org::BouncyCastle::Asn1::Cms::Attributes* value);

  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* New_ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String* fileName,
                                                                   ::Org::BouncyCastle::Asn1::DerIA5String* mediaType, ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData);

  /// @brief Method .ctor addr 0xe7a62c size 0x40 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::DerBoolean* hashProtected, ::Org::BouncyCastle::Asn1::DerUtf8String* fileName, ::Org::BouncyCastle::Asn1::DerIA5String* mediaType,
                    ::Org::BouncyCastle::Asn1::Cms::Attributes* otherMetaData);

  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method .ctor addr 0xe7a66c size 0x214 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence* seq);

  /// @brief Method GetInstance addr 0xe7a880 size 0xa4 virtual false final false
  static inline ::Org::BouncyCastle::Asn1::Cms::MetaData* GetInstance(::System::Object* obj);

  /// @brief Method ToAsn1Object addr 0xe7a924 size 0x1a0 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();

  /// @brief Method get_IsHashProtected addr 0xe7aac4 size 0x1c virtual true final false
  inline bool get_IsHashProtected();

  /// @brief Method get_FileName addr 0xe7aae0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerUtf8String* get_FileName();

  /// @brief Method get_MediaType addr 0xe7aae8 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::DerIA5String* get_MediaType();

  /// @brief Method get_OtherMetaData addr 0xe7aaf0 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Asn1::Cms::Attributes* get_OtherMetaData();

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MetaData(MetaData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MetaData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MetaData(MetaData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MetaData();

public:
  /// @brief Field hashProtected, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerBoolean* ___hashProtected;

  /// @brief Field fileName, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerUtf8String* ___fileName;

  /// @brief Field mediaType, offset: 0x20, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::DerIA5String* ___mediaType;

  /// @brief Field otherMetaData, offset: 0x28, size: 0x8, def value: None
  ::Org::BouncyCastle::Asn1::Cms::Attributes* ___otherMetaData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cms::MetaData, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Cms
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cms::MetaData);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cms::MetaData*, "Org.BouncyCastle.Asn1.Cms", "MetaData");
