#pragma once
// IWYU pragma private; include "GlobalNamespace/TableCellWithSeparator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableCellWithSeparator)
namespace HMUI {
class ITableCellOwner;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class TableCellWithSeparator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TableCellWithSeparator);
// Type: ::TableCellWithSeparator
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 112, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TableCellWithSeparator*
class CORDL_TYPE TableCellWithSeparator : public ::HMUI::TableCell {
public:
// Declarations
/// @brief Field _separator, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__separator, put=__cordl_internal_set__separator)) ::UnityW<::UnityEngine::GameObject>  _separator;

static inline ::GlobalNamespace::TableCellWithSeparator* New_ctor() ;

/// @brief Method TableViewSetup, addr 0x3964348, size 0xe4, virtual true, abstract: false, final false
inline void TableViewSetup(::HMUI::ITableCellOwner*  tableCellOwner, int32_t  idx) ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__separator() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__separator() ;

constexpr void __cordl_internal_set__separator(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x396442c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TableCellWithSeparator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TableCellWithSeparator(TableCellWithSeparator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TableCellWithSeparator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TableCellWithSeparator(TableCellWithSeparator const& ) = delete;

/// @brief Field _separator, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ____separator;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TableCellWithSeparator, 0x70>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TableCellWithSeparator, ____separator) == 0x68, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TableCellWithSeparator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
