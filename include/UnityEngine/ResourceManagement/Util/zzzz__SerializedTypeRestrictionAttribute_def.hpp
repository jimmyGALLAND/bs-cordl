#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/SerializedTypeRestrictionAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
CORDL_MODULE_EXPORT(SerializedTypeRestrictionAttribute)
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class SerializedTypeRestrictionAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
// Type: UnityEngine.ResourceManagement.Util::SerializedTypeRestrictionAttribute
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.Util::SerializedTypeRestrictionAttribute*
class CORDL_TYPE SerializedTypeRestrictionAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field type, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::System::Type*  type;

static inline ::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute* New_ctor() ;

constexpr ::System::Type*& __cordl_internal_get_type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

constexpr void __cordl_internal_set_type(::System::Type*  value) ;

/// @brief Method .ctor, addr 0x4705fa8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializedTypeRestrictionAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializedTypeRestrictionAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializedTypeRestrictionAttribute(SerializedTypeRestrictionAttribute const& ) = delete;

/// @brief Field type, offset: 0x10, size: 0x8, def value: None
 ::System::Type*  ___type;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute, ___type) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::SerializedTypeRestrictionAttribute*, "UnityEngine.ResourceManagement.Util", "SerializedTypeRestrictionAttribute");
