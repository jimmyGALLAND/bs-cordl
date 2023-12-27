#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphMetrics)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::GlyphMetrics);
// Type: UnityEngine.TextCore::GlyphMetrics
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15529))
// CS Name: ::UnityEngine.TextCore::GlyphMetrics
struct CORDL_TYPE GlyphMetrics {
public:
  // Declarations
  __declspec(property(get = get_width)) float_t width;

  __declspec(property(get = get_height)) float_t height;

  __declspec(property(get = get_horizontalBearingX)) float_t horizontalBearingX;

  __declspec(property(get = get_horizontalBearingY)) float_t horizontalBearingY;

  __declspec(property(get = get_horizontalAdvance)) float_t horizontalAdvance;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::TextCore::GlyphMetrics>*();

  /// @brief Method get_width addr 0x2d207f4 size 0x8 virtual false final false
  inline float_t get_width();

  /// @brief Method get_height addr 0x2d207fc size 0x8 virtual false final false
  inline float_t get_height();

  /// @brief Method get_horizontalBearingX addr 0x2d20804 size 0x8 virtual false final false
  inline float_t get_horizontalBearingX();

  /// @brief Method get_horizontalBearingY addr 0x2d2080c size 0x8 virtual false final false
  inline float_t get_horizontalBearingY();

  /// @brief Method get_horizontalAdvance addr 0x2d20814 size 0x8 virtual false final false
  inline float_t get_horizontalAdvance();

  /// @brief Method .ctor addr 0x2d2081c size 0x10 virtual false final false
  inline void _ctor(float_t width, float_t height, float_t bearingX, float_t bearingY, float_t advance);

  /// @brief Method GetHashCode addr 0x2d2082c size 0x6c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method Equals addr 0x2d20898 size 0x80 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals addr 0x2d20918 size 0xa4 virtual true final true
  inline bool Equals(::UnityEngine::TextCore::GlyphMetrics other);

  // Ctor Parameters [CppParam { name: "m_Width", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_Height", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_HorizontalBearingX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HorizontalBearingY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_HorizontalAdvance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr GlyphMetrics(float_t m_Width, float_t m_Height, float_t m_HorizontalBearingX, float_t m_HorizontalBearingY, float_t m_HorizontalAdvance) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GlyphMetrics();

  /// @brief Field m_Width, offset: 0x0, size: 0x4, def value: None
  float_t m_Width;

  /// @brief Field m_Height, offset: 0x4, size: 0x4, def value: None
  float_t m_Height;

  /// @brief Field m_HorizontalBearingX, offset: 0x8, size: 0x4, def value: None
  float_t m_HorizontalBearingX;

  /// @brief Field m_HorizontalBearingY, offset: 0xc, size: 0x4, def value: None
  float_t m_HorizontalBearingY;

  /// @brief Field m_HorizontalAdvance, offset: 0x10, size: 0x4, def value: None
  float_t m_HorizontalAdvance;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphMetrics, 0x14>, "Size mismatch!");

} // namespace UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphMetrics, "UnityEngine.TextCore", "GlyphMetrics");
