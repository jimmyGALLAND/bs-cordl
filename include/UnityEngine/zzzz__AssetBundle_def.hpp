#pragma once
// IWYU pragma private; include "UnityEngine/AssetBundle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AssetBundle)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AssetBundleCreateRequest;
}
namespace UnityEngine {
class AssetBundleRequest;
}
namespace UnityEngine {
class AssetBundleUnloadOperation;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine {
class AssetBundle;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AssetBundle);
// Type: UnityEngine::AssetBundle
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: false
// CS Name: ::UnityEngine::AssetBundle*
class CORDL_TYPE AssetBundle : public ::UnityEngine::Object {
public:
// Declarations
/// @brief Method GetAllAssetNames, addr 0x47c60cc, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetAllAssetNames() ;

/// @brief Method GetAllLoadedAssetBundles, addr 0x47c57c4, size 0x28, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::UnityEngine::AssetBundle>>* GetAllLoadedAssetBundles() ;

/// @brief Method GetAllLoadedAssetBundles_Native, addr 0x47c579c, size 0x28, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityW<::UnityEngine::AssetBundle>,::Array<::UnityW<::UnityEngine::AssetBundle>>*> GetAllLoadedAssetBundles_Native() ;

/// @brief Method GetAllScenePaths, addr 0x47c6108, size 0x3c, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> GetAllScenePaths() ;

/// @brief Method LoadAllAssetsAsync, addr 0x47c5ec4, size 0x84, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync() ;

/// @brief Method LoadAllAssetsAsync, addr 0x47c5f48, size 0xfc, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAllAssetsAsync(::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0x47c5964, size 0x8c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name) ;

/// @brief Method LoadAsset, addr 0x47c59f0, size 0x148, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline T LoadAsset(::StringW  name) ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW  name) ;

/// @brief Method LoadAssetAsync, addr 0x47c5b8c, size 0x148, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAssetAsync_Internal, addr 0x47c5cd4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetAsync_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAssetWithSubAssetsAsync, addr 0x47c5d28, size 0x148, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAssetWithSubAssetsAsync_Internal, addr 0x47c5e70, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleRequest* LoadAssetWithSubAssetsAsync_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadAsset_Internal, addr 0x47c5b38, size 0x54, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Object> LoadAsset_Internal(::StringW  name, ::System::Type*  type) ;

/// @brief Method LoadFromFile, addr 0x47c5920, size 0x44, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile(::StringW  path) ;

/// @brief Method LoadFromFileAsync, addr 0x47c5840, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW  path) ;

/// @brief Method LoadFromFileAsync, addr 0x47c5884, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync(::StringW  path, uint32_t  crc) ;

/// @brief Method LoadFromFileAsync_Internal, addr 0x47c57ec, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::AssetBundleCreateRequest* LoadFromFileAsync_Internal(::StringW  path, uint32_t  crc, uint64_t  offset) ;

/// @brief Method LoadFromFile_Internal, addr 0x47c58cc, size 0x54, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::AssetBundle> LoadFromFile_Internal(::StringW  path, uint32_t  crc, uint64_t  offset) ;

static inline ::UnityEngine::AssetBundle* New_ctor() ;

/// @brief Method Unload, addr 0x47c6044, size 0x44, virtual false, abstract: false, final false
inline void Unload(bool  unloadAllLoadedObjects) ;

/// @brief Method UnloadAsync, addr 0x47c6088, size 0x44, virtual false, abstract: false, final false
inline ::UnityEngine::AssetBundleUnloadOperation* UnloadAsync(bool  unloadAllLoadedObjects) ;

/// @brief Method .ctor, addr 0x47c5744, size 0x58, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetBundle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetBundle(AssetBundle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetBundle", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetBundle(AssetBundle const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssetBundle, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::AssetBundle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssetBundle*, "UnityEngine", "AssetBundle");
