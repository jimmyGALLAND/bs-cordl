#pragma once
// IWYU pragma private; include "UnityEngine/AddressableAssets/AssetReferenceSprite.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/AddressableAssets/zzzz__AssetReferenceT_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssetReferenceSprite)
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace UnityEngine::AddressableAssets {
class AssetReferenceSprite;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::AddressableAssets::AssetReferenceSprite);
// Type: UnityEngine.AddressableAssets::AssetReferenceSprite
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::AddressableAssets {
// Is value type: false
// CS Name: ::UnityEngine.AddressableAssets::AssetReferenceSprite*
class CORDL_TYPE AssetReferenceSprite : public ::UnityEngine::AddressableAssets::AssetReferenceT_1<::UnityW<::UnityEngine::Sprite>> {
public:
// Declarations
static inline ::UnityEngine::AddressableAssets::AssetReferenceSprite* New_ctor(::StringW  guid) ;

/// @brief Method ValidateAsset, addr 0x446022c, size 0x8, virtual true, abstract: false, final false
inline bool ValidateAsset(::StringW  path) ;

/// @brief Method .ctor, addr 0x44601d4, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::StringW  guid) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssetReferenceSprite() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssetReferenceSprite(AssetReferenceSprite && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssetReferenceSprite", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssetReferenceSprite(AssetReferenceSprite const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AddressableAssets::AssetReferenceSprite, 0x40>, "Size mismatch!");

} // namespace end def UnityEngine::AddressableAssets
NEED_NO_BOX(::UnityEngine::AddressableAssets::AssetReferenceSprite);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AddressableAssets::AssetReferenceSprite*, "UnityEngine.AddressableAssets", "AssetReferenceSprite");
