#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/Raw/Nat.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Nat)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::Raw {
class Nat;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::Raw::Nat);
// Type: Org.BouncyCastle.Math.Raw::Nat
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::Raw {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.Raw::Nat*
class CORDL_TYPE Nat : public ::System::Object {
public:
// Declarations
/// @brief Method Add, addr 0x2491da8, size 0x94, virtual false, abstract: false, final false
static inline uint32_t Add(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Add33At, addr 0x24921f0, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t Add33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method Add33At, addr 0x2492124, size 0x74, virtual false, abstract: false, final false
static inline uint32_t Add33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Add33To, addr 0x24922cc, size 0x64, virtual false, abstract: false, final false
static inline uint32_t Add33To(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Add33To, addr 0x2492330, size 0x78, virtual false, abstract: false, final false
static inline uint32_t Add33To(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddBothTo, addr 0x2492444, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddBothTo, addr 0x24923a8, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t AddBothTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddDWordAt, addr 0x249256c, size 0x80, virtual false, abstract: false, final false
static inline uint32_t AddDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method AddDWordAt, addr 0x24924f4, size 0x78, virtual false, abstract: false, final false
static inline uint32_t AddDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method AddDWordTo, addr 0x24925ec, size 0x68, virtual false, abstract: false, final false
static inline uint32_t AddDWordTo(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddDWordTo, addr 0x2492654, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t AddDWordTo(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddTo, addr 0x24926d0, size 0x90, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method AddTo, addr 0x2492760, size 0x88, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  cIn) ;

/// @brief Method AddTo, addr 0x2491f1c, size 0x80, virtual false, abstract: false, final false
static inline uint32_t AddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddToEachOther, addr 0x24927e8, size 0x94, virtual false, abstract: false, final false
static inline uint32_t AddToEachOther(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  u, int32_t  uOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  v, int32_t  vOff) ;

/// @brief Method AddWordAt, addr 0x24928d0, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t AddWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method AddWordAt, addr 0x249287c, size 0x54, virtual false, abstract: false, final false
static inline uint32_t AddWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method AddWordTo, addr 0x249292c, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t AddWordTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method AddWordTo, addr 0x2492978, size 0x58, virtual false, abstract: false, final false
static inline uint32_t AddWordTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CAdd, addr 0x24929d0, size 0xa4, virtual false, abstract: false, final false
static inline uint32_t CAdd(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method CMov, addr 0x2492afc, size 0x88, virtual false, abstract: false, final false
static inline void CMov(int32_t  len, int32_t  mask, ::ArrayW<int32_t,::Array<int32_t>*>  x, int32_t  xOff, ::ArrayW<int32_t,::Array<int32_t>*>  z, int32_t  zOff) ;

/// @brief Method CMov, addr 0x2492a74, size 0x88, virtual false, abstract: false, final false
static inline void CMov(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CSub, addr 0x2492e48, size 0xb8, virtual false, abstract: false, final false
static inline int32_t CSub(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method CSub, addr 0x2492da4, size 0xa4, virtual false, abstract: false, final false
static inline int32_t CSub(int32_t  len, int32_t  mask, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Compare, addr 0x2492bf4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Compare(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method Compare, addr 0x2492b84, size 0x70, virtual false, abstract: false, final false
static inline int32_t Compare(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Copy, addr 0x24918e4, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Copy, addr 0x2492c88, size 0x20, virtual false, abstract: false, final false
static inline void Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy, addr 0x2492c70, size 0x18, virtual false, abstract: false, final false
static inline void Copy(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Copy64, addr 0x2492ca8, size 0x7c, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x) ;

/// @brief Method Copy64, addr 0x2492d3c, size 0x20, virtual false, abstract: false, final false
static inline void Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method Copy64, addr 0x2492d24, size 0x18, virtual false, abstract: false, final false
static inline void Copy64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, ::ArrayW<uint64_t,::Array<uint64_t>*>  z) ;

/// @brief Method Create, addr 0x2491960, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Create(int32_t  len) ;

/// @brief Method Create64, addr 0x2492d5c, size 0x48, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Create64(int32_t  len) ;

/// @brief Method Dec, addr 0x2492f5c, size 0xd4, virtual false, abstract: false, final false
static inline int32_t Dec(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Dec, addr 0x2492f00, size 0x5c, virtual false, abstract: false, final false
static inline int32_t Dec(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method DecAt, addr 0x2493088, size 0x60, virtual false, abstract: false, final false
static inline int32_t DecAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method DecAt, addr 0x2493030, size 0x58, virtual false, abstract: false, final false
static inline int32_t DecAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Eq, addr 0x24930e8, size 0x5c, virtual false, abstract: false, final false
static inline bool Eq(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method FromBigInteger, addr 0x2493144, size 0xe4, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> FromBigInteger(int32_t  bits, ::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method FromBigInteger64, addr 0x2493228, size 0xe4, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> FromBigInteger64(int32_t  bits, ::Org::BouncyCastle::Math::BigInteger*  x) ;

/// @brief Method GetBit, addr 0x249330c, size 0x60, virtual false, abstract: false, final false
static inline uint32_t GetBit(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bit) ;

/// @brief Method Gte, addr 0x2491b1c, size 0x68, virtual false, abstract: false, final false
static inline bool Gte(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Inc, addr 0x24933c8, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t Inc(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Inc, addr 0x249336c, size 0x5c, virtual false, abstract: false, final false
static inline uint32_t Inc(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method IncAt, addr 0x249226c, size 0x60, virtual false, abstract: false, final false
static inline uint32_t IncAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method IncAt, addr 0x2492198, size 0x58, virtual false, abstract: false, final false
static inline uint32_t IncAt(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method IsOne, addr 0x249186c, size 0x78, virtual false, abstract: false, final false
static inline bool IsOne(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method IsZero, addr 0x24917f8, size 0x74, virtual false, abstract: false, final false
static inline bool IsZero(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method LessThan, addr 0x2493518, size 0x8c, virtual false, abstract: false, final false
static inline int32_t LessThan(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff) ;

/// @brief Method LessThan, addr 0x249349c, size 0x7c, virtual false, abstract: false, final false
static inline int32_t LessThan(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y) ;

/// @brief Method Mul, addr 0x2493788, size 0x11c, virtual false, abstract: false, final false
static inline void Mul(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul, addr 0x24935a4, size 0xe8, virtual false, abstract: false, final false
static inline void Mul(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method Mul, addr 0x2493924, size 0x124, virtual false, abstract: false, final false
static inline void Mul(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, int32_t  yLen, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Mul31BothAdd, addr 0x2493c00, size 0xb0, virtual false, abstract: false, final false
static inline uint32_t Mul31BothAdd(int32_t  len, uint32_t  a, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  b, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulAddTo, addr 0x2493b1c, size 0xe4, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method MulAddTo, addr 0x2493a48, size 0xd4, virtual false, abstract: false, final false
static inline uint32_t MulAddTo(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method MulWord, addr 0x24938a4, size 0x80, virtual false, abstract: false, final false
static inline uint32_t MulWord(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWord, addr 0x249368c, size 0x74, virtual false, abstract: false, final false
static inline uint32_t MulWord(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method MulWordAddTo, addr 0x2493700, size 0x88, virtual false, abstract: false, final false
static inline uint32_t MulWordAddTo(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method MulWordDwordAddAt, addr 0x2493cb0, size 0x9c, virtual false, abstract: false, final false
static inline uint32_t MulWordDwordAddAt(int32_t  len, uint32_t  x, uint64_t  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

static inline ::Org::BouncyCastle::Math::Raw::Nat* New_ctor() ;

/// @brief Method ShiftDownBit, addr 0x2493da4, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftDownBit, addr 0x2493e10, size 0x70, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftDownBit, addr 0x2492058, size 0x54, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftDownBit, addr 0x2493d4c, size 0x58, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  c) ;

/// @brief Method ShiftDownBits, addr 0x2493ef4, size 0x88, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftDownBits, addr 0x2493f7c, size 0x8c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftDownBits, addr 0x2491fe8, size 0x70, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftDownBits, addr 0x2493e80, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ShiftDownBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftDownWord, addr 0x2491f9c, size 0x4c, virtual false, abstract: false, final false
static inline uint32_t ShiftDownWord(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftUpBit, addr 0x24940d4, size 0x74, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftUpBit, addr 0x2494148, size 0x84, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBit, addr 0x2494008, size 0x60, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, uint32_t  c) ;

/// @brief Method ShiftUpBit, addr 0x2494068, size 0x6c, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBit(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, uint32_t  c) ;

/// @brief Method ShiftUpBit64, addr 0x24941cc, size 0x84, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBit64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, uint64_t  c, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits, addr 0x24943dc, size 0x90, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method ShiftUpBits, addr 0x249446c, size 0xa0, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  bits, uint32_t  c, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits, addr 0x2494250, size 0x7c, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftUpBits, addr 0x24942cc, size 0x88, virtual false, abstract: false, final false
static inline uint32_t ShiftUpBits(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  bits, uint32_t  c) ;

/// @brief Method ShiftUpBits64, addr 0x249450c, size 0xa0, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBits64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  x, int32_t  xOff, int32_t  bits, uint64_t  c, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff) ;

/// @brief Method ShiftUpBits64, addr 0x2494354, size 0x88, virtual false, abstract: false, final false
static inline uint64_t ShiftUpBits64(int32_t  len, ::ArrayW<uint64_t,::Array<uint64_t>*>  z, int32_t  zOff, int32_t  bits, uint64_t  c) ;

/// @brief Method Square, addr 0x2494784, size 0x16c, virtual false, abstract: false, final false
static inline void Square(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz, int32_t  zzOff) ;

/// @brief Method Square, addr 0x24945ac, size 0x148, virtual false, abstract: false, final false
static inline void Square(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  zz) ;

/// @brief Method SquareWordAdd, addr 0x2494a14, size 0x94, virtual false, abstract: false, final false
static inline uint32_t SquareWordAdd(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SquareWordAdd, addr 0x2494984, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SquareWordAdd(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SquareWordAddTo, addr 0x24948f0, size 0x94, virtual false, abstract: false, final false
static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SquareWordAddTo, addr 0x24946f4, size 0x90, virtual false, abstract: false, final false
static inline uint32_t SquareWordAddTo(::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xPos, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub, addr 0x2494aa8, size 0xa8, virtual false, abstract: false, final false
static inline int32_t Sub(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method Sub, addr 0x2491e88, size 0x94, virtual false, abstract: false, final false
static inline int32_t Sub(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub33At, addr 0x2494bc4, size 0x7c, virtual false, abstract: false, final false
static inline int32_t Sub33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method Sub33At, addr 0x2494b50, size 0x74, virtual false, abstract: false, final false
static inline int32_t Sub33At(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method Sub33From, addr 0x2494c40, size 0x64, virtual false, abstract: false, final false
static inline int32_t Sub33From(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method Sub33From, addr 0x2494ca4, size 0x78, virtual false, abstract: false, final false
static inline int32_t Sub33From(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubBothFrom, addr 0x2494db8, size 0xb0, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, int32_t  yOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubBothFrom, addr 0x2494d1c, size 0x9c, virtual false, abstract: false, final false
static inline int32_t SubBothFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  y, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubDWordAt, addr 0x2494edc, size 0x7c, virtual false, abstract: false, final false
static inline int32_t SubDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method SubDWordAt, addr 0x2494e68, size 0x74, virtual false, abstract: false, final false
static inline int32_t SubDWordAt(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method SubDWordFrom, addr 0x2494f58, size 0x64, virtual false, abstract: false, final false
static inline int32_t SubDWordFrom(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubDWordFrom, addr 0x2494fbc, size 0x78, virtual false, abstract: false, final false
static inline int32_t SubDWordFrom(int32_t  len, uint64_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x2495034, size 0x90, virtual false, abstract: false, final false
static inline int32_t SubFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, int32_t  xOff, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method SubFrom, addr 0x2491b84, size 0x80, virtual false, abstract: false, final false
static inline int32_t SubFrom(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubWordAt, addr 0x2495118, size 0x5c, virtual false, abstract: false, final false
static inline int32_t SubWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff, int32_t  zPos) ;

/// @brief Method SubWordAt, addr 0x24950c4, size 0x54, virtual false, abstract: false, final false
static inline int32_t SubWordAt(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zPos) ;

/// @brief Method SubWordFrom, addr 0x2495174, size 0x4c, virtual false, abstract: false, final false
static inline int32_t SubWordFrom(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method SubWordFrom, addr 0x24951c0, size 0x58, virtual false, abstract: false, final false
static inline int32_t SubWordFrom(int32_t  len, uint32_t  x, ::ArrayW<uint32_t,::Array<uint32_t>*>  z, int32_t  zOff) ;

/// @brief Method ToBigInteger, addr 0x2495218, size 0xf4, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Math::BigInteger* ToBigInteger(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  x) ;

/// @brief Method Zero, addr 0x249530c, size 0x48, virtual false, abstract: false, final false
static inline void Zero(int32_t  len, ::ArrayW<uint32_t,::Array<uint32_t>*>  z) ;

/// @brief Method .ctor, addr 0x2495354, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Nat() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Nat(Nat && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Nat", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Nat(Nat const& ) = delete;

/// @brief Field M offset 0xffffffff size 0x8
static constexpr uint64_t  M{static_cast<uint64_t>(0xffffffffu)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::Raw::Nat, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Math::Raw
NEED_NO_BOX(::Org::BouncyCastle::Math::Raw::Nat);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::Raw::Nat*, "Org.BouncyCastle.Math.Raw", "Nat");
