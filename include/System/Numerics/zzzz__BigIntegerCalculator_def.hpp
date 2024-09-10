#pragma once
// IWYU pragma private; include "System/Numerics/BigIntegerCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BigIntegerCalculator)
// Forward declare root types
namespace System::Numerics {
class BigIntegerCalculator;
}
// Write type traits
MARK_REF_PTR_T(::System::Numerics::BigIntegerCalculator);
// Type: System.Numerics::BigIntegerCalculator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Numerics {
// Is value type: false
// CS Name: ::System.Numerics::BigIntegerCalculator*
class CORDL_TYPE BigIntegerCalculator : public ::System::Object {
public:
// Declarations
/// @brief Field AllocationThreshold, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_AllocationThreshold, put=setStaticF_AllocationThreshold)) int32_t  AllocationThreshold;

/// @brief Field MultiplyThreshold, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_MultiplyThreshold, put=setStaticF_MultiplyThreshold)) int32_t  MultiplyThreshold;

/// @brief Field ReducerThreshold, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_ReducerThreshold, put=setStaticF_ReducerThreshold)) int32_t  ReducerThreshold;

/// @brief Field SquareThreshold, offset 0xffffffff, size 0x4 
static __declspec(property(get=getStaticF_SquareThreshold, put=setStaticF_SquareThreshold)) int32_t  SquareThreshold;

/// @brief Method Add, addr 0x4199e18, size 0xec, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Add(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method Add, addr 0x4199d40, size 0xd8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Add(::ArrayW<uint32_t,::Array<uint32_t>*>  left, uint32_t  right) ;

/// @brief Method Add, addr 0x419c264, size 0x84, virtual false, abstract: false, final false
static inline void Add(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, ::cordl_internals::Ptr<uint32_t>  bits, int32_t  bitsLength) ;

/// @brief Method AddDivisor, addr 0x419c854, size 0x40, virtual false, abstract: false, final false
static inline uint32_t AddDivisor(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength) ;

/// @brief Method AddSelf, addr 0x419c2e8, size 0x74, virtual false, abstract: false, final false
static inline void AddSelf(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength) ;

/// @brief Method Compare, addr 0x419a1f8, size 0x80, virtual false, abstract: false, final false
static inline int32_t Compare(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method CreateCopy, addr 0x419c3d4, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> CreateCopy(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method Divide, addr 0x419ba44, size 0xdc, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Divide(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method Divide, addr 0x419b998, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Divide(::ArrayW<uint32_t,::Array<uint32_t>*>  left, uint32_t  right) ;

/// @brief Method Divide, addr 0x419c450, size 0x2f8, virtual false, abstract: false, final false
static inline void Divide(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, ::cordl_internals::Ptr<uint32_t>  bits, int32_t  bitsLength) ;

/// @brief Method DivideGuessTooBig, addr 0x419c7c0, size 0x4c, virtual false, abstract: false, final false
static inline bool DivideGuessTooBig(uint64_t  q, uint64_t  valHi, uint32_t  valLo, uint32_t  divHi, uint32_t  divLo) ;

/// @brief Method LeadingZeros, addr 0x419c748, size 0x78, virtual false, abstract: false, final false
static inline int32_t LeadingZeros(uint32_t  value) ;

/// @brief Method Multiply, addr 0x419b75c, size 0xec, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Multiply(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method Multiply, addr 0x419b5b8, size 0xe4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Multiply(::ArrayW<uint32_t,::Array<uint32_t>*>  left, uint32_t  right) ;

/// @brief Method Multiply, addr 0x419ccfc, size 0x494, virtual false, abstract: false, final false
static inline void Multiply(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, ::cordl_internals::Ptr<uint32_t>  bits, int32_t  bitsLength) ;

/// @brief Method Remainder, addr 0x419bcdc, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Remainder(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method Remainder, addr 0x419bc84, size 0x58, virtual false, abstract: false, final false
static inline uint32_t Remainder(::ArrayW<uint32_t,::Array<uint32_t>*>  left, uint32_t  right) ;

/// @brief Method Square, addr 0x419b69c, size 0xc0, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Square(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method Square, addr 0x419c894, size 0x3a8, virtual false, abstract: false, final false
static inline void Square(::cordl_internals::Ptr<uint32_t>  value, int32_t  valueLength, ::cordl_internals::Ptr<uint32_t>  bits, int32_t  bitsLength) ;

/// @brief Method Subtract, addr 0x419a278, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Subtract(::ArrayW<uint32_t,::Array<uint32_t>*>  left, ::ArrayW<uint32_t,::Array<uint32_t>*>  right) ;

/// @brief Method Subtract, addr 0x419a140, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Subtract(::ArrayW<uint32_t,::Array<uint32_t>*>  left, uint32_t  right) ;

/// @brief Method Subtract, addr 0x419c35c, size 0x78, virtual false, abstract: false, final false
static inline void Subtract(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, ::cordl_internals::Ptr<uint32_t>  bits, int32_t  bitsLength) ;

/// @brief Method SubtractCore, addr 0x419cc3c, size 0xc0, virtual false, abstract: false, final false
static inline void SubtractCore(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, ::cordl_internals::Ptr<uint32_t>  core, int32_t  coreLength) ;

/// @brief Method SubtractDivisor, addr 0x419c80c, size 0x48, virtual false, abstract: false, final false
static inline uint32_t SubtractDivisor(::cordl_internals::Ptr<uint32_t>  left, int32_t  leftLength, ::cordl_internals::Ptr<uint32_t>  right, int32_t  rightLength, uint64_t  q) ;

static inline int32_t getStaticF_AllocationThreshold() ;

static inline int32_t getStaticF_MultiplyThreshold() ;

static inline int32_t getStaticF_ReducerThreshold() ;

static inline int32_t getStaticF_SquareThreshold() ;

static inline void setStaticF_AllocationThreshold(int32_t  value) ;

static inline void setStaticF_MultiplyThreshold(int32_t  value) ;

static inline void setStaticF_ReducerThreshold(int32_t  value) ;

static inline void setStaticF_SquareThreshold(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BigIntegerCalculator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BigIntegerCalculator(BigIntegerCalculator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BigIntegerCalculator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BigIntegerCalculator(BigIntegerCalculator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Numerics::BigIntegerCalculator, 0x10>, "Size mismatch!");

} // namespace end def System::Numerics
NEED_NO_BOX(::System::Numerics::BigIntegerCalculator);
DEFINE_IL2CPP_ARG_TYPE(::System::Numerics::BigIntegerCalculator*, "System.Numerics", "BigIntegerCalculator");
