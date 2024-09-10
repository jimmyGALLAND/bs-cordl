#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Ess/ContentIdentifier.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentIdentifier)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1OctetString;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Ess {
class ContentIdentifier;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier);
// Type: Org.BouncyCastle.Asn1.Ess::ContentIdentifier
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Ess {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Ess::ContentIdentifier*
class CORDL_TYPE ContentIdentifier : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_Value)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  Value;

/// @brief Field value, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_value, put=__cordl_internal_set_value)) ::Org::BouncyCastle::Asn1::Asn1OctetString*  value;

/// @brief Method GetInstance, addr 0x22dab98, size 0x184, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* GetInstance(::System::Object*  o) ;

static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline ::Org::BouncyCastle::Asn1::Ess::ContentIdentifier* New_ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

/// @brief Method ToAsn1Object, addr 0x22dadc0, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1OctetString*& __cordl_internal_get_value() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1OctetString*> const& __cordl_internal_get_value() const;

constexpr void __cordl_internal_set_value(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

/// @brief Method .ctor, addr 0x22dad44, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x22dad1c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1OctetString*  value) ;

/// @brief Method get_Value, addr 0x22dadb8, size 0x8, virtual false, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1OctetString* get_Value() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ContentIdentifier() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ContentIdentifier(ContentIdentifier && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ContentIdentifier", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ContentIdentifier(ContentIdentifier const& ) = delete;

/// @brief Field value, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1OctetString*  ___value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Ess::ContentIdentifier, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier, ___value) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Ess
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Ess::ContentIdentifier*, "Org.BouncyCastle.Asn1.Ess", "ContentIdentifier");
