#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__BaseNumberConverter_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UInt16Converter)
namespace System::Globalization {
class NumberFormatInfo;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class UInt16Converter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::UInt16Converter);
// Type: System.ComponentModel::UInt16Converter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9462))
// CS Name: ::System.ComponentModel::UInt16Converter*
class CORDL_TYPE UInt16Converter : public ::System::ComponentModel::BaseNumberConverter {
public:
  // Declarations
  __declspec(property(get = get_TargetType))::System::Type* TargetType;

  /// @brief Method get_TargetType addr 0x2919334 size 0x6c virtual true final false
  inline ::System::Type* get_TargetType();

  /// @brief Method FromString addr 0x29193a0 size 0x94 virtual true final false
  inline ::System::Object* FromString(::StringW value, int32_t radix);

  /// @brief Method FromString addr 0x2919434 size 0x74 virtual true final false
  inline ::System::Object* FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo);

  /// @brief Method ToString addr 0x29194a8 size 0xb0 virtual true final false
  inline ::StringW ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo);

  static inline ::System::ComponentModel::UInt16Converter* New_ctor();

  /// @brief Method .ctor addr 0x2919558 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UInt16Converter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UInt16Converter(UInt16Converter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UInt16Converter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UInt16Converter(UInt16Converter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UInt16Converter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::UInt16Converter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::UInt16Converter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::UInt16Converter*, "System.ComponentModel", "UInt16Converter");
