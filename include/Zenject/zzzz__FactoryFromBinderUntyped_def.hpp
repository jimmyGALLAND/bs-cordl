#pragma once
// IWYU pragma private; include "Zenject/FactoryFromBinderUntyped.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinderBase_def.hpp"
CORDL_MODULE_EXPORT(FactoryFromBinderUntyped)
namespace System {
class Type;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
class FactoryFromBinderUntyped;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::FactoryFromBinderUntyped);
// Type: Zenject::FactoryFromBinderUntyped
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::FactoryFromBinderUntyped*
class CORDL_TYPE FactoryFromBinderUntyped : public ::Zenject::FactoryFromBinderBase {
public:
// Declarations
static inline ::Zenject::FactoryFromBinderUntyped* New_ctor(::Zenject::DiContainer*  bindContainer, ::System::Type*  contractType, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor, addr 0x4a6e0a0, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::System::Type*  contractType, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FactoryFromBinderUntyped() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderUntyped", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryFromBinderUntyped(FactoryFromBinderUntyped && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryFromBinderUntyped", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryFromBinderUntyped(FactoryFromBinderUntyped const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::FactoryFromBinderUntyped, 0x38>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::FactoryFromBinderUntyped);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::FactoryFromBinderUntyped*, "Zenject", "FactoryFromBinderUntyped");
