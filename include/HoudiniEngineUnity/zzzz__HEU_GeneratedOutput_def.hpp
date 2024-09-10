#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeneratedOutput.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(HEU_GeneratedOutput)
namespace HoudiniEngineUnity {
class HEU_GeneratedOutputData;
}
namespace HoudiniEngineUnity {
template<typename T>
class IEquivable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_GeneratedOutput;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_GeneratedOutput);
// Type: HoudiniEngineUnity::HEU_GeneratedOutput
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_GeneratedOutput*
class CORDL_TYPE HEU_GeneratedOutput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_IsInstancer, put=set_IsInstancer)) bool  IsInstancer;

/// @brief Field _childOutputs, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__childOutputs, put=__cordl_internal_set__childOutputs)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*  _childOutputs;

/// @brief Field _outputData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputData, put=__cordl_internal_set__outputData)) ::HoudiniEngineUnity::HEU_GeneratedOutputData*  _outputData;

/// @brief Field isInstancer, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_isInstancer, put=__cordl_internal_set_isInstancer)) bool  isInstancer;

/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>"
constexpr operator  ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>*() noexcept;

/// @brief Method BakeGameObjectComponents, addr 0x398b540, size 0x128, virtual false, abstract: false, final false
static inline void BakeGameObjectComponents(::UnityEngine::GameObject*  sourceGO, ::UnityEngine::GameObject*  targetGO, ::StringW  assetName, ::StringW  outputPath, bool  bIsInstancer) ;

/// @brief Method ClearGeneratedMaterialReferences, addr 0x398ab9c, size 0x18, virtual false, abstract: false, final false
static inline void ClearGeneratedMaterialReferences(::HoudiniEngineUnity::HEU_GeneratedOutputData*  generatedOutputData) ;

/// @brief Method ClearMaterialsNoLongerUsed, addr 0x398b138, size 0x114, virtual false, abstract: false, final false
static inline void ClearMaterialsNoLongerUsed(::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  materialsToCheck, ::ArrayW<::UnityEngine::Material*,::Array<::UnityEngine::Material*>*>  materialsInUse) ;

/// @brief Method CopyMaterialOverrides, addr 0x398b24c, size 0x298, virtual false, abstract: false, final false
static inline void CopyMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData*  sourceOutputData, ::HoudiniEngineUnity::HEU_GeneratedOutputData*  destOutputData) ;

/// @brief Method DestroyAllGeneratedColliders, addr 0x398abb4, size 0x23c, virtual false, abstract: false, final false
static inline void DestroyAllGeneratedColliders(::HoudiniEngineUnity::HEU_GeneratedOutputData*  outputData) ;

/// @brief Method DestroyGeneratedOutput, addr 0x398adf0, size 0x184, virtual false, abstract: false, final false
static inline void DestroyGeneratedOutput(::HoudiniEngineUnity::HEU_GeneratedOutput*  generatedOutput) ;

/// @brief Method DestroyGeneratedOutputChildren, addr 0x398af74, size 0x178, virtual false, abstract: false, final false
static inline void DestroyGeneratedOutputChildren(::HoudiniEngineUnity::HEU_GeneratedOutput*  generatedOutput) ;

/// @brief Method DestroyGeneratedOutputData, addr 0x398b0ec, size 0x4c, virtual false, abstract: false, final false
static inline void DestroyGeneratedOutputData(::HoudiniEngineUnity::HEU_GeneratedOutputData*  generatedOutputData, bool  bDontDeletePersistantResources) ;

/// @brief Method GetGeneratedMaterialsForGameObject, addr 0x398a67c, size 0x1f4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::Material>,::Array<::UnityW<::UnityEngine::Material>>*> GetGeneratedMaterialsForGameObject(::HoudiniEngineUnity::HEU_GeneratedOutput*  output, ::UnityEngine::GameObject*  inGameObject) ;

/// @brief Method HasLODGroup, addr 0x398a57c, size 0x54, virtual false, abstract: false, final false
static inline bool HasLODGroup(::HoudiniEngineUnity::HEU_GeneratedOutput*  output) ;

/// @brief Method IsEquivalentTo, addr 0x398b668, size 0x1a8, virtual true, abstract: false, final true
inline bool IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutput*  other) ;

/// @brief Method IsOutputDataUsingMaterial, addr 0x398a9e0, size 0x1bc, virtual false, abstract: false, final false
static inline bool IsOutputDataUsingMaterial(::UnityEngine::Material*  checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutputData*  outputData) ;

/// @brief Method IsOutputUsingMaterial, addr 0x398a870, size 0x170, virtual false, abstract: false, final false
static inline bool IsOutputUsingMaterial(::UnityEngine::Material*  checkMaterial, ::HoudiniEngineUnity::HEU_GeneratedOutput*  output) ;

static inline ::HoudiniEngineUnity::HEU_GeneratedOutput* New_ctor() ;

/// @brief Method ResetMaterialOverrides, addr 0x398a420, size 0x15c, virtual false, abstract: false, final false
static inline void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutput*  output) ;

/// @brief Method ResetMaterialOverrides, addr 0x398a5d0, size 0xac, virtual false, abstract: false, final false
static inline void ResetMaterialOverrides(::HoudiniEngineUnity::HEU_GeneratedOutputData*  outputData) ;

/// @brief Method WriteOutputToAssetCache, addr 0x398b4e4, size 0x5c, virtual false, abstract: false, final false
inline void WriteOutputToAssetCache(::UnityEngine::GameObject*  parentObject, ::StringW  outputPath, bool  bIsInstancer) ;

constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*& __cordl_internal_get__childOutputs() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*> const& __cordl_internal_get__childOutputs() const;

constexpr ::HoudiniEngineUnity::HEU_GeneratedOutputData*& __cordl_internal_get__outputData() ;

constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_GeneratedOutputData*> const& __cordl_internal_get__outputData() const;

constexpr bool const& __cordl_internal_get_isInstancer() const;

constexpr bool& __cordl_internal_get_isInstancer() ;

constexpr void __cordl_internal_set__childOutputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*  value) ;

constexpr void __cordl_internal_set__outputData(::HoudiniEngineUnity::HEU_GeneratedOutputData*  value) ;

constexpr void __cordl_internal_set_isInstancer(bool  value) ;

/// @brief Method .ctor, addr 0x3981f78, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_IsInstancer, addr 0x398a40c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInstancer() ;

/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutput*>* i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_GeneratedOutput__() noexcept;

/// @brief Method set_IsInstancer, addr 0x398a414, size 0xc, virtual false, abstract: false, final false
inline void set_IsInstancer(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HEU_GeneratedOutput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
HEU_GeneratedOutput(HEU_GeneratedOutput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HEU_GeneratedOutput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
HEU_GeneratedOutput(HEU_GeneratedOutput const& ) = delete;

/// @brief Field _outputData, offset: 0x10, size: 0x8, def value: None
 ::HoudiniEngineUnity::HEU_GeneratedOutputData*  ____outputData;

/// @brief Field _childOutputs, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*  ____childOutputs;

/// @brief Field isInstancer, offset: 0x20, size: 0x1, def value: None
 bool  ___isInstancer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_GeneratedOutput, 0x28>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutput, ____outputData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutput, ____childOutputs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_GeneratedOutput, ___isInstancer) == 0x20, "Offset mismatch!");

} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_GeneratedOutput);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_GeneratedOutput*, "HoudiniEngineUnity", "HEU_GeneratedOutput");
