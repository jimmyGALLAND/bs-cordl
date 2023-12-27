#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__InputStreamPacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LiteralDataPacket)
namespace Org::BouncyCastle::Bcpg {
class BcpgInputStream;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class LiteralDataPacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::LiteralDataPacket);
// Type: Org.BouncyCastle.Bcpg::LiteralDataPacket
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(557))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(573))
// CS Name: ::Org.BouncyCastle.Bcpg::LiteralDataPacket*
class CORDL_TYPE LiteralDataPacket : public ::Org::BouncyCastle::Bcpg::InputStreamPacket {
public:
  // Declarations
  /// @brief Field format, offset 0x18, size 0x4
  __declspec(property(get = __get_format, put = __set_format)) int32_t format;

  /// @brief Field fileName, offset 0x20, size 0x8
  __declspec(property(get = __get_fileName, put = __set_fileName))::ArrayW<uint8_t, ::Array<uint8_t>*> fileName;

  /// @brief Field modDate, offset 0x28, size 0x8
  __declspec(property(get = __get_modDate, put = __set_modDate)) int64_t modDate;

  __declspec(property(get = get_Format)) int32_t Format;

  __declspec(property(get = get_ModificationTime)) int64_t ModificationTime;

  __declspec(property(get = get_FileName))::StringW FileName;

  constexpr int32_t& __get_format();

  constexpr int32_t const& __get_format() const;

  constexpr void __set_format(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fileName();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fileName() const;

  constexpr void __set_fileName(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int64_t& __get_modDate();

  constexpr int64_t const& __get_modDate() const;

  constexpr void __set_modDate(int64_t value);

  static inline ::Org::BouncyCastle::Bcpg::LiteralDataPacket* New_ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method .ctor addr 0x11ceb9c size 0x1bc virtual false final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::BcpgInputStream* bcpgIn);

  /// @brief Method get_Format addr 0x11d1c8c size 0x8 virtual false final false
  inline int32_t get_Format();

  /// @brief Method get_ModificationTime addr 0x11d1c94 size 0x8 virtual false final false
  inline int64_t get_ModificationTime();

  /// @brief Method get_FileName addr 0x11d1c9c size 0xc virtual false final false
  inline ::StringW get_FileName();

  /// @brief Method GetRawFileName addr 0x11d1ca8 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetRawFileName();

  // Ctor Parameters [CppParam { name: "", ty: "LiteralDataPacket", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LiteralDataPacket(LiteralDataPacket&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LiteralDataPacket", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LiteralDataPacket(LiteralDataPacket const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LiteralDataPacket();

public:
  /// @brief Field format, offset: 0x18, size: 0x4, def value: None
  int32_t ___format;

  /// @brief Field fileName, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fileName;

  /// @brief Field modDate, offset: 0x28, size: 0x8, def value: None
  int64_t ___modDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::LiteralDataPacket, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::LiteralDataPacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::LiteralDataPacket*, "Org.BouncyCastle.Bcpg", "LiteralDataPacket");
