#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(DateTimeConverter)
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::ComponentModel {
class DateTimeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DateTimeConverter);
// Type: System.ComponentModel::DateTimeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9415))
// CS Name: ::System.ComponentModel::DateTimeConverter*
class CORDL_TYPE DateTimeConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  /// @brief Method CanConvertFrom addr 0x290d5a4 size 0xc8 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x290d66c size 0xc8 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom addr 0x290d734 size 0x320 virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x290da54 size 0x32c virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  static inline ::System::ComponentModel::DateTimeConverter* New_ctor();

  /// @brief Method .ctor addr 0x290dd80 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DateTimeConverter(DateTimeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DateTimeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DateTimeConverter(DateTimeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DateTimeConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DateTimeConverter, 0x10>, "Size mismatch!");

} // namespace System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DateTimeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DateTimeConverter*, "System.ComponentModel", "DateTimeConverter");
