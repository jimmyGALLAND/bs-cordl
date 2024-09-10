#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerSensitivityDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "GlobalNamespace/zzzz__ValueDropdownController_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(PlayerSensitivityDropdown)
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayerSensitivityDropdown;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlayerSensitivityDropdown);
// Type: ::PlayerSensitivityDropdown
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::PlayerSensitivityDropdown*
class CORDL_TYPE PlayerSensitivityDropdown : public ::GlobalNamespace::ValueDropdownController_1<::GlobalNamespace::PlayerSensitivityFlag> {
public:
// Declarations
/// @brief Method GetNamedValues, addr 0x3b77b40, size 0x128, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::PlayerSensitivityFlag,::StringW>*>* GetNamedValues() ;

static inline ::GlobalNamespace::PlayerSensitivityDropdown* New_ctor() ;

/// @brief Method .ctor, addr 0x3b77c68, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayerSensitivityDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivityDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayerSensitivityDropdown(PlayerSensitivityDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayerSensitivityDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayerSensitivityDropdown(PlayerSensitivityDropdown const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlayerSensitivityDropdown, 0x38>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlayerSensitivityDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlayerSensitivityDropdown*, "", "PlayerSensitivityDropdown");
