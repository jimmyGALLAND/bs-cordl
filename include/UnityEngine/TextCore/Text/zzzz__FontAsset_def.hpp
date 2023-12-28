#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/TextCore/LowLevel/zzzz__GlyphRenderMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__AtlasPopulationMode_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__FontAssetCreationEditorSettings_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__TextAsset_def.hpp"
#include "UnityEngine/TextCore/zzzz__FaceInfo_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(FontAsset)
namespace UnityEngine {
class Font;
}
namespace UnityEngine::TextCore::Text {
struct FontWeightPair;
}
namespace UnityEngine::TextCore::Text {
class Character;
}
namespace UnityEngine::TextCore {
struct GlyphRect;
}
namespace UnityEngine::TextCore::Text {
struct FontAssetCreationEditorSettings;
}
namespace UnityEngine::TextCore::LowLevel {
struct FontEngineError;
}
namespace UnityEngine::TextCore::Text {
struct AtlasPopulationMode;
}
namespace UnityEngine::TextCore::Text {
class FontFeatureTable;
}
namespace UnityEngine {
class Texture2D;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::TextCore {
class Glyph;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::TextCore {
struct FaceInfo;
}
namespace UnityEngine::TextCore::LowLevel {
struct GlyphRenderMode;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine::TextCore::Text {
class __FontAsset____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace UnityEngine::TextCore::Text {
class FontAsset;
}
namespace UnityEngine::TextCore::Text {
class __FontAsset____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::FontAsset);
MARK_REF_PTR_T(::UnityEngine::TextCore::Text::__FontAsset____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13681))
// CS Name: ::FontAsset::<>c*
class CORDL_TYPE __FontAsset____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::TextCore::Text::__FontAsset____c* __9;

  /// @brief Field <>9__144_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__144_0, put = setStaticF___9__144_0))::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* __9__144_0;

  /// @brief Field <>9__145_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__145_0, put = setStaticF___9__145_0))::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* __9__145_0;

  static inline void setStaticF___9(::UnityEngine::TextCore::Text::__FontAsset____c* value);

  static inline ::UnityEngine::TextCore::Text::__FontAsset____c* getStaticF___9();

  static inline void setStaticF___9__144_0(::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::Text::Character*, uint32_t>* getStaticF___9__144_0();

  static inline void setStaticF___9__145_0(::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* value);

  static inline ::System::Func_2<::UnityEngine::TextCore::Glyph*, uint32_t>* getStaticF___9__145_0();

  static inline ::UnityEngine::TextCore::Text::__FontAsset____c* New_ctor();

  /// @brief Method .ctor addr 0x2d3f828 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <SortCharacterTable>b__144_0 addr 0x2d3f830 size 0x18 virtual false final false
  inline uint32_t _SortCharacterTable_b__144_0(::UnityEngine::TextCore::Text::Character* c);

  /// @brief Method <SortGlyphTable>b__145_0 addr 0x2d3f848 size 0x18 virtual false final false
  inline uint32_t _SortGlyphTable_b__145_0(::UnityEngine::TextCore::Glyph* c);

  // Ctor Parameters [CppParam { name: "", ty: "__FontAsset____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __FontAsset____c(__FontAsset____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__FontAsset____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __FontAsset____c(__FontAsset____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __FontAsset____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::__FontAsset____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
// Type: UnityEngine.TextCore.Text::FontAsset
// SizeInfo { instance_size: 480, native_size: -1, calculated_instance_size: 480, calculated_native_size: 480, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::TextCore::Text {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15526)), TypeDefinitionIndex(TypeDefinitionIndex(13724)), TypeDefinitionIndex(TypeDefinitionIndex(15534)),
// TypeDefinitionIndex(TypeDefinitionIndex(13680)), TypeDefinitionIndex(TypeDefinitionIndex(13679)), TypeDefinitionIndex(TypeDefinitionIndex(9966))} Self:
// TypeDefinitionIndex(TypeDefinitionIndex(13682)) CS Name: ::UnityEngine.TextCore.Text::FontAsset*
class CORDL_TYPE FontAsset : public ::UnityEngine::TextCore::Text::TextAsset {
public:
  // Declarations
  using __c = ::UnityEngine::TextCore::Text::__FontAsset____c;

  /// @brief Field m_SourceFontFileGUID, offset 0x38, size 0x8
  __declspec(property(get = __get_m_SourceFontFileGUID, put = __set_m_SourceFontFileGUID))::StringW m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFile, offset 0x40, size 0x8
  __declspec(property(get = __get_m_SourceFontFile, put = __set_m_SourceFontFile))::UnityEngine::Font* m_SourceFontFile;

  /// @brief Field m_AtlasPopulationMode, offset 0x48, size 0x4
  __declspec(property(get = __get_m_AtlasPopulationMode, put = __set_m_AtlasPopulationMode))::UnityEngine::TextCore::Text::AtlasPopulationMode m_AtlasPopulationMode;

  /// @brief Field InternalDynamicOS, offset 0x4c, size 0x1
  __declspec(property(get = __get_InternalDynamicOS, put = __set_InternalDynamicOS)) bool InternalDynamicOS;

  /// @brief Field m_FaceInfo, offset 0x50, size 0x60
  __declspec(property(get = __get_m_FaceInfo, put = __set_m_FaceInfo))::UnityEngine::TextCore::FaceInfo m_FaceInfo;

  /// @brief Field m_FamilyNameHashCode, offset 0xb0, size 0x4
  __declspec(property(get = __get_m_FamilyNameHashCode, put = __set_m_FamilyNameHashCode)) int32_t m_FamilyNameHashCode;

  /// @brief Field m_StyleNameHashCode, offset 0xb4, size 0x4
  __declspec(property(get = __get_m_StyleNameHashCode, put = __set_m_StyleNameHashCode)) int32_t m_StyleNameHashCode;

  /// @brief Field m_FontWeightTable, offset 0xb8, size 0x8
  __declspec(property(get = __get_m_FontWeightTable,
                      put = __set_m_FontWeightTable))::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> m_FontWeightTable;

  /// @brief Field m_GlyphTable, offset 0xc0, size 0x8
  __declspec(property(get = __get_m_GlyphTable, put = __set_m_GlyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphTable;

  /// @brief Field m_GlyphLookupDictionary, offset 0xc8, size 0x8
  __declspec(property(get = __get_m_GlyphLookupDictionary,
                      put = __set_m_GlyphLookupDictionary))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* m_GlyphLookupDictionary;

  /// @brief Field m_CharacterTable, offset 0xd0, size 0x8
  __declspec(property(get = __get_m_CharacterTable, put = __set_m_CharacterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharacterTable;

  /// @brief Field m_CharacterLookupDictionary, offset 0xd8, size 0x8
  __declspec(property(get = __get_m_CharacterLookupDictionary,
                      put = __set_m_CharacterLookupDictionary))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* m_CharacterLookupDictionary;

  /// @brief Field m_AtlasTexture, offset 0xe0, size 0x8
  __declspec(property(get = __get_m_AtlasTexture, put = __set_m_AtlasTexture))::UnityEngine::Texture2D* m_AtlasTexture;

  /// @brief Field m_AtlasTextures, offset 0xe8, size 0x8
  __declspec(property(get = __get_m_AtlasTextures, put = __set_m_AtlasTextures))::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> m_AtlasTextures;

  /// @brief Field m_AtlasTextureIndex, offset 0xf0, size 0x4
  __declspec(property(get = __get_m_AtlasTextureIndex, put = __set_m_AtlasTextureIndex)) int32_t m_AtlasTextureIndex;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset 0xf4, size 0x1
  __declspec(property(get = __get_m_IsMultiAtlasTexturesEnabled, put = __set_m_IsMultiAtlasTexturesEnabled)) bool m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ClearDynamicDataOnBuild, offset 0xf5, size 0x1
  __declspec(property(get = __get_m_ClearDynamicDataOnBuild, put = __set_m_ClearDynamicDataOnBuild)) bool m_ClearDynamicDataOnBuild;

  /// @brief Field m_AtlasWidth, offset 0xf8, size 0x4
  __declspec(property(get = __get_m_AtlasWidth, put = __set_m_AtlasWidth)) int32_t m_AtlasWidth;

  /// @brief Field m_AtlasHeight, offset 0xfc, size 0x4
  __declspec(property(get = __get_m_AtlasHeight, put = __set_m_AtlasHeight)) int32_t m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset 0x100, size 0x4
  __declspec(property(get = __get_m_AtlasPadding, put = __set_m_AtlasPadding)) int32_t m_AtlasPadding;

  /// @brief Field m_AtlasRenderMode, offset 0x104, size 0x4
  __declspec(property(get = __get_m_AtlasRenderMode, put = __set_m_AtlasRenderMode))::UnityEngine::TextCore::LowLevel::GlyphRenderMode m_AtlasRenderMode;

  /// @brief Field m_UsedGlyphRects, offset 0x108, size 0x8
  __declspec(property(get = __get_m_UsedGlyphRects, put = __set_m_UsedGlyphRects))::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_UsedGlyphRects;

  /// @brief Field m_FreeGlyphRects, offset 0x110, size 0x8
  __declspec(property(get = __get_m_FreeGlyphRects, put = __set_m_FreeGlyphRects))::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* m_FreeGlyphRects;

  /// @brief Field m_FontFeatureTable, offset 0x118, size 0x8
  __declspec(property(get = __get_m_FontFeatureTable, put = __set_m_FontFeatureTable))::UnityEngine::TextCore::Text::FontFeatureTable* m_FontFeatureTable;

  /// @brief Field m_FallbackFontAssetTable, offset 0x120, size 0x8
  __declspec(property(get = __get_m_FallbackFontAssetTable,
                      put = __set_m_FallbackFontAssetTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* m_FallbackFontAssetTable;

  /// @brief Field m_fontAssetCreationEditorSettings, offset 0x128, size 0x50
  __declspec(property(get = __get_m_fontAssetCreationEditorSettings,
                      put = __set_m_fontAssetCreationEditorSettings))::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings m_fontAssetCreationEditorSettings;

  /// @brief Field m_RegularStyleWeight, offset 0x178, size 0x4
  __declspec(property(get = __get_m_RegularStyleWeight, put = __set_m_RegularStyleWeight)) float_t m_RegularStyleWeight;

  /// @brief Field m_RegularStyleSpacing, offset 0x17c, size 0x4
  __declspec(property(get = __get_m_RegularStyleSpacing, put = __set_m_RegularStyleSpacing)) float_t m_RegularStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset 0x180, size 0x4
  __declspec(property(get = __get_m_BoldStyleWeight, put = __set_m_BoldStyleWeight)) float_t m_BoldStyleWeight;

  /// @brief Field m_BoldStyleSpacing, offset 0x184, size 0x4
  __declspec(property(get = __get_m_BoldStyleSpacing, put = __set_m_BoldStyleSpacing)) float_t m_BoldStyleSpacing;

  /// @brief Field m_ItalicStyleSlant, offset 0x188, size 0x1
  __declspec(property(get = __get_m_ItalicStyleSlant, put = __set_m_ItalicStyleSlant)) uint8_t m_ItalicStyleSlant;

  /// @brief Field m_TabMultiple, offset 0x189, size 0x1
  __declspec(property(get = __get_m_TabMultiple, put = __set_m_TabMultiple)) uint8_t m_TabMultiple;

  /// @brief Field IsFontAssetLookupTablesDirty, offset 0x18a, size 0x1
  __declspec(property(get = __get_IsFontAssetLookupTablesDirty, put = __set_IsFontAssetLookupTablesDirty)) bool IsFontAssetLookupTablesDirty;

  /// @brief Field m_GlyphsToRender, offset 0x190, size 0x8
  __declspec(property(get = __get_m_GlyphsToRender, put = __set_m_GlyphsToRender))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset 0x198, size 0x8
  __declspec(property(get = __get_m_GlyphsRendered, put = __set_m_GlyphsRendered))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset 0x1a0, size 0x8
  __declspec(property(get = __get_m_GlyphIndexList, put = __set_m_GlyphIndexList))::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset 0x1a8, size 0x8
  __declspec(property(get = __get_m_GlyphIndexListNewlyAdded, put = __set_m_GlyphIndexListNewlyAdded))::System::Collections::Generic::List_1<uint32_t>* m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset 0x1b0, size 0x8
  __declspec(property(get = __get_m_GlyphsToAdd, put = __set_m_GlyphsToAdd))::System::Collections::Generic::List_1<uint32_t>* m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset 0x1b8, size 0x8
  __declspec(property(get = __get_m_GlyphsToAddLookup, put = __set_m_GlyphsToAddLookup))::System::Collections::Generic::HashSet_1<uint32_t>* m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset 0x1c0, size 0x8
  __declspec(property(get = __get_m_CharactersToAdd, put = __set_m_CharactersToAdd))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset 0x1c8, size 0x8
  __declspec(property(get = __get_m_CharactersToAddLookup, put = __set_m_CharactersToAddLookup))::System::Collections::Generic::HashSet_1<uint32_t>* m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset 0x1d0, size 0x8
  __declspec(property(get = __get_s_MissingCharacterList, put = __set_s_MissingCharacterList))::System::Collections::Generic::List_1<uint32_t>* s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset 0x1d8, size 0x8
  __declspec(property(get = __get_m_MissingUnicodesFromFontFile, put = __set_m_MissingUnicodesFromFontFile))::System::Collections::Generic::HashSet_1<uint32_t>* m_MissingUnicodesFromFontFile;

  /// @brief Field k_ReadFontAssetDefinitionMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ReadFontAssetDefinitionMarker, put = setStaticF_k_ReadFontAssetDefinitionMarker))::Unity::Profiling::ProfilerMarker k_ReadFontAssetDefinitionMarker;

  /// @brief Field k_AddSynthesizedCharactersMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_AddSynthesizedCharactersMarker, put = setStaticF_k_AddSynthesizedCharactersMarker))::Unity::Profiling::ProfilerMarker k_AddSynthesizedCharactersMarker;

  /// @brief Field k_TryAddCharacterMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TryAddCharacterMarker, put = setStaticF_k_TryAddCharacterMarker))::Unity::Profiling::ProfilerMarker k_TryAddCharacterMarker;

  /// @brief Field k_TryAddCharactersMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_TryAddCharactersMarker, put = setStaticF_k_TryAddCharactersMarker))::Unity::Profiling::ProfilerMarker k_TryAddCharactersMarker;

  /// @brief Field k_UpdateGlyphAdjustmentRecordsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UpdateGlyphAdjustmentRecordsMarker,
                             put = setStaticF_k_UpdateGlyphAdjustmentRecordsMarker))::Unity::Profiling::ProfilerMarker k_UpdateGlyphAdjustmentRecordsMarker;

  /// @brief Field k_ClearFontAssetDataMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ClearFontAssetDataMarker, put = setStaticF_k_ClearFontAssetDataMarker))::Unity::Profiling::ProfilerMarker k_ClearFontAssetDataMarker;

  /// @brief Field k_UpdateFontAssetDataMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_UpdateFontAssetDataMarker, put = setStaticF_k_UpdateFontAssetDataMarker))::Unity::Profiling::ProfilerMarker k_UpdateFontAssetDataMarker;

  /// @brief Field s_DefaultMaterialSuffix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultMaterialSuffix, put = setStaticF_s_DefaultMaterialSuffix))::StringW s_DefaultMaterialSuffix;

  /// @brief Field k_SearchedFontAssetLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_SearchedFontAssetLookup, put = setStaticF_k_SearchedFontAssetLookup))::System::Collections::Generic::HashSet_1<int32_t>* k_SearchedFontAssetLookup;

  /// @brief Field k_FontAssets_FontFeaturesUpdateQueue, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_k_FontAssets_FontFeaturesUpdateQueue,
               put = setStaticF_k_FontAssets_FontFeaturesUpdateQueue))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* k_FontAssets_FontFeaturesUpdateQueue;

  /// @brief Field k_FontAssets_FontFeaturesUpdateQueueLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup,
                             put = setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* k_FontAssets_FontFeaturesUpdateQueueLookup;

  /// @brief Field k_FontAssets_AtlasTexturesUpdateQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_FontAssets_AtlasTexturesUpdateQueue,
                             put = setStaticF_k_FontAssets_AtlasTexturesUpdateQueue))::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* k_FontAssets_AtlasTexturesUpdateQueue;

  /// @brief Field k_FontAssets_AtlasTexturesUpdateQueueLookup, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup,
                             put = setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup))::System::Collections::Generic::HashSet_1<int32_t>* k_FontAssets_AtlasTexturesUpdateQueueLookup;

  /// @brief Field k_GlyphIndexArray, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_GlyphIndexArray, put = setStaticF_k_GlyphIndexArray))::ArrayW<uint32_t, ::Array<uint32_t>*> k_GlyphIndexArray;

  __declspec(property(get = get_sourceFontFile, put = set_sourceFontFile))::UnityEngine::Font* sourceFontFile;

  __declspec(property(get = get_atlasPopulationMode, put = set_atlasPopulationMode))::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode;

  __declspec(property(get = get_faceInfo, put = set_faceInfo))::UnityEngine::TextCore::FaceInfo faceInfo;

  __declspec(property(get = get_familyNameHashCode, put = set_familyNameHashCode)) int32_t familyNameHashCode;

  __declspec(property(get = get_styleNameHashCode, put = set_styleNameHashCode)) int32_t styleNameHashCode;

  __declspec(property(get = get_fontWeightTable,
                      put = set_fontWeightTable))::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> fontWeightTable;

  __declspec(property(get = get_glyphTable, put = set_glyphTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* glyphTable;

  __declspec(property(get = get_glyphLookupTable))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* glyphLookupTable;

  __declspec(property(get = get_characterTable, put = set_characterTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* characterTable;

  __declspec(property(get = get_characterLookupTable))::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* characterLookupTable;

  __declspec(property(get = get_atlasTexture))::UnityEngine::Texture2D* atlasTexture;

  __declspec(property(get = get_atlasTextures, put = set_atlasTextures))::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> atlasTextures;

  __declspec(property(get = get_atlasTextureCount)) int32_t atlasTextureCount;

  __declspec(property(get = get_isMultiAtlasTexturesEnabled, put = set_isMultiAtlasTexturesEnabled)) bool isMultiAtlasTexturesEnabled;

  __declspec(property(get = get_clearDynamicDataOnBuild, put = set_clearDynamicDataOnBuild)) bool clearDynamicDataOnBuild;

  __declspec(property(get = get_atlasWidth, put = set_atlasWidth)) int32_t atlasWidth;

  __declspec(property(get = get_atlasHeight, put = set_atlasHeight)) int32_t atlasHeight;

  __declspec(property(get = get_atlasPadding, put = set_atlasPadding)) int32_t atlasPadding;

  __declspec(property(get = get_atlasRenderMode, put = set_atlasRenderMode))::UnityEngine::TextCore::LowLevel::GlyphRenderMode atlasRenderMode;

  __declspec(property(get = get_usedGlyphRects, put = set_usedGlyphRects))::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* usedGlyphRects;

  __declspec(property(get = get_freeGlyphRects, put = set_freeGlyphRects))::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* freeGlyphRects;

  __declspec(property(get = get_fontFeatureTable, put = set_fontFeatureTable))::UnityEngine::TextCore::Text::FontFeatureTable* fontFeatureTable;

  __declspec(property(get = get_fallbackFontAssetTable, put = set_fallbackFontAssetTable))::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* fallbackFontAssetTable;

  __declspec(property(get = get_fontAssetCreationEditorSettings,
                      put = set_fontAssetCreationEditorSettings))::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings fontAssetCreationEditorSettings;

  __declspec(property(get = get_regularStyleWeight, put = set_regularStyleWeight)) float_t regularStyleWeight;

  __declspec(property(get = get_regularStyleSpacing, put = set_regularStyleSpacing)) float_t regularStyleSpacing;

  __declspec(property(get = get_boldStyleWeight, put = set_boldStyleWeight)) float_t boldStyleWeight;

  __declspec(property(get = get_boldStyleSpacing, put = set_boldStyleSpacing)) float_t boldStyleSpacing;

  __declspec(property(get = get_italicStyleSlant, put = set_italicStyleSlant)) uint8_t italicStyleSlant;

  __declspec(property(get = get_tabMultiple, put = set_tabMultiple)) uint8_t tabMultiple;

  constexpr ::StringW& __get_m_SourceFontFileGUID();

  constexpr ::StringW const& __get_m_SourceFontFileGUID() const;

  constexpr void __set_m_SourceFontFileGUID(::StringW value);

  constexpr ::UnityEngine::Font*& __get_m_SourceFontFile();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Font*> const& __get_m_SourceFontFile() const;

  constexpr void __set_m_SourceFontFile(::UnityEngine::Font* value);

  constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode& __get_m_AtlasPopulationMode();

  constexpr ::UnityEngine::TextCore::Text::AtlasPopulationMode const& __get_m_AtlasPopulationMode() const;

  constexpr void __set_m_AtlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value);

  constexpr bool& __get_InternalDynamicOS();

  constexpr bool const& __get_InternalDynamicOS() const;

  constexpr void __set_InternalDynamicOS(bool value);

  constexpr ::UnityEngine::TextCore::FaceInfo& __get_m_FaceInfo();

  constexpr ::UnityEngine::TextCore::FaceInfo const& __get_m_FaceInfo() const;

  constexpr void __set_m_FaceInfo(::UnityEngine::TextCore::FaceInfo value);

  constexpr int32_t& __get_m_FamilyNameHashCode();

  constexpr int32_t const& __get_m_FamilyNameHashCode() const;

  constexpr void __set_m_FamilyNameHashCode(int32_t value);

  constexpr int32_t& __get_m_StyleNameHashCode();

  constexpr int32_t const& __get_m_StyleNameHashCode() const;

  constexpr void __set_m_StyleNameHashCode(int32_t value);

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*>& __get_m_FontWeightTable();

  constexpr ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> const& __get_m_FontWeightTable() const;

  constexpr void __set_m_FontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __get_m_GlyphTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& __get_m_GlyphTable() const;

  constexpr void __set_m_GlyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*& __get_m_GlyphLookupDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>*> const& __get_m_GlyphLookupDictionary() const;

  constexpr void __set_m_GlyphLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& __get_m_CharacterTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*> const& __get_m_CharacterTable() const;

  constexpr void __set_m_CharacterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*& __get_m_CharacterLookupDictionary();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>*> const& __get_m_CharacterLookupDictionary() const;

  constexpr void __set_m_CharacterLookupDictionary(::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* value);

  constexpr ::UnityEngine::Texture2D*& __get_m_AtlasTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& __get_m_AtlasTexture() const;

  constexpr void __set_m_AtlasTexture(::UnityEngine::Texture2D* value);

  constexpr ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*>& __get_m_AtlasTextures();

  constexpr ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> const& __get_m_AtlasTextures() const;

  constexpr void __set_m_AtlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  constexpr int32_t& __get_m_AtlasTextureIndex();

  constexpr int32_t const& __get_m_AtlasTextureIndex() const;

  constexpr void __set_m_AtlasTextureIndex(int32_t value);

  constexpr bool& __get_m_IsMultiAtlasTexturesEnabled();

  constexpr bool const& __get_m_IsMultiAtlasTexturesEnabled() const;

  constexpr void __set_m_IsMultiAtlasTexturesEnabled(bool value);

  constexpr bool& __get_m_ClearDynamicDataOnBuild();

  constexpr bool const& __get_m_ClearDynamicDataOnBuild() const;

  constexpr void __set_m_ClearDynamicDataOnBuild(bool value);

  constexpr int32_t& __get_m_AtlasWidth();

  constexpr int32_t const& __get_m_AtlasWidth() const;

  constexpr void __set_m_AtlasWidth(int32_t value);

  constexpr int32_t& __get_m_AtlasHeight();

  constexpr int32_t const& __get_m_AtlasHeight() const;

  constexpr void __set_m_AtlasHeight(int32_t value);

  constexpr int32_t& __get_m_AtlasPadding();

  constexpr int32_t const& __get_m_AtlasPadding() const;

  constexpr void __set_m_AtlasPadding(int32_t value);

  constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode& __get_m_AtlasRenderMode();

  constexpr ::UnityEngine::TextCore::LowLevel::GlyphRenderMode const& __get_m_AtlasRenderMode() const;

  constexpr void __set_m_AtlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __get_m_UsedGlyphRects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const& __get_m_UsedGlyphRects() const;

  constexpr void __set_m_UsedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*& __get_m_FreeGlyphRects();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>*> const& __get_m_FreeGlyphRects() const;

  constexpr void __set_m_FreeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  constexpr ::UnityEngine::TextCore::Text::FontFeatureTable*& __get_m_FontFeatureTable();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::TextCore::Text::FontFeatureTable*> const& __get_m_FontFeatureTable() const;

  constexpr void __set_m_FontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*& __get_m_FallbackFontAssetTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>*> const& __get_m_FallbackFontAssetTable() const;

  constexpr void __set_m_FallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value);

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings& __get_m_fontAssetCreationEditorSettings();

  constexpr ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings const& __get_m_fontAssetCreationEditorSettings() const;

  constexpr void __set_m_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  constexpr float_t& __get_m_RegularStyleWeight();

  constexpr float_t const& __get_m_RegularStyleWeight() const;

  constexpr void __set_m_RegularStyleWeight(float_t value);

  constexpr float_t& __get_m_RegularStyleSpacing();

  constexpr float_t const& __get_m_RegularStyleSpacing() const;

  constexpr void __set_m_RegularStyleSpacing(float_t value);

  constexpr float_t& __get_m_BoldStyleWeight();

  constexpr float_t const& __get_m_BoldStyleWeight() const;

  constexpr void __set_m_BoldStyleWeight(float_t value);

  constexpr float_t& __get_m_BoldStyleSpacing();

  constexpr float_t const& __get_m_BoldStyleSpacing() const;

  constexpr void __set_m_BoldStyleSpacing(float_t value);

  constexpr uint8_t& __get_m_ItalicStyleSlant();

  constexpr uint8_t const& __get_m_ItalicStyleSlant() const;

  constexpr void __set_m_ItalicStyleSlant(uint8_t value);

  constexpr uint8_t& __get_m_TabMultiple();

  constexpr uint8_t const& __get_m_TabMultiple() const;

  constexpr void __set_m_TabMultiple(uint8_t value);

  constexpr bool& __get_IsFontAssetLookupTablesDirty();

  constexpr bool const& __get_IsFontAssetLookupTablesDirty() const;

  constexpr void __set_IsFontAssetLookupTablesDirty(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __get_m_GlyphsToRender();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& __get_m_GlyphsToRender() const;

  constexpr void __set_m_GlyphsToRender(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*& __get_m_GlyphsRendered();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>*> const& __get_m_GlyphsRendered() const;

  constexpr void __set_m_GlyphsRendered(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __get_m_GlyphIndexList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& __get_m_GlyphIndexList() const;

  constexpr void __set_m_GlyphIndexList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __get_m_GlyphIndexListNewlyAdded();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& __get_m_GlyphIndexListNewlyAdded() const;

  constexpr void __set_m_GlyphIndexListNewlyAdded(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __get_m_GlyphsToAdd();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& __get_m_GlyphsToAdd() const;

  constexpr void __set_m_GlyphsToAdd(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __get_m_GlyphsToAddLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __get_m_GlyphsToAddLookup() const;

  constexpr void __set_m_GlyphsToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*& __get_m_CharactersToAdd();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>*> const& __get_m_CharactersToAdd() const;

  constexpr void __set_m_CharactersToAdd(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __get_m_CharactersToAddLookup();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __get_m_CharactersToAddLookup() const;

  constexpr void __set_m_CharactersToAddLookup(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::List_1<uint32_t>*& __get_s_MissingCharacterList();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<uint32_t>*> const& __get_s_MissingCharacterList() const;

  constexpr void __set_s_MissingCharacterList(::System::Collections::Generic::List_1<uint32_t>* value);

  constexpr ::System::Collections::Generic::HashSet_1<uint32_t>*& __get_m_MissingUnicodesFromFontFile();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<uint32_t>*> const& __get_m_MissingUnicodesFromFontFile() const;

  constexpr void __set_m_MissingUnicodesFromFontFile(::System::Collections::Generic::HashSet_1<uint32_t>* value);

  static inline void setStaticF_k_ReadFontAssetDefinitionMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ReadFontAssetDefinitionMarker();

  static inline void setStaticF_k_AddSynthesizedCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_AddSynthesizedCharactersMarker();

  static inline void setStaticF_k_TryAddCharacterMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharacterMarker();

  static inline void setStaticF_k_TryAddCharactersMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_TryAddCharactersMarker();

  static inline void setStaticF_k_UpdateGlyphAdjustmentRecordsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateGlyphAdjustmentRecordsMarker();

  static inline void setStaticF_k_ClearFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ClearFontAssetDataMarker();

  static inline void setStaticF_k_UpdateFontAssetDataMarker(::Unity::Profiling::ProfilerMarker value);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateFontAssetDataMarker();

  static inline void setStaticF_s_DefaultMaterialSuffix(::StringW value);

  static inline ::StringW getStaticF_s_DefaultMaterialSuffix();

  static inline void setStaticF_k_SearchedFontAssetLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_SearchedFontAssetLookup();

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueue(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* getStaticF_k_FontAssets_FontFeaturesUpdateQueue();

  static inline void setStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_FontFeaturesUpdateQueueLookup();

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueue(::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* value);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Texture2D*>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueue();

  static inline void setStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup(::System::Collections::Generic::HashSet_1<int32_t>* value);

  static inline ::System::Collections::Generic::HashSet_1<int32_t>* getStaticF_k_FontAssets_AtlasTexturesUpdateQueueLookup();

  static inline void setStaticF_k_GlyphIndexArray(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_k_GlyphIndexArray();

  /// @brief Method get_sourceFontFile addr 0x2d379b4 size 0x8 virtual false final false
  inline ::UnityEngine::Font* get_sourceFontFile();

  /// @brief Method set_sourceFontFile addr 0x2d379bc size 0x8 virtual false final false
  inline void set_sourceFontFile(::UnityEngine::Font* value);

  /// @brief Method get_atlasPopulationMode addr 0x2d379c4 size 0x8 virtual false final false
  inline ::UnityEngine::TextCore::Text::AtlasPopulationMode get_atlasPopulationMode();

  /// @brief Method set_atlasPopulationMode addr 0x2d379cc size 0x8 virtual false final false
  inline void set_atlasPopulationMode(::UnityEngine::TextCore::Text::AtlasPopulationMode value);

  /// @brief Method get_faceInfo addr 0x2d379d4 size 0x1c virtual false final false
  inline ::UnityEngine::TextCore::FaceInfo get_faceInfo();

  /// @brief Method set_faceInfo addr 0x2d379f0 size 0x18 virtual false final false
  inline void set_faceInfo(::UnityEngine::TextCore::FaceInfo value);

  /// @brief Method get_familyNameHashCode addr 0x2d37a08 size 0x2c virtual false final false
  inline int32_t get_familyNameHashCode();

  /// @brief Method set_familyNameHashCode addr 0x2d37aa4 size 0x8 virtual false final false
  inline void set_familyNameHashCode(int32_t value);

  /// @brief Method get_styleNameHashCode addr 0x2d37aac size 0x2c virtual false final false
  inline int32_t get_styleNameHashCode();

  /// @brief Method set_styleNameHashCode addr 0x2d37ad8 size 0x8 virtual false final false
  inline void set_styleNameHashCode(int32_t value);

  /// @brief Method get_fontWeightTable addr 0x2d37ae0 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> get_fontWeightTable();

  /// @brief Method set_fontWeightTable addr 0x2d37ae8 size 0x8 virtual false final false
  inline void set_fontWeightTable(::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> value);

  /// @brief Method get_glyphTable addr 0x2d37af0 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* get_glyphTable();

  /// @brief Method set_glyphTable addr 0x2d37af8 size 0x8 virtual false final false
  inline void set_glyphTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* value);

  /// @brief Method get_glyphLookupTable addr 0x2d37b00 size 0x24 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* get_glyphLookupTable();

  /// @brief Method get_characterTable addr 0x2d37ea4 size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* get_characterTable();

  /// @brief Method set_characterTable addr 0x2d37eac size 0x8 virtual false final false
  inline void set_characterTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* value);

  /// @brief Method get_characterLookupTable addr 0x2d37eb4 size 0x24 virtual false final false
  inline ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* get_characterLookupTable();

  /// @brief Method get_atlasTexture addr 0x2d37ed8 size 0x90 virtual false final false
  inline ::UnityEngine::Texture2D* get_atlasTexture();

  /// @brief Method get_atlasTextures addr 0x2d37f68 size 0x8 virtual false final false
  inline ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> get_atlasTextures();

  /// @brief Method set_atlasTextures addr 0x2d37f70 size 0x8 virtual false final false
  inline void set_atlasTextures(::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> value);

  /// @brief Method get_atlasTextureCount addr 0x2d37f78 size 0xc virtual false final false
  inline int32_t get_atlasTextureCount();

  /// @brief Method get_isMultiAtlasTexturesEnabled addr 0x2d37f84 size 0x8 virtual false final false
  inline bool get_isMultiAtlasTexturesEnabled();

  /// @brief Method set_isMultiAtlasTexturesEnabled addr 0x2d37f8c size 0xc virtual false final false
  inline void set_isMultiAtlasTexturesEnabled(bool value);

  /// @brief Method get_clearDynamicDataOnBuild addr 0x2d37f98 size 0x8 virtual false final false
  inline bool get_clearDynamicDataOnBuild();

  /// @brief Method set_clearDynamicDataOnBuild addr 0x2d37fa0 size 0xc virtual false final false
  inline void set_clearDynamicDataOnBuild(bool value);

  /// @brief Method get_atlasWidth addr 0x2d37fac size 0x8 virtual false final false
  inline int32_t get_atlasWidth();

  /// @brief Method set_atlasWidth addr 0x2d37fb4 size 0x8 virtual false final false
  inline void set_atlasWidth(int32_t value);

  /// @brief Method get_atlasHeight addr 0x2d37fbc size 0x8 virtual false final false
  inline int32_t get_atlasHeight();

  /// @brief Method set_atlasHeight addr 0x2d37fc4 size 0x8 virtual false final false
  inline void set_atlasHeight(int32_t value);

  /// @brief Method get_atlasPadding addr 0x2d37fcc size 0x8 virtual false final false
  inline int32_t get_atlasPadding();

  /// @brief Method set_atlasPadding addr 0x2d37fd4 size 0x8 virtual false final false
  inline void set_atlasPadding(int32_t value);

  /// @brief Method get_atlasRenderMode addr 0x2d37fdc size 0x8 virtual false final false
  inline ::UnityEngine::TextCore::LowLevel::GlyphRenderMode get_atlasRenderMode();

  /// @brief Method set_atlasRenderMode addr 0x2d37fe4 size 0x8 virtual false final false
  inline void set_atlasRenderMode(::UnityEngine::TextCore::LowLevel::GlyphRenderMode value);

  /// @brief Method get_usedGlyphRects addr 0x2d37fec size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_usedGlyphRects();

  /// @brief Method set_usedGlyphRects addr 0x2d37ff4 size 0x8 virtual false final false
  inline void set_usedGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method get_freeGlyphRects addr 0x2d37ffc size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* get_freeGlyphRects();

  /// @brief Method set_freeGlyphRects addr 0x2d38004 size 0x8 virtual false final false
  inline void set_freeGlyphRects(::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* value);

  /// @brief Method get_fontFeatureTable addr 0x2d3800c size 0x8 virtual false final false
  inline ::UnityEngine::TextCore::Text::FontFeatureTable* get_fontFeatureTable();

  /// @brief Method set_fontFeatureTable addr 0x2d38014 size 0x8 virtual false final false
  inline void set_fontFeatureTable(::UnityEngine::TextCore::Text::FontFeatureTable* value);

  /// @brief Method get_fallbackFontAssetTable addr 0x2d3801c size 0x8 virtual false final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* get_fallbackFontAssetTable();

  /// @brief Method set_fallbackFontAssetTable addr 0x2d38024 size 0x8 virtual false final false
  inline void set_fallbackFontAssetTable(::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* value);

  /// @brief Method get_fontAssetCreationEditorSettings addr 0x2d3802c size 0x1c virtual false final false
  inline ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings get_fontAssetCreationEditorSettings();

  /// @brief Method set_fontAssetCreationEditorSettings addr 0x2d38048 size 0x18 virtual false final false
  inline void set_fontAssetCreationEditorSettings(::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings value);

  /// @brief Method get_regularStyleWeight addr 0x2d38060 size 0x8 virtual false final false
  inline float_t get_regularStyleWeight();

  /// @brief Method set_regularStyleWeight addr 0x2d38068 size 0x8 virtual false final false
  inline void set_regularStyleWeight(float_t value);

  /// @brief Method get_regularStyleSpacing addr 0x2d38070 size 0x8 virtual false final false
  inline float_t get_regularStyleSpacing();

  /// @brief Method set_regularStyleSpacing addr 0x2d38078 size 0x8 virtual false final false
  inline void set_regularStyleSpacing(float_t value);

  /// @brief Method get_boldStyleWeight addr 0x2d38080 size 0x8 virtual false final false
  inline float_t get_boldStyleWeight();

  /// @brief Method set_boldStyleWeight addr 0x2d38088 size 0x8 virtual false final false
  inline void set_boldStyleWeight(float_t value);

  /// @brief Method get_boldStyleSpacing addr 0x2d38090 size 0x8 virtual false final false
  inline float_t get_boldStyleSpacing();

  /// @brief Method set_boldStyleSpacing addr 0x2d38098 size 0x8 virtual false final false
  inline void set_boldStyleSpacing(float_t value);

  /// @brief Method get_italicStyleSlant addr 0x2d380a0 size 0x8 virtual false final false
  inline uint8_t get_italicStyleSlant();

  /// @brief Method set_italicStyleSlant addr 0x2d380a8 size 0x8 virtual false final false
  inline void set_italicStyleSlant(uint8_t value);

  /// @brief Method get_tabMultiple addr 0x2d380b0 size 0x8 virtual false final false
  inline uint8_t get_tabMultiple();

  /// @brief Method set_tabMultiple addr 0x2d380b8 size 0x8 virtual false final false
  inline void set_tabMultiple(uint8_t value);

  /// @brief Method CreateFontAsset addr 0x2d380c0 size 0x274 virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::StringW familyName, ::StringW styleName, int32_t pointSize);

  /// @brief Method CreateFontAsset addr 0x2d38334 size 0x17c virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::StringW fontFilePath, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                          ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                          ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset addr 0x2d3890c size 0x7c virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* font);

  /// @brief Method CreateFontAsset addr 0x2d38988 size 0xc0 virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* font, int32_t samplingPointSize, int32_t atlasPadding,
                                                                          ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                          ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAsset addr 0x2d38a48 size 0x214 virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAsset(::UnityEngine::Font* font, int32_t faceIndex, int32_t samplingPointSize, int32_t atlasPadding,
                                                                          ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode, int32_t atlasWidth, int32_t atlasHeight,
                                                                          ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode, bool enableMultiAtlasSupport);

  /// @brief Method CreateFontAssetInstance addr 0x2d384b0 size 0x45c virtual false final false
  static inline ::UnityEngine::TextCore::Text::FontAsset* CreateFontAssetInstance(::UnityEngine::Font* font, int32_t atlasPadding, ::UnityEngine::TextCore::LowLevel::GlyphRenderMode renderMode,
                                                                                  int32_t atlasWidth, int32_t atlasHeight, ::UnityEngine::TextCore::Text::AtlasPopulationMode atlasPopulationMode,
                                                                                  bool enableMultiAtlasSupport);

  /// @brief Method Awake addr 0x2d38c5c size 0x4 virtual false final false
  inline void Awake();

  /// @brief Method OnDestroy addr 0x2d38c60 size 0x64 virtual false final false
  inline void OnDestroy();

  /// @brief Method ReadFontAssetDefinition addr 0x2d37b24 size 0x380 virtual false final false
  inline void ReadFontAssetDefinition();

  /// @brief Method InitializeDictionaryLookupTables addr 0x2d38d88 size 0x20 virtual false final false
  inline void InitializeDictionaryLookupTables();

  /// @brief Method InitializeGlyphLookupDictionary addr 0x2d38f88 size 0x288 virtual false final false
  inline void InitializeGlyphLookupDictionary();

  /// @brief Method InitializeCharacterLookupDictionary addr 0x2d39210 size 0x19c virtual false final false
  inline void InitializeCharacterLookupDictionary();

  /// @brief Method InitializeGlyphPaidAdjustmentRecordsLookupDictionary addr 0x2d393ac size 0x23c virtual false final false
  inline void InitializeGlyphPaidAdjustmentRecordsLookupDictionary();

  /// @brief Method AddSynthesizedCharactersAndFaceMetrics addr 0x2d38da8 size 0x1d8 virtual false final false
  inline void AddSynthesizedCharactersAndFaceMetrics();

  /// @brief Method AddSynthesizedCharacter addr 0x2d39708 size 0x254 virtual false final false
  inline void AddSynthesizedCharacter(uint32_t unicode, bool isFontFaceLoaded, bool addImmediately);

  /// @brief Method AddCharacterToLookupCache addr 0x2d399bc size 0x68 virtual false final false
  inline void AddCharacterToLookupCache(uint32_t unicode, ::UnityEngine::TextCore::Text::Character* character);

  /// @brief Method LoadFontFace addr 0x2d39600 size 0x108 virtual false final false
  inline ::UnityEngine::TextCore::LowLevel::FontEngineError LoadFontFace();

  /// @brief Method SortCharacterTable addr 0x2d39a24 size 0x13c virtual false final false
  inline void SortCharacterTable();

  /// @brief Method SortGlyphTable addr 0x2d39b60 size 0x13c virtual false final false
  inline void SortGlyphTable();

  /// @brief Method SortFontFeatureTable addr 0x2d39c9c size 0x18 virtual false final false
  inline void SortFontFeatureTable();

  /// @brief Method SortAllTables addr 0x2d39ea0 size 0x28 virtual false final false
  inline void SortAllTables();

  /// @brief Method HasCharacter addr 0x2d39ec8 size 0x60 virtual false final false
  inline bool HasCharacter(int32_t character);

  /// @brief Method HasCharacter addr 0x2d39f28 size 0x31c virtual false final false
  inline bool HasCharacter(char16_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacter_Internal addr 0x2d3adb8 size 0x224 virtual false final false
  inline bool HasCharacter_Internal(uint32_t character, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters addr 0x2d3afdc size 0x1a8 virtual false final false
  inline bool HasCharacters(::StringW text, ByRef<::System::Collections::Generic::List_1<char16_t>*> missingCharacters);

  /// @brief Method HasCharacters addr 0x2d3b184 size 0x440 virtual false final false
  inline bool HasCharacters(::StringW text, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingCharacters, bool searchFallbacks, bool tryAddCharacter);

  /// @brief Method HasCharacters addr 0x2d3b5c4 size 0xb4 virtual false final false
  inline bool HasCharacters(::StringW text);

  /// @brief Method GetCharacters addr 0x2d3b678 size 0xe0 virtual false final false
  static inline ::StringW GetCharacters(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetCharactersArray addr 0x2d3b758 size 0xe4 virtual false final false
  static inline ::ArrayW<int32_t, ::Array<int32_t>*> GetCharactersArray(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method GetGlyphIndex addr 0x2d3b83c size 0xdc virtual false final false
  inline uint32_t GetGlyphIndex(uint32_t unicode);

  /// @brief Method RegisterFontAssetForFontFeatureUpdate addr 0x2d3b918 size 0x12c virtual false final false
  static inline void RegisterFontAssetForFontFeatureUpdate(::UnityEngine::TextCore::Text::FontAsset* fontAsset);

  /// @brief Method UpdateFontFeaturesForFontAssetsInQueue addr 0x2d3ba44 size 0x178 virtual false final false
  static inline void UpdateFontFeaturesForFontAssetsInQueue();

  /// @brief Method RegisterAtlasTextureForApply addr 0x2d3bf14 size 0x12c virtual false final false
  static inline void RegisterAtlasTextureForApply(::UnityEngine::Texture2D* texture);

  /// @brief Method UpdateAtlasTexturesInQueue addr 0x2d3c040 size 0x184 virtual false final false
  static inline void UpdateAtlasTexturesInQueue();

  /// @brief Method UpdateFontAssetInUpdateQueue addr 0x2d3c1c4 size 0x50 virtual false final false
  static inline void UpdateFontAssetInUpdateQueue();

  /// @brief Method TryAddCharacters addr 0x2d3c214 size 0x20 virtual false final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters addr 0x2d3c234 size 0xbf4 virtual false final false
  inline bool TryAddCharacters(::ArrayW<uint32_t, ::Array<uint32_t>*> unicodes, ByRef<::ArrayW<uint32_t, ::Array<uint32_t>*>> missingUnicodes, bool includeFontFeatures);

  /// @brief Method TryAddCharacters addr 0x2d3d2f4 size 0x20 virtual false final false
  inline bool TryAddCharacters(::StringW characters, bool includeFontFeatures);

  /// @brief Method TryAddCharacters addr 0x2d3d314 size 0xbac virtual false final false
  inline bool TryAddCharacters(::StringW characters, ByRef<::StringW> missingCharacters, bool includeFontFeatures);

  /// @brief Method TryAddCharacterInternal addr 0x2d3a244 size 0xb74 virtual false final false
  inline bool TryAddCharacterInternal(uint32_t unicode, ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures);

  /// @brief Method TryGetCharacter_and_QueueRenderToTexture addr 0x2d3e1c8 size 0x574 virtual false final false
  inline bool TryGetCharacter_and_QueueRenderToTexture(uint32_t unicode, ByRef<::UnityEngine::TextCore::Text::Character*> character, bool shouldGetFontFeatures);

  /// @brief Method TryAddGlyphsToAtlasTextures addr 0x2d3e73c size 0x4 virtual false final false
  inline void TryAddGlyphsToAtlasTextures();

  /// @brief Method TryAddGlyphsToNewAtlasTexture addr 0x2d3ce68 size 0x48c virtual false final false
  inline bool TryAddGlyphsToNewAtlasTexture();

  /// @brief Method SetupNewAtlasTexture addr 0x2d3df98 size 0x230 virtual false final false
  inline void SetupNewAtlasTexture();

  /// @brief Method UpdateAtlasTexture addr 0x2d3e740 size 0x174 virtual false final false
  inline void UpdateAtlasTexture();

  /// @brief Method UpdateGlyphAdjustmentRecords addr 0x2d3bbbc size 0x358 virtual false final false
  inline void UpdateGlyphAdjustmentRecords();

  /// @brief Method UpdateGlyphAdjustmentRecords addr 0x2d3e978 size 0x330 virtual false final false
  inline void UpdateGlyphAdjustmentRecords(::ArrayW<uint32_t, ::Array<uint32_t>*> glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords addr 0x2d3eca8 size 0x4 virtual false final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* glyphIndexes);

  /// @brief Method UpdateGlyphAdjustmentRecords addr 0x2d3ecac size 0x4 virtual false final false
  inline void UpdateGlyphAdjustmentRecords(::System::Collections::Generic::List_1<uint32_t>* newGlyphIndexes, ::System::Collections::Generic::List_1<uint32_t>* allGlyphIndexes);

  /// @brief Method CopyListDataToArray addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> inline void CopyListDataToArray(::System::Collections::Generic::List_1<T>* srcList, ByRef<::ArrayW<T, ::Array<T>*>> dstArray);

  /// @brief Method ClearFontAssetData addr 0x2d3ecb0 size 0x30 virtual false final false
  inline void ClearFontAssetData(bool setAtlasSizeToZero);

  /// @brief Method ClearFontAssetDataInternal addr 0x2d3f0cc size 0x1c virtual false final false
  inline void ClearFontAssetDataInternal();

  /// @brief Method UpdateFontAssetData addr 0x2d3f0e8 size 0x124 virtual false final false
  inline void UpdateFontAssetData();

  /// @brief Method ClearFontAssetTables addr 0x2d3ece0 size 0x1f8 virtual false final false
  inline void ClearFontAssetTables();

  /// @brief Method ClearAtlasTextures addr 0x2d3eed8 size 0x1f4 virtual false final false
  inline void ClearAtlasTextures(bool setAtlasSizeToZero);

  /// @brief Method DestroyAtlasTextures addr 0x2d38cc4 size 0xc4 virtual false final false
  inline void DestroyAtlasTextures();

  static inline ::UnityEngine::TextCore::Text::FontAsset* New_ctor();

  /// @brief Method .ctor addr 0x2d3f214 size 0x2a8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FontAsset(FontAsset&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FontAsset", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FontAsset(FontAsset const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FontAsset();

public:
  /// @brief Field m_SourceFontFileGUID, offset: 0x38, size: 0x8, def value: None
  ::StringW ___m_SourceFontFileGUID;

  /// @brief Field m_SourceFontFile, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Font* ___m_SourceFontFile;

  /// @brief Field m_AtlasPopulationMode, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::TextCore::Text::AtlasPopulationMode ___m_AtlasPopulationMode;

  /// @brief Field InternalDynamicOS, offset: 0x4c, size: 0x1, def value: None
  bool ___InternalDynamicOS;

  /// @brief Field m_FaceInfo, offset: 0x50, size: 0x60, def value: None
  ::UnityEngine::TextCore::FaceInfo ___m_FaceInfo;

  /// @brief Field m_FamilyNameHashCode, offset: 0xb0, size: 0x4, def value: None
  int32_t ___m_FamilyNameHashCode;

  /// @brief Field m_StyleNameHashCode, offset: 0xb4, size: 0x4, def value: None
  int32_t ___m_StyleNameHashCode;

  /// @brief Field m_FontWeightTable, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::TextCore::Text::FontWeightPair, ::Array<::UnityEngine::TextCore::Text::FontWeightPair>*> ___m_FontWeightTable;

  /// @brief Field m_GlyphTable, offset: 0xc0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphTable;

  /// @brief Field m_GlyphLookupDictionary, offset: 0xc8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Glyph*>* ___m_GlyphLookupDictionary;

  /// @brief Field m_CharacterTable, offset: 0xd0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* ___m_CharacterTable;

  /// @brief Field m_CharacterLookupDictionary, offset: 0xd8, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<uint32_t, ::UnityEngine::TextCore::Text::Character*>* ___m_CharacterLookupDictionary;

  /// @brief Field m_AtlasTexture, offset: 0xe0, size: 0x8, def value: None
  ::UnityEngine::Texture2D* ___m_AtlasTexture;

  /// @brief Field m_AtlasTextures, offset: 0xe8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Texture2D*, ::Array<::UnityEngine::Texture2D*>*> ___m_AtlasTextures;

  /// @brief Field m_AtlasTextureIndex, offset: 0xf0, size: 0x4, def value: None
  int32_t ___m_AtlasTextureIndex;

  /// @brief Field m_IsMultiAtlasTexturesEnabled, offset: 0xf4, size: 0x1, def value: None
  bool ___m_IsMultiAtlasTexturesEnabled;

  /// @brief Field m_ClearDynamicDataOnBuild, offset: 0xf5, size: 0x1, def value: None
  bool ___m_ClearDynamicDataOnBuild;

  /// @brief Field m_AtlasWidth, offset: 0xf8, size: 0x4, def value: None
  int32_t ___m_AtlasWidth;

  /// @brief Field m_AtlasHeight, offset: 0xfc, size: 0x4, def value: None
  int32_t ___m_AtlasHeight;

  /// @brief Field m_AtlasPadding, offset: 0x100, size: 0x4, def value: None
  int32_t ___m_AtlasPadding;

  /// @brief Field m_AtlasRenderMode, offset: 0x104, size: 0x4, def value: None
  ::UnityEngine::TextCore::LowLevel::GlyphRenderMode ___m_AtlasRenderMode;

  /// @brief Field m_UsedGlyphRects, offset: 0x108, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_UsedGlyphRects;

  /// @brief Field m_FreeGlyphRects, offset: 0x110, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::GlyphRect>* ___m_FreeGlyphRects;

  /// @brief Field m_FontFeatureTable, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::TextCore::Text::FontFeatureTable* ___m_FontFeatureTable;

  /// @brief Field m_FallbackFontAssetTable, offset: 0x120, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::FontAsset*>* ___m_FallbackFontAssetTable;

  /// @brief Field m_fontAssetCreationEditorSettings, offset: 0x128, size: 0x50, def value: None
  ::UnityEngine::TextCore::Text::FontAssetCreationEditorSettings ___m_fontAssetCreationEditorSettings;

  /// @brief Field m_RegularStyleWeight, offset: 0x178, size: 0x4, def value: None
  float_t ___m_RegularStyleWeight;

  /// @brief Field m_RegularStyleSpacing, offset: 0x17c, size: 0x4, def value: None
  float_t ___m_RegularStyleSpacing;

  /// @brief Field m_BoldStyleWeight, offset: 0x180, size: 0x4, def value: None
  float_t ___m_BoldStyleWeight;

  /// @brief Field m_BoldStyleSpacing, offset: 0x184, size: 0x4, def value: None
  float_t ___m_BoldStyleSpacing;

  /// @brief Field m_ItalicStyleSlant, offset: 0x188, size: 0x1, def value: None
  uint8_t ___m_ItalicStyleSlant;

  /// @brief Field m_TabMultiple, offset: 0x189, size: 0x1, def value: None
  uint8_t ___m_TabMultiple;

  /// @brief Field IsFontAssetLookupTablesDirty, offset: 0x18a, size: 0x1, def value: None
  bool ___IsFontAssetLookupTablesDirty;

  /// @brief Field m_GlyphsToRender, offset: 0x190, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsToRender;

  /// @brief Field m_GlyphsRendered, offset: 0x198, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Glyph*>* ___m_GlyphsRendered;

  /// @brief Field m_GlyphIndexList, offset: 0x1a0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexList;

  /// @brief Field m_GlyphIndexListNewlyAdded, offset: 0x1a8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphIndexListNewlyAdded;

  /// @brief Field m_GlyphsToAdd, offset: 0x1b0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___m_GlyphsToAdd;

  /// @brief Field m_GlyphsToAddLookup, offset: 0x1b8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_GlyphsToAddLookup;

  /// @brief Field m_CharactersToAdd, offset: 0x1c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::TextCore::Text::Character*>* ___m_CharactersToAdd;

  /// @brief Field m_CharactersToAddLookup, offset: 0x1c8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_CharactersToAddLookup;

  /// @brief Field s_MissingCharacterList, offset: 0x1d0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<uint32_t>* ___s_MissingCharacterList;

  /// @brief Field m_MissingUnicodesFromFontFile, offset: 0x1d8, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<uint32_t>* ___m_MissingUnicodesFromFontFile;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::Text::FontAsset, 0x1e0>, "Size mismatch!");

} // namespace UnityEngine::TextCore::Text
NEED_NO_BOX(::UnityEngine::TextCore::Text::FontAsset);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::FontAsset*, "UnityEngine.TextCore.Text", "FontAsset");
NEED_NO_BOX(::UnityEngine::TextCore::Text::__FontAsset____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::Text::__FontAsset____c*, "UnityEngine.TextCore.Text", "FontAsset/<>c");
