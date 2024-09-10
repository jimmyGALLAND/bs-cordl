#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/Internal/MultiColumnHeaderColumnMoveLocationPreview.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(MultiColumnHeaderColumnMoveLocationPreview)
// Forward declare root types
namespace UnityEngine::UIElements::Internal {
class MultiColumnHeaderColumnMoveLocationPreview;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview);
// Type: UnityEngine.UIElements.Internal::MultiColumnHeaderColumnMoveLocationPreview
// SizeInfo { instance_size: 968, native_size: -1, calculated_instance_size: 968, calculated_native_size: 968, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::Internal {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.Internal::MultiColumnHeaderColumnMoveLocationPreview*
class CORDL_TYPE MultiColumnHeaderColumnMoveLocationPreview : public ::UnityEngine::UIElements::VisualElement {
public:
// Declarations
/// @brief Field ussClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_ussClassName, put=setStaticF_ussClassName)) ::StringW  ussClassName;

/// @brief Field visualUssClassName, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_visualUssClassName, put=setStaticF_visualUssClassName)) ::StringW  visualUssClassName;

static inline ::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview* New_ctor() ;

/// @brief Method .ctor, addr 0x494c09c, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_ussClassName() ;

static inline ::StringW getStaticF_visualUssClassName() ;

static inline void setStaticF_ussClassName(::StringW  value) ;

static inline void setStaticF_visualUssClassName(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MultiColumnHeaderColumnMoveLocationPreview() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnMoveLocationPreview", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MultiColumnHeaderColumnMoveLocationPreview(MultiColumnHeaderColumnMoveLocationPreview && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MultiColumnHeaderColumnMoveLocationPreview", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MultiColumnHeaderColumnMoveLocationPreview(MultiColumnHeaderColumnMoveLocationPreview const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview, 0x3c8>, "Size mismatch!");

} // namespace end def UnityEngine::UIElements::Internal
NEED_NO_BOX(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::Internal::MultiColumnHeaderColumnMoveLocationPreview*, "UnityEngine.UIElements.Internal", "MultiColumnHeaderColumnMoveLocationPreview");
