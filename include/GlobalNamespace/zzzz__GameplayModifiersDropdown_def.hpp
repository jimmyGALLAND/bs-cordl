#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifiersDropdown.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifiersDropdown)
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class GameplayModifiersModelSO;
}
namespace GlobalNamespace {
class __GameplayModifiersDropdown____c;
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
class GameplayModifiersDropdown;
}
namespace GlobalNamespace {
class __GameplayModifiersDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifiersDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__GameplayModifiersDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayModifiersDropdown::<>c*
class CORDL_TYPE __GameplayModifiersDropdown____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::__GameplayModifiersDropdown____c*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*,::StringW>*  __9__8_0;

static inline ::GlobalNamespace::__GameplayModifiersDropdown____c* New_ctor() ;

/// @brief Method <Start>b__8_0, addr 0x3ac8a1c, size 0x44, virtual false, abstract: false, final false
inline ::StringW _Start_b__8_0(::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*  x) ;

/// @brief Method .ctor, addr 0x3ac8a14, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::__GameplayModifiersDropdown____c* getStaticF___9() ;

static inline ::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*,::StringW>* getStaticF___9__8_0() ;

static inline void setStaticF___9(::GlobalNamespace::__GameplayModifiersDropdown____c*  value) ;

static inline void setStaticF___9__8_0(::System::Func_2<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*,::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __GameplayModifiersDropdown____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersDropdown____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__GameplayModifiersDropdown____c(__GameplayModifiersDropdown____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__GameplayModifiersDropdown____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__GameplayModifiersDropdown____c(__GameplayModifiersDropdown____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__GameplayModifiersDropdown____c, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::GameplayModifiersDropdown
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameplayModifiersDropdown*
class CORDL_TYPE GameplayModifiersDropdown : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::GlobalNamespace::__GameplayModifiersDropdown____c;

/// @brief Field _gameplayModifiersData, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameplayModifiersData, put=__cordl_internal_set__gameplayModifiersData)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*  _gameplayModifiersData;

/// @brief Field _gameplayModifiersModel, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameplayModifiersModel, put=__cordl_internal_set__gameplayModifiersModel)) ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>  _gameplayModifiersModel;

/// @brief Field _simpleTextDropdown, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__simpleTextDropdown, put=__cordl_internal_set__simpleTextDropdown)) ::UnityW<::HMUI::SimpleTextDropdown>  _simpleTextDropdown;

/// @brief Field didSelectCellWithIdxEvent, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_didSelectCellWithIdxEvent, put=__cordl_internal_set_didSelectCellWithIdxEvent)) ::System::Action_1<int32_t>*  didSelectCellWithIdxEvent;

 __declspec(property(get=get_gameplayModifiersData)) ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*  gameplayModifiersData;

/// @brief Method GetIdxForGameplayModifierMask, addr 0x3ac86ac, size 0x184, virtual false, abstract: false, final false
inline int32_t GetIdxForGameplayModifierMask(::GlobalNamespace::GameplayModifierMask  gameplayModifierMask) ;

/// @brief Method GetSelectedGameplayModifierMask, addr 0x3ac85ac, size 0xd0, virtual false, abstract: false, final false
inline ::GlobalNamespace::GameplayModifierMask GetSelectedGameplayModifierMask() ;

/// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x3ac8830, size 0x24, virtual false, abstract: false, final false
inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView*  dropdownWithTableView, int32_t  idx) ;

static inline ::GlobalNamespace::GameplayModifiersDropdown* New_ctor() ;

/// @brief Method OnDestroy, addr 0x3ac84dc, size 0xd0, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method SelectCellWithGameplayModifierMask, addr 0x3ac867c, size 0x30, virtual false, abstract: false, final false
inline void SelectCellWithGameplayModifierMask(::GlobalNamespace::GameplayModifierMask  gameplayModifierMask) ;

/// @brief Method Start, addr 0x3ac833c, size 0x1a0, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*& __cordl_internal_get__gameplayModifiersData() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*> const& __cordl_internal_get__gameplayModifiersData() const;

constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO> const& __cordl_internal_get__gameplayModifiersModel() const;

constexpr ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>& __cordl_internal_get__gameplayModifiersModel() ;

constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown() ;

constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

constexpr void __cordl_internal_set__gameplayModifiersData(::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*  value) ;

constexpr void __cordl_internal_set__gameplayModifiersModel(::UnityW<::GlobalNamespace::GameplayModifiersModelSO>  value) ;

constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown>  value) ;

constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method .ctor, addr 0x3ac8854, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method <get_gameplayModifiersData>b__7_0, addr 0x3ac885c, size 0x15c, virtual false, abstract: false, final false
inline ::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>* _get_gameplayModifiersData_b__7_0(::GlobalNamespace::GameplayModifierMask  value) ;

/// @brief Method add_didSelectCellWithIdxEvent, addr 0x3ac8028, size 0xb0, virtual false, abstract: false, final false
inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

/// @brief Method get_gameplayModifiersData, addr 0x3ac8188, size 0x1b4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>* get_gameplayModifiersData() ;

/// @brief Method remove_didSelectCellWithIdxEvent, addr 0x3ac80d8, size 0xb0, virtual false, abstract: false, final false
inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GameplayModifiersDropdown() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
GameplayModifiersDropdown(GameplayModifiersDropdown && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GameplayModifiersDropdown", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
GameplayModifiersDropdown(GameplayModifiersDropdown const& ) = delete;

/// @brief Field _simpleTextDropdown, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::HMUI::SimpleTextDropdown>  ____simpleTextDropdown;

/// @brief Field _gameplayModifiersModel, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GameplayModifiersModelSO>  ____gameplayModifiersModel;

/// @brief Field didSelectCellWithIdxEvent, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<int32_t>*  ___didSelectCellWithIdxEvent;

/// @brief Field _gameplayModifiersData, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IReadOnlyList_1<::System::Tuple_2<::GlobalNamespace::GameplayModifierMask,::StringW>*>*  ____gameplayModifiersData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifiersDropdown, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersDropdown, ____simpleTextDropdown) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersDropdown, ____gameplayModifiersModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersDropdown, ___didSelectCellWithIdxEvent) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameplayModifiersDropdown, ____gameplayModifiersData) == 0x38, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifiersDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifiersDropdown*, "", "GameplayModifiersDropdown");
NEED_NO_BOX(::GlobalNamespace::__GameplayModifiersDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__GameplayModifiersDropdown____c*, "", "GameplayModifiersDropdown/<>c");
