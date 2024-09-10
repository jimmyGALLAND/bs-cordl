#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Custom/Sec/SecT113FieldElement.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Math/EC/zzzz__AbstractF2mFieldElement_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SecT113FieldElement)
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
class SecT113FieldElement;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement);
// Type: Org.BouncyCastle.Math.EC.Custom.Sec::SecT113FieldElement
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Custom.Sec::SecT113FieldElement*
class CORDL_TYPE SecT113FieldElement : public ::Org::BouncyCastle::Math::EC::AbstractF2mFieldElement {
public:
// Declarations
 __declspec(property(get=get_FieldName)) ::StringW  FieldName;

 __declspec(property(get=get_FieldSize)) int32_t  FieldSize;

 __declspec(property(get=get_HasFastTrace)) bool  HasFastTrace;

 __declspec(property(get=get_IsOne)) bool  IsOne;

 __declspec(property(get=get_IsZero)) bool  IsZero;

 __declspec(property(get=get_K1)) int32_t  K1;

 __declspec(property(get=get_K2)) int32_t  K2;

 __declspec(property(get=get_K3)) int32_t  K3;

 __declspec(property(get=get_M)) int32_t  M;

 __declspec(property(get=get_Representation)) int32_t  Representation;

/// @brief Field x, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_x, put=__cordl_internal_set_x)) ::ArrayW<uint64_t,::Array<uint64_t>*>  x;

/// @brief Method Add, addr 0x2438534, size 0xc0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Add(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method AddOne, addr 0x24385f4, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* AddOne() ;

/// @brief Method Divide, addr 0x24388a8, size 0x40, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Divide(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method Equals, addr 0x2438cc4, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x2438ddc, size 0x2c, virtual true, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement*  other) ;

/// @brief Method Equals, addr 0x2438d50, size 0x8c, virtual true, abstract: false, final false
inline bool Equals(::Org::BouncyCastle::Math::EC::ECFieldElement*  other) ;

/// @brief Method GetHashCode, addr 0x2438e08, size 0x74, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method HalfTrace, addr 0x2438b24, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* HalfTrace() ;

/// @brief Method Invert, addr 0x2438bac, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Invert() ;

/// @brief Method Multiply, addr 0x2438678, size 0xc0, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Multiply(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method MultiplyMinusProduct, addr 0x2438738, size 0x10, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement*  b, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method MultiplyPlusProduct, addr 0x2438748, size 0x160, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* MultiplyPlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement*  b, ::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method Negate, addr 0x24388e8, size 0x4, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Negate() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement* New_ctor() ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement* New_ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

static inline ::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement* New_ctor(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method Sqrt, addr 0x2438c24, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Sqrt() ;

/// @brief Method Square, addr 0x24388ec, size 0x78, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Square() ;

/// @brief Method SquareMinusProduct, addr 0x2438964, size 0x10, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquareMinusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method SquarePlusProduct, addr 0x2438974, size 0x120, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePlusProduct(::Org::BouncyCastle::Math::EC::ECFieldElement*  x, ::Org::BouncyCastle::Math::EC::ECFieldElement*  y) ;

/// @brief Method SquarePow, addr 0x2438a94, size 0x90, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* SquarePow(int32_t  pow) ;

/// @brief Method Subtract, addr 0x243866c, size 0xc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::EC::ECFieldElement* Subtract(::Org::BouncyCastle::Math::EC::ECFieldElement*  b) ;

/// @brief Method TestBitZero, addr 0x24384b4, size 0x2c, virtual true, abstract: false, final false
inline bool TestBitZero() ;

/// @brief Method ToBigInteger, addr 0x24384e0, size 0xc, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger() ;

/// @brief Method Trace, addr 0x2438ba4, size 0x8, virtual true, abstract: false, final false
inline int32_t Trace() ;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*> const& __cordl_internal_get_x() const;

constexpr ::ArrayW<uint64_t,::Array<uint64_t>*>& __cordl_internal_get_x() ;

constexpr void __cordl_internal_set_x(::ArrayW<uint64_t,::Array<uint64_t>*>  value) ;

/// @brief Method .ctor, addr 0x2438450, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x2438474, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method .ctor, addr 0x243839c, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method get_FieldName, addr 0x24384ec, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_FieldName() ;

/// @brief Method get_FieldSize, addr 0x243852c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_FieldSize() ;

/// @brief Method get_HasFastTrace, addr 0x2438b9c, size 0x8, virtual true, abstract: false, final false
inline bool get_HasFastTrace() ;

/// @brief Method get_IsOne, addr 0x243849c, size 0xc, virtual true, abstract: false, final false
inline bool get_IsOne() ;

/// @brief Method get_IsZero, addr 0x24384a8, size 0xc, virtual true, abstract: false, final false
inline bool get_IsZero() ;

/// @brief Method get_K1, addr 0x2438cac, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K1() ;

/// @brief Method get_K2, addr 0x2438cb4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K2() ;

/// @brief Method get_K3, addr 0x2438cbc, size 0x8, virtual true, abstract: false, final false
inline int32_t get_K3() ;

/// @brief Method get_M, addr 0x2438ca4, size 0x8, virtual true, abstract: false, final false
inline int32_t get_M() ;

/// @brief Method get_Representation, addr 0x2438c9c, size 0x8, virtual true, abstract: false, final false
inline int32_t get_Representation() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecT113FieldElement() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecT113FieldElement", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecT113FieldElement(SecT113FieldElement && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecT113FieldElement", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecT113FieldElement(SecT113FieldElement const& ) = delete;

/// @brief Field x, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<uint64_t,::Array<uint64_t>*>  ___x;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement, ___x) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Math::EC::Custom::Sec
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Custom::Sec::SecT113FieldElement*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT113FieldElement");
