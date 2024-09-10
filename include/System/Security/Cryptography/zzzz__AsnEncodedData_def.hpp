#pragma once
// IWYU pragma private; include "System/Security/Cryptography/AsnEncodedData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsnEncodedData)
namespace System::Security::Cryptography {
class Oid;
}
// Forward declare root types
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::AsnEncodedData);
// Type: System.Security.Cryptography::AsnEncodedData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::AsnEncodedData*
class CORDL_TYPE AsnEncodedData : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Oid, put=set_Oid)) ::System::Security::Cryptography::Oid*  Oid;

 __declspec(property(get=get_RawData, put=set_RawData)) ::ArrayW<uint8_t,::Array<uint8_t>*>  RawData;

/// @brief Field _oid, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__oid, put=__cordl_internal_set__oid)) ::System::Security::Cryptography::Oid*  _oid;

/// @brief Field _raw, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__raw, put=__cordl_internal_set__raw)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _raw;

/// @brief Method BasicConstraintsExtension, addr 0x43a37b8, size 0x10c, virtual false, abstract: false, final false
inline ::StringW BasicConstraintsExtension(bool  multiLine) ;

/// @brief Method CopyFrom, addr 0x43a3370, size 0xf0, virtual true, abstract: false, final false
inline void CopyFrom(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method Default, addr 0x43a34f0, size 0x118, virtual false, abstract: false, final false
inline ::StringW Default(bool  multiLine) ;

/// @brief Method EnhancedKeyUsageExtension, addr 0x43a38c4, size 0x10c, virtual false, abstract: false, final false
inline ::StringW EnhancedKeyUsageExtension(bool  multiLine) ;

/// @brief Method Format, addr 0x43a3460, size 0x90, virtual true, abstract: false, final false
inline ::StringW Format(bool  multiLine) ;

/// @brief Method KeyUsageExtension, addr 0x43a39d0, size 0x110, virtual false, abstract: false, final false
inline ::StringW KeyUsageExtension(bool  multiLine) ;

/// @brief Method NetscapeCertType, addr 0x43a3fb8, size 0x3d8, virtual false, abstract: false, final false
inline ::StringW NetscapeCertType(bool  multiLine) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor() ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::StringW  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

static inline ::System::Security::Cryptography::AsnEncodedData* New_ctor(::System::Security::Cryptography::Oid*  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method SubjectAltName, addr 0x43a3bf0, size 0x3c8, virtual false, abstract: false, final false
inline ::StringW SubjectAltName(bool  multiLine) ;

/// @brief Method SubjectKeyIdentifierExtension, addr 0x43a3ae0, size 0x110, virtual false, abstract: false, final false
inline ::StringW SubjectKeyIdentifierExtension(bool  multiLine) ;

/// @brief Method ToString, addr 0x43a3608, size 0x1b0, virtual true, abstract: false, final false
inline ::StringW ToString(bool  multiLine) ;

constexpr ::System::Security::Cryptography::Oid*& __cordl_internal_get__oid() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::Oid*> const& __cordl_internal_get__oid() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__raw() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__raw() ;

constexpr void __cordl_internal_set__oid(::System::Security::Cryptography::Oid*  value) ;

constexpr void __cordl_internal_set__raw(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x43a3064, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x43a328c, size 0xd4, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::AsnEncodedData*  asnEncodedData) ;

/// @brief Method .ctor, addr 0x43a306c, size 0x7c, virtual false, abstract: false, final false
inline void _ctor(::StringW  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method .ctor, addr 0x43a31d8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Security::Cryptography::Oid*  oid, ::ArrayW<uint8_t,::Array<uint8_t>*>  rawData) ;

/// @brief Method get_Oid, addr 0x43a3360, size 0x8, virtual false, abstract: false, final false
inline ::System::Security::Cryptography::Oid* get_Oid() ;

/// @brief Method get_RawData, addr 0x43a3368, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> get_RawData() ;

/// @brief Method set_Oid, addr 0x43a3214, size 0x78, virtual false, abstract: false, final false
inline void set_Oid(::System::Security::Cryptography::Oid*  value) ;

/// @brief Method set_RawData, addr 0x43a30e8, size 0xf0, virtual false, abstract: false, final false
inline void set_RawData(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsnEncodedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AsnEncodedData(AsnEncodedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsnEncodedData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsnEncodedData(AsnEncodedData const& ) = delete;

/// @brief Field _oid, offset: 0x10, size: 0x8, def value: None
 ::System::Security::Cryptography::Oid*  ____oid;

/// @brief Field _raw, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____raw;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::AsnEncodedData, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____oid) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::AsnEncodedData, ____raw) == 0x18, "Offset mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::AsnEncodedData);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::AsnEncodedData*, "System.Security.Cryptography", "AsnEncodedData");
