#pragma once
// IWYU pragma private; include "GlobalNamespace/BloomPrePassEffectContainerSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(BloomPrePassEffectContainerSO)
namespace GlobalNamespace {
class BloomPrePassEffectSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomPrePassEffectContainerSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomPrePassEffectContainerSO);
// Type: ::BloomPrePassEffectContainerSO
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BloomPrePassEffectContainerSO*
class CORDL_TYPE BloomPrePassEffectContainerSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief Field _bloomPrePassEffect, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__bloomPrePassEffect, put=__cordl_internal_set__bloomPrePassEffect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>  _bloomPrePassEffect;

 __declspec(property(get=get_bloomPrePassEffect)) ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>  bloomPrePassEffect;

/// @brief Method Init, addr 0x3955ac8, size 0x8, virtual false, abstract: false, final false
inline void Init(::GlobalNamespace::BloomPrePassEffectSO*  bloomPrePassEffect) ;

static inline ::GlobalNamespace::BloomPrePassEffectContainerSO* New_ctor() ;

constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> const& __cordl_internal_get__bloomPrePassEffect() const;

constexpr ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>& __cordl_internal_get__bloomPrePassEffect() ;

constexpr void __cordl_internal_set__bloomPrePassEffect(::UnityW<::GlobalNamespace::BloomPrePassEffectSO>  value) ;

/// @brief Method .ctor, addr 0x3955ad0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bloomPrePassEffect, addr 0x3955ac0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::GlobalNamespace::BloomPrePassEffectSO> get_bloomPrePassEffect() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BloomPrePassEffectContainerSO() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomPrePassEffectContainerSO", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomPrePassEffectContainerSO(BloomPrePassEffectContainerSO const& ) = delete;

/// @brief Field _bloomPrePassEffect, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::BloomPrePassEffectSO>  ____bloomPrePassEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomPrePassEffectContainerSO, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BloomPrePassEffectContainerSO, ____bloomPrePassEffect) == 0x18, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomPrePassEffectContainerSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomPrePassEffectContainerSO*, "", "BloomPrePassEffectContainerSO");
