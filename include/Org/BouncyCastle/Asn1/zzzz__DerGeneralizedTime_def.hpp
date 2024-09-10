#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/DerGeneralizedTime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DerGeneralizedTime)
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
class DerGeneralizedTime;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::DerGeneralizedTime);
// Type: Org.BouncyCastle.Asn1::DerGeneralizedTime
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1 {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1::DerGeneralizedTime*
class CORDL_TYPE DerGeneralizedTime : public ::Org::BouncyCastle::Asn1::Asn1Object {
public:
// Declarations
 __declspec(property(get=get_HasFractionalSeconds)) bool  HasFractionalSeconds;

 __declspec(property(get=get_TimeString)) ::StringW  TimeString;

/// @brief Field time, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_time, put=__cordl_internal_set_time)) ::StringW  time;

/// @brief Method Asn1Equals, addr 0x25ed0b4, size 0x98, virtual true, abstract: false, final false
inline bool Asn1Equals(::Org::BouncyCastle::Asn1::Asn1Object*  asn1Object) ;

/// @brief Method Asn1GetHashCode, addr 0x25ed14c, size 0x1c, virtual true, abstract: false, final false
inline int32_t Asn1GetHashCode() ;

/// @brief Method CalculateGmtOffset, addr 0x25eca38, size 0x2a0, virtual false, abstract: false, final false
inline ::StringW CalculateGmtOffset() ;

/// @brief Method Convert, addr 0x25eccd8, size 0x94, virtual false, abstract: false, final false
static inline ::StringW Convert(int32_t  time) ;

/// @brief Method Encode, addr 0x25ed084, size 0x30, virtual true, abstract: false, final false
inline void Encode(::Org::BouncyCastle::Asn1::DerOutputStream*  derOut) ;

/// @brief Method FString, addr 0x25ecd98, size 0x84, virtual false, abstract: false, final false
inline ::StringW FString(int32_t  count) ;

/// @brief Method GetInstance, addr 0x25ec268, size 0x11c, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::Org::BouncyCastle::Asn1::Asn1TaggedObject*  obj, bool  isExplicit) ;

/// @brief Method GetInstance, addr 0x25ec16c, size 0xfc, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* GetInstance(::System::Object*  obj) ;

/// @brief Method GetOctets, addr 0x25ed078, size 0xc, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOctets() ;

/// @brief Method GetTime, addr 0x25ec7bc, size 0x27c, virtual false, abstract: false, final false
inline ::StringW GetTime() ;

static inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

static inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* New_ctor(::StringW  time) ;

static inline ::Org::BouncyCastle::Asn1::DerGeneralizedTime* New_ctor(::System::DateTime  time) ;

/// @brief Method ParseDateString, addr 0x25ece1c, size 0x25c, virtual false, abstract: false, final false
inline ::System::DateTime ParseDateString(::StringW  s, ::StringW  format, bool  makeUniversal) ;

/// @brief Method ToDateTime, addr 0x25ec494, size 0x290, virtual false, abstract: false, final false
inline ::System::DateTime ToDateTime() ;

constexpr ::StringW const& __cordl_internal_get_time() const;

constexpr ::StringW& __cordl_internal_get_time() ;

constexpr void __cordl_internal_set_time(::StringW  value) ;

/// @brief Method .ctor, addr 0x25e1e04, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method .ctor, addr 0x25ec384, size 0x110, virtual false, abstract: false, final false
inline void _ctor(::StringW  time) ;

/// @brief Method .ctor, addr 0x25ec724, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::System::DateTime  time) ;

/// @brief Method get_HasFractionalSeconds, addr 0x25ecd6c, size 0x2c, virtual false, abstract: false, final false
inline bool get_HasFractionalSeconds() ;

/// @brief Method get_TimeString, addr 0x25ec7b4, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_TimeString() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DerGeneralizedTime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralizedTime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DerGeneralizedTime(DerGeneralizedTime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DerGeneralizedTime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DerGeneralizedTime(DerGeneralizedTime const& ) = delete;

/// @brief Field time, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___time;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::DerGeneralizedTime, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::DerGeneralizedTime, ___time) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1
NEED_NO_BOX(::Org::BouncyCastle::Asn1::DerGeneralizedTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::DerGeneralizedTime*, "Org.BouncyCastle.Asn1", "DerGeneralizedTime");
