#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDifficultyDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapDifficultyDropdown)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class __BeatmapDifficultyDropdown____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2>
class Tuple_2;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapDifficultyDropdown;
}
namespace GlobalNamespace {
class __BeatmapDifficultyDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapDifficultyDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__BeatmapDifficultyDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDifficultyDropdown::<>c*
class CORDL_TYPE __BeatmapDifficultyDropdown____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::__BeatmapDifficultyDropdown____c*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*,::StringW>*  __9__11_0;

static inline ::GlobalNamespace::__BeatmapDifficultyDropdown____c* New_ctor() ;

/// @brief Method <Start>b__11_0, addr 0x3ac7fe4, size 0x44, virtual false, abstract: false, final false
inline ::StringW _Start_b__11_0(::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*  x) ;

/// @brief Method .ctor, addr 0x3ac7fdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::__BeatmapDifficultyDropdown____c* getStaticF___9() ;

static inline ::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*,::StringW>* getStaticF___9__11_0() ;

static inline void setStaticF___9(::GlobalNamespace::__BeatmapDifficultyDropdown____c*  value) ;

static inline void setStaticF___9__11_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __BeatmapDifficultyDropdown____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDifficultyDropdown____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__BeatmapDifficultyDropdown____c(__BeatmapDifficultyDropdown____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__BeatmapDifficultyDropdown____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__BeatmapDifficultyDropdown____c(__BeatmapDifficultyDropdown____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__BeatmapDifficultyDropdown____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::BeatmapDifficultyDropdown
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 57, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapDifficultyDropdown*
class CORDL_TYPE BeatmapDifficultyDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__BeatmapDifficultyDropdown____c;

/// @brief Field _beatmapDifficultyData, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__beatmapDifficultyData, put=__cordl_internal_set__beatmapDifficultyData)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*  _beatmapDifficultyData;

/// @brief Field <includeAllDifficulties>k__BackingField, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__includeAllDifficulties_k__BackingField, put=__cordl_internal_set__includeAllDifficulties_k__BackingField)) bool  _includeAllDifficulties_k__BackingField;

/// @brief Field _simpleTextDropdown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleTextDropdown, put=__cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown>  _simpleTextDropdown;

 __declspec(property(get=get_beatmapDifficultyData)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*  beatmapDifficultyData;

/// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_didSelectCellWithIdxEvent, put=__cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_1<int32_t>*  didSelectCellWithIdxEvent;

 __declspec(property(get=get_includeAllDifficulties, put=set_includeAllDifficulties)) bool  includeAllDifficulties;

/// @brief Method GetIdxForBeatmapDifficultyMask, addr 0x3ac7eb0, size 0xa4, virtual false, abstract: false, final false
inline int32_t GetIdxForBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask  beatmapDifficultyMask) ;

/// @brief Method GetSelectedBeatmapDifficultyMask, addr 0x3ac7db0, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::BeatmapDifficultyMask GetSelectedBeatmapDifficultyMask() ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x3ac7f54, size 0x24, virtual false, abstract: false, final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::BeatmapDifficultyDropdown* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3ac7ce0, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SelectCellWithBeatmapDifficultyMask, addr 0x3ac7e80, size 0x30, virtual false, abstract: false, final false
inline void SelectCellWithBeatmapDifficultyMask(::GlobalNamespace::BeatmapDifficultyMask  beatmapDifficultyMask) ;

/// @brief Method Start, addr 0x3ac7b40, size 0x1a0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*& __cordl_internal_get__beatmapDifficultyData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*> const& __cordl_internal_get__beatmapDifficultyData() const;

constexpr bool const& __cordl_internal_get__includeAllDifficulties_k__BackingField() const;

constexpr bool& __cordl_internal_get__includeAllDifficulties_k__BackingField() ;

constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown() ;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

constexpr void __cordl_internal_set__beatmapDifficultyData(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*  value) ;

constexpr void __cordl_internal_set__includeAllDifficulties_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown>  value) ;

constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x3ac7f78, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didSelectCellWithIdxEvent, addr 0x3ac77f4, size 0xb0, virtual false, abstract: false, final false
inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method get_beatmapDifficultyData, addr 0x3ac7954, size 0x1d8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>* get_beatmapDifficultyData() ;

/// @brief Method get_includeAllDifficulties, addr 0x3ac7b2c, size 0x8, virtual false, abstract: false, final false
inline bool get_includeAllDifficulties() ;

/// @brief Method remove_didSelectCellWithIdxEvent, addr 0x3ac78a4, size 0xb0, virtual false, abstract: false, final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method set_includeAllDifficulties, addr 0x3ac7b34, size 0xc, virtual false, abstract: false, final false
inline void set_includeAllDifficulties(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapDifficultyDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapDifficultyDropdown(BeatmapDifficultyDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapDifficultyDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapDifficultyDropdown(BeatmapDifficultyDropdown const& ) = delete;

/// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HMUI::SimpleTextDropdown>  ____simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___didSelectCellWithIdxEvent;

/// @brief Field _beatmapDifficultyData, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::BeatmapDifficultyMask,::StringW>*>*  ____beatmapDifficultyData;

/// @brief Field <includeAllDifficulties>k__BackingField, offset: 0x38, size: 0x1, def value: None
 bool  ____includeAllDifficulties_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapDifficultyDropdown, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultyDropdown, ____simpleTextDropdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultyDropdown, ___didSelectCellWithIdxEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultyDropdown, ____beatmapDifficultyData) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapDifficultyDropdown, ____includeAllDifficulties_k__BackingField) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapDifficultyDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapDifficultyDropdown*, "", "BeatmapDifficultyDropdown");
NEED_NO_BOX(::GlobalNamespace::__BeatmapDifficultyDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__BeatmapDifficultyDropdown____c*, "", "BeatmapDifficultyDropdown/<>c");
