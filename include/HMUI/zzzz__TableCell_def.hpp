#pragma once
// IWYU pragma private; include "HMUI/TableCell.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SelectableCell_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TableCell)
namespace HMUI {
class ITableCellOwner;
}
// Forward declare root types
namespace HMUI {
class TableCell;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::TableCell);
// Type: HMUI::TableCell
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::TableCell*
class CORDL_TYPE TableCell : public ::HMUI::SelectableCell {
public:
// Declarations
/// @brief Field <idx>k__BackingField, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__idx_k__BackingField, put=__cordl_internal_set__idx_k__BackingField)) int32_t  _idx_k__BackingField;

/// @brief Field _reuseIdentifier, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__reuseIdentifier, put=__cordl_internal_set__reuseIdentifier)) ::StringW  _reuseIdentifier;

/// @brief Field _tableCellOwner, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__tableCellOwner, put=__cordl_internal_set__tableCellOwner)) ::HMUI::ITableCellOwner*  _tableCellOwner;

 __declspec(property(get=get_idx, put=set_idx)) int32_t  idx;

 __declspec(property(get=get_reuseIdentifier, put=set_reuseIdentifier)) ::StringW  reuseIdentifier;

 __declspec(property(get=get_tableCellOwner)) ::HMUI::ITableCellOwner*  tableCellOwner;

/// @brief Method InternalToggle, addr 0x397c318, size 0x260, virtual true, abstract: false, final false
inline void InternalToggle() ;

/// @brief Method MoveIdx, addr 0x397c308, size 0x10, virtual false, abstract: false, final false
inline void MoveIdx(int32_t  offset) ;

static inline ::HMUI::TableCell* New_ctor() ;

/// @brief Method TableViewSetup, addr 0x397c2fc, size 0xc, virtual true, abstract: false, final false
inline void TableViewSetup(::HMUI::ITableCellOwner*  tableCellOwner, int32_t  idx) ;

/// @brief Method WasPreparedForReuse, addr 0x397c588, size 0x4, virtual true, abstract: false, final false
inline void WasPreparedForReuse() ;

/// @brief Method __WasPreparedForReuse, addr 0x397c578, size 0x10, virtual false, abstract: false, final false
inline void __WasPreparedForReuse() ;

constexpr int32_t const& __cordl_internal_get__idx_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__idx_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__reuseIdentifier() const;

constexpr ::StringW& __cordl_internal_get__reuseIdentifier() ;

constexpr ::HMUI::ITableCellOwner*& __cordl_internal_get__tableCellOwner() ;

constexpr ::cordl_internals::to_const_pointer<::HMUI::ITableCellOwner*> const& __cordl_internal_get__tableCellOwner() const;

constexpr void __cordl_internal_set__idx_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__reuseIdentifier(::StringW  value) ;

constexpr void __cordl_internal_set__tableCellOwner(::HMUI::ITableCellOwner*  value) ;

/// @brief Method .ctor, addr 0x397c58c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_idx, addr 0x397c2e4, size 0x8, virtual false, abstract: false, final false
inline int32_t get_idx() ;

/// @brief Method get_reuseIdentifier, addr 0x397c2d4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_reuseIdentifier() ;

/// @brief Method get_tableCellOwner, addr 0x397c2f4, size 0x8, virtual false, abstract: false, final false
inline ::HMUI::ITableCellOwner* get_tableCellOwner() ;

/// @brief Method set_idx, addr 0x397c2ec, size 0x8, virtual false, abstract: false, final false
inline void set_idx(int32_t  value) ;

/// @brief Method set_reuseIdentifier, addr 0x397c2dc, size 0x8, virtual false, abstract: false, final false
inline void set_reuseIdentifier(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TableCell() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TableCell", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TableCell(TableCell && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TableCell", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TableCell(TableCell const& ) = delete;

/// @brief Field <idx>k__BackingField, offset: 0x54, size: 0x4, def value: None
 int32_t  ____idx_k__BackingField;

/// @brief Field _reuseIdentifier, offset: 0x58, size: 0x8, def value: None
 ::StringW  ____reuseIdentifier;

/// @brief Field _tableCellOwner, offset: 0x60, size: 0x8, def value: None
 ::HMUI::ITableCellOwner*  ____tableCellOwner;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::TableCell, 0x68>, "Size mismatch!");

static_assert(offsetof(::HMUI::TableCell, ____idx_k__BackingField) == 0x54, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableCell, ____reuseIdentifier) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::TableCell, ____tableCellOwner) == 0x60, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::TableCell);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::TableCell*, "HMUI", "TableCell");
