#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/Text/TextGeneratorUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(TextGeneratorUtilities)
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::Text {
struct FontStyles;
}
namespace UnityEngine::TextCore::Text {
struct TextAlignment;
}
namespace UnityEngine::TextCore::Text {
struct TextBackingContainer;
}
namespace UnityEngine::TextCore::Text {
class TextGenerationSettings;
}
namespace UnityEngine::TextCore::Text {
class TextInfo;
}
namespace UnityEngine::TextCore::Text {
struct TextProcessingElement;
}
namespace UnityEngine::TextCore::Text {
template<typename T>
struct TextProcessingStack_1;
}
namespace UnityEngine::TextCore::Text {
class TextStyle;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
struct FontStyle;
}
namespace UnityEngine {
struct TextAnchor;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class TextGeneratorUtilities;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::TextGeneratorUtilities);
// Type: UnityEngine.TextCore.Text::TextGeneratorUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// CS Name: ::UnityEngine.TextCore.Text::TextGeneratorUtilities*
class CORDL_TYPE TextGeneratorUtilities : public ::System::Object {
public:
// Declarations
/// @brief Field largeNegativeVector2, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_largeNegativeVector2, put=setStaticF_largeNegativeVector2)) ::UnityEngine::Vector2  largeNegativeVector2;

/// @brief Field largePositiveVector2, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_largePositiveVector2, put=setStaticF_largePositiveVector2)) ::UnityEngine::Vector2  largePositiveVector2;

/// @brief Method AdjustLineOffset, addr 0x48b7590, size 0x180, virtual false, abstract: false, final false
static inline void AdjustLineOffset(int32_t  startIndex, int32_t  endIndex, float_t  offset, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method Approximately, addr 0x48b4268, size 0x30, virtual false, abstract: false, final false
static inline bool Approximately(float_t  a, float_t  b) ;

/// @brief Method ConvertToFloat, addr 0x48b4b58, size 0x80, virtual false, abstract: false, final false
static inline float_t ConvertToFloat(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startIndex, int32_t  length) ;

/// @brief Method ConvertToFloat, addr 0x48b4bd8, size 0x160, virtual false, abstract: false, final false
static inline float_t ConvertToFloat(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startIndex, int32_t  length, ByRef<int32_t>  lastIndex) ;

/// @brief Method ConvertToUTF32, addr 0x48b78f0, size 0x14, virtual false, abstract: false, final false
static inline uint32_t ConvertToUTF32(uint32_t  highSurrogate, uint32_t  lowSurrogate) ;

/// @brief Method FillCharacterVertexBuffers, addr 0x48b62b8, size 0x99c, virtual false, abstract: false, final false
static inline void FillCharacterVertexBuffers(int32_t  i, bool  convertToLinearSpace, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method FillSpriteVertexBuffers, addr 0x48b6cf0, size 0x8a0, virtual false, abstract: false, final false
static inline void FillSpriteVertexBuffers(int32_t  i, bool  convertToLinearSpace, ::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSettings, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method GammaToLinear, addr 0x48b6c54, size 0x9c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 GammaToLinear(::UnityEngine::Color32  c) ;

/// @brief Method GammaToLinear, addr 0x48b7d48, size 0xb0, virtual false, abstract: false, final false
static inline uint8_t GammaToLinear(uint8_t  value) ;

/// @brief Method GetAttributeParameters, addr 0x48b7af0, size 0xe4, virtual false, abstract: false, final false
static inline int32_t GetAttributeParameters(::ArrayW<char16_t,::Array<char16_t>*>  chars, int32_t  startIndex, int32_t  length, ByRef<::ArrayW<float_t,::Array<float_t>*>>  parameters) ;

/// @brief Method GetMarkupTagHashCode, addr 0x48b5edc, size 0x118, virtual false, abstract: false, final false
static inline int32_t GetMarkupTagHashCode(::ArrayW<uint32_t,::Array<uint32_t>*>  styleDefinition, int32_t  readIndex) ;

/// @brief Method GetMarkupTagHashCode, addr 0x48b7904, size 0x104, virtual false, abstract: false, final false
static inline int32_t GetMarkupTagHashCode(::UnityEngine::TextCore::Text::TextBackingContainer  styleDefinition, int32_t  readIndex) ;

/// @brief Method GetStyle, addr 0x48b5678, size 0xe4, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextStyle* GetStyle(::UnityEngine::TextCore::Text::TextGenerationSettings*  generationSetting, int32_t  hashCode) ;

/// @brief Method GetStyleHashCode, addr 0x48b58b4, size 0xd8, virtual false, abstract: false, final false
static inline int32_t GetStyleHashCode(ByRef<::ArrayW<uint32_t,::Array<uint32_t>*>>  text, int32_t  index, ByRef<int32_t>  closeIndex) ;

/// @brief Method GetStyleHashCode, addr 0x48b558c, size 0xec, virtual false, abstract: false, final false
static inline int32_t GetStyleHashCode(ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>  text, int32_t  index, ByRef<int32_t>  closeIndex) ;

/// @brief Method GetUTF16, addr 0x48b5c74, size 0xe8, virtual false, abstract: false, final false
static inline uint32_t GetUTF16(::ArrayW<uint32_t,::Array<uint32_t>*>  text, int32_t  i) ;

/// @brief Method GetUTF16, addr 0x48b60f0, size 0xbc, virtual false, abstract: false, final false
static inline uint32_t GetUTF16(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  i) ;

/// @brief Method GetUTF32, addr 0x48b5d5c, size 0x180, virtual false, abstract: false, final false
static inline uint32_t GetUTF32(::ArrayW<uint32_t,::Array<uint32_t>*>  text, int32_t  i) ;

/// @brief Method GetUTF32, addr 0x48b61ac, size 0x10c, virtual false, abstract: false, final false
static inline uint32_t GetUTF32(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  i) ;

/// @brief Method HexCharsToColor, addr 0x48b48cc, size 0x28c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t,::Array<char16_t>*>  hexChars, int32_t  startIndex, int32_t  length) ;

/// @brief Method HexCharsToColor, addr 0x48b4298, size 0x608, virtual false, abstract: false, final false
static inline ::UnityEngine::Color32 HexCharsToColor(::ArrayW<char16_t,::Array<char16_t>*>  hexChars, int32_t  tagCount) ;

/// @brief Method HexToInt, addr 0x48b48a0, size 0x2c, virtual false, abstract: false, final false
static inline uint32_t HexToInt(char16_t  hex) ;

/// @brief Method InsertClosingStyleTag, addr 0x48b5b90, size 0xe4, virtual false, abstract: false, final false
static inline void InsertClosingStyleTag(ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertClosingTextStyle, addr 0x48b5334, size 0xf8, virtual false, abstract: false, final false
static inline void InsertClosingTextStyle(::UnityEngine::TextCore::Text::TextStyle*  style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertOpeningStyleTag, addr 0x48b5ab8, size 0xd8, virtual false, abstract: false, final false
static inline void InsertOpeningStyleTag(::UnityEngine::TextCore::Text::TextStyle*  style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertOpeningTextStyle, addr 0x48b4d98, size 0xf8, virtual false, abstract: false, final false
static inline void InsertOpeningTextStyle(::UnityEngine::TextCore::Text::TextStyle*  style, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method InsertTextStyleInTextProcessingArray, addr 0x48b4ea0, size 0x494, virtual false, abstract: false, final false
static inline void InsertTextStyleInTextProcessingArray(ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ::ArrayW<uint32_t,::Array<uint32_t>*>  styleDefinition, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method IsBaseGlyph, addr 0x48b7c14, size 0x128, virtual false, abstract: false, final false
static inline bool IsBaseGlyph(uint32_t  c) ;

/// @brief Method IsBitmapRendering, addr 0x48b7bd4, size 0x40, virtual false, abstract: false, final false
static inline bool IsBitmapRendering(::UnityEngine::TextCore::LowLevel::GlyphRenderMode  glyphRenderMode) ;

/// @brief Method IsCJK, addr 0x48b7fa0, size 0x1b8, virtual false, abstract: false, final false
static inline bool IsCJK(uint32_t  c) ;

/// @brief Method IsHangul, addr 0x48b7f30, size 0x70, virtual false, abstract: false, final false
static inline bool IsHangul(uint32_t  c) ;

/// @brief Method IsValidUTF16, addr 0x48b7df8, size 0x9c, virtual false, abstract: false, final false
static inline bool IsValidUTF16(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  index) ;

/// @brief Method IsValidUTF32, addr 0x48b7e94, size 0x9c, virtual false, abstract: false, final false
static inline bool IsValidUTF32(::UnityEngine::TextCore::Text::TextBackingContainer  text, int32_t  index) ;

/// @brief Method LegacyAlignmentToNewAlignment, addr 0x48b78cc, size 0x24, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::TextAlignment LegacyAlignmentToNewAlignment(::UnityEngine::TextAnchor  anchor) ;

/// @brief Method LegacyStyleToNewStyle, addr 0x48b78bc, size 0x10, virtual false, abstract: false, final false
static inline ::UnityEngine::TextCore::Text::FontStyles LegacyStyleToNewStyle(::UnityEngine::FontStyle  fontStyle) ;

/// @brief Method MinAlpha, addr 0x48b7d3c, size 0xc, virtual false, abstract: false, final false
static inline ::UnityEngine::Color MinAlpha(::UnityEngine::Color  c1, ::UnityEngine::Color  c2) ;

/// @brief Method PackUV, addr 0x48b4d38, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 PackUV(float_t  x, float_t  y, float_t  scale) ;

/// @brief Method ReplaceClosingStyleTag, addr 0x48b598c, size 0x12c, virtual false, abstract: false, final false
static inline void ReplaceClosingStyleTag(ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ReplaceOpeningStyleTag, addr 0x48b575c, size 0x158, virtual false, abstract: false, final false
static inline bool ReplaceOpeningStyleTag(ByRef<::ArrayW<uint32_t,::Array<uint32_t>*>>  sourceText, int32_t  srcIndex, ByRef<int32_t>  srcOffset, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ReplaceOpeningStyleTag, addr 0x48b5434, size 0x158, virtual false, abstract: false, final false
static inline bool ReplaceOpeningStyleTag(ByRef<::UnityEngine::TextCore::Text::TextBackingContainer>  sourceText, int32_t  srcIndex, ByRef<int32_t>  srcOffset, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingElement,::Array<::UnityEngine::TextCore::Text::TextProcessingElement>*>>  charBuffer, ByRef<int32_t>  writeIndex, ByRef<int32_t>  textStyleStackDepth, ByRef<::ArrayW<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>,::Array<::UnityEngine::TextCore::Text::TextProcessingStack_1<int32_t>>*>>  textStyleStacks, ByRef<::UnityEngine::TextCore::Text::TextGenerationSettings*>  generationSettings) ;

/// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeInternalArray(ByRef<::ArrayW<T,::Array<T>*>>  array) ;

/// @brief Method ResizeInternalArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void ResizeInternalArray(ByRef<::ArrayW<T,::Array<T>*>>  array, int32_t  size) ;

/// @brief Method ResizeLineExtents, addr 0x48b7710, size 0x1ac, virtual false, abstract: false, final false
static inline void ResizeLineExtents(int32_t  size, ::UnityEngine::TextCore::Text::TextInfo*  textInfo) ;

/// @brief Method ToUpperASCIIFast, addr 0x48b607c, size 0x74, virtual false, abstract: false, final false
static inline char16_t ToUpperASCIIFast(char16_t  c) ;

/// @brief Method ToUpperASCIIFast, addr 0x48b7a08, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ToUpperASCIIFast(uint32_t  c) ;

/// @brief Method ToUpperFast, addr 0x48b7a7c, size 0x74, virtual false, abstract: false, final false
static inline char16_t ToUpperFast(char16_t  c) ;

static inline ::UnityEngine::Vector2 getStaticF_largeNegativeVector2() ;

static inline ::UnityEngine::Vector2 getStaticF_largePositiveVector2() ;

static inline void setStaticF_largeNegativeVector2(::UnityEngine::Vector2  value) ;

static inline void setStaticF_largePositiveVector2(::UnityEngine::Vector2  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TextGeneratorUtilities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TextGeneratorUtilities(TextGeneratorUtilities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TextGeneratorUtilities", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TextGeneratorUtilities(TextGeneratorUtilities const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::TextGeneratorUtilities, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::TextGeneratorUtilities);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::TextGeneratorUtilities*, "UnityEngine.TextCore.Text", "TextGeneratorUtilities");
