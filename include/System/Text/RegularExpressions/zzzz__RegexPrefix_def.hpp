#pragma once
// IWYU pragma private; include "System/Text/RegularExpressions/RegexPrefix.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(RegexPrefix)
// Forward declare root types
namespace System::Text::RegularExpressions {
struct RegexPrefix;
}
// Write type traits
MARK_VAL_T(::System::Text::RegularExpressions::RegexPrefix);
// Type: System.Text.RegularExpressions::RegexPrefix
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Text::RegularExpressions {
// Is value type: true
// CS Name: ::System.Text.RegularExpressions::RegexPrefix
struct CORDL_TYPE RegexPrefix {
public:
// Declarations
 __declspec(property(get=get_CaseInsensitive)) bool  CaseInsensitive;

 __declspec(property(get=get_Prefix)) ::StringW  Prefix;

/// @brief Field <Empty>k__BackingField, offset 0xffffffff, size 0x10 
static __declspec(property(get=getStaticF__Empty_k__BackingField, put=setStaticF__Empty_k__BackingField)) ::System::Text::RegularExpressions::RegexPrefix  _Empty_k__BackingField;

/// @brief Method .ctor, addr 0x438c328, size 0x10, virtual false, abstract: false, final false
inline void _ctor(::StringW  prefix, bool  ci) ;

static inline ::System::Text::RegularExpressions::RegexPrefix getStaticF__Empty_k__BackingField() ;

/// @brief Method get_CaseInsensitive, addr 0x4396444, size 0x8, virtual false, abstract: false, final false
inline bool get_CaseInsensitive() ;

/// @brief Method get_Empty, addr 0x439644c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Text::RegularExpressions::RegexPrefix get_Empty() ;

/// @brief Method get_Prefix, addr 0x43964a4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_Prefix() ;

static inline void setStaticF__Empty_k__BackingField(::System::Text::RegularExpressions::RegexPrefix  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RegexPrefix() ;

// Ctor Parameters [CppParam { name: "_CaseInsensitive_k__BackingField", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }]
constexpr RegexPrefix(bool  _CaseInsensitive_k__BackingField, ::StringW  _Prefix_k__BackingField) noexcept;

/// @brief Field <CaseInsensitive>k__BackingField, offset: 0x0, size: 0x1, def value: None
 bool  _CaseInsensitive_k__BackingField;

/// @brief Field <Prefix>k__BackingField, offset: 0x8, size: 0x8, def value: None
 ::StringW  _Prefix_k__BackingField;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::RegularExpressions::RegexPrefix, 0x10>, "Size mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexPrefix, _CaseInsensitive_k__BackingField) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Text::RegularExpressions::RegexPrefix, _Prefix_k__BackingField) == 0x8, "Offset mismatch!");

} // namespace end def System::Text::RegularExpressions
DEFINE_IL2CPP_ARG_TYPE(::System::Text::RegularExpressions::RegexPrefix, "System.Text.RegularExpressions", "RegexPrefix");
