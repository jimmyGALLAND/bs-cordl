#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/X509/Qualified/Iso4217CurrencyCode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Iso4217CurrencyCode)
namespace Org::BouncyCastle::Asn1 {
class Asn1Encodable;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class IAsn1Choice;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::X509::Qualified {
class Iso4217CurrencyCode;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode);
// Type: Org.BouncyCastle.Asn1.X509.Qualified::Iso4217CurrencyCode
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::X509::Qualified {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.X509.Qualified::Iso4217CurrencyCode*
class CORDL_TYPE Iso4217CurrencyCode : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
 __declspec(property(get=get_Alphabetic)) ::StringW  Alphabetic;

 __declspec(property(get=get_IsAlphabetic)) bool  IsAlphabetic;

 __declspec(property(get=get_Numeric)) int32_t  Numeric;

/// @brief Field obj, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_obj, put=__cordl_internal_set_obj)) ::Org::BouncyCastle::Asn1::Asn1Encodable*  obj;

/// @brief Convert operator to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr operator  ::Org::BouncyCastle::Asn1::IAsn1Choice*() noexcept;

/// @brief Method GetInstance, addr 0x24b5920, size 0x1e8, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* New_ctor(::StringW  alphabetic) ;

static inline ::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode* New_ctor(int32_t  numeric) ;

/// @brief Method ToAsn1Object, addr 0x24b5f98, size 0x20, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Encodable*& __cordl_internal_get_obj() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Encodable*> const& __cordl_internal_get_obj() const;

constexpr void __cordl_internal_set_obj(::Org::BouncyCastle::Asn1::Asn1Encodable*  value) ;

/// @brief Method .ctor, addr 0x24b5d20, size 0xfc, virtual false, abstract: false, final false
inline void _ctor(::StringW  alphabetic) ;

/// @brief Method .ctor, addr 0x24b5b08, size 0x218, virtual false, abstract: false, final false
inline void _ctor(int32_t  numeric) ;

/// @brief Method get_Alphabetic, addr 0x24b5e98, size 0x80, virtual false, abstract: false, final false
inline ::StringW get_Alphabetic() ;

/// @brief Method get_IsAlphabetic, addr 0x24b5e1c, size 0x7c, virtual false, abstract: false, final false
inline bool get_IsAlphabetic() ;

/// @brief Method get_Numeric, addr 0x24b5f18, size 0x80, virtual false, abstract: false, final false
inline int32_t get_Numeric() ;

/// @brief Convert to "::Org::BouncyCastle::Asn1::IAsn1Choice"
constexpr ::Org::BouncyCastle::Asn1::IAsn1Choice* i___Org__BouncyCastle__Asn1__IAsn1Choice() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Iso4217CurrencyCode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Iso4217CurrencyCode(Iso4217CurrencyCode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Iso4217CurrencyCode", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Iso4217CurrencyCode(Iso4217CurrencyCode const& ) = delete;

/// @brief Field obj, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Encodable*  ___obj;

/// @brief Field AlphabeticMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  AlphabeticMaxSize{static_cast<int32_t>(0x3)};

/// @brief Field NumericMaxSize offset 0xffffffff size 0x4
static constexpr int32_t  NumericMaxSize{static_cast<int32_t>(0x3e7)};

/// @brief Field NumericMinSize offset 0xffffffff size 0x4
static constexpr int32_t  NumericMinSize{static_cast<int32_t>(0x1)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode, ___obj) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::X509::Qualified
NEED_NO_BOX(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::X509::Qualified::Iso4217CurrencyCode*, "Org.BouncyCastle.Asn1.X509.Qualified", "Iso4217CurrencyCode");
