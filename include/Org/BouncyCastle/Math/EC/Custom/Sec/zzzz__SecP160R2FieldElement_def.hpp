#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecP160R2FieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractFpFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecP160R2FieldElement)
namespace Org::BouncyCastle::Math::EC {
class ECFieldElement;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
class SecP160R2FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecP160R2FieldElement*
class CORDL_TYPE SecP160R2FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractFpFieldElement {
public:
// Declarations
 __declspec(property(get=get_FieldName)) ::StringW  FieldName;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

 __declspec(property(get=get_IsOne)) bool  IsOne;

 __declspec(property(get=get_IsZero)) bool  IsZero;

/// @brief Field Q, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Q, put=setStaticF_Q)) ::Org::BouncyCastle::Math::BigInteger*  Q;

/// @brief Field x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::ArrayW<uint32_t,::Array<uint32_t>*>  x;

/// @brief Method Add, addr 0x241891c, size 0xec, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method AddOne, addr 0x2418a08, size 0xa0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne() ;

/// @brief Method Divide, addr 0x2418c80, size 0xf4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method Equals, addr 0x2419240, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x2419358, size 0x2c, virtual true, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement*  other) ;

/// @brief Method Equals, addr 0x24192cc, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement*  other) ;

/// @brief Method GetHashCode, addr 0x2419384, size 0xb8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Invert, addr 0x2418eb4, size 0xa0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert() ;

/// @brief Method Multiply, addr 0x2418b94, size 0xec, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method Negate, addr 0x2418d74, size 0xa0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement* New_ctor() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement* New_ctor(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method Sqrt, addr 0x2418f54, size 0x2ec, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt() ;

/// @brief Method Square, addr 0x2418e14, size 0xa0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square() ;

/// @brief Method Subtract, addr 0x2418aa8, size 0xec, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method TestBitZero, addr 0x2418848, size 0x24, virtual true, abstract: false, final false
inline bool TestBitZero() ;

/// @brief Method ToBigInteger, addr 0x241886c, size 0xc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get_x() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get_x() ;

constexpr void __cordl_internal_set_x(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method .ctor, addr 0x241880c, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x24172a0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method .ctor, addr 0x2416c98, size 0x114, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  x) ;

static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Q() ;

/// @brief Method get_FieldName, addr 0x2418878, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_FieldName() ;

/// @brief Method get_FieldSize, addr 0x24188b8, size 0x64, virtual true, abstract: false, final false
inline int32_t get_FieldSize() ;

/// @brief Method get_IsOne, addr 0x241883c, size 0xc, virtual true, abstract: false, final false
inline bool get_IsOne() ;

/// @brief Method get_IsZero, addr 0x2418830, size 0xc, virtual true, abstract: false, final false
inline bool get_IsZero() ;

static inline void setStaticF_Q(::Org::BouncyCastle::Math::BigInteger*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecP160R2FieldElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2FieldElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecP160R2FieldElement(SecP160R2FieldElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecP160R2FieldElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecP160R2FieldElement(SecP160R2FieldElement const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ___x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement, ___x) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecP160R2FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecP160R2FieldElement");
