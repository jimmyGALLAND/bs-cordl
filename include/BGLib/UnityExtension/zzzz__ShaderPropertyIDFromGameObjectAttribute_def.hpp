#pragma once
// IWYU pragma private; include "BGLib/UnityExtension/ShaderPropertyIDFromGameObjectAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "BGLib/UnityExtension/zzzz__ShaderPropertyIDAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ShaderPropertyIDFromGameObjectAttribute)
namespace BGLib::UnityExtension {
struct __ShaderPropertyAttributeFilter__PropType;
}
// Forward declare root types
namespace BGLib::UnityExtension {
class ShaderPropertyIDFromGameObjectAttribute;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute);
// Type: BGLib.UnityExtension::ShaderPropertyIDFromGameObjectAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace BGLib::UnityExtension {
// Is value type: false
// CS Name: ::BGLib.UnityExtension::ShaderPropertyIDFromGameObjectAttribute*
class CORDL_TYPE ShaderPropertyIDFromGameObjectAttribute : public ::BGLib::UnityExtension::ShaderPropertyIDAttribute {
public:
// Declarations
/// @brief Method GetTargetName, addr 0x226adec, size 0x40, virtual true, abstract: false, final false
inline ::StringW GetTargetName() ;

static inline ::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute* New_ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType) ;

/// @brief Method .ctor, addr 0x226ade8, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::StringW  nameFilter, ::BGLib::UnityExtension::__ShaderPropertyAttributeFilter__PropType  filterPropType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderPropertyIDFromGameObjectAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromGameObjectAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderPropertyIDFromGameObjectAttribute(ShaderPropertyIDFromGameObjectAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderPropertyIDFromGameObjectAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderPropertyIDFromGameObjectAttribute(ShaderPropertyIDFromGameObjectAttribute const& ) = delete;

/// @brief Field kTargetName offset 0xffffffff size 0x8
static constexpr ::ConstString  kTargetName{u"GameObject"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute, 0x18>, "Size mismatch!");

} // namespace end def BGLib::UnityExtension
NEED_NO_BOX(::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::UnityExtension::ShaderPropertyIDFromGameObjectAttribute*, "BGLib.UnityExtension", "ShaderPropertyIDFromGameObjectAttribute");
