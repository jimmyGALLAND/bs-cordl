#pragma once
// IWYU pragma private; include "UnityEngine/SubsystemsImplementation/SubsystemDescriptorWithProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubsystemDescriptorWithProvider)
namespace UnityEngine {
class ISubsystemDescriptor;
}
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine::SubsystemsImplementation {
class SubsystemDescriptorWithProvider;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider);
// Type: UnityEngine.SubsystemsImplementation::SubsystemDescriptorWithProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::SubsystemsImplementation {
// Is value type: false
// CS Name: ::UnityEngine.SubsystemsImplementation::SubsystemDescriptorWithProvider*
class CORDL_TYPE SubsystemDescriptorWithProvider : public ::System::Object {
public:
// Declarations
/// @brief Field <id>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__id_k__BackingField, put=__cordl_internal_set__id_k__BackingField)) ::StringW  _id_k__BackingField;

 __declspec(property(get=get_id)) ::StringW  id;

/// @brief Convert operator to "::UnityEngine::ISubsystemDescriptor"
constexpr operator  ::UnityEngine::ISubsystemDescriptor*() noexcept;

/// @brief Method CreateImpl, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::ISubsystem* CreateImpl() ;

static inline ::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider* New_ctor() ;

/// @brief Method UnityEngine.ISubsystemDescriptor.Create, addr 0x4885a68, size 0xc, virtual true, abstract: false, final true
inline ::UnityEngine::ISubsystem* UnityEngine_ISubsystemDescriptor_Create() ;

constexpr ::StringW const& __cordl_internal_get__id_k__BackingField() const;

constexpr ::StringW& __cordl_internal_get__id_k__BackingField() ;

constexpr void __cordl_internal_set__id_k__BackingField(::StringW  value) ;

/// @brief Method .ctor, addr 0x4885a74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_id, addr 0x4885a60, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_id() ;

/// @brief Convert to "::UnityEngine::ISubsystemDescriptor"
constexpr ::UnityEngine::ISubsystemDescriptor* i___UnityEngine__ISubsystemDescriptor() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SubsystemDescriptorWithProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubsystemDescriptorWithProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubsystemDescriptorWithProvider(SubsystemDescriptorWithProvider const& ) = delete;

/// @brief Field <id>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____id_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider, ____id_k__BackingField) == 0x10, "Offset mismatch!");

} // namespace end def UnityEngine::SubsystemsImplementation
NEED_NO_BOX(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::SubsystemsImplementation::SubsystemDescriptorWithProvider*, "UnityEngine.SubsystemsImplementation", "SubsystemDescriptorWithProvider");
