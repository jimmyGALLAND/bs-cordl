#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidateNames)
namespace System {
class Exception;
}
// Forward declare root types
namespace System::Xml {
class ValidateNames;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::ValidateNames);
// Type: System.Xml::ValidateNames
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11544)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11543))
// CS Name: ::System.Xml::ValidateNames*
class CORDL_TYPE ValidateNames : public ::System::Object {
public:
  // Declarations
  /// @brief Field xmlCharType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_xmlCharType, put = setStaticF_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  static inline void setStaticF_xmlCharType(::System::Xml::XmlCharType value);

  static inline ::System::Xml::XmlCharType getStaticF_xmlCharType();

  /// @brief Method ParseNmtoken addr 0x289ca7c size 0xc8 virtual false final false
  static inline int32_t ParseNmtoken(::StringW s, int32_t offset);

  /// @brief Method ParseNmtokenNoNamespaces addr 0x289cb44 size 0xe4 virtual false final false
  static inline int32_t ParseNmtokenNoNamespaces(::StringW s, int32_t offset);

  /// @brief Method ParseNameNoNamespaces addr 0x289cc28 size 0x158 virtual false final false
  static inline int32_t ParseNameNoNamespaces(::StringW s, int32_t offset);

  /// @brief Method ParseNCName addr 0x289cd80 size 0x11c virtual false final false
  static inline int32_t ParseNCName(::StringW s, int32_t offset);

  /// @brief Method ParseNCName addr 0x289ce9c size 0x58 virtual false final false
  static inline int32_t ParseNCName(::StringW s);

  /// @brief Method ParseQName addr 0x289cef4 size 0xdc virtual false final false
  static inline int32_t ParseQName(::StringW s, int32_t offset, ByRef<int32_t> colonOffset);

  /// @brief Method ParseQNameThrow addr 0x289cfd0 size 0x10c virtual false final false
  static inline void ParseQNameThrow(::StringW s, ByRef<::StringW> prefix, ByRef<::StringW> localName);

  /// @brief Method ThrowInvalidName addr 0x289d0dc size 0x178 virtual false final false
  static inline void ThrowInvalidName(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar);

  /// @brief Method GetInvalidNameException addr 0x289d4b4 size 0x1c0 virtual false final false
  static inline ::System::Exception* GetInvalidNameException(::StringW s, int32_t offsetStartChar, int32_t offsetBadChar);

  // Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidateNames(ValidateNames&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidateNames", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidateNames(ValidateNames const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidateNames();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::ValidateNames, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::ValidateNames);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidateNames*, "System.Xml", "ValidateNames");
