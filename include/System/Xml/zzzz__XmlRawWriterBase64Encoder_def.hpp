#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Base64Encoder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlRawWriterBase64Encoder)
namespace System::Xml {
class XmlRawWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlRawWriterBase64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlRawWriterBase64Encoder);
// Type: System.Xml::XmlRawWriterBase64Encoder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11404))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11405))
// CS Name: ::System.Xml::XmlRawWriterBase64Encoder*
class CORDL_TYPE XmlRawWriterBase64Encoder : public ::System::Xml::Base64Encoder {
public:
  // Declarations
  /// @brief Field rawWriter, offset 0x28, size 0x8
  __declspec(property(get = __get_rawWriter, put = __set_rawWriter))::System::Xml::XmlRawWriter* rawWriter;

  constexpr ::System::Xml::XmlRawWriter*& __get_rawWriter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlRawWriter*> const& __get_rawWriter() const;

  constexpr void __set_rawWriter(::System::Xml::XmlRawWriter* value);

  static inline ::System::Xml::XmlRawWriterBase64Encoder* New_ctor(::System::Xml::XmlRawWriter* rawWriter);

  /// @brief Method .ctor addr 0x284dbbc size 0x24 virtual false final false
  inline void _ctor(::System::Xml::XmlRawWriter* rawWriter);

  /// @brief Method WriteChars addr 0x284dbe0 size 0x24 virtual true final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t index, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriterBase64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlRawWriterBase64Encoder(XmlRawWriterBase64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlRawWriterBase64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlRawWriterBase64Encoder(XmlRawWriterBase64Encoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlRawWriterBase64Encoder();

public:
  /// @brief Field rawWriter, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlRawWriter* ___rawWriter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlRawWriterBase64Encoder, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlRawWriterBase64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlRawWriterBase64Encoder*, "System.Xml", "XmlRawWriterBase64Encoder");
