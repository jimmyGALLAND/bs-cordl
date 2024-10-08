#pragma once
// IWYU pragma private; include "System/Globalization/CharUnicodeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CharUnicodeInfo)
namespace System::Globalization {
struct UnicodeCategory;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
// Forward declare root types
namespace System::Globalization {
class CharUnicodeInfo;
}
// Write type traits
MARK_REF_PTR_T(::System::Globalization::CharUnicodeInfo);
// Type: System.Globalization::CharUnicodeInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Globalization {
// Is value type: false
// CS Name: ::System.Globalization::CharUnicodeInfo*
class CORDL_TYPE CharUnicodeInfo : public ::System::Object {
public:
// Declarations
/// @brief Method GetNumericValue, addr 0x3cf6bc4, size 0x8, virtual false, abstract: false, final false
static inline double_t GetNumericValue(char16_t  ch) ;

/// @brief Method GetUnicodeCategory, addr 0x3cf6bcc, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(char16_t  ch) ;

/// @brief Method GetUnicodeCategory, addr 0x3cf6be8, size 0x18, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(int32_t  codePoint) ;

/// @brief Method GetUnicodeCategory, addr 0x3cf6c00, size 0xa8, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory GetUnicodeCategory(::StringW  s, int32_t  index) ;

/// @brief Method InternalConvertToUtf32, addr 0x3cf6878, size 0x94, virtual false, abstract: false, final false
static inline int32_t InternalConvertToUtf32(::StringW  s, int32_t  index) ;

/// @brief Method InternalConvertToUtf32, addr 0x3cf690c, size 0xb4, virtual false, abstract: false, final false
static inline int32_t InternalConvertToUtf32(::StringW  s, int32_t  index, ByRef<int32_t>  charLength) ;

/// @brief Method InternalGetCategoryValue, addr 0x3cf6cc4, size 0xb0, virtual false, abstract: false, final false
static inline uint8_t InternalGetCategoryValue(int32_t  ch, int32_t  offset) ;

/// @brief Method InternalGetNumericValue, addr 0x3cf69c0, size 0xc4, virtual false, abstract: false, final false
static inline double_t InternalGetNumericValue(int32_t  ch) ;

/// @brief Method InternalGetUnicodeCategory, addr 0x3cf6eb4, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW  str, int32_t  index, ByRef<int32_t>  charLength) ;

/// @brief Method InternalGetUnicodeCategory, addr 0x3cf6ca8, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Globalization::UnicodeCategory InternalGetUnicodeCategory(::StringW  value, int32_t  index) ;

/// @brief Method IsWhiteSpace, addr 0x3cf6eec, size 0x28, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(char16_t  c) ;

/// @brief Method IsWhiteSpace, addr 0x3cf6ed0, size 0x1c, virtual false, abstract: false, final false
static inline bool IsWhiteSpace(::StringW  s, int32_t  index) ;

/// @brief Method get_CategoriesValue, addr 0x3cf6e64, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoriesValue() ;

/// @brief Method get_CategoryLevel1Index, addr 0x3cf6d74, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel1Index() ;

/// @brief Method get_CategoryLevel2Index, addr 0x3cf6dc4, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel2Index() ;

/// @brief Method get_CategoryLevel3Index, addr 0x3cf6e14, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_CategoryLevel3Index() ;

/// @brief Method get_NumericLevel1Index, addr 0x3cf6a84, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_NumericLevel1Index() ;

/// @brief Method get_NumericLevel2Index, addr 0x3cf6ad4, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_NumericLevel2Index() ;

/// @brief Method get_NumericLevel3Index, addr 0x3cf6b24, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_NumericLevel3Index() ;

/// @brief Method get_NumericValues, addr 0x3cf6b74, size 0x50, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<uint8_t> get_NumericValues() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CharUnicodeInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CharUnicodeInfo(CharUnicodeInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CharUnicodeInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CharUnicodeInfo(CharUnicodeInfo const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::CharUnicodeInfo, 0x10>, "Size mismatch!");

} // namespace end def System::Globalization
NEED_NO_BOX(::System::Globalization::CharUnicodeInfo);
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::CharUnicodeInfo*, "System.Globalization", "CharUnicodeInfo");
