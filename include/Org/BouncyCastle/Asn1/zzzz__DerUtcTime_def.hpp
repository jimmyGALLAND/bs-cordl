#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerUtcTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerUtcTime)
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
struct DateTime;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1 {
class DerUtcTime;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerUtcTime);
// Type: Org.BouncyCastle.Asn1::DerUtcTime
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerUtcTime*
class CORDL_TYPE DerUtcTime : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
 __declspec(property(get=get_AdjustedTime)) ::StringW  AdjustedTime;

 __declspec(property(get=get_AdjustedTimeString)) ::StringW  AdjustedTimeString;

 __declspec(property(get=get_TimeString)) ::StringW  TimeString;

/// @brief Field time, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) ::StringW  time;

/// @brief Method Asn1Equals, addr 0x25efd3c, size 0x98, virtual true, abstract: false, final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method Asn1GetHashCode, addr 0x25efdd4, size 0x1c, virtual true, abstract: false, final false
inline int32_t Asn1GetHashCode() ;

/// @brief Method Encode, addr 0x25efd0c, size 0x30, virtual true, abstract: false, final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method GetInstance, addr 0x25ef4dc, size 0x11c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerUtcTime* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance, addr 0x25ef3f4, size 0xe8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerUtcTime* GetInstance(::System::Object*  obj) ;

/// @brief Method GetOctets, addr 0x25efd00, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

static inline ::Org::BouncyCastle::Asn1::DerUtcTime* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

static inline ::Org::BouncyCastle::Asn1::DerUtcTime* New_ctor(::StringW  time) ;

static inline ::Org::BouncyCastle::Asn1::DerUtcTime* New_ctor(::System::DateTime  time) ;

/// @brief Method ParseDateString, addr 0x25efb6c, size 0xb4, virtual false, abstract: false, final false
inline ::System::DateTime ParseDateString(::StringW  dateStr, ::StringW  formatStr) ;

/// @brief Method ToAdjustedDateTime, addr 0x25efc20, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTime ToAdjustedDateTime() ;

/// @brief Method ToDateTime, addr 0x25ef754, size 0x50, virtual false, abstract: false, final false
inline ::System::DateTime ToDateTime() ;

/// @brief Method ToString, addr 0x25efdf0, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr ::StringW const& __cordl_internal_get_time() const;

constexpr ::StringW& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_time(::StringW  value) ;

/// @brief Method .ctor, addr 0x25e1fbc, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method .ctor, addr 0x25ef5f8, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::StringW  time) ;

/// @brief Method .ctor, addr 0x25ef7a4, size 0xf0, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  time) ;

/// @brief Method get_AdjustedTime, addr 0x25efcfc, size 0x4, virtual false, abstract: false, final false
inline ::StringW get_AdjustedTime() ;

/// @brief Method get_AdjustedTimeString, addr 0x25efc70, size 0x8c, virtual false, abstract: false, final false
inline ::StringW get_AdjustedTimeString() ;

/// @brief Method get_TimeString, addr 0x25ef894, size 0x2d8, virtual false, abstract: false, final false
inline ::StringW get_TimeString() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerUtcTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerUtcTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerUtcTime(DerUtcTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerUtcTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerUtcTime(DerUtcTime const& ) = delete;

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerUtcTime, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerUtcTime, ___time) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerUtcTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerUtcTime*, "Org.BouncyCastle.Asn1", "DerUtcTime");
