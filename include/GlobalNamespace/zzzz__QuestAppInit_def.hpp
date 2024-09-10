#pragma once
// IWYU pragma private; include "GlobalNamespace/QuestAppInit.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BeatSaber/Init/zzzz__BSAppInit_def.hpp"
CORDL_MODULE_EXPORT(QuestAppInit)
namespace GlobalNamespace {
class DefaultScenesTransitionsFromInit;
}
namespace GlobalNamespace {
class MainSystemInit;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
class QuestAppInit;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::QuestAppInit);
// Type: ::QuestAppInit
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::QuestAppInit*
class CORDL_TYPE QuestAppInit : public ::BeatSaber::Init::BSAppInit {
public:
// Declarations
/// @brief Field _defaultScenesTransitionsFromInit, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultScenesTransitionsFromInit, put=__cordl_internal_set__defaultScenesTransitionsFromInit)) ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>  _defaultScenesTransitionsFromInit;

/// @brief Field _mainSystemInit, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__mainSystemInit, put=__cordl_internal_set__mainSystemInit)) ::UnityW<::GlobalNamespace::MainSystemInit>  _mainSystemInit;

/// @brief Field _settingsApplicator, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsApplicator, put=__cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO>  _settingsApplicator;

/// @brief Method AppStartAndMultiSceneEditorSetup, addr 0x26ced54, size 0x4, virtual true, abstract: false, final false
inline void AppStartAndMultiSceneEditorSetup() ;

/// @brief Method InstallBindings, addr 0x26cee90, size 0x2a0, virtual true, abstract: false, final false
inline void InstallBindings() ;

static inline ::GlobalNamespace::QuestAppInit* New_ctor() ;

/// @brief Method RepeatableSetupAsync, addr 0x26ced58, size 0xa0, virtual true, abstract: false, final false
inline ::System::Threading::Tasks::Task* RepeatableSetupAsync() ;

/// @brief Method TransitionToNextScene, addr 0x26cedf8, size 0x98, virtual true, abstract: false, final false
inline void TransitionToNextScene() ;

constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit> const& __cordl_internal_get__defaultScenesTransitionsFromInit() const;

constexpr ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>& __cordl_internal_get__defaultScenesTransitionsFromInit() ;

constexpr ::UnityW<::GlobalNamespace::MainSystemInit> const& __cordl_internal_get__mainSystemInit() const;

constexpr ::UnityW<::GlobalNamespace::MainSystemInit>& __cordl_internal_get__mainSystemInit() ;

constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator() ;

constexpr void __cordl_internal_set__defaultScenesTransitionsFromInit(::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>  value) ;

constexpr void __cordl_internal_set__mainSystemInit(::UnityW<::GlobalNamespace::MainSystemInit>  value) ;

constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO>  value) ;

/// @brief Method .ctor, addr 0x26cf130, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QuestAppInit() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QuestAppInit(QuestAppInit && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QuestAppInit", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QuestAppInit(QuestAppInit const& ) = delete;

/// @brief Field _mainSystemInit, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::MainSystemInit>  ____mainSystemInit;

/// @brief Field _settingsApplicator, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SettingsApplicatorSO>  ____settingsApplicator;

/// @brief Field _defaultScenesTransitionsFromInit, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::DefaultScenesTransitionsFromInit>  ____defaultScenesTransitionsFromInit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::QuestAppInit, 0x80>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____mainSystemInit) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____settingsApplicator) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::QuestAppInit, ____defaultScenesTransitionsFromInit) == 0x78, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::QuestAppInit);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::QuestAppInit*, "", "QuestAppInit");
