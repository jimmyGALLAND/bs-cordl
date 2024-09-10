#pragma once
// IWYU pragma private; include "HMUI/IconSegmentedControl.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SegmentedControl_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IconSegmentedControl)
namespace HMUI {
class IconSegmentedControlCell;
}
namespace HMUI {
class SegmentedControlCell;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
namespace HMUI {
class __SegmentedControl__IDataSource;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace HMUI {
class IconSegmentedControl;
}
namespace HMUI {
class __IconSegmentedControl__DataItem;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::IconSegmentedControl);
MARK_REF_PTR_T(::HMUI::__IconSegmentedControl__DataItem);
// Type: ::DataItem
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::IconSegmentedControl::DataItem*
class CORDL_TYPE __IconSegmentedControl__DataItem : public ::System::Object {
public:
// Declarations
/// @brief Field <hintText>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__hintText_k__BackingField, put=__cordl_internal_set__hintText_k__BackingField)) ::StringW  _hintText_k__BackingField;

/// @brief Field <icon>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__icon_k__BackingField, put=__cordl_internal_set__icon_k__BackingField)) ::UnityW<::UnityEngine::Sprite>  _icon_k__BackingField;

/// @brief Field <interactable>k__BackingField, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__interactable_k__BackingField, put=__cordl_internal_set__interactable_k__BackingField)) bool  _interactable_k__BackingField;

 __declspec(property(get=get_hintText, put=set_hintText)) ::StringW  hintText;

 __declspec(property(get=get_icon, put=set_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

 __declspec(property(get=get_interactable, put=set_interactable)) bool  interactable;

static inline ::HMUI::__IconSegmentedControl__DataItem* New_ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText, bool  interactable) ;

constexpr ::StringW const& __cordl_internal_get__hintText_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__hintText_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__icon_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__icon_k__BackingField() ;

constexpr bool const& __cordl_internal_get__interactable_k__BackingField() const;

constexpr bool& __cordl_internal_get__interactable_k__BackingField() ;

constexpr void __cordl_internal_set__hintText_k__BackingField(::StringW  value) ;

constexpr void __cordl_internal_set__icon_k__BackingField(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__interactable_k__BackingField(bool  value) ;

/// @brief Method .ctor, addr 0x3ff8470, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Sprite*  icon, ::StringW  hintText, bool  interactable) ;

/// @brief Method get_hintText, addr 0x3ff844c, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_hintText() ;

/// @brief Method get_icon, addr 0x3ff843c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_icon() ;

/// @brief Method get_interactable, addr 0x3ff845c, size 0x8, virtual false, abstract: false, final false
inline bool get_interactable() ;

/// @brief Method set_hintText, addr 0x3ff8454, size 0x8, virtual false, abstract: false, final false
inline void set_hintText(::StringW  value) ;

/// @brief Method set_icon, addr 0x3ff8444, size 0x8, virtual false, abstract: false, final false
inline void set_icon(::UnityEngine::Sprite*  value) ;

/// @brief Method set_interactable, addr 0x3ff8464, size 0xc, virtual false, abstract: false, final false
inline void set_interactable(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __IconSegmentedControl__DataItem() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__IconSegmentedControl__DataItem", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__IconSegmentedControl__DataItem(__IconSegmentedControl__DataItem const& ) = delete;

/// @brief Field <icon>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____icon_k__BackingField;

/// @brief Field <hintText>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____hintText_k__BackingField;

/// @brief Field <interactable>k__BackingField, offset: 0x20, size: 0x1, def value: None
 bool  ____interactable_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__IconSegmentedControl__DataItem, 0x28>, "Size mismatch!");

static_assert(offsetof(::HMUI::__IconSegmentedControl__DataItem, ____icon_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HMUI::__IconSegmentedControl__DataItem, ____hintText_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::__IconSegmentedControl__DataItem, ____interactable_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace end def HMUI
// Type: HMUI::IconSegmentedControl
// SizeInfo { instance_size: 192, native_size: -1, calculated_instance_size: 192, calculated_native_size: 185, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::IconSegmentedControl*
class CORDL_TYPE IconSegmentedControl : public ::HMUI::SegmentedControl {
public:
// Declarations
using DataItem = ::HMUI::__IconSegmentedControl__DataItem;

/// @brief Field _dataItems, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__dataItems, put=__cordl_internal_set__dataItems)) ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  _dataItems;

/// @brief Field _firstCellPrefab, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstCellPrefab, put=__cordl_internal_set__firstCellPrefab)) ::UnityW<::HMUI::IconSegmentedControlCell>  _firstCellPrefab;

/// @brief Field _hideCellBackground, offset 0x8c, size 0x1 
 __declspec(property(get=__cordl_internal_get__hideCellBackground, put=__cordl_internal_set__hideCellBackground)) bool  _hideCellBackground;

/// @brief Field _iconSize, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__iconSize, put=__cordl_internal_set__iconSize)) float_t  _iconSize;

/// @brief Field _isInitialized, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isInitialized, put=__cordl_internal_set__isInitialized)) bool  _isInitialized;

/// @brief Field _lastCellPrefab, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastCellPrefab, put=__cordl_internal_set__lastCellPrefab)) ::UnityW<::HMUI::IconSegmentedControlCell>  _lastCellPrefab;

/// @brief Field _middleCellPrefab, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__middleCellPrefab, put=__cordl_internal_set__middleCellPrefab)) ::UnityW<::HMUI::IconSegmentedControlCell>  _middleCellPrefab;

/// @brief Field _overrideCellSize, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__overrideCellSize, put=__cordl_internal_set__overrideCellSize)) bool  _overrideCellSize;

/// @brief Field _padding, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get__padding, put=__cordl_internal_set__padding)) float_t  _padding;

/// @brief Field _singleCellPrefab, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__singleCellPrefab, put=__cordl_internal_set__singleCellPrefab)) ::UnityW<::HMUI::IconSegmentedControlCell>  _singleCellPrefab;

/// @brief Convert operator to "::HMUI::__SegmentedControl__IDataSource"
constexpr operator  ::HMUI::__SegmentedControl__IDataSource*() noexcept;

/// @brief Method CellForCellNumber, addr 0x3ff8154, size 0x1c8, virtual true, abstract: false, final true
inline ::UnityW<::HMUI::SegmentedControlCell> CellForCellNumber(int32_t  cellNumber) ;

/// @brief Method Init, addr 0x3ff80e0, size 0x1c, virtual false, abstract: false, final false
inline void Init() ;

static inline ::HMUI::IconSegmentedControl* New_ctor() ;

/// @brief Method NumberOfCells, addr 0x3ff813c, size 0x18, virtual true, abstract: false, final true
inline int32_t NumberOfCells() ;

/// @brief Method SetData, addr 0x3ff80fc, size 0x40, virtual false, abstract: false, final false
inline void SetData(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  dataItems) ;

constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*> const& __cordl_internal_get__dataItems() const;

constexpr ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>& __cordl_internal_get__dataItems() ;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell> const& __cordl_internal_get__firstCellPrefab() const;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell>& __cordl_internal_get__firstCellPrefab() ;

constexpr bool const& __cordl_internal_get__hideCellBackground() const;

constexpr bool& __cordl_internal_get__hideCellBackground() ;

constexpr float_t const& __cordl_internal_get__iconSize() const;

constexpr float_t& __cordl_internal_get__iconSize() ;

constexpr bool const& __cordl_internal_get__isInitialized() const;

constexpr bool& __cordl_internal_get__isInitialized() ;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell> const& __cordl_internal_get__lastCellPrefab() const;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell>& __cordl_internal_get__lastCellPrefab() ;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell> const& __cordl_internal_get__middleCellPrefab() const;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell>& __cordl_internal_get__middleCellPrefab() ;

constexpr bool const& __cordl_internal_get__overrideCellSize() const;

constexpr bool& __cordl_internal_get__overrideCellSize() ;

constexpr float_t const& __cordl_internal_get__padding() const;

constexpr float_t& __cordl_internal_get__padding() ;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell> const& __cordl_internal_get__singleCellPrefab() const;

constexpr ::UnityW<::HMUI::IconSegmentedControlCell>& __cordl_internal_get__singleCellPrefab() ;

constexpr void __cordl_internal_set__dataItems(::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  value) ;

constexpr void __cordl_internal_set__firstCellPrefab(::UnityW<::HMUI::IconSegmentedControlCell>  value) ;

constexpr void __cordl_internal_set__hideCellBackground(bool  value) ;

constexpr void __cordl_internal_set__iconSize(float_t  value) ;

constexpr void __cordl_internal_set__isInitialized(bool  value) ;

constexpr void __cordl_internal_set__lastCellPrefab(::UnityW<::HMUI::IconSegmentedControlCell>  value) ;

constexpr void __cordl_internal_set__middleCellPrefab(::UnityW<::HMUI::IconSegmentedControlCell>  value) ;

constexpr void __cordl_internal_set__overrideCellSize(bool  value) ;

constexpr void __cordl_internal_set__padding(float_t  value) ;

constexpr void __cordl_internal_set__singleCellPrefab(::UnityW<::HMUI::IconSegmentedControlCell>  value) ;

/// @brief Method .ctor, addr 0x3ff842c, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::HMUI::__SegmentedControl__IDataSource"
constexpr ::HMUI::__SegmentedControl__IDataSource* i___HMUI____SegmentedControl__IDataSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr IconSegmentedControl() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IconSegmentedControl(IconSegmentedControl && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IconSegmentedControl", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IconSegmentedControl(IconSegmentedControl const& ) = delete;

/// @brief Field _iconSize, offset: 0x80, size: 0x4, def value: None
 float_t  ____iconSize;

/// @brief Field _overrideCellSize, offset: 0x84, size: 0x1, def value: None
 bool  ____overrideCellSize;

/// @brief Field _padding, offset: 0x88, size: 0x4, def value: None
 float_t  ____padding;

/// @brief Field _hideCellBackground, offset: 0x8c, size: 0x1, def value: None
 bool  ____hideCellBackground;

/// @brief Field _firstCellPrefab, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::HMUI::IconSegmentedControlCell>  ____firstCellPrefab;

/// @brief Field _lastCellPrefab, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::HMUI::IconSegmentedControlCell>  ____lastCellPrefab;

/// @brief Field _middleCellPrefab, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::HMUI::IconSegmentedControlCell>  ____middleCellPrefab;

/// @brief Field _singleCellPrefab, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::HMUI::IconSegmentedControlCell>  ____singleCellPrefab;

/// @brief Field _dataItems, offset: 0xb0, size: 0x8, def value: None
 ::ArrayW<::HMUI::__IconSegmentedControl__DataItem*,::Array<::HMUI::__IconSegmentedControl__DataItem*>*>  ____dataItems;

/// @brief Field _isInitialized, offset: 0xb8, size: 0x1, def value: None
 bool  ____isInitialized;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::IconSegmentedControl, 0xc0>, "Size mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____iconSize) == 0x80, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____overrideCellSize) == 0x84, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____padding) == 0x88, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____hideCellBackground) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____firstCellPrefab) == 0x90, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____lastCellPrefab) == 0x98, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____middleCellPrefab) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____singleCellPrefab) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____dataItems) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::HMUI::IconSegmentedControl, ____isInitialized) == 0xb8, "Offset mismatch!");

} // namespace end def HMUI
NEED_NO_BOX(::HMUI::IconSegmentedControl);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::IconSegmentedControl*, "HMUI", "IconSegmentedControl");
NEED_NO_BOX(::HMUI::__IconSegmentedControl__DataItem);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__IconSegmentedControl__DataItem*, "HMUI", "IconSegmentedControl/DataItem");
