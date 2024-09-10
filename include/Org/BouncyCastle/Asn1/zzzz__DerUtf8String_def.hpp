#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerUtf8String.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__DerStringBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerUtf8String)
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1TaggedObject;
}
namespace Org::BouncyCastle::Asn1 {
class DerOutputStream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUtf8String;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerUtf8String);
// Type: Org.BouncyCastle.Asn1::DerUtf8String
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerUtf8String*
class CORDL_TYPE DerUtf8String : public ::Org::BouncyCastle::Asn1::DerStringBase {
public:
// Declarations
/// @brief Field str, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_str, put=__cordl_internal_set_str)) ::StringW  str;

/// @brief Method Asn1Equals, addr 0x25f0054, size 0x98, virtual true, abstract: false, final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method Encode, addr 0x25f00ec, size 0x50, virtual true, abstract: false, final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method GetInstance, addr 0x25efee0, size 0xf8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerUtf8String* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance, addr 0x25efdf8, size 0xe8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerUtf8String* GetInstance(::System::Object*  obj) ;

/// @brief Method GetString, addr 0x25f004c, size 0x8, virtual true, abstract: false, final false
inline ::StringW GetString() ;

static inline ::Org::BouncyCastle::Asn1::DerUtf8String* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

static inline ::Org::BouncyCastle::Asn1::DerUtf8String* New_ctor(::StringW  str) ;

constexpr ::StringW const& __cordl_internal_get_str() const;

constexpr ::StringW& __cordl_internal_get_str() ;

constexpr void __cordl_internal_set_str(::StringW  value) ;

/// @brief Method .ctor, addr 0x25e1ff0, size 0x54, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  str) ;

/// @brief Method .ctor, addr 0x25effd8, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::StringW  str) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerUtf8String() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerUtf8String", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerUtf8String(DerUtf8String && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerUtf8String", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerUtf8String(DerUtf8String const& ) = delete;

/// @brief Field str, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___str;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerUtf8String, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerUtf8String, ___str) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUtf8String);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUtf8String*, "Org.BouncyCastle.Asn1", "DerUtf8String");
