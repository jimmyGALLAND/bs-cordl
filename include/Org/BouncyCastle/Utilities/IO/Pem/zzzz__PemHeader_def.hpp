#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PemHeader)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO::Pem {
class PemHeader;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::Pem::PemHeader);
// Type: Org.BouncyCastle.Utilities.IO.Pem::PemHeader
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO::Pem {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1805))
// CS Name: ::Org.BouncyCastle.Utilities.IO.Pem::PemHeader*
class CORDL_TYPE PemHeader : public ::System::Object {
public:
  // Declarations
  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::StringW name;

  /// @brief Field val, offset 0x18, size 0x8
  __declspec(property(get = __get_val, put = __set_val))::StringW val;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_Value))::StringW Value;

  constexpr ::StringW& __get_name();

  constexpr ::StringW const& __get_name() const;

  constexpr void __set_name(::StringW value);

  constexpr ::StringW& __get_val();

  constexpr ::StringW const& __get_val() const;

  constexpr void __set_val(::StringW value);

  static inline ::Org::BouncyCastle::Utilities::IO::Pem::PemHeader* New_ctor(::StringW name, ::StringW val);

  /// @brief Method .ctor addr 0x115f8fc size 0x2c virtual false final false
  inline void _ctor(::StringW name, ::StringW val);

  /// @brief Method get_Name addr 0x115f928 size 0x8 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_Value addr 0x115f930 size 0x8 virtual true final false
  inline ::StringW get_Value();

  /// @brief Method GetHashCode addr 0x115f938 size 0x58 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x115f9a8 size 0xb4 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x115f990 size 0x18 virtual false final false
  inline int32_t GetHashCode(::StringW s);

  // Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemHeader(PemHeader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemHeader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemHeader(PemHeader const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemHeader();

public:
  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field val, offset: 0x18, size: 0x8, def value: None
  ::StringW ___val;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::Pem::PemHeader, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO::Pem
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::Pem::PemHeader);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::Pem::PemHeader*, "Org.BouncyCastle.Utilities.IO.Pem", "PemHeader");
