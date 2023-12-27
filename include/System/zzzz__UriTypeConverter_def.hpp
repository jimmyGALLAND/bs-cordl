#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeConverter_def.hpp"
CORDL_MODULE_EXPORT(UriTypeConverter)
namespace System::ComponentModel {
class ITypeDescriptorContext;
}
namespace System {
class Type;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class UriTypeConverter;
}
// Write type traits
MARK_REF_PTR_T(::System::UriTypeConverter);
// Type: System::UriTypeConverter
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9480))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8899))
// CS Name: ::System::UriTypeConverter*
class CORDL_TYPE UriTypeConverter : public ::System::ComponentModel::TypeConverter {
public:
  // Declarations
  static inline ::System::UriTypeConverter* New_ctor();

  /// @brief Method .ctor addr 0x294ddd8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method CanConvert addr 0x294dde0 size 0xe4 virtual false final false
  inline bool CanConvert(::System::Type* type);

  /// @brief Method CanConvertFrom addr 0x294dec4 size 0xb4 virtual true final false
  inline bool CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType);

  /// @brief Method CanConvertTo addr 0x294df78 size 0x78 virtual true final false
  inline bool CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType);

  /// @brief Method ConvertFrom addr 0x294dff0 size 0x1ac virtual true final false
  inline ::System::Object* ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value);

  /// @brief Method ConvertTo addr 0x294e19c size 0x1ec virtual true final false
  inline ::System::Object* ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                     ::System::Type* destinationType);

  // Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UriTypeConverter(UriTypeConverter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UriTypeConverter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UriTypeConverter(UriTypeConverter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UriTypeConverter();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::UriTypeConverter, 0x10>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UriTypeConverter);
DEFINE_IL2CPP_ARG_TYPE(::System::UriTypeConverter*, "System", "UriTypeConverter");
