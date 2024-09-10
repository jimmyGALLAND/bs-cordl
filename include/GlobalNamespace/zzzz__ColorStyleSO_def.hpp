#pragma once
// IWYU pragma private; include "GlobalNamespace/ColorStyleSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ColorStyleSO)
namespace GlobalNamespace {
class ColorStyle;
}
namespace GlobalNamespace {
class IReadOnlyColorStyle;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorStyleSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ColorStyleSO);
// Type: ::ColorStyleSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ColorStyleSO*
class CORDL_TYPE ColorStyleSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Field _colorStyle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__colorStyle, put=__cordl_internal_set__colorStyle)) ::GlobalNamespace::ColorStyle*  _colorStyle;

 __declspec(property(get=get_colorStyle)) ::GlobalNamespace::IReadOnlyColorStyle*  colorStyle;

static inline ::GlobalNamespace::ColorStyleSO* New_ctor() ;

constexpr ::GlobalNamespace::ColorStyle*& __cordl_internal_get__colorStyle() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorStyle*> const& __cordl_internal_get__colorStyle() const;

constexpr void __cordl_internal_set__colorStyle(::GlobalNamespace::ColorStyle*  value) ;

/// @brief Method .ctor, addr 0x26551b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_colorStyle, addr 0x26551ac, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::IReadOnlyColorStyle* get_colorStyle() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ColorStyleSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ColorStyleSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ColorStyleSO(ColorStyleSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ColorStyleSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ColorStyleSO(ColorStyleSO const& ) = delete;

/// @brief Field _colorStyle, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ColorStyle*  ____colorStyle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ColorStyleSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ColorStyleSO, ____colorStyle) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ColorStyleSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorStyleSO*, "", "ColorStyleSO");
