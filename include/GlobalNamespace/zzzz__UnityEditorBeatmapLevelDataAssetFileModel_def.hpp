#pragma once
// IWYU pragma private; include "GlobalNamespace/UnityEditorBeatmapLevelDataAssetFileModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(UnityEditorBeatmapLevelDataAssetFileModel)
namespace GlobalNamespace {
class BeatmapLevelDataSO;
}
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityEditorBeatmapLevelDataAssetFileModel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel);
// Type: ::UnityEditorBeatmapLevelDataAssetFileModel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::UnityEditorBeatmapLevelDataAssetFileModel*
class CORDL_TYPE UnityEditorBeatmapLevelDataAssetFileModel : public ::System::Object {
public:
// Declarations
/// @brief Method LoadAllAssetsFromAssetDatabase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::ArrayW<T,::Array<T>*> LoadAllAssetsFromAssetDatabase() ;

/// @brief Method LoadBeatmapLevelDataFromAssetDatabase, addr 0x26b33ec, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BeatmapLevelDataSO> LoadBeatmapLevelDataFromAssetDatabase(::StringW  levelId) ;

/// @brief Method LoadBeatmapLevelFromAssetDatabase, addr 0x26b3460, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> LoadBeatmapLevelFromAssetDatabase(::StringW  levelId) ;

/// @brief Method LoadBeatmapLevelPackFromAssetDatabase, addr 0x26b34d4, size 0x74, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> LoadBeatmapLevelPackFromAssetDatabase(::StringW  packId) ;

/// @brief Method LoadUniqueAssetFromAssetDatabase, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T LoadUniqueAssetFromAssetDatabase(::StringW  filename) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnityEditorBeatmapLevelDataAssetFileModel() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnityEditorBeatmapLevelDataAssetFileModel", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityEditorBeatmapLevelDataAssetFileModel(UnityEditorBeatmapLevelDataAssetFileModel && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityEditorBeatmapLevelDataAssetFileModel", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityEditorBeatmapLevelDataAssetFileModel(UnityEditorBeatmapLevelDataAssetFileModel const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityEditorBeatmapLevelDataAssetFileModel*, "", "UnityEditorBeatmapLevelDataAssetFileModel");
