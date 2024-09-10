#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapEditorScenesTransitionSetupDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__SingleFixedSceneScenesTransitionSetupDataSO_def.hpp"
CORDL_MODULE_EXPORT(BeatmapEditorScenesTransitionSetupDataSO)
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapEditorScenesTransitionSetupDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
// Type: ::BeatmapEditorScenesTransitionSetupDataSO
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapEditorScenesTransitionSetupDataSO*
class CORDL_TYPE BeatmapEditorScenesTransitionSetupDataSO : public ::GlobalNamespace::SingleFixedSceneScenesTransitionSetupDataSO {
public:
// Declarations
/// @brief Field <goStraightToEditor>k__BackingField, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__goStraightToEditor_k__BackingField, put=__cordl_internal_set__goStraightToEditor_k__BackingField)) bool  _goStraightToEditor_k__BackingField;

/// @brief Field didFinishEvent, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_didFinishEvent, put=__cordl_internal_set_didFinishEvent)) ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*  didFinishEvent;

 __declspec(property(get=get_goStraightToEditor, put=set_goStraightToEditor)) bool  goStraightToEditor;

/// @brief Method Finish, addr 0x3aadf10, size 0x20, virtual false, abstract: false, final false
inline void Finish() ;

/// @brief Method Init, addr 0x3aade94, size 0x7c, virtual false, abstract: false, final false
inline void Init(bool  goStraightToEditor) ;

static inline ::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO* New_ctor() ;

constexpr bool const& __cordl_internal_get__goStraightToEditor_k__BackingField() const;

constexpr bool& __cordl_internal_get__goStraightToEditor_k__BackingField() ;

constexpr ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*& __cordl_internal_get_didFinishEvent() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*> const& __cordl_internal_get_didFinishEvent() const;

constexpr void __cordl_internal_set__goStraightToEditor_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*  value) ;

/// @brief Method .ctor, addr 0x3aadf30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_didFinishEvent, addr 0x3aadd20, size 0xb0, virtual false, abstract: false, final false
inline void add_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*  value) ;

/// @brief Method get_goStraightToEditor, addr 0x3aade80, size 0x8, virtual false, abstract: false, final false
inline bool get_goStraightToEditor() ;

/// @brief Method remove_didFinishEvent, addr 0x3aaddd0, size 0xb0, virtual false, abstract: false, final false
inline void remove_didFinishEvent(::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*  value) ;

/// @brief Method set_goStraightToEditor, addr 0x3aade88, size 0xc, virtual false, abstract: false, final false
inline void set_goStraightToEditor(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BeatmapEditorScenesTransitionSetupDataSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BeatmapEditorScenesTransitionSetupDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BeatmapEditorScenesTransitionSetupDataSO(BeatmapEditorScenesTransitionSetupDataSO const& ) = delete;

/// @brief Field didFinishEvent, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO>>*  ___didFinishEvent;

/// @brief Field <goStraightToEditor>k__BackingField, offset: 0x40, size: 0x1, def value: None
 bool  ____goStraightToEditor_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, 0x48>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, ___didFinishEvent) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO, ____goStraightToEditor_k__BackingField) == 0x40, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapEditorScenesTransitionSetupDataSO*, "", "BeatmapEditorScenesTransitionSetupDataSO");
