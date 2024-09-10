#pragma once
// IWYU pragma private; include "Zenject/ProviderUtil.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ProviderUtil)
namespace System {
class Type;
}
// Forward declare root types
namespace Zenject {
class ProviderUtil;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProviderUtil);
// Type: Zenject::ProviderUtil
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ProviderUtil*
class CORDL_TYPE ProviderUtil : public ::System::Object {
public:
// Declarations
/// @brief Method GetTypeToInstantiate, addr 0x4aa97a4, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Type* GetTypeToInstantiate(::System::Type*  contractType, ::System::Type*  concreteType) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ProviderUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ProviderUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ProviderUtil(ProviderUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ProviderUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ProviderUtil(ProviderUtil const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProviderUtil, 0x10>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ProviderUtil);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProviderUtil*, "Zenject", "ProviderUtil");
