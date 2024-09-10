#pragma once
// IWYU pragma private; include "System/Xml/Schema/Position.hpp"
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
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::System.Xml.Schema::Position
struct CORDL_TYPE Position {
public:
// Declarations
/// @brief Method .ctor, addr 0x4309ac0, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  symbol, ::System::Object*  particle) ;

// Ctor Parameters []
// @brief default ctor
constexpr Position() ;

// Ctor Parameters [CppParam { name: "symbol", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "particle", ty: "::System::Object*", modifiers: "", def_value: None }]
constexpr Position(int32_t  symbol, ::System::Object*  particle) noexcept;

/// @brief Field symbol, offset: 0x0, size: 0x4, def value: None
 int32_t  symbol;

/// @brief Field particle, offset: 0x8, size: 0x8, def value: None
 ::System::Object*  particle;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Position, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::Position, symbol) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::Position, particle) == 0x8, "Offset mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Position, "System.Xml.Schema", "Position");
