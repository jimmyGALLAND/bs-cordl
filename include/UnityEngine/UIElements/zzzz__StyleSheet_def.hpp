#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/StyleSheet.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StyleSheet)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct __StyleSheet__ImportStruct;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct __StyleSheet__ImportStruct;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleSheet);
MARK_VAL_T(::UnityEngine::UIElements::__StyleSheet__ImportStruct);
// Type: ::ImportStruct
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: true
// CS Name: ::StyleSheet::ImportStruct
struct CORDL_TYPE __StyleSheet__ImportStruct {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __StyleSheet__ImportStruct() ;

// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityW<::UnityEngine::UIElements::StyleSheet>", modifiers: "", def_value: None }, CppParam { name: "mediaQueries", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __StyleSheet__ImportStruct(::UnityW<::UnityEngine::UIElements::StyleSheet>  styleSheet, ::ArrayW<::StringW,::Array<::StringW>*>  mediaQueries) noexcept;

/// @brief Field styleSheet, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::UIElements::StyleSheet>  styleSheet;

/// @brief Field mediaQueries, offset: 0x8, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  mediaQueries;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__StyleSheet__ImportStruct, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleSheet__ImportStruct, styleSheet) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::__StyleSheet__ImportStruct, mediaQueries) == 0x8, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleSheet
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 145, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleSheet*
class CORDL_TYPE StyleSheet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ImportStruct = ::UnityEngine::UIElements::__StyleSheet__ImportStruct;

/// @brief Field assets, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_assets, put=__cordl_internal_set_assets)) ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>  assets;

/// @brief Field colors, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colors, put=__cordl_internal_set_colors)) ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  colors;

 __declspec(property(get=get_complexSelectors, put=set_complexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  complexSelectors;

 __declspec(property(get=get_contentHash, put=set_contentHash)) int32_t  contentHash;

/// @brief Field dimensions, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_dimensions, put=__cordl_internal_set_dimensions)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>  dimensions;

 __declspec(property(get=get_flattenedRecursiveImports)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  flattenedRecursiveImports;

/// @brief Field floats, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_floats, put=__cordl_internal_set_floats)) ::ArrayW<float_t,::Array<float_t>*>  floats;

 __declspec(property(get=get_importedWithErrors, put=set_importedWithErrors)) bool  importedWithErrors;

 __declspec(property(get=get_importedWithWarnings, put=set_importedWithWarnings)) bool  importedWithWarnings;

/// @brief Field imports, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_imports, put=__cordl_internal_set_imports)) ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>  imports;

 __declspec(property(get=get_isDefaultStyleSheet, put=set_isDefaultStyleSheet)) bool  isDefaultStyleSheet;

/// @brief Field kCustomPropertyMarker, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_kCustomPropertyMarker, put=setStaticF_kCustomPropertyMarker)) ::StringW  kCustomPropertyMarker;

/// @brief Field m_ComplexSelectors, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ComplexSelectors, put=__cordl_internal_set_m_ComplexSelectors)) ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  m_ComplexSelectors;

/// @brief Field m_ContentHash, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ContentHash, put=__cordl_internal_set_m_ContentHash)) int32_t  m_ContentHash;

/// @brief Field m_FlattenedImportedStyleSheets, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FlattenedImportedStyleSheets, put=__cordl_internal_set_m_FlattenedImportedStyleSheets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  m_FlattenedImportedStyleSheets;

/// @brief Field m_ImportedWithErrors, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithErrors, put=__cordl_internal_set_m_ImportedWithErrors)) bool  m_ImportedWithErrors;

/// @brief Field m_ImportedWithWarnings, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ImportedWithWarnings, put=__cordl_internal_set_m_ImportedWithWarnings)) bool  m_ImportedWithWarnings;

/// @brief Field m_IsDefaultStyleSheet, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsDefaultStyleSheet, put=__cordl_internal_set_m_IsDefaultStyleSheet)) bool  m_IsDefaultStyleSheet;

/// @brief Field m_Rules, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Rules, put=__cordl_internal_set_m_Rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  m_Rules;

/// @brief Field orderedClassSelectors, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_orderedClassSelectors, put=__cordl_internal_set_orderedClassSelectors)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  orderedClassSelectors;

/// @brief Field orderedNameSelectors, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_orderedNameSelectors, put=__cordl_internal_set_orderedNameSelectors)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  orderedNameSelectors;

/// @brief Field orderedTypeSelectors, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_orderedTypeSelectors, put=__cordl_internal_set_orderedTypeSelectors)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  orderedTypeSelectors;

 __declspec(property(get=get_rules, put=set_rules)) ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  rules;

/// @brief Field scalableImages, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_scalableImages, put=__cordl_internal_set_scalableImages)) ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>  scalableImages;

/// @brief Field strings, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_strings, put=__cordl_internal_set_strings)) ::ArrayW<::StringW,::Array<::StringW>*>  strings;

/// @brief Method CheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T CheckAccess(::ArrayW<T,::Array<T>*>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method CustomStartsWith, addr 0x49f7bf8, size 0xc8, virtual false, abstract: false, final false
static inline bool CustomStartsWith(::StringW  originalString, ::StringW  pattern) ;

/// @brief Method FlattenImportedStyleSheetsRecursive, addr 0x49f7a38, size 0x7c, virtual false, abstract: false, final false
inline void FlattenImportedStyleSheetsRecursive() ;

/// @brief Method FlattenImportedStyleSheetsRecursive, addr 0x49f7ab4, size 0x144, virtual false, abstract: false, final false
inline void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet*  sheet) ;

static inline ::UnityEngine::UIElements::StyleSheet* New_ctor() ;

/// @brief Method OnEnable, addr 0x49f7a34, size 0x4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReadAssetReference, addr 0x49f8280, size 0x60, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadColor, addr 0x49f7f00, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadDimension, addr 0x49f7d68, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadEnum, addr 0x49f8028, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadFloat, addr 0x49f7cc8, size 0xa0, virtual false, abstract: false, final false
inline float_t ReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadFunction, addr 0x49f83a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadFunctionName, addr 0x49f83b0, size 0x18c, virtual false, abstract: false, final false
inline ::StringW ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadKeyword, addr 0x49f7cc0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadMissingAssetReferenceUrl, addr 0x49f82e0, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadResourcePath, addr 0x49f81b8, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadScalableImage, addr 0x49f862c, size 0x60, virtual false, abstract: false, final false
inline ::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadString, addr 0x49f7f60, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadString(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method ReadVariable, addr 0x49f80f0, size 0x60, virtual false, abstract: false, final false
inline ::StringW ReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle) ;

/// @brief Method SetupReferences, addr 0x49f7364, size 0x540, virtual false, abstract: false, final false
inline void SetupReferences() ;

/// @brief Method TryCheckAccess, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryCheckAccess(::ArrayW<T,::Array<T>*>  list, ::UnityEngine::UIElements::StyleValueType  type, ::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<T>  value) ;

/// @brief Method TryReadAssetReference, addr 0x49f8340, size 0x68, virtual false, abstract: false, final false
inline bool TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::Object*>  value) ;

/// @brief Method TryReadColor, addr 0x49eae9c, size 0x68, virtual false, abstract: false, final false
inline bool TryReadColor(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::Color>  value) ;

/// @brief Method TryReadDimension, addr 0x49f7e24, size 0xdc, virtual false, abstract: false, final false
inline bool TryReadDimension(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::UnityEngine::UIElements::StyleSheets::Dimension>  value) ;

/// @brief Method TryReadEnum, addr 0x49f8088, size 0x68, virtual false, abstract: false, final false
inline bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value) ;

/// @brief Method TryReadFloat, addr 0x49eabe4, size 0xc0, virtual false, abstract: false, final false
inline bool TryReadFloat(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<float_t>  value) ;

/// @brief Method TryReadResourcePath, addr 0x49f8218, size 0x68, virtual false, abstract: false, final false
inline bool TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value) ;

/// @brief Method TryReadString, addr 0x49f7fc0, size 0x68, virtual false, abstract: false, final false
inline bool TryReadString(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value) ;

/// @brief Method TryReadVariable, addr 0x49f8150, size 0x68, virtual false, abstract: false, final false
inline bool TryReadVariable(::UnityEngine::UIElements::StyleValueHandle  handle, ByRef<::StringW>  value) ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*> const& __cordl_internal_get_assets() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>& __cordl_internal_get_assets() ;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*> const& __cordl_internal_get_colors() const;

constexpr ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>& __cordl_internal_get_colors() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*> const& __cordl_internal_get_dimensions() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>& __cordl_internal_get_dimensions() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __cordl_internal_get_floats() const;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __cordl_internal_get_floats() ;

constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*> const& __cordl_internal_get_imports() const;

constexpr ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>& __cordl_internal_get_imports() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_m_ComplexSelectors() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>& __cordl_internal_get_m_ComplexSelectors() ;

constexpr int32_t const& __cordl_internal_get_m_ContentHash() const;

constexpr int32_t& __cordl_internal_get_m_ContentHash() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*& __cordl_internal_get_m_FlattenedImportedStyleSheets() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*> const& __cordl_internal_get_m_FlattenedImportedStyleSheets() const;

constexpr bool const& __cordl_internal_get_m_ImportedWithErrors() const;

constexpr bool& __cordl_internal_get_m_ImportedWithErrors() ;

constexpr bool const& __cordl_internal_get_m_ImportedWithWarnings() const;

constexpr bool& __cordl_internal_get_m_ImportedWithWarnings() ;

constexpr bool const& __cordl_internal_get_m_IsDefaultStyleSheet() const;

constexpr bool& __cordl_internal_get_m_IsDefaultStyleSheet() ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*> const& __cordl_internal_get_m_Rules() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>& __cordl_internal_get_m_Rules() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*& __cordl_internal_get_orderedClassSelectors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_orderedClassSelectors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*& __cordl_internal_get_orderedNameSelectors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_orderedNameSelectors() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*& __cordl_internal_get_orderedTypeSelectors() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*> const& __cordl_internal_get_orderedTypeSelectors() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*> const& __cordl_internal_get_scalableImages() const;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>& __cordl_internal_get_scalableImages() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get_strings() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get_strings() ;

constexpr void __cordl_internal_set_assets(::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>  value) ;

constexpr void __cordl_internal_set_colors(::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  value) ;

constexpr void __cordl_internal_set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>  value) ;

constexpr void __cordl_internal_set_floats(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr void __cordl_internal_set_imports(::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>  value) ;

constexpr void __cordl_internal_set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  value) ;

constexpr void __cordl_internal_set_m_ContentHash(int32_t  value) ;

constexpr void __cordl_internal_set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  value) ;

constexpr void __cordl_internal_set_m_ImportedWithErrors(bool  value) ;

constexpr void __cordl_internal_set_m_ImportedWithWarnings(bool  value) ;

constexpr void __cordl_internal_set_m_IsDefaultStyleSheet(bool  value) ;

constexpr void __cordl_internal_set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  value) ;

constexpr void __cordl_internal_set_orderedClassSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value) ;

constexpr void __cordl_internal_set_orderedNameSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value) ;

constexpr void __cordl_internal_set_orderedTypeSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  value) ;

constexpr void __cordl_internal_set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>  value) ;

constexpr void __cordl_internal_set_strings(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x49f868c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_kCustomPropertyMarker() ;

/// @brief Method get_complexSelectors, addr 0x49f78a4, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*> get_complexSelectors() ;

/// @brief Method get_contentHash, addr 0x49f78bc, size 0x8, virtual false, abstract: false, final false
inline int32_t get_contentHash() ;

/// @brief Method get_flattenedRecursiveImports, addr 0x49f78b4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>* get_flattenedRecursiveImports() ;

/// @brief Method get_importedWithErrors, addr 0x49f732c, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithErrors() ;

/// @brief Method get_importedWithWarnings, addr 0x49f7340, size 0x8, virtual false, abstract: false, final false
inline bool get_importedWithWarnings() ;

/// @brief Method get_isDefaultStyleSheet, addr 0x49f78cc, size 0x8, virtual false, abstract: false, final false
inline bool get_isDefaultStyleSheet() ;

/// @brief Method get_rules, addr 0x49f7354, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*> get_rules() ;

static inline void setStaticF_kCustomPropertyMarker(::StringW  value) ;

/// @brief Method set_complexSelectors, addr 0x49f78ac, size 0x8, virtual false, abstract: false, final false
inline void set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  value) ;

/// @brief Method set_contentHash, addr 0x49f78c4, size 0x8, virtual false, abstract: false, final false
inline void set_contentHash(int32_t  value) ;

/// @brief Method set_importedWithErrors, addr 0x49f7334, size 0xc, virtual false, abstract: false, final false
inline void set_importedWithErrors(bool  value) ;

/// @brief Method set_importedWithWarnings, addr 0x49f7348, size 0xc, virtual false, abstract: false, final false
inline void set_importedWithWarnings(bool  value) ;

/// @brief Method set_isDefaultStyleSheet, addr 0x49f78d4, size 0x160, virtual false, abstract: false, final false
inline void set_isDefaultStyleSheet(bool  value) ;

/// @brief Method set_rules, addr 0x49f735c, size 0x8, virtual false, abstract: false, final false
inline void set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StyleSheet() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StyleSheet(StyleSheet && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StyleSheet(StyleSheet const& ) = delete;

/// @brief Field m_ImportedWithErrors, offset: 0x18, size: 0x1, def value: None
 bool  ___m_ImportedWithErrors;

/// @brief Field m_ImportedWithWarnings, offset: 0x19, size: 0x1, def value: None
 bool  ___m_ImportedWithWarnings;

/// @brief Field m_Rules, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleRule*,::Array<::UnityEngine::UIElements::StyleRule*>*>  ___m_Rules;

/// @brief Field m_ComplexSelectors, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector*,::Array<::UnityEngine::UIElements::StyleComplexSelector*>*>  ___m_ComplexSelectors;

/// @brief Field floats, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<float_t,::Array<float_t>*>  ___floats;

/// @brief Field dimensions, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension,::Array<::UnityEngine::UIElements::StyleSheets::Dimension>*>  ___dimensions;

/// @brief Field colors, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color,::Array<::UnityEngine::Color>*>  ___colors;

/// @brief Field strings, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ___strings;

/// @brief Field assets, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Object>,::Array<::UnityW<::UnityEngine::Object>>*>  ___assets;

/// @brief Field imports, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::__StyleSheet__ImportStruct,::Array<::UnityEngine::UIElements::__StyleSheet__ImportStruct>*>  ___imports;

/// @brief Field m_FlattenedImportedStyleSheets, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::StyleSheet>>*  ___m_FlattenedImportedStyleSheets;

/// @brief Field m_ContentHash, offset: 0x68, size: 0x4, def value: None
 int32_t  ___m_ContentHash;

/// @brief Field scalableImages, offset: 0x70, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage,::Array<::UnityEngine::UIElements::StyleSheets::ScalableImage>*>  ___scalableImages;

/// @brief Field orderedNameSelectors, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  ___orderedNameSelectors;

/// @brief Field orderedTypeSelectors, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  ___orderedTypeSelectors;

/// @brief Field orderedClassSelectors, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector*>*  ___orderedClassSelectors;

/// @brief Field m_IsDefaultStyleSheet, offset: 0x90, size: 0x1, def value: None
 bool  ___m_IsDefaultStyleSheet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleSheet, 0x98>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithErrors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ImportedWithWarnings) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_Rules) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ComplexSelectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___floats) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___dimensions) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___colors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___strings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___assets) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___imports) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_FlattenedImportedStyleSheets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_ContentHash) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___scalableImages) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedNameSelectors) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedTypeSelectors) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___orderedClassSelectors) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleSheet, ___m_IsDefaultStyleSheet) == 0x90, "Offset mismatch!");

} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheet*, "UnityEngine.UIElements", "StyleSheet");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__StyleSheet__ImportStruct, "UnityEngine.UIElements", "StyleSheet/ImportStruct");
