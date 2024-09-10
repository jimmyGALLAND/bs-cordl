#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Pkix/PkixAttrCertPathValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PkixAttrCertPathValidator)
namespace Org::BouncyCastle::Pkix {
class PkixCertPathValidatorResult;
}
namespace Org::BouncyCastle::Pkix {
class PkixCertPath;
}
namespace Org::BouncyCastle::Pkix {
class PkixParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Pkix {
class PkixAttrCertPathValidator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator);
// Type: Org.BouncyCastle.Pkix::PkixAttrCertPathValidator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Pkix {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Pkix::PkixAttrCertPathValidator*
class CORDL_TYPE PkixAttrCertPathValidator : public ::System::Object {
public:
// Declarations
static inline ::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator* New_ctor() ;

/// @brief Method Validate, addr 0x251d524, size 0x3c4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Pkix::PkixCertPathValidatorResult* Validate(::Org::BouncyCastle::Pkix::PkixCertPath*  certPath, ::Org::BouncyCastle::Pkix::PkixParameters*  pkixParams) ;

/// @brief Method .ctor, addr 0x251cbcc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkixAttrCertPathValidator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkixAttrCertPathValidator(PkixAttrCertPathValidator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkixAttrCertPathValidator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkixAttrCertPathValidator(PkixAttrCertPathValidator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Pkix
NEED_NO_BOX(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Pkix::PkixAttrCertPathValidator*, "Org.BouncyCastle.Pkix", "PkixAttrCertPathValidator");
