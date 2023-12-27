#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Ed448)
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed448__PointPrecomp;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed448__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed448__Algorithm;
}
namespace System {
class Object;
}
namespace Org::BouncyCastle::Crypto {
class IXof;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Security {
class SecureRandom;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
struct __Ed448__Algorithm;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class Ed448;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed448__PointExt;
}
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
class __Ed448__PointPrecomp;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp);
// Type: ::Algorithm
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1561))
// CS Name: ::Ed448::Algorithm
struct CORDL_TYPE __Ed448__Algorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Ed448__Algorithm_Unwrapped
  enum struct ____Ed448__Algorithm_Unwrapped : int32_t {
    __E_Ed448 = static_cast<int32_t>(0x0),
    __E_Ed448ph = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Ed448__Algorithm_Unwrapped() const noexcept {
    return static_cast<____Ed448__Algorithm_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Ed448__Algorithm(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed448__Algorithm();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Ed448 value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm const Ed448;

  /// @brief Field Ed448ph value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm const Ed448ph;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointExt
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1562))
// CS Name: ::Ed448::PointExt*
class CORDL_TYPE __Ed448__PointExt : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __get_y, put = __set_y))::ArrayW<uint32_t, ::Array<uint32_t>*> y;

  /// @brief Field z, offset 0x20, size 0x8
  __declspec(property(get = __get_z, put = __set_z))::ArrayW<uint32_t, ::Array<uint32_t>*> z;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_y();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_y() const;

  constexpr void __set_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_z();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_z() const;

  constexpr void __set_z(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* New_ctor();

  /// @brief Method .ctor addr 0x1047da0 size 0x3c virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed448__PointExt", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed448__PointExt(__Ed448__PointExt&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed448__PointExt", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed448__PointExt(__Ed448__PointExt const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed448__PointExt();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___y;

  /// @brief Field z, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___z;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: ::PointPrecomp
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1563))
// CS Name: ::Ed448::PointPrecomp*
class CORDL_TYPE __Ed448__PointPrecomp : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Field y, offset 0x18, size 0x8
  __declspec(property(get = __get_y, put = __set_y))::ArrayW<uint32_t, ::Array<uint32_t>*> y;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_y();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_y() const;

  constexpr void __set_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* New_ctor();

  /// @brief Method .ctor addr 0x1049070 size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Ed448__PointPrecomp", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Ed448__PointPrecomp(__Ed448__PointPrecomp&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Ed448__PointPrecomp", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Ed448__PointPrecomp(__Ed448__PointPrecomp const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Ed448__PointPrecomp();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  /// @brief Field y, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___y;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
// Type: Org.BouncyCastle.Math.EC.Rfc8032::Ed448
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Rfc8032 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1564))
// CS Name: ::Org.BouncyCastle.Math.EC.Rfc8032::Ed448*
class CORDL_TYPE Ed448 : public ::System::Object {
public:
  // Declarations
  using PointPrecomp = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp;

  using PointExt = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt;

  using Algorithm = ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm;

  /// @brief Field PrehashSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PrehashSize, put = setStaticF_PrehashSize)) int32_t PrehashSize;

  /// @brief Field PublicKeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_PublicKeySize, put = setStaticF_PublicKeySize)) int32_t PublicKeySize;

  /// @brief Field SecretKeySize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SecretKeySize, put = setStaticF_SecretKeySize)) int32_t SecretKeySize;

  /// @brief Field SignatureSize, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_SignatureSize, put = setStaticF_SignatureSize)) int32_t SignatureSize;

  /// @brief Field Dom4Prefix, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Dom4Prefix, put = setStaticF_Dom4Prefix))::ArrayW<uint8_t, ::Array<uint8_t>*> Dom4Prefix;

  /// @brief Field P, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_P, put = setStaticF_P))::ArrayW<uint32_t, ::Array<uint32_t>*> P;

  /// @brief Field L, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_L, put = setStaticF_L))::ArrayW<uint32_t, ::Array<uint32_t>*> L;

  /// @brief Field N, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_N, put = setStaticF_N))::Org::BouncyCastle::Math::BigInteger* N;

  /// @brief Field B_x, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_B_x, put = setStaticF_B_x))::ArrayW<uint32_t, ::Array<uint32_t>*> B_x;

  /// @brief Field B_y, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_B_y, put = setStaticF_B_y))::ArrayW<uint32_t, ::Array<uint32_t>*> B_y;

  /// @brief Field precompLock, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_precompLock, put = setStaticF_precompLock))::System::Object* precompLock;

  /// @brief Field precompBaseTable, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_precompBaseTable,
      put = setStaticF_precompBaseTable))::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*> precompBaseTable;

  /// @brief Field precompBase, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_precompBase, put = setStaticF_precompBase))::ArrayW<uint32_t, ::Array<uint32_t>*> precompBase;

  static inline void setStaticF_PrehashSize(int32_t value);

  static inline int32_t getStaticF_PrehashSize();

  static inline void setStaticF_PublicKeySize(int32_t value);

  static inline int32_t getStaticF_PublicKeySize();

  static inline void setStaticF_SecretKeySize(int32_t value);

  static inline int32_t getStaticF_SecretKeySize();

  static inline void setStaticF_SignatureSize(int32_t value);

  static inline int32_t getStaticF_SignatureSize();

  static inline void setStaticF_Dom4Prefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_Dom4Prefix();

  static inline void setStaticF_P(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_P();

  static inline void setStaticF_L(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_L();

  static inline void setStaticF_N(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_N();

  static inline void setStaticF_B_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_B_x();

  static inline void setStaticF_B_y(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_B_y();

  static inline void setStaticF_precompLock(::System::Object* value);

  static inline ::System::Object* getStaticF_precompLock();

  static inline void setStaticF_precompBaseTable(::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*> value);

  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*> getStaticF_precompBaseTable();

  static inline void setStaticF_precompBase(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  static inline ::ArrayW<uint32_t, ::Array<uint32_t>*> getStaticF_precompBase();

  /// @brief Method CalculateS addr 0x10451f4 size 0x198 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> CalculateS(::ArrayW<uint8_t, ::Array<uint8_t>*> r, ::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> s);

  /// @brief Method CheckContextVar addr 0x1045d04 size 0x14 virtual false final false
  static inline bool CheckContextVar(::ArrayW<uint8_t, ::Array<uint8_t>*> ctx);

  /// @brief Method CheckPoint addr 0x1045d18 size 0xd8 virtual false final false
  static inline int32_t CheckPoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method CheckPoint addr 0x1045df0 size 0x12c virtual false final false
  static inline int32_t CheckPoint(::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y, ::ArrayW<uint32_t, ::Array<uint32_t>*> z);

  /// @brief Method CheckPointVar addr 0x1045f1c size 0xe0 virtual false final false
  static inline bool CheckPointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p);

  /// @brief Method CheckScalarVar addr 0x10460cc size 0xd4 virtual false final false
  static inline bool CheckScalarVar(::ArrayW<uint8_t, ::Array<uint8_t>*> s);

  /// @brief Method CreatePrehash addr 0x10461a0 size 0x4c virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IXof* CreatePrehash();

  /// @brief Method CreateXof addr 0x10461ec size 0x60 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::IXof* CreateXof();

  /// @brief Method Decode16 addr 0x104624c size 0x40 virtual false final false
  static inline uint32_t Decode16(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode24 addr 0x104628c size 0x54 virtual false final false
  static inline uint32_t Decode24(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode32 addr 0x10462e0 size 0x68 virtual false final false
  static inline uint32_t Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Decode32 addr 0x1045ffc size 0xd0 virtual false final false
  static inline void Decode32(::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t bsOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t nOff, int32_t nLen);

  /// @brief Method DecodePointVar addr 0x1046348 size 0x200 virtual false final false
  static inline bool DecodePointVar(::ArrayW<uint8_t, ::Array<uint8_t>*> p, int32_t pOff, bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method DecodeScalar addr 0x104538c size 0x74 virtual false final false
  static inline void DecodeScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> n);

  /// @brief Method Dom4 addr 0x1046564 size 0x230 virtual false final false
  static inline void Dom4(::Org::BouncyCastle::Crypto::IXof* d, uint8_t x, ::ArrayW<uint8_t, ::Array<uint8_t>*> y);

  /// @brief Method Encode24 addr 0x1046794 size 0x64 virtual false final false
  static inline void Encode24(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode32 addr 0x1045400 size 0x80 virtual false final false
  static inline void Encode32(uint32_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method Encode56 addr 0x10467f8 size 0x7c virtual false final false
  static inline void Encode56(uint64_t n, ::ArrayW<uint8_t, ::Array<uint8_t>*> bs, int32_t off);

  /// @brief Method EncodePoint addr 0x1046874 size 0x134 virtual false final false
  static inline int32_t EncodePoint(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method GeneratePrivateKey addr 0x10469a8 size 0x1c virtual false final false
  static inline void GeneratePrivateKey(::Org::BouncyCastle::Security::SecureRandom* random, ::ArrayW<uint8_t, ::Array<uint8_t>*> k);

  /// @brief Method GeneratePublicKey addr 0x10469c4 size 0x1e0 virtual false final false
  static inline void GeneratePublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff);

  /// @brief Method GetWnafVar addr 0x1046cec size 0x1b8 virtual false final false
  static inline ::ArrayW<int8_t, ::Array<int8_t>*> GetWnafVar(::ArrayW<uint32_t, ::Array<uint32_t>*> n, int32_t width);

  /// @brief Method ImplSign addr 0x1046ea4 size 0x474 virtual false final false
  static inline void ImplSign(::Org::BouncyCastle::Crypto::IXof* d, ::ArrayW<uint8_t, ::Array<uint8_t>*> h, ::ArrayW<uint8_t, ::Array<uint8_t>*> s, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk,
                              int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplSign addr 0x1047318 size 0x2c0 virtual false final false
  static inline void ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff,
                              int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplSign addr 0x10475d8 size 0x2b0 virtual false final false
  static inline void ImplSign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, uint8_t phflag,
                              ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method ImplVerify addr 0x1047888 size 0x518 virtual false final false
  static inline bool ImplVerify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                uint8_t phflag, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen);

  /// @brief Method PointAddVar addr 0x1047f98 size 0x264 virtual false final false
  static inline void PointAddVar(bool negate, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method PointAddPrecomp addr 0x10481fc size 0x1f8 virtual false final false
  static inline void PointAddPrecomp(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* p, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method PointCopy addr 0x10483f4 size 0xa8 virtual false final false
  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* PointCopy(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p);

  /// @brief Method PointDouble addr 0x104849c size 0x17c virtual false final false
  static inline void PointDouble(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method PointExtendXY addr 0x1046548 size 0x1c virtual false final false
  static inline void PointExtendXY(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p);

  /// @brief Method PointLookup addr 0x1048618 size 0xdc virtual false final false
  static inline void PointLookup(int32_t block, int32_t index, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp* p);

  /// @brief Method PointPrecompVar addr 0x10486f4 size 0x17c virtual false final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, ::Array<::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*>*>
  PointPrecompVar(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p, int32_t count);

  /// @brief Method PointSetNeutral addr 0x1048870 size 0x38 virtual false final false
  static inline void PointSetNeutral(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p);

  /// @brief Method Precompute addr 0x10488a8 size 0x5b4 virtual false final false
  static inline void Precompute();

  /// @brief Method PruneScalar addr 0x1046ba4 size 0x60 virtual false final false
  static inline void PruneScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n, int32_t nOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> r);

  /// @brief Method ReduceScalar addr 0x1045480 size 0x884 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> ReduceScalar(::ArrayW<uint8_t, ::Array<uint8_t>*> n);

  /// @brief Method ScalarMultBase addr 0x1048e5c size 0x214 virtual false final false
  static inline void ScalarMultBase(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method ScalarMultBaseEncoded addr 0x1046c04 size 0xe8 virtual false final false
  static inline void ScalarMultBaseEncoded(::ArrayW<uint8_t, ::Array<uint8_t>*> k, ::ArrayW<uint8_t, ::Array<uint8_t>*> r, int32_t rOff);

  /// @brief Method ScalarMultBaseXY addr 0x10490a0 size 0x154 virtual false final false
  static inline void ScalarMultBaseXY(::ArrayW<uint8_t, ::Array<uint8_t>*> k, int32_t kOff, ::ArrayW<uint32_t, ::Array<uint32_t>*> x, ::ArrayW<uint32_t, ::Array<uint32_t>*> y);

  /// @brief Method ScalarMultStrausVar addr 0x1047ddc size 0x1bc virtual false final false
  static inline void ScalarMultStrausVar(::ArrayW<uint32_t, ::Array<uint32_t>*> nb, ::ArrayW<uint32_t, ::Array<uint32_t>*> np, ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* p,
                                         ::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt* r);

  /// @brief Method Sign addr 0x10491f4 size 0xbc virtual false final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Sign addr 0x10492b0 size 0xcc virtual false final false
  static inline void Sign(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                          ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash addr 0x104937c size 0xb8 virtual false final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash addr 0x1049434 size 0xd4 virtual false final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash addr 0x1049508 size 0x1cc virtual false final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx, ::Org::BouncyCastle::Crypto::IXof* ph,
                                 ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method SignPrehash addr 0x10496d4 size 0x1e8 virtual false final false
  static inline void SignPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sk, int32_t skOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                 ::Org::BouncyCastle::Crypto::IXof* ph, ::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  /// @brief Method Verify addr 0x10498bc size 0xc0 virtual false final false
  static inline bool Verify(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                            ::ArrayW<uint8_t, ::Array<uint8_t>*> m, int32_t mOff, int32_t mLen);

  /// @brief Method VerifyPrehash addr 0x104997c size 0xc0 virtual false final false
  static inline bool VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                   ::ArrayW<uint8_t, ::Array<uint8_t>*> ph, int32_t phOff);

  /// @brief Method VerifyPrehash addr 0x1049a3c size 0x1d4 virtual false final false
  static inline bool VerifyPrehash(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> pk, int32_t pkOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> ctx,
                                   ::Org::BouncyCastle::Crypto::IXof* ph);

  static inline ::Org::BouncyCastle::Math::EC::Rfc8032::Ed448* New_ctor();

  /// @brief Method .ctor addr 0x1049e00 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "Ed448", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Ed448(Ed448&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Ed448", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Ed448(Ed448 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Ed448();

public:
  /// @brief Field M26UL offset 0xffffffff size 0x8
  static constexpr uint64_t M26UL{ static_cast<uint64_t>(0x3ffffffu) };

  /// @brief Field M28UL offset 0xffffffff size 0x8
  static constexpr uint64_t M28UL{ static_cast<uint64_t>(0xfffffffu) };

  /// @brief Field PointBytes offset 0xffffffff size 0x4
  static constexpr int32_t PointBytes{ static_cast<int32_t>(0x39) };

  /// @brief Field ScalarUints offset 0xffffffff size 0x4
  static constexpr int32_t ScalarUints{ static_cast<int32_t>(0xe) };

  /// @brief Field ScalarBytes offset 0xffffffff size 0x4
  static constexpr int32_t ScalarBytes{ static_cast<int32_t>(0x39) };

  /// @brief Field L_0 offset 0xffffffff size 0x4
  static constexpr int32_t L_0{ static_cast<int32_t>(0x4a7bb0d) };

  /// @brief Field L_1 offset 0xffffffff size 0x4
  static constexpr int32_t L_1{ static_cast<int32_t>(0x873d6d5) };

  /// @brief Field L_2 offset 0xffffffff size 0x4
  static constexpr int32_t L_2{ static_cast<int32_t>(0xa70aadc) };

  /// @brief Field L_3 offset 0xffffffff size 0x4
  static constexpr int32_t L_3{ static_cast<int32_t>(0x3d8d723) };

  /// @brief Field L_4 offset 0xffffffff size 0x4
  static constexpr int32_t L_4{ static_cast<int32_t>(0x96fde93) };

  /// @brief Field L_5 offset 0xffffffff size 0x4
  static constexpr int32_t L_5{ static_cast<int32_t>(0xb65129c) };

  /// @brief Field L_6 offset 0xffffffff size 0x4
  static constexpr int32_t L_6{ static_cast<int32_t>(0x63bb124) };

  /// @brief Field L_7 offset 0xffffffff size 0x4
  static constexpr int32_t L_7{ static_cast<int32_t>(0x8335dc1) };

  /// @brief Field L4_0 offset 0xffffffff size 0x4
  static constexpr int32_t L4_0{ static_cast<int32_t>(0x29eec34) };

  /// @brief Field L4_1 offset 0xffffffff size 0x4
  static constexpr int32_t L4_1{ static_cast<int32_t>(0x1cf5b55) };

  /// @brief Field L4_2 offset 0xffffffff size 0x4
  static constexpr int32_t L4_2{ static_cast<int32_t>(0x9c2ab72) };

  /// @brief Field L4_3 offset 0xffffffff size 0x4
  static constexpr int32_t L4_3{ static_cast<int32_t>(0xf635c8e) };

  /// @brief Field L4_4 offset 0xffffffff size 0x4
  static constexpr int32_t L4_4{ static_cast<int32_t>(0x5bf7a4c) };

  /// @brief Field L4_5 offset 0xffffffff size 0x4
  static constexpr int32_t L4_5{ static_cast<int32_t>(0xd944a72) };

  /// @brief Field L4_6 offset 0xffffffff size 0x4
  static constexpr int32_t L4_6{ static_cast<int32_t>(0x8eec492) };

  /// @brief Field L4_7 offset 0xffffffff size 0x4
  static constexpr int32_t L4_7{ static_cast<int32_t>(0x20cd7705) };

  /// @brief Field C_d offset 0xffffffff size 0x4
  static constexpr int32_t C_d{ static_cast<int32_t>(0xffff6757) };

  /// @brief Field WnafWidthBase offset 0xffffffff size 0x4
  static constexpr int32_t WnafWidthBase{ static_cast<int32_t>(0x7) };

  /// @brief Field PrecompBlocks offset 0xffffffff size 0x4
  static constexpr int32_t PrecompBlocks{ static_cast<int32_t>(0x5) };

  /// @brief Field PrecompTeeth offset 0xffffffff size 0x4
  static constexpr int32_t PrecompTeeth{ static_cast<int32_t>(0x5) };

  /// @brief Field PrecompSpacing offset 0xffffffff size 0x4
  static constexpr int32_t PrecompSpacing{ static_cast<int32_t>(0x12) };

  /// @brief Field PrecompPoints offset 0xffffffff size 0x4
  static constexpr int32_t PrecompPoints{ static_cast<int32_t>(0x10) };

  /// @brief Field PrecompMask offset 0xffffffff size 0x4
  static constexpr int32_t PrecompMask{ static_cast<int32_t>(0xf) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Rfc8032::Ed448, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Rfc8032
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__Algorithm, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/Algorithm");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::Ed448*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointExt*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointExt");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Rfc8032::__Ed448__PointPrecomp*, "Org.BouncyCastle.Math.EC.Rfc8032", "Ed448/PointPrecomp");
