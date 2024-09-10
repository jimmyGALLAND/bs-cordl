#pragma once
// IWYU pragma private; include "GlobalNamespace/LightmapDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(LightmapDataSO)
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace GlobalNamespace {
class LightmapDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightmapDataSO);
// Type: ::LightmapDataSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::LightmapDataSO*
class CORDL_TYPE LightmapDataSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Field _lightmap1, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightmap1, put=__cordl_internal_set__lightmap1)) ::UnityW<::UnityEngine::Texture2D>  _lightmap1;

/// @brief Field _lightmap2, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lightmap2, put=__cordl_internal_set__lightmap2)) ::UnityW<::UnityEngine::Texture2D>  _lightmap2;

 __declspec(property(get=get_lightmap1, put=set_lightmap1)) ::UnityW<::UnityEngine::Texture2D>  lightmap1;

 __declspec(property(get=get_lightmap2, put=set_lightmap2)) ::UnityW<::UnityEngine::Texture2D>  lightmap2;

static inline ::GlobalNamespace::LightmapDataSO* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lightmap1() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lightmap1() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get__lightmap2() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get__lightmap2() ;

constexpr void __cordl_internal_set__lightmap1(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set__lightmap2(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x3a8bb30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_lightmap1, addr 0x3a8bb10, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_lightmap1() ;

/// @brief Method get_lightmap2, addr 0x3a8bb20, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2D> get_lightmap2() ;

/// @brief Method set_lightmap1, addr 0x3a8bb18, size 0x8, virtual false, abstract: false, final false
inline void set_lightmap1(::UnityEngine::Texture2D*  value) ;

/// @brief Method set_lightmap2, addr 0x3a8bb28, size 0x8, virtual false, abstract: false, final false
inline void set_lightmap2(::UnityEngine::Texture2D*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightmapDataSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightmapDataSO(LightmapDataSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightmapDataSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightmapDataSO(LightmapDataSO const& ) = delete;

/// @brief Field _lightmap1, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____lightmap1;

/// @brief Field _lightmap2, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ____lightmap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightmapDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapDataSO, ____lightmap1) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LightmapDataSO, ____lightmap2) == 0x20, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightmapDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightmapDataSO*, "", "LightmapDataSO");
