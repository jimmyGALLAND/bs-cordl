#pragma once
// IWYU pragma private; include "GlobalNamespace/BakeIdMapper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(BakeIdMapper)
// Forward declare root types
namespace GlobalNamespace {
class BakeIdMapper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BakeIdMapper);
// Type: ::BakeIdMapper
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BakeIdMapper*
class CORDL_TYPE BakeIdMapper : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
static inline ::GlobalNamespace::BakeIdMapper* New_ctor() ;

/// @brief Method .ctor, addr 0x3a8abb8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BakeIdMapper() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BakeIdMapper(BakeIdMapper && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BakeIdMapper", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BakeIdMapper(BakeIdMapper const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BakeIdMapper, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BakeIdMapper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BakeIdMapper*, "", "BakeIdMapper");
