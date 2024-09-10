#pragma once
// IWYU pragma private; include "System/Xml/Schema/FacetsChecker.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__RestrictionFlags_def.hpp"
#include "System/Xml/Schema/zzzz__XmlTypeCode_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FacetsChecker)
namespace GlobalNamespace {
struct __FacetsChecker__FacetsCompiler__Map;
}
namespace System::Collections {
class ArrayList;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaFacet;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaPatternFacet;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
struct __FacetsChecker__FacetsCompiler;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace GlobalNamespace {
struct __FacetsChecker__FacetsCompiler__Map;
}
namespace System::Xml::Schema {
struct __FacetsChecker__FacetsCompiler;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::FacetsChecker);
MARK_VAL_T(::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map);
MARK_VAL_T(::System::Xml::Schema::__FacetsChecker__FacetsCompiler);
// Type: ::Map
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::FacetsChecker::FacetsCompiler::Map
struct CORDL_TYPE __FacetsChecker__FacetsCompiler__Map {
public:
// Declarations
/// @brief Method .ctor, addr 0x43260a8, size 0xc, virtual false, abstract: false, final false
inline void _ctor(char16_t  m, ::StringW  r) ;

// Ctor Parameters []
// @brief default ctor
constexpr __FacetsChecker__FacetsCompiler__Map() ;

// Ctor Parameters [CppParam { name: "match", ty: "char16_t", modifiers: "", def_value: None }, CppParam { name: "replacement", ty: "::StringW", modifiers: "", def_value: None }]
constexpr __FacetsChecker__FacetsCompiler__Map(char16_t  match, ::StringW  replacement) noexcept;

/// @brief Field match, offset: 0x0, size: 0x2, def value: None
 char16_t  match;

/// @brief Field replacement, offset: 0x8, size: 0x8, def value: None
 ::StringW  replacement;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map, 0x10>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map, match) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map, replacement) == 0x8, "Offset mismatch!");

} // namespace end def GlobalNamespace
// Type: ::FacetsCompiler
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 88, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: true
// CS Name: ::FacetsChecker::FacetsCompiler
struct CORDL_TYPE __FacetsChecker__FacetsCompiler {
public:
// Declarations
using Map = ::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map;

/// @brief Field c_map, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_c_map, put=setStaticF_c_map)) ::ArrayW<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map,::Array<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map>*>  c_map;

/// @brief Method CheckDupFlag, addr 0x43251d0, size 0x70, virtual false, abstract: false, final false
inline void CheckDupFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode) ;

/// @brief Method CheckProhibitedFlag, addr 0x4325144, size 0x8c, virtual false, abstract: false, final false
inline void CheckProhibitedFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag, ::StringW  errorCode) ;

/// @brief Method CheckValue, addr 0x43253ec, size 0x494, virtual false, abstract: false, final false
inline void CheckValue(::System::Object*  value, ::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileEnumerationFacet, addr 0x4323740, size 0x148, virtual false, abstract: false, final false
inline void CompileEnumerationFacet(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method CompileFacetCombinations, addr 0x4324c38, size 0x3d8, virtual false, abstract: false, final false
inline void CompileFacetCombinations() ;

/// @brief Method CompileFractionDigitsFacet, addr 0x432461c, size 0x2b4, virtual false, abstract: false, final false
inline void CompileFractionDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileLengthFacet, addr 0x4322c34, size 0x360, virtual false, abstract: false, final false
inline void CompileLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxExclusiveFacet, addr 0x432413c, size 0x1c4, virtual false, abstract: false, final false
inline void CompileMaxExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxInclusiveFacet, addr 0x4323f78, size 0x1c4, virtual false, abstract: false, final false
inline void CompileMaxInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMaxLengthFacet, addr 0x43232b8, size 0x324, virtual false, abstract: false, final false
inline void CompileMaxLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinExclusiveFacet, addr 0x4323db4, size 0x1c4, virtual false, abstract: false, final false
inline void CompileMinExclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinInclusiveFacet, addr 0x4323bf0, size 0x1c4, virtual false, abstract: false, final false
inline void CompileMinInclusiveFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileMinLengthFacet, addr 0x4322f94, size 0x324, virtual false, abstract: false, final false
inline void CompileMinLengthFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompilePatternFacet, addr 0x43235dc, size 0x164, virtual false, abstract: false, final false
inline void CompilePatternFacet(::System::Xml::Schema::XmlSchemaPatternFacet*  facet) ;

/// @brief Method CompileTotalDigitsFacet, addr 0x4324300, size 0x31c, virtual false, abstract: false, final false
inline void CompileTotalDigitsFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CompileWhitespaceFacet, addr 0x4323888, size 0x368, virtual false, abstract: false, final false
inline void CompileWhitespaceFacet(::System::Xml::Schema::XmlSchemaFacet*  facet) ;

/// @brief Method CopyFacetsFromBaseType, addr 0x4325adc, size 0x3dc, virtual false, abstract: false, final false
inline void CopyFacetsFromBaseType() ;

/// @brief Method FinishFacetCompile, addr 0x43248d0, size 0x368, virtual false, abstract: false, final false
inline void FinishFacetCompile() ;

/// @brief Method ParseFacetValue, addr 0x4325240, size 0x144, virtual false, abstract: false, final false
inline ::System::Object* ParseFacetValue(::System::Xml::Schema::XmlSchemaDatatype*  datatype, ::System::Xml::Schema::XmlSchemaFacet*  facet, ::StringW  code, ::System::Xml::IXmlNamespaceResolver*  nsmgr, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method Preprocess, addr 0x4325880, size 0x25c, virtual false, abstract: false, final false
static inline ::StringW Preprocess(::StringW  pattern) ;

/// @brief Method SetFlag, addr 0x4325384, size 0x68, virtual false, abstract: false, final false
inline void SetFlag(::System::Xml::Schema::XmlSchemaFacet*  facet, ::System::Xml::Schema::RestrictionFlags  flag) ;

/// @brief Method SetFlag, addr 0x4325eb8, size 0x3c, virtual false, abstract: false, final false
inline void SetFlag(::System::Xml::Schema::RestrictionFlags  flag) ;

/// @brief Method .ctor, addr 0x4322a30, size 0x204, virtual false, abstract: false, final false
inline void _ctor(::System::Xml::Schema::DatatypeImplementation*  baseDatatype, ::System::Xml::Schema::RestrictionFacets*  restriction) ;

static inline ::ArrayW<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map,::Array<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map>*> getStaticF_c_map() ;

static inline void setStaticF_c_map(::ArrayW<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map,::Array<::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map>*>  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __FacetsChecker__FacetsCompiler() ;

// Ctor Parameters [CppParam { name: "datatype", ty: "::System::Xml::Schema::DatatypeImplementation*", modifiers: "", def_value: None }, CppParam { name: "derivedRestriction", ty: "::System::Xml::Schema::RestrictionFacets*", modifiers: "", def_value: None }, CppParam { name: "baseFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None }, CppParam { name: "baseFixedFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None }, CppParam { name: "validRestrictionFlags", ty: "::System::Xml::Schema::RestrictionFlags", modifiers: "", def_value: None }, CppParam { name: "nonNegativeInt", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: None }, CppParam { name: "builtInType", ty: "::System::Xml::Schema::XmlSchemaDatatype*", modifiers: "", def_value: None }, CppParam { name: "builtInEnum", ty: "::System::Xml::Schema::XmlTypeCode", modifiers: "", def_value: None }, CppParam { name: "firstPattern", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "regStr", ty: "::System::Text::StringBuilder*", modifiers: "", def_value: None }, CppParam { name: "pattern_facet", ty: "::System::Xml::Schema::XmlSchemaPatternFacet*", modifiers: "", def_value: None }]
constexpr __FacetsChecker__FacetsCompiler(::System::Xml::Schema::DatatypeImplementation*  datatype, ::System::Xml::Schema::RestrictionFacets*  derivedRestriction, ::System::Xml::Schema::RestrictionFlags  baseFlags, ::System::Xml::Schema::RestrictionFlags  baseFixedFlags, ::System::Xml::Schema::RestrictionFlags  validRestrictionFlags, ::System::Xml::Schema::XmlSchemaDatatype*  nonNegativeInt, ::System::Xml::Schema::XmlSchemaDatatype*  builtInType, ::System::Xml::Schema::XmlTypeCode  builtInEnum, bool  firstPattern, ::System::Text::StringBuilder*  regStr, ::System::Xml::Schema::XmlSchemaPatternFacet*  pattern_facet) noexcept;

/// @brief Field datatype, offset: 0x0, size: 0x8, def value: None
 ::System::Xml::Schema::DatatypeImplementation*  datatype;

/// @brief Field derivedRestriction, offset: 0x8, size: 0x8, def value: None
 ::System::Xml::Schema::RestrictionFacets*  derivedRestriction;

/// @brief Field baseFlags, offset: 0x10, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  baseFlags;

/// @brief Field baseFixedFlags, offset: 0x14, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  baseFixedFlags;

/// @brief Field validRestrictionFlags, offset: 0x18, size: 0x4, def value: None
 ::System::Xml::Schema::RestrictionFlags  validRestrictionFlags;

/// @brief Field nonNegativeInt, offset: 0x20, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaDatatype*  nonNegativeInt;

/// @brief Field builtInType, offset: 0x28, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaDatatype*  builtInType;

/// @brief Field builtInEnum, offset: 0x30, size: 0x4, def value: None
 ::System::Xml::Schema::XmlTypeCode  builtInEnum;

/// @brief Field firstPattern, offset: 0x34, size: 0x1, def value: None
 bool  firstPattern;

/// @brief Field regStr, offset: 0x38, size: 0x8, def value: None
 ::System::Text::StringBuilder*  regStr;

/// @brief Field pattern_facet, offset: 0x40, size: 0x8, def value: None
 ::System::Xml::Schema::XmlSchemaPatternFacet*  pattern_facet;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__FacetsChecker__FacetsCompiler, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, datatype) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, derivedRestriction) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, baseFlags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, baseFixedFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, validRestrictionFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, nonNegativeInt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, builtInType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, builtInEnum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, firstPattern) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, regStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, pattern_facet) == 0x40, "Offset mismatch!");

} // namespace end def System::Xml::Schema
// Type: System.Xml.Schema::FacetsChecker
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::FacetsChecker*
class CORDL_TYPE FacetsChecker : public ::System::Object {
public:
// Declarations
using FacetsCompiler = ::System::Xml::Schema::__FacetsChecker__FacetsCompiler;

/// @brief Method CheckLexicalFacets, addr 0x4322324, size 0x44, virtual true, abstract: false, final false
inline ::System::Exception* CheckLexicalFacets(ByRef<::StringW>  parseString, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckPatternFacets, addr 0x4322450, size 0x15c, virtual false, abstract: false, final false
inline ::System::Exception* CheckPatternFacets(::System::Xml::Schema::RestrictionFacets*  restriction, ::StringW  value) ;

/// @brief Method CheckValueFacets, addr 0x43225f4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::ArrayW<uint8_t,::Array<uint8_t>*>  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225ec, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::StringW  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225d4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::DateTime  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225b4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Decimal  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225ac, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Object*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225fc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::TimeSpan  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x4322604, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(::System::Xml::XmlQualifiedName*  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225dc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(double_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225e4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(float_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225cc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int16_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225c4, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int32_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckValueFacets, addr 0x43225bc, size 0x8, virtual true, abstract: false, final false
inline ::System::Exception* CheckValueFacets(int64_t  value, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method CheckWhitespaceFacets, addr 0x4322368, size 0xe8, virtual false, abstract: false, final false
inline void CheckWhitespaceFacets(ByRef<::StringW>  s, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

/// @brief Method ConstructRestriction, addr 0x4322614, size 0x41c, virtual true, abstract: false, final false
inline ::System::Xml::Schema::RestrictionFacets* ConstructRestriction(::System::Xml::Schema::DatatypeImplementation*  datatype, ::System::Xml::Schema::XmlSchemaObjectCollection*  facets, ::System::Xml::XmlNameTable*  nameTable) ;

/// @brief Method MatchEnumeration, addr 0x432260c, size 0x8, virtual true, abstract: false, final false
inline bool MatchEnumeration(::System::Object*  value, ::System::Collections::ArrayList*  enumeration, ::System::Xml::Schema::XmlSchemaDatatype*  datatype) ;

static inline ::System::Xml::Schema::FacetsChecker* New_ctor() ;

/// @brief Method Power, addr 0x4325010, size 0x12c, virtual false, abstract: false, final false
static inline ::System::Decimal Power(int32_t  x, int32_t  y) ;

/// @brief Method .ctor, addr 0x432513c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FacetsChecker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FacetsChecker(FacetsChecker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FacetsChecker", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FacetsChecker(FacetsChecker const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::FacetsChecker, 0x10>, "Size mismatch!");

} // namespace end def System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::FacetsChecker);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::FacetsChecker*, "System.Xml.Schema", "FacetsChecker");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__FacetsChecker__FacetsCompiler__Map, "System.Xml.Schema", "FacetsChecker/FacetsCompiler/Map");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__FacetsChecker__FacetsCompiler, "System.Xml.Schema", "FacetsChecker/FacetsCompiler");
