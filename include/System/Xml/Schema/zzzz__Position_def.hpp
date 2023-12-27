#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Position)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
struct Position;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::Position);
// Type: System.Xml.Schema::Position
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11597))
// CS Name: ::System.Xml.Schema::Position
struct CORDL_TYPE Position {
public:
  // Declarations
  /// @brief Method .ctor addr 0x28ada14 size 0xc virtual false final false
  inline void _ctor(int32_t symbol, ::System::Object* particle);

  // Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "particle", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr Position(int32_t symbol, ::System::Object* particle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Position();

  /// @brief Field symbol, offset: 0x0, size: 0x4, def value: None
  int32_t symbol;

  /// @brief Field particle, offset: 0x8, size: 0x8, def value: None
  ::System::Object* particle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Position, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Position, "System.Xml.Schema", "Position");
