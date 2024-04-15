#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_MaterialFactory)
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
namespace HoudiniEngineUnity {
class HEU_MaterialData;
}
namespace HoudiniEngineUnity {
class HEU_SessionBase;
}
namespace HoudiniEngineUnity {
struct __HEU_MaterialData__Source;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MaterialFactory;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_MaterialFactory);
// Type: HoudiniEngineUnity::HEU_MaterialFactory
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_MaterialFactory*
class CORDL_TYPE HEU_MaterialFactory : public ::System::Object {
public:
  // Declarations
  /// @brief Field _defaultStandardMaterial, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__defaultStandardMaterial, put = setStaticF__defaultStandardMaterial))::UnityW<::UnityEngine::Material> _defaultStandardMaterial;

  /// @brief Method CopyMaterial, addr 0x248bbb0, size 0x64, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CopyMaterial(::UnityEngine::Material* material);

  /// @brief Method CreateHoudiniMaterialData, addr 0x248c5fc, size 0x1e4, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> CreateHoudiniMaterialData(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t assetID, int32_t materialID, int32_t geoID,
                                                                                           int32_t partID,
                                                                                           ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache,
                                                                                           ::StringW assetCacheFolderPath);

  /// @brief Method CreateMaterialInCache, addr 0x248c188, size 0x168, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> CreateMaterialInCache(int32_t materialKey, ::StringW materialName, ::HoudiniEngineUnity::__HEU_MaterialData__Source sourceType,
                                                                                       bool bWriteToFile,
                                                                                       ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache,
                                                                                       ::StringW assetCacheFolderPath);

  /// @brief Method CreateNewHoudiniStandardMaterial, addr 0x248abb4, size 0x38, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateNewHoudiniStandardMaterial(::StringW assetCacheFolderPath, ::StringW materialName, bool bWriteToFile);

  /// @brief Method CreateUnitySubstanceMaterialData, addr 0x248be20, size 0x368, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>
  CreateUnitySubstanceMaterialData(int32_t materialKey, ::StringW materialPath, ::StringW substanceName, int32_t substanceIndex,
                                   ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache, ::StringW assetCacheFolderPath);

  /// @brief Method DeleteAssetMaterial, addr 0x248ada4, size 0x8, virtual false, abstract: false, final false
  static inline void DeleteAssetMaterial(::UnityEngine::Material* material);

  /// @brief Method DestroyNonAssetMaterial, addr 0x248ad04, size 0xa0, virtual false, abstract: false, final false
  static inline void DestroyNonAssetMaterial(::UnityEngine::Material* material, bool bRegisterUndo);

  /// @brief Method DoesMaterialExistInAssetCache, addr 0x248ace0, size 0x24, virtual false, abstract: false, final false
  static inline bool DoesMaterialExistInAssetCache(::UnityEngine::Material* material);

  /// @brief Method EnableGPUInstancing, addr 0x248bb84, size 0x18, virtual false, abstract: false, final false
  static inline void EnableGPUInstancing(::UnityEngine::Material* material);

  /// @brief Method ExtractHoudiniImageToTextureFile, addr 0x248b1cc, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTextureFile(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                    ::StringW imagePlanes, ::StringW assetCacheFolderPath);

  /// @brief Method ExtractHoudiniImageToTexturePNGJPEG, addr 0x248b098, size 0x134, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTexturePNGJPEG(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                       ::StringW imagePlanes);

  /// @brief Method ExtractHoudiniImageToTextureRaw, addr 0x248adac, size 0x2ec, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> ExtractHoudiniImageToTextureRaw(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                   ::StringW imagePlanes);

  /// @brief Method FindPluginShader, addr 0x248978c, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindPluginShader(::StringW shaderName);

  /// @brief Method FindShader, addr 0x248a940, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Shader> FindShader(::StringW shaderName);

  /// @brief Method GenerateDefaultMaterialName, addr 0x248c3dc, size 0xbc, virtual false, abstract: false, final false
  static inline ::StringW GenerateDefaultMaterialName(int32_t geoID, int32_t partID);

  /// @brief Method GetDefaultStandardMaterial, addr 0x248bc14, size 0xcc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetDefaultStandardMaterial();

  /// @brief Method GetMaterialDataFromCache, addr 0x248c498, size 0x164, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData> GetMaterialDataFromCache(int32_t materialKey,
                                                                                          ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache);

  /// @brief Method GetMaterialDataMapFromCache, addr 0x248c9f8, size 0x248, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>*
  GetMaterialDataMapFromCache(::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache);

  /// @brief Method GetNewMaterialWithShader, addr 0x248a98c, size 0x228, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetNewMaterialWithShader(::StringW assetCacheFolderPath, ::StringW shaderName, ::StringW materialName, bool bWriteToFile);

  /// @brief Method GetOrCreateDefaultMaterialInCache, addr 0x248c2f0, size 0xec, virtual false, abstract: false, final false
  static inline ::UnityW<::HoudiniEngineUnity::HEU_MaterialData>
  GetOrCreateDefaultMaterialInCache(::HoudiniEngineUnity::HEU_SessionBase* session, int32_t geoID, int32_t partID, bool bWriteToFile,
                                    ::System::Collections::Generic::List_1<::UnityW<::HoudiniEngineUnity::HEU_MaterialData>>* materialCache, ::StringW assetCacheFolderPath);

  /// @brief Method GetUnitySubstanceMaterialKey, addr 0x248ba50, size 0x118, virtual false, abstract: false, final false
  static inline int32_t GetUnitySubstanceMaterialKey(::StringW unityMaterialPath, ::StringW substanceName, int32_t substanceIndex);

  /// @brief Method LoadSubstanceMaterialWithIndex, addr 0x248b7e0, size 0x270, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadSubstanceMaterialWithIndex(::StringW materialPath, int32_t substanceMaterialIndex);

  /// @brief Method LoadSubstanceMaterialWithName, addr 0x248b604, size 0x1dc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadSubstanceMaterialWithName(::StringW materialPath, ::StringW substanceName);

  /// @brief Method LoadTexture, addr 0x248bce0, size 0x138, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> LoadTexture(::StringW path);

  /// @brief Method LoadUnityMaterial, addr 0x248b36c, size 0x298, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> LoadUnityMaterial(::StringW materialPath);

  /// @brief Method MaterialHasGPUInstancingEnabled, addr 0x248bb9c, size 0x14, virtual false, abstract: false, final false
  static inline bool MaterialHasGPUInstancingEnabled(::UnityEngine::Material* material);

  /// @brief Method MaterialNameToKey, addr 0x248bb68, size 0x1c, virtual false, abstract: false, final false
  static inline int32_t MaterialNameToKey(::StringW materialName);

  /// @brief Method RenderAndExtractImageToTexture, addr 0x2489ffc, size 0x470, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> RenderAndExtractImageToTexture(::HoudiniEngineUnity::HEU_SessionBase* session, ::HoudiniEngineUnity::HAPI_MaterialInfo materialInfo,
                                                                                  int32_t textureParmID, ::StringW textureName, ::StringW assetCacheFolderPath, bool isNormalMap, bool invertTexture);

  /// @brief Method WhiteTexture, addr 0x248be18, size 0x8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> WhiteTexture();

  /// @brief Method WriteMaterialToAssetCache, addr 0x248abec, size 0xf4, virtual false, abstract: false, final false
  static inline void WriteMaterialToAssetCache(::UnityEngine::Material* material, ::StringW assetCacheFolderPath, ::StringW materialName, bool bOverwriteExisting);

  static inline ::UnityW<::UnityEngine::Material> getStaticF__defaultStandardMaterial();

  static inline void setStaticF__defaultStandardMaterial(::UnityW<::UnityEngine::Material> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_MaterialFactory();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_MaterialFactory(HEU_MaterialFactory&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_MaterialFactory", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_MaterialFactory(HEU_MaterialFactory const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_MaterialFactory, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MaterialFactory);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MaterialFactory*, "HoudiniEngineUnity", "HEU_MaterialFactory");
