#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ifconf)
// Forward declare root types
namespace System::Net::NetworkInformation::AixStructs {
struct ifconf;
}
// Write type traits
MARK_VAL_T(::System::Net::NetworkInformation::AixStructs::ifconf);
// Type: System.Net.NetworkInformation.AixStructs::ifconf
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 8, packing: Some(1), specified_packing: Some(0) }
namespace System::Net::NetworkInformation::AixStructs {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2603))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9300))
// CS Name: ::System.Net.NetworkInformation.AixStructs::ifconf
#pragma pack(push, 0)
struct CORDL_TYPE ifconf {
public:
  // Declarations
  /// @brief Field ifc_len, offset 0x0, size 0x4
  __declspec(property(get = __get_ifc_len, put = __set_ifc_len)) int32_t ifc_len;

  /// @brief Field ifc_buf, offset 0x8, size 0x8
  __declspec(property(get = __get_ifc_buf, put = __set_ifc_buf)) void* ifc_buf;

  constexpr int32_t& __get_ifc_len();

  constexpr int32_t const& __get_ifc_len() const;

  constexpr void __set_ifc_len(int32_t value);

  constexpr void*& __get_ifc_buf();

  constexpr void* const& __get_ifc_buf() const;

  constexpr void __set_ifc_buf(void* value);

  // Ctor Parameters [CppParam { name: "ifc_len", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ifc_buf", ty: "void*", modifiers: "", def_value: None }]
  constexpr ifconf(int32_t ifc_len, void* ifc_buf) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ifconf();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___ifc_len_padding[0x0];
      /// @brief Field ifc_len, offset: 0x0, size: 0x4, def value: None
      int32_t ___ifc_len;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___ifc_len_padding_forAlignment[0x0];
      /// @brief Field ifc_len, offset: 0x0, size: 0x4, def value: None
      int32_t ___ifc_len_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x8
      uint8_t ___ifc_buf_padding[0x8];
      /// @brief Field ifc_buf, offset: 0x8, size: 0x8, def value: None
      void* ___ifc_buf;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x8 for alignment
      uint8_t ___ifc_buf_padding_forAlignment[0x8];
      /// @brief Field ifc_buf, offset: 0x8, size: 0x8, def value: None
      void* ___ifc_buf_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::NetworkInformation::AixStructs::ifconf, 0x10>, "Size mismatch!");

} // namespace System::Net::NetworkInformation::AixStructs
DEFINE_IL2CPP_ARG_TYPE(::System::Net::NetworkInformation::AixStructs::ifconf, "System.Net.NetworkInformation.AixStructs", "ifconf");
