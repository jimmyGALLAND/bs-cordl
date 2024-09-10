#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnMovePreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumnMovePreview)
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnMovePreview;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview);
// Type: UnityEngine.UIElements.Internal::MultiColumnHeaderColumnMovePreview
// SizeInfo { instance_size: 968, native_size: -1, calculated_instance_size: 968, calculated_native_size: 968, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Internal::MultiColumnHeaderColumnMovePreview*
class CORDL_TYPE MultiColumnHeaderColumnMovePreview : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview* New_ctor() ;

/// @brief Method .ctor, addr 0x494bf60, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_ussClassName() ;

static inline void setStaticF_ussClassName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiColumnHeaderColumnMovePreview() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnMovePreview", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiColumnHeaderColumnMovePreview(MultiColumnHeaderColumnMovePreview && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnMovePreview", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiColumnHeaderColumnMovePreview(MultiColumnHeaderColumnMovePreview const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview, 0x3c8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMovePreview*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnMovePreview");
