#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SongPacksDropdown)
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace GlobalNamespace {
class __SongPacksDropdown____c;
}
namespace HMUI {
class DropdownWithTableView;
}
namespace HMUI {
class SimpleTextDropdown;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class SongPacksDropdown;
}
namespace GlobalNamespace {
class __SongPacksDropdown____c;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SongPacksDropdown);
MARK_REF_PTR_T(::GlobalNamespace::__SongPacksDropdown____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPacksDropdown::<>c*
class CORDL_TYPE __SongPacksDropdown____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__SongPacksDropdown____c* __9;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::StringW, ::StringW>* __9__7_0;

  static inline ::GlobalNamespace::__SongPacksDropdown____c* New_ctor();

  /// @brief Method <LazyInit>b__7_0, addr 0x2537fb0, size 0xc, virtual false, abstract: false, final false
  inline ::StringW _LazyInit_b__7_0(::StringW serializedName);

  /// @brief Method .ctor, addr 0x2537fa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__SongPacksDropdown____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, ::StringW>* getStaticF___9__7_0();

  static inline void setStaticF___9(::GlobalNamespace::__SongPacksDropdown____c* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::StringW, ::StringW>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SongPacksDropdown____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SongPacksDropdown____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SongPacksDropdown____c(__SongPacksDropdown____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SongPacksDropdown____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SongPacksDropdown____c(__SongPacksDropdown____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SongPacksDropdown____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::SongPacksDropdown
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SongPacksDropdown*
class CORDL_TYPE SongPacksDropdown : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::GlobalNamespace::__SongPacksDropdown____c;

  /// @brief Field _initialized, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__initialized, put = __cordl_internal_set__initialized)) bool _initialized;

  /// @brief Field _simpleTextDropdown, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__simpleTextDropdown, put = __cordl_internal_set__simpleTextDropdown))::UnityW<::HMUI::SimpleTextDropdown> _simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel))::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _songPackSerializedNames, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackSerializedNames,
                      put = __cordl_internal_set__songPackSerializedNames))::System::Collections::Generic::List_1<::StringW>* _songPackSerializedNames;

  /// @brief Field didSelectCellWithIdxEvent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_didSelectCellWithIdxEvent, put = __cordl_internal_set_didSelectCellWithIdxEvent))::System::Action_1<int32_t>* didSelectCellWithIdxEvent;

  /// @brief Method GetIdxForSongPackMask, addr 0x2537e60, size 0xb8, virtual false, abstract: false, final false
  inline int32_t GetIdxForSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method GetSelectedSongPackMask, addr 0x2537d18, size 0x98, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SongPackMask GetSelectedSongPackMask();

  /// @brief Method HandleSimpleTextDropdownDidSelectCellWithIdx, addr 0x2537f18, size 0x24, virtual false, abstract: false, final false
  inline void HandleSimpleTextDropdownDidSelectCellWithIdx(::HMUI::DropdownWithTableView* dropdownWithTableView, int32_t idx);

  /// @brief Method LazyInit, addr 0x25379f8, size 0x1b0, virtual false, abstract: false, final false
  inline void LazyInit();

  static inline ::GlobalNamespace::SongPacksDropdown* New_ctor();

  /// @brief Method OnDestroy, addr 0x2537c3c, size 0xd4, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SelectCellWithSongPackMask, addr 0x2537db0, size 0xb0, virtual false, abstract: false, final false
  inline void SelectCellWithSongPackMask(::GlobalNamespace::SongPackMask songPackMask);

  /// @brief Method SetOverrideSongPacks, addr 0x2537d10, size 0x8, virtual false, abstract: false, final false
  inline void SetOverrideSongPacks(::System::Collections::Generic::List_1<::StringW>* songPackSerializedNames);

  /// @brief Method Start, addr 0x2537ba8, size 0x94, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__initialized() const;

  constexpr bool& __cordl_internal_get__initialized();

  constexpr ::UnityW<::HMUI::SimpleTextDropdown> const& __cordl_internal_get__simpleTextDropdown() const;

  constexpr ::UnityW<::HMUI::SimpleTextDropdown>& __cordl_internal_get__simpleTextDropdown();

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SongPackMasksModel*> const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__songPackSerializedNames();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> const& __cordl_internal_get__songPackSerializedNames() const;

  constexpr ::System::Action_1<int32_t>*& __cordl_internal_get_didSelectCellWithIdxEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<int32_t>*> const& __cordl_internal_get_didSelectCellWithIdxEvent() const;

  constexpr void __cordl_internal_set__initialized(bool value);

  constexpr void __cordl_internal_set__simpleTextDropdown(::UnityW<::HMUI::SimpleTextDropdown> value);

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set__songPackSerializedNames(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x2537f3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didSelectCellWithIdxEvent, addr 0x2537898, size 0xb0, virtual false, abstract: false, final false
  inline void add_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

  /// @brief Method remove_didSelectCellWithIdxEvent, addr 0x2537948, size 0xb0, virtual false, abstract: false, final false
  inline void remove_didSelectCellWithIdxEvent(::System::Action_1<int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPacksDropdown();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SongPacksDropdown(SongPacksDropdown&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SongPacksDropdown", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SongPacksDropdown(SongPacksDropdown const&) = delete;

  /// @brief Field _simpleTextDropdown, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::SimpleTextDropdown> ____simpleTextDropdown;

  /// @brief Field _songPackMasksModel, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field didSelectCellWithIdxEvent, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<int32_t>* ___didSelectCellWithIdxEvent;

  /// @brief Field _initialized, offset: 0x30, size: 0x1, def value: None
  bool ____initialized;

  /// @brief Field _songPackSerializedNames, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____songPackSerializedNames;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPacksDropdown, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____simpleTextDropdown) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____songPackMasksModel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ___didSelectCellWithIdxEvent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____initialized) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPacksDropdown, ____songPackSerializedNames) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SongPacksDropdown);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPacksDropdown*, "", "SongPacksDropdown");
NEED_NO_BOX(::GlobalNamespace::__SongPacksDropdown____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SongPacksDropdown____c*, "", "SongPacksDropdown/<>c");
