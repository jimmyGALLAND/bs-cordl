#pragma once
// IWYU pragma private; include "UnityEngine/UI/PositionAsUV1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UI/zzzz__BaseMeshEffect_def.hpp"
CORDL_MODULE_EXPORT(PositionAsUV1)
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace UnityEngine::UI {
class PositionAsUV1;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UI::PositionAsUV1);
// Type: UnityEngine.UI::PositionAsUV1
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::PositionAsUV1*
class CORDL_TYPE PositionAsUV1 : public ::UnityEngine::UI::BaseMeshEffect {
public:
// Declarations
/// @brief Method ModifyMesh, addr 0x4a3c99c, size 0xbc, virtual true, abstract: false, final false
inline void ModifyMesh(::UnityEngine::UI::VertexHelper*  vh) ;

static inline ::UnityEngine::UI::PositionAsUV1* New_ctor() ;

/// @brief Method .ctor, addr 0x4a3c994, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PositionAsUV1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PositionAsUV1(PositionAsUV1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PositionAsUV1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PositionAsUV1(PositionAsUV1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::PositionAsUV1, 0x28>, "Size mismatch!");

} // namespace end def UnityEngine::UI
NEED_NO_BOX(::UnityEngine::UI::PositionAsUV1);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::PositionAsUV1*, "UnityEngine.UI", "PositionAsUV1");
