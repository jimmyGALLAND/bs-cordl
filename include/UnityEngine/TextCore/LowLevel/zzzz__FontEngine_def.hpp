#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FontEngine)
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphLoadFlags;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPackingMode;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphMarshallingStruct;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphPairAdjustmentRecord;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontReference;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
class FontEngine;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::LowLevel::FontEngine);
// Type: UnityEngine.TextCore.LowLevel::FontEngine
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::LowLevel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15537))
// CS Name: ::UnityEngine.TextCore.LowLevel::FontEngine*
class CORDL_TYPE FontEngine : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_Glyphs, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Glyphs, put = setStaticF_s_Glyphs))::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*> s_Glyphs;

  /// @brief Field s_GlyphIndexes_MarshallingArray_A, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GlyphIndexes_MarshallingArray_A,
                             put = setStaticF_s_GlyphIndexes_MarshallingArray_A))::ArrayW<uint32_t, ::Array<uint32_t>*> s_GlyphIndexes_MarshallingArray_A;

  /// @brief Field s_GlyphMarshallingStruct_IN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GlyphMarshallingStruct_IN,
                             put = setStaticF_s_GlyphMarshallingStruct_IN))::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct,
                                                                                    ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> s_GlyphMarshallingStruct_IN;

  /// @brief Field s_GlyphMarshallingStruct_OUT, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GlyphMarshallingStruct_OUT,
                             put = setStaticF_s_GlyphMarshallingStruct_OUT))::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct,
                                                                                     ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> s_GlyphMarshallingStruct_OUT;

  /// @brief Field s_FreeGlyphRects, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_FreeGlyphRects,
                             put = setStaticF_s_FreeGlyphRects))::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> s_FreeGlyphRects;

  /// @brief Field s_UsedGlyphRects, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_UsedGlyphRects,
                             put = setStaticF_s_UsedGlyphRects))::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> s_UsedGlyphRects;

  /// @brief Field s_PairAdjustmentRecords_MarshallingArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_PairAdjustmentRecords_MarshallingArray, put = setStaticF_s_PairAdjustmentRecords_MarshallingArray))::ArrayW<
      ::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> s_PairAdjustmentRecords_MarshallingArray;

  /// @brief Field s_GlyphLookupDictionary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_GlyphLookupDictionary,
                             put = setStaticF_s_GlyphLookupDictionary))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* s_GlyphLookupDictionary;

  static inline void setStaticF_s_Glyphs(::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*> getStaticF_s_Glyphs();

  static inline void setStaticF_s_GlyphIndexes_MarshallingArray_A(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_s_GlyphIndexes_MarshallingArray_A();

  static inline void
  setStaticF_s_GlyphMarshallingStruct_IN(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> getStaticF_s_GlyphMarshallingStruct_IN();

  static inline void
  setStaticF_s_GlyphMarshallingStruct_OUT(::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*> getStaticF_s_GlyphMarshallingStruct_OUT();

  static inline void setStaticF_s_FreeGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> getStaticF_s_FreeGlyphRects();

  static inline void setStaticF_s_UsedGlyphRects(::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*> getStaticF_s_UsedGlyphRects();

  static inline void setStaticF_s_PairAdjustmentRecords_MarshallingArray(
      ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*> value);

  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
  getStaticF_s_PairAdjustmentRecords_MarshallingArray();

  static inline void setStaticF_s_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  static inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* getStaticF_s_GlyphLookupDictionary();

  /// @brief Method InitializeFontEngine addr 0x2d20b4c size 0x68 virtual false final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError InitializeFontEngine();

  /// @brief Method InitializeFontEngine_Internal addr 0x2d20bb4 size 0x28 virtual false final false
  static inline int32_t InitializeFontEngine_Internal();

  /// @brief Method LoadFontFace addr 0x2d20bdc size 0x8c virtual false final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW filePath, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_And_FaceIndex_Internal addr 0x2d20c68 size 0x54 virtual false final false
  static inline int32_t LoadFontFace_With_Size_And_FaceIndex_Internal(::StringW filePath, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace addr 0x2d20cbc size 0x84 virtual false final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::UnityEngine::Font* font, int32_t pointSize);

  /// @brief Method LoadFontFace_With_Size_FromFont_Internal addr 0x2d20d40 size 0x44 virtual false final false
  static inline int32_t LoadFontFace_With_Size_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize);

  /// @brief Method LoadFontFace addr 0x2d20d84 size 0x8c virtual false final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal addr 0x2d20e10 size 0x54 virtual false final false
  static inline int32_t LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(::UnityEngine::Font* font, int32_t pointSize, int32_t faceIndex);

  /// @brief Method LoadFontFace addr 0x2d20e64 size 0x8c virtual false final false
  static inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal addr 0x2d20ef0 size 0x54 virtual false final false
  static inline int32_t LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method TryGetSystemFontReference addr 0x2d20f44 size 0x8c virtual false final false
  static inline bool TryGetSystemFontReference(::StringW familyName, ::StringW styleName, ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef);

  /// @brief Method TryGetSystemFontReference_Internal addr 0x2d20fd0 size 0x54 virtual false final false
  static inline bool TryGetSystemFontReference_Internal(::StringW familyName, ::StringW styleName, ByRef<::UnityEngine::TextCore::LowLevel::FontReference> fontRef);

  /// @brief Method GetFaceInfo addr 0x2d21024 size 0xa0 virtual false final false
  static inline ::UnityEngine::TextCore::FaceInfo GetFaceInfo();

  /// @brief Method GetFaceInfo_Internal addr 0x2d210c4 size 0x3c virtual false final false
  static inline int32_t GetFaceInfo_Internal(ByRef<::UnityEngine::TextCore::FaceInfo> faceInfo);

  /// @brief Method GetGlyphIndex addr 0x2d21100 size 0x3c virtual false final false
  static inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method TryGetGlyphWithUnicodeValue addr 0x2d2113c size 0x154 virtual false final false
  static inline bool TryGetGlyphWithUnicodeValue(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryGetGlyphWithUnicodeValue_Internal addr 0x2d21290 size 0x54 virtual false final false
  static inline bool TryGetGlyphWithUnicodeValue_Internal(uint32_t unicode, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                          ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct);

  /// @brief Method TryGetGlyphWithIndexValue addr 0x2d212e4 size 0x154 virtual false final false
  static inline bool TryGetGlyphWithIndexValue(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags flags, ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryGetGlyphWithIndexValue_Internal addr 0x2d21438 size 0x54 virtual false final false
  static inline bool TryGetGlyphWithIndexValue_Internal(uint32_t glyphIndex, ::UnityEngine::TextCore::LowLevel::GlyphLoadFlags loadFlags,
                                                        ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyphStruct);

  /// @brief Method SetTextureUploadMode addr 0x2d2148c size 0x3c virtual false final false
  static inline void SetTextureUploadMode(bool shouldUploadImmediately);

  /// @brief Method TryAddGlyphToTexture addr 0x2d214c8 size 0x530 virtual false final false
  static inline bool TryAddGlyphToTexture(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                          ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                          ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                          ::UnityEngine::Texture2D* texture, ByRef<::UnityEngine::TextCore::Glyph*> glyph);

  /// @brief Method TryAddGlyphToTexture_Internal addr 0x2d219f8 size 0x9c virtual false final false
  static inline bool TryAddGlyphToTexture_Internal(uint32_t glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                                   ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount,
                                                   ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount,
                                                   ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                                   ByRef<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct> glyph);

  /// @brief Method TryAddGlyphsToTexture addr 0x2d21a94 size 0x888 virtual false final false
  static inline bool TryAddGlyphsToTexture(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                           ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects,
                                           ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                           ::UnityEngine::Texture2D* texture, ByRef<::ArrayW<::UnityEngine::TextCore::Glyph*, ::Array<::UnityEngine::TextCore::Glyph*>*>> glyphs);

  /// @brief Method TryAddGlyphsToTexture_Internal addr 0x2d2233c size 0xa8 virtual false final false
  static inline bool
  TryAddGlyphsToTexture_Internal(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndex, int32_t padding, ::UnityEngine::TextCore::LowLevel::GlyphPackingMode packingMode,
                                 ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> freeGlyphRects, ByRef<int32_t> freeGlyphRectCount,
                                 ByRef<::ArrayW<::UnityEngine::TextCore::GlyphRect, ::Array<::UnityEngine::TextCore::GlyphRect>*>> usedGlyphRects, ByRef<int32_t> usedGlyphRectCount,
                                 ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, ::UnityEngine::Texture2D* texture,
                                 ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct, ::Array<::UnityEngine::TextCore::LowLevel::GlyphMarshallingStruct>*>> glyphs,
                                 ByRef<int32_t> glyphCount);

  /// @brief Method GetGlyphPairAdjustmentTable addr 0x2d223e4 size 0x150 virtual false final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
  GetGlyphPairAdjustmentTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes);

  /// @brief Method GetGlyphPairAdjustmentRecords addr 0x2d225b4 size 0x188 virtual false final false
  static inline ::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>
  GetGlyphPairAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes, ByRef<int32_t> recordCount);

  /// @brief Method PopulatePairAdjustmentRecordMarshallingArray_from_KernTable addr 0x2d22534 size 0x44 virtual false final false
  static inline int32_t PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes, ByRef<int32_t> recordCount);

  /// @brief Method GetPairAdjustmentRecordsFromMarshallingArray addr 0x2d22578 size 0x3c virtual false final false
  static inline int32_t GetPairAdjustmentRecordsFromMarshallingArray(
      ByRef<::ArrayW<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord, ::Array<::UnityEngine::TextCore::LowLevel::GlyphPairAdjustmentRecord>*>> glyphPairAdjustmentRecords);

  /// @brief Method GenericListToMarshallingArray addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void GenericListToMarshallingArray(ByRef<::System::Collections::Generic::List_1<T>*> srcList, ByRef<::ArrayW<T, ::Array<T>*>> dstArray);

  /// @brief Method SetMarshallingArraySize addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void SetMarshallingArraySize(ByRef<::ArrayW<T, ::Array<T>*>> marshallingArray, int32_t recordCount);

  /// @brief Method ResetAtlasTexture addr 0x2d2273c size 0x3c virtual false final false
  static inline void ResetAtlasTexture(::UnityEngine::Texture2D* texture);

  // Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontEngine(FontEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontEngine(FontEngine const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontEngine();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontEngine, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
NEED_NO_BOX(::UnityEngine::TextCore::LowLevel::FontEngine);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontEngine*, "UnityEngine.TextCore.LowLevel", "FontEngine");
