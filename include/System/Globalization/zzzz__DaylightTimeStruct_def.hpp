#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(DaylightTimeStruct)
namespace System {
struct DateTime;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Globalization {
struct DaylightTimeStruct;
}
// Write type traits
MARK_VAL_T(::System::Globalization::DaylightTimeStruct);
// Type: System.Globalization::DaylightTimeStruct
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2368)), TypeDefinitionIndex(TypeDefinitionIndex(2484))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3672))
// CS Name: ::System.Globalization::DaylightTimeStruct
struct CORDL_TYPE DaylightTimeStruct {
public:
  // Declarations
  /// @brief Method .ctor addr 0x2554c40 size 0xc virtual false final false
  inline void _ctor(::System::DateTime start, ::System::DateTime end, ::System::TimeSpan delta);

  // Ctor Parameters [CppParam { name: "Start", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam { name: "End", ty: "::System::DateTime", modifiers: "", def_value: None }, CppParam
  // { name: "Delta", ty: "::System::TimeSpan", modifiers: "", def_value: None }]
  constexpr DaylightTimeStruct(::System::DateTime Start, ::System::DateTime End, ::System::TimeSpan Delta) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr DaylightTimeStruct();

  /// @brief Field Start, offset: 0x0, size: 0x8, def value: None
  ::System::DateTime Start;

  /// @brief Field End, offset: 0x8, size: 0x8, def value: None
  ::System::DateTime End;

  /// @brief Field Delta, offset: 0x10, size: 0x8, def value: None
  ::System::TimeSpan Delta;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::DaylightTimeStruct, 0x18>, "Size mismatch!");

} // namespace System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::DaylightTimeStruct, "System.Globalization", "DaylightTimeStruct");
