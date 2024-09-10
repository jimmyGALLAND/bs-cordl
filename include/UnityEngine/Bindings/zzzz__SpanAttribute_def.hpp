#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/SpanAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SpanAttribute)
// Forward declare root types
namespace UnityEngine::Bindings {
class SpanAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Bindings::SpanAttribute);
// Type: UnityEngine.Bindings::SpanAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Bindings {
// Is value type: false
// CS Name: ::UnityEngine.Bindings::SpanAttribute*
class CORDL_TYPE SpanAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief Field <IsReadOnly>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsReadOnly_k__BackingField, put=__cordl_internal_set__IsReadOnly_k__BackingField)) bool  _IsReadOnly_k__BackingField;

/// @brief Field <SizeParameter>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__SizeParameter_k__BackingField, put=__cordl_internal_set__SizeParameter_k__BackingField)) ::StringW  _SizeParameter_k__BackingField;

static inline ::UnityEngine::Bindings::SpanAttribute* New_ctor(::StringW  sizeParameter, bool  isReadOnly) ;

constexpr bool const& __cordl_internal_get__IsReadOnly_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsReadOnly_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get__SizeParameter_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__SizeParameter_k__BackingField() ;

constexpr void __cordl_internal_set__IsReadOnly_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__SizeParameter_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x4882eb8, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::StringW  sizeParameter, bool  isReadOnly) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SpanAttribute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SpanAttribute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SpanAttribute(SpanAttribute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SpanAttribute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SpanAttribute(SpanAttribute const& ) = delete;

/// @brief Field <IsReadOnly>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____IsReadOnly_k__BackingField;

/// @brief Field <SizeParameter>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____SizeParameter_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Bindings::SpanAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::SpanAttribute, ____IsReadOnly_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Bindings::SpanAttribute, ____SizeParameter_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine::Bindings
NEED_NO_BOX(::UnityEngine::Bindings::SpanAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Bindings::SpanAttribute*, "UnityEngine.Bindings", "SpanAttribute");
