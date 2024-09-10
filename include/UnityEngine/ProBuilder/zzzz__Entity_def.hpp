#pragma once
// IWYU pragma private; include "UnityEngine/ProBuilder/Entity.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ProBuilder/zzzz__EntityType_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(Entity)
namespace UnityEngine::ProBuilder {
struct EntityType;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class Entity;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::Entity);
// Type: UnityEngine.ProBuilder::Entity
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::Entity*
class CORDL_TYPE Entity : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=get_entityType)) ::UnityEngine::ProBuilder::EntityType  entityType;

/// @brief Field m_EntityType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_EntityType, put=__cordl_internal_set_m_EntityType)) ::UnityEngine::ProBuilder::EntityType  m_EntityType;

/// @brief Method Awake, addr 0x4676a6c, size 0xc8, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::UnityEngine::ProBuilder::Entity* New_ctor() ;

/// @brief Method SetEntity, addr 0x4676b34, size 0x8, virtual false, abstract: false, final false
inline void SetEntity(::UnityEngine::ProBuilder::EntityType  t) ;

constexpr ::UnityEngine::ProBuilder::EntityType const& __cordl_internal_get_m_EntityType() const;

constexpr ::UnityEngine::ProBuilder::EntityType& __cordl_internal_get_m_EntityType() ;

constexpr void __cordl_internal_set_m_EntityType(::UnityEngine::ProBuilder::EntityType  value) ;

/// @brief Method .ctor, addr 0x4676b3c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_entityType, addr 0x4676a64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::ProBuilder::EntityType get_entityType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Entity() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Entity(Entity && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Entity", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Entity(Entity const& ) = delete;

/// @brief Field m_EntityType, offset: 0x20, size: 0x4, def value: None
 ::UnityEngine::ProBuilder::EntityType  ___m_EntityType;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::Entity, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::Entity, ___m_EntityType) == 0x20, "Offset mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::Entity);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::Entity*, "UnityEngine.ProBuilder", "Entity");
