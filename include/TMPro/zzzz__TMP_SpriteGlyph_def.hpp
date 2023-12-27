#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/TextCore/zzzz__Glyph_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TMP_SpriteGlyph)
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine::TextCore {
struct GlyphMetrics;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
// Forward declare root types
namespace TMPro {
class TMP_SpriteGlyph;
}
// Write type traits
MARK_REF_PTR_T(::TMPro::TMP_SpriteGlyph);
// Type: TMPro::TMP_SpriteGlyph
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace TMPro {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15530))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12423))
// CS Name: ::TMPro::TMP_SpriteGlyph*
class CORDL_TYPE TMP_SpriteGlyph : public ::UnityEngine::TextCore::Glyph {
public:
  // Declarations
  /// @brief Field sprite, offset 0x48, size 0x8
  __declspec(property(get = __get_sprite, put = __set_sprite))::UnityEngine::Sprite* sprite;

  constexpr ::UnityEngine::Sprite*& __get_sprite();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Sprite*> const& __get_sprite() const;

  constexpr void __set_sprite(::UnityEngine::Sprite* value);

  static inline ::TMPro::TMP_SpriteGlyph* New_ctor();

  /// @brief Method .ctor addr 0x2c4463c size 0x8 virtual false final false
  inline void _ctor();

  static inline ::TMPro::TMP_SpriteGlyph* New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex);

  /// @brief Method .ctor addr 0x2c449b0 size 0xbc virtual false final false
  inline void _ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex);

  static inline ::TMPro::TMP_SpriteGlyph* New_ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex,
                                                   ::UnityEngine::Sprite* sprite);

  /// @brief Method .ctor addr 0x2c44a6c size 0xc4 virtual false final false
  inline void _ctor(uint32_t index, ::UnityEngine::TextCore::GlyphMetrics metrics, ::UnityEngine::TextCore::GlyphRect glyphRect, float_t scale, int32_t atlasIndex, ::UnityEngine::Sprite* sprite);

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteGlyph", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TMP_SpriteGlyph(TMP_SpriteGlyph&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TMP_SpriteGlyph", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TMP_SpriteGlyph(TMP_SpriteGlyph const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TMP_SpriteGlyph();

public:
  /// @brief Field sprite, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Sprite* ___sprite;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::TMP_SpriteGlyph, 0x50>, "Size mismatch!");

} // namespace TMPro
NEED_NO_BOX(::TMPro::TMP_SpriteGlyph);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::TMP_SpriteGlyph*, "TMPro", "TMP_SpriteGlyph");
