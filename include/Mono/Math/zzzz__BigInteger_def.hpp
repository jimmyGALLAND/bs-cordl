#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BigInteger)
namespace System {
class Object;
}
namespace Mono::Math {
class __BigInteger__ModulusRing;
}
namespace System::Security::Cryptography {
class RandomNumberGenerator;
}
namespace Mono::Math {
class __BigInteger__Kernel;
}
namespace Mono::Math {
struct __BigInteger__Sign;
}
// Forward declare root types
namespace Mono::Math {
struct __BigInteger__Sign;
}
namespace Mono::Math {
class BigInteger;
}
namespace Mono::Math {
class __BigInteger__Kernel;
}
namespace Mono::Math {
class __BigInteger__ModulusRing;
}
// Write type traits
MARK_VAL_T(::Mono::Math::__BigInteger__Sign);
MARK_REF_PTR_T(::Mono::Math::BigInteger);
MARK_REF_PTR_T(::Mono::Math::__BigInteger__Kernel);
MARK_REF_PTR_T(::Mono::Math::__BigInteger__ModulusRing);
// Type: ::Sign
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2287))
// CS Name: ::BigInteger::Sign
struct CORDL_TYPE __BigInteger__Sign {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____BigInteger__Sign_Unwrapped
  enum struct ____BigInteger__Sign_Unwrapped : int32_t {
    __E_Negative = static_cast<int32_t>(0xffffffff),
    __E_Zero = static_cast<int32_t>(0x0),
    __E_Positive = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____BigInteger__Sign_Unwrapped() const noexcept {
    return static_cast<____BigInteger__Sign_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __BigInteger__Sign(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__Sign();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Negative value: static_cast<int32_t>(0xffffffff)
  static ::Mono::Math::__BigInteger__Sign const Negative;

  /// @brief Field Zero value: static_cast<int32_t>(0x0)
  static ::Mono::Math::__BigInteger__Sign const Zero;

  /// @brief Field Positive value: static_cast<int32_t>(0x1)
  static ::Mono::Math::__BigInteger__Sign const Positive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__Sign, 0x4>, "Size mismatch!");

} // namespace Mono::Math
// Type: ::ModulusRing
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2288))
// CS Name: ::BigInteger::ModulusRing*
class CORDL_TYPE __BigInteger__ModulusRing : public ::System::Object {
public:
  // Declarations
  /// @brief Field mod, offset 0x10, size 0x8
  __declspec(property(get = __get_mod, put = __set_mod))::Mono::Math::BigInteger* mod;

  /// @brief Field constant, offset 0x18, size 0x8
  __declspec(property(get = __get_constant, put = __set_constant))::Mono::Math::BigInteger* constant;

  constexpr ::Mono::Math::BigInteger*& __get_mod();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_mod() const;

  constexpr void __set_mod(::Mono::Math::BigInteger* value);

  constexpr ::Mono::Math::BigInteger*& __get_constant();

  constexpr ::cordl_internals::to_const_pointer<::Mono::Math::BigInteger*> const& __get_constant() const;

  constexpr void __set_constant(::Mono::Math::BigInteger* value);

  static inline ::Mono::Math::__BigInteger__ModulusRing* New_ctor(::Mono::Math::BigInteger* modulus);

  /// @brief Method .ctor addr 0x242a3a0 size 0xd0 virtual false final false
  inline void _ctor(::Mono::Math::BigInteger* modulus);

  /// @brief Method BarrettReduction addr 0x242a6e4 size 0x25c virtual false final false
  inline void BarrettReduction(::Mono::Math::BigInteger* x);

  /// @brief Method Multiply addr 0x242ace8 size 0x17c virtual false final false
  inline ::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  /// @brief Method Difference addr 0x242ae64 size 0x1bc virtual false final false
  inline ::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b);

  /// @brief Method Pow addr 0x242a470 size 0x108 virtual false final false
  inline ::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* k);

  /// @brief Method Pow addr 0x242b020 size 0x78 virtual false final false
  inline ::Mono::Math::BigInteger* Pow(uint32_t b, ::Mono::Math::BigInteger* exp);

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__ModulusRing", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BigInteger__ModulusRing(__BigInteger__ModulusRing&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__ModulusRing", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BigInteger__ModulusRing(__BigInteger__ModulusRing const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__ModulusRing();

public:
  /// @brief Field mod, offset: 0x10, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___mod;

  /// @brief Field constant, offset: 0x18, size: 0x8, def value: None
  ::Mono::Math::BigInteger* ___constant;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__ModulusRing, 0x20>, "Size mismatch!");

} // namespace Mono::Math
// Type: ::Kernel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2289))
// CS Name: ::BigInteger::Kernel*
class CORDL_TYPE __BigInteger__Kernel : public ::System::Object {
public:
  // Declarations
  /// @brief Method Subtract addr 0x2428910 size 0x1a4 virtual false final false
  static inline ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method MinusEq addr 0x242aa70 size 0x100 virtual false final false
  static inline void MinusEq(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small);

  /// @brief Method PlusEq addr 0x242ab70 size 0x178 virtual false final false
  static inline void PlusEq(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method Compare addr 0x24287cc size 0x144 virtual false final false
  static inline ::Mono::Math::__BigInteger__Sign Compare(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method SingleByteDivideInPlace addr 0x2429c58 size 0x7c virtual false final false
  static inline uint32_t SingleByteDivideInPlace(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method DwordMod addr 0x2428ab4 size 0x6c virtual false final false
  static inline uint32_t DwordMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method DwordDivMod addr 0x242b098 size 0x190 virtual false final false
  static inline ::ArrayW<::Mono::Math::BigInteger*, ::Array<::Mono::Math::BigInteger*>*> DwordDivMod(::Mono::Math::BigInteger* n, uint32_t d);

  /// @brief Method multiByteDivide addr 0x2428b20 size 0x454 virtual false final false
  static inline ::ArrayW<::Mono::Math::BigInteger*, ::Array<::Mono::Math::BigInteger*>*> multiByteDivide(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method LeftShift addr 0x2429164 size 0x1d0 virtual false final false
  static inline ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method RightShift addr 0x2429338 size 0x17c virtual false final false
  static inline ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* bi, int32_t n);

  /// @brief Method MultiplyByDword addr 0x2429070 size 0xf0 virtual false final false
  static inline ::Mono::Math::BigInteger* MultiplyByDword(::Mono::Math::BigInteger* n, uint32_t f);

  /// @brief Method Multiply addr 0x2428f74 size 0xfc virtual false final false
  static inline void Multiply(::ArrayW<uint32_t, ::Array<uint32_t>*> x, uint32_t xOffset, uint32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, uint32_t yOffset, uint32_t yLen,
                              ::ArrayW<uint32_t, ::Array<uint32_t>*> d, uint32_t dOffset);

  /// @brief Method MultiplyMod2p32pmod addr 0x242a940 size 0x130 virtual false final false
  static inline void MultiplyMod2p32pmod(::ArrayW<uint32_t, ::Array<uint32_t>*> x, int32_t xOffset, int32_t xLen, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, int32_t yOffest, int32_t yLen,
                                         ::ArrayW<uint32_t, ::Array<uint32_t>*> d, int32_t dOffset, int32_t mod);

  /// @brief Method modInverse addr 0x242b228 size 0xc0 virtual false final false
  static inline uint32_t modInverse(::Mono::Math::BigInteger* bi, uint32_t modulus);

  /// @brief Method modInverse addr 0x2429eb0 size 0x4f0 virtual false final false
  static inline ::Mono::Math::BigInteger* modInverse(::Mono::Math::BigInteger* bi, ::Mono::Math::BigInteger* modulus);

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__Kernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BigInteger__Kernel(__BigInteger__Kernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BigInteger__Kernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BigInteger__Kernel(__BigInteger__Kernel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BigInteger__Kernel();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::__BigInteger__Kernel, 0x10>, "Size mismatch!");

} // namespace Mono::Math
// Type: Mono.Math::BigInteger
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Math {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2290))
// CS Name: ::Mono.Math::BigInteger*
class CORDL_TYPE BigInteger : public ::System::Object {
public:
  // Declarations
  using Kernel = ::Mono::Math::__BigInteger__Kernel;

  using ModulusRing = ::Mono::Math::__BigInteger__ModulusRing;

  using Sign = ::Mono::Math::__BigInteger__Sign;

  /// @brief Field length, offset 0x10, size 0x4
  __declspec(property(get = __get_length, put = __set_length)) uint32_t length;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::ArrayW<uint32_t, ::Array<uint32_t>*> data;

  /// @brief Field smallPrimes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_smallPrimes, put = setStaticF_smallPrimes))::ArrayW<uint32_t, ::Array<uint32_t>*> smallPrimes;

  /// @brief Field rng, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_rng, put = setStaticF_rng))::System::Security::Cryptography::RandomNumberGenerator* rng;

  constexpr uint32_t& __get_length();

  constexpr uint32_t const& __get_length() const;

  constexpr void __set_length(uint32_t value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_data();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_data() const;

  constexpr void __set_data(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline void setStaticF_smallPrimes(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_smallPrimes();

  static inline void setStaticF_rng(::System::Security::Cryptography::RandomNumberGenerator* value);

  static inline ::System::Security::Cryptography::RandomNumberGenerator* getStaticF_rng();

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::__BigInteger__Sign sign, uint32_t len);

  /// @brief Method .ctor addr 0x24284e4 size 0x74 virtual false final false
  inline void _ctor(::Mono::Math::__BigInteger__Sign sign, uint32_t len);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi);

  /// @brief Method .ctor addr 0x2428558 size 0xc0 virtual false final false
  inline void _ctor(::Mono::Math::BigInteger* bi);

  static inline ::Mono::Math::BigInteger* New_ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  /// @brief Method .ctor addr 0x2428618 size 0xd4 virtual false final false
  inline void _ctor(::Mono::Math::BigInteger* bi, uint32_t len);

  static inline ::Mono::Math::BigInteger* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  /// @brief Method .ctor addr 0x242385c size 0x23c virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> inData);

  static inline ::Mono::Math::BigInteger* New_ctor(uint32_t ui);

  /// @brief Method .ctor addr 0x2428744 size 0x88 virtual false final false
  inline void _ctor(uint32_t ui);

  /// @brief Method op_Implicit addr 0x2422f4c size 0x60 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(uint32_t value);

  /// @brief Method op_Implicit addr 0x24232fc size 0xb0 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Implicit___Mono__Math__BigInteger_(int32_t value);

  /// @brief Method op_Subtraction addr 0x24233ac size 0x180 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Modulus addr 0x2423018 size 0x4 virtual false final false
  static inline uint32_t op_Modulus(::Mono::Math::BigInteger* bi, uint32_t ui);

  /// @brief Method op_Modulus addr 0x2423530 size 0x2c virtual false final false
  static inline ::Mono::Math::BigInteger* op_Modulus(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Division addr 0x24274c8 size 0x28 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Multiply addr 0x24230cc size 0x1b0 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Multiply addr 0x2427390 size 0xf4 virtual false final false
  static inline ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi, int32_t i);

  /// @brief Method op_LeftShift addr 0x2429160 size 0x4 virtual false final false
  static inline ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method op_RightShift addr 0x2429334 size 0x4 virtual false final false
  static inline ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* bi1, int32_t shiftVal);

  /// @brief Method get_Rng addr 0x24294b4 size 0xa8 virtual false final false
  static inline ::System::Security::Cryptography::RandomNumberGenerator* get_Rng();

  /// @brief Method GenerateRandom addr 0x242955c size 0x164 virtual false final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits, ::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method GenerateRandom addr 0x2426ff4 size 0x5c virtual false final false
  static inline ::Mono::Math::BigInteger* GenerateRandom(int32_t bits);

  /// @brief Method Randomize addr 0x24296c0 size 0x184 virtual false final false
  inline void Randomize(::System::Security::Cryptography::RandomNumberGenerator* rng);

  /// @brief Method Randomize addr 0x2427050 size 0x5c virtual false final false
  inline void Randomize();

  /// @brief Method BitCount addr 0x242327c size 0x6c virtual false final false
  inline int32_t BitCount();

  /// @brief Method TestBit addr 0x2427484 size 0x44 virtual false final false
  inline bool TestBit(uint32_t bitNum);

  /// @brief Method TestBit addr 0x2429844 size 0x98 virtual false final false
  inline bool TestBit(int32_t bitNum);

  /// @brief Method SetBit addr 0x24298dc size 0x8 virtual false final false
  inline void SetBit(uint32_t bitNum);

  /// @brief Method SetBit addr 0x24298e4 size 0x5c virtual false final false
  inline void SetBit(uint32_t bitNum, bool value);

  /// @brief Method LowestSetBit addr 0x2429940 size 0x7c virtual false final false
  inline int32_t LowestSetBit();

  /// @brief Method GetBytes addr 0x2423f44 size 0x12c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetBytes();

  /// @brief Method op_Equality addr 0x24270ac size 0x6c virtual false final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_Inequality addr 0x24278c4 size 0x6c virtual false final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, uint32_t ui);

  /// @brief Method op_Equality addr 0x24236a0 size 0xb0 virtual false final false
  static inline bool op_Equality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_Inequality addr 0x242301c size 0xb0 virtual false final false
  static inline bool op_Inequality(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_GreaterThan addr 0x24299bc size 0x18 virtual false final false
  static inline bool op_GreaterThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_LessThan addr 0x24232e8 size 0x14 virtual false final false
  static inline bool op_LessThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_GreaterThanOrEqual addr 0x2427118 size 0x18 virtual false final false
  static inline bool op_GreaterThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method op_LessThanOrEqual addr 0x24274f0 size 0x18 virtual false final false
  static inline bool op_LessThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2);

  /// @brief Method ToString addr 0x24299d4 size 0x58 virtual false final false
  inline ::StringW ToString(uint32_t radix);

  /// @brief Method ToString addr 0x2429a2c size 0x22c virtual false final false
  inline ::StringW ToString(uint32_t radix, ::StringW characterSet);

  /// @brief Method Normalize addr 0x24286ec size 0x58 virtual false final false
  inline void Normalize();

  /// @brief Method Clear addr 0x2423bc0 size 0x50 virtual false final false
  inline void Clear();

  /// @brief Method GetHashCode addr 0x2429d10 size 0x58 virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method ToString addr 0x2429d68 size 0x8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2429d70 size 0x140 virtual true final false
  inline bool Equals(::System::Object* o);

  /// @brief Method ModInverse addr 0x242352c size 0x4 virtual false final false
  inline ::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* modulus);

  /// @brief Method ModPow addr 0x2423a98 size 0x78 virtual false final false
  inline ::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger* exp, ::Mono::Math::BigInteger* n);

  /// @brief Method IsProbablePrime addr 0x24271f4 size 0x19c virtual false final false
  inline bool IsProbablePrime();

  /// @brief Method GeneratePseudoPrime addr 0x2422fac size 0x6c virtual false final false
  static inline ::Mono::Math::BigInteger* GeneratePseudoPrime(int32_t bits);

  /// @brief Method Incr2 addr 0x242a5cc size 0x84 virtual false final false
  inline void Incr2();

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BigInteger(BigInteger&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BigInteger", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BigInteger(BigInteger const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BigInteger();

public:
  /// @brief Field length, offset: 0x10, size: 0x4, def value: None
  uint32_t ___length;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Math::BigInteger, 0x20>, "Size mismatch!");

} // namespace Mono::Math
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__Sign, "Mono.Math", "BigInteger/Sign");
NEED_NO_BOX(::Mono::Math::BigInteger);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::BigInteger*, "Mono.Math", "BigInteger");
NEED_NO_BOX(::Mono::Math::__BigInteger__Kernel);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__Kernel*, "Mono.Math", "BigInteger/Kernel");
NEED_NO_BOX(::Mono::Math::__BigInteger__ModulusRing);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Math::__BigInteger__ModulusRing*, "Mono.Math", "BigInteger/ModulusRing");
