#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ColorNoAlphaSerializable_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(ColorSchemeNetSerializable)
namespace LiteNetLib::Utils {
class NetDataWriter;
}
namespace UnityEngine {
struct Color;
}
namespace LiteNetLib::Utils {
class INetSerializable;
}
namespace GlobalNamespace {
struct ColorNoAlphaSerializable;
}
namespace LiteNetLib::Utils {
class NetDataReader;
}
// Forward declare root types
namespace GlobalNamespace {
struct ColorSchemeNetSerializable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ColorSchemeNetSerializable);
// Type: ::ColorSchemeNetSerializable
// SizeInfo { instance_size: 112, native_size: 112, calculated_instance_size: 112, calculated_native_size: 128, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15045))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12690))
// CS Name: ::ColorSchemeNetSerializable
struct CORDL_TYPE ColorSchemeNetSerializable {
public:
  // Declarations
  /// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
  constexpr operator ::LiteNetLib::Utils::INetSerializable*();

  /// @brief Method .ctor addr 0xe2a7b8 size 0x180 virtual false final false
  inline void _ctor(::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, ::UnityEngine::Color environmentColor0,
                    ::UnityEngine::Color environmentColor1, ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost);

  /// @brief Method Serialize addr 0xe2a938 size 0x80 virtual true final true
  inline void Serialize(::LiteNetLib::Utils::NetDataWriter* writer);

  /// @brief Method Deserialize addr 0xe2a9b8 size 0x80 virtual true final true
  inline void Deserialize(::LiteNetLib::Utils::NetDataReader* reader);

  // Ctor Parameters [CppParam { name: "saberAColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "saberBColor", ty:
  // "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "obstaclesColor", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value:
  // None }, CppParam { name: "environmentColor0", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor1", ty:
  // "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }, CppParam { name: "environmentColor0Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "",
  // def_value: None }, CppParam { name: "environmentColor1Boost", ty: "::GlobalNamespace::ColorNoAlphaSerializable", modifiers: "", def_value: None }]
  constexpr ColorSchemeNetSerializable(::GlobalNamespace::ColorNoAlphaSerializable saberAColor, ::GlobalNamespace::ColorNoAlphaSerializable saberBColor,
                                       ::GlobalNamespace::ColorNoAlphaSerializable obstaclesColor, ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0,
                                       ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1, ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost,
                                       ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorSchemeNetSerializable();

  /// @brief Field saberAColor, offset: 0x0, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable saberAColor;

  /// @brief Field saberBColor, offset: 0x10, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable saberBColor;

  /// @brief Field obstaclesColor, offset: 0x20, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable obstaclesColor;

  /// @brief Field environmentColor0, offset: 0x30, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0;

  /// @brief Field environmentColor1, offset: 0x40, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1;

  /// @brief Field environmentColor0Boost, offset: 0x50, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable environmentColor0Boost;

  /// @brief Field environmentColor1Boost, offset: 0x60, size: 0x10, def value: None
  ::GlobalNamespace::ColorNoAlphaSerializable environmentColor1Boost;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorSchemeNetSerializable, 0x70>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemeNetSerializable, "", "ColorSchemeNetSerializable");
