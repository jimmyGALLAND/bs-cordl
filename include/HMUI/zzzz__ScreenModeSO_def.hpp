#pragma once
// IWYU pragma private; include "HMUI/ScreenModeSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(ScreenModeSO)
namespace HMUI {
class ScreenModeData;
}
// Forward declare root types
namespace HMUI {
class ScreenModeSO;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ScreenModeSO);
// Type: HMUI::ScreenModeSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ScreenModeSO*
class CORDL_TYPE ScreenModeSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Field _data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__data, put=__cordl_internal_set__data)) ::HMUI::ScreenModeData*  _data;

 __declspec(property(get=get_data)) ::HMUI::ScreenModeData*  data;

static inline ::HMUI::ScreenModeSO* New_ctor() ;

constexpr ::HMUI::ScreenModeData*& __cordl_internal_get__data() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ScreenModeData*> const& __cordl_internal_get__data() const;

constexpr void __cordl_internal_set__data(::HMUI::ScreenModeData*  value) ;

/// @brief Method .ctor, addr 0x22401cc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_data, addr 0x22401c4, size 0x8, virtual false, abstract: false, final false
inline ::HMUI::ScreenModeData* get_data() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScreenModeSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScreenModeSO(ScreenModeSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScreenModeSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScreenModeSO(ScreenModeSO const& ) = delete;

/// @brief Field _data, offset: 0x18, size: 0x8, def value: None
 ::HMUI::ScreenModeData*  ____data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ScreenModeSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::HMUI::ScreenModeSO, ____data) == 0x18, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::ScreenModeSO);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ScreenModeSO*, "HMUI", "ScreenModeSO");
