#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Arrays.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Arrays)
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities {
class Arrays;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Arrays);
// Type: Org.BouncyCastle.Utilities::Arrays
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities::Arrays*
class CORDL_TYPE Arrays : public ::System::Object {
public:
// Declarations
/// @brief Field EmptyBytes, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_EmptyBytes, put=setStaticF_EmptyBytes)) ::ArrayW<uint8_t,::Array<uint8_t>*>  EmptyBytes;

/// @brief Field EmptyInts, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_EmptyInts, put=setStaticF_EmptyInts)) ::ArrayW<int32_t,::Array<int32_t>*>  EmptyInts;

/// @brief Method Append, addr 0x259a2e0, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t,::Array<int16_t>*> Append(::ArrayW<int16_t,::Array<int16_t>*>  a, int16_t  b) ;

/// @brief Method Append, addr 0x259a3b0, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Append(::ArrayW<int32_t,::Array<int32_t>*>  a, int32_t  b) ;

/// @brief Method Append, addr 0x259a214, size 0xcc, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Append(::ArrayW<uint8_t,::Array<uint8_t>*>  a, uint8_t  b) ;

/// @brief Method AreAllZeroes, addr 0x25987b4, size 0x6c, virtual false, abstract: false, final false
static inline bool AreAllZeroes(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method AreEqual, addr 0x2598820, size 0x80, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<bool,::Array<bool>*>  a, ::ArrayW<bool,::Array<bool>*>  b) ;

/// @brief Method AreEqual, addr 0x259891c, size 0x80, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<char16_t,::Array<char16_t>*>  a, ::ArrayW<char16_t,::Array<char16_t>*>  b) ;

/// @brief Method AreEqual, addr 0x2598ecc, size 0x80, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<int32_t,::Array<int32_t>*>  a, ::ArrayW<int32_t,::Array<int32_t>*>  b) ;

/// @brief Method AreEqual, addr 0x2598fb8, size 0x80, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<uint32_t,::Array<uint32_t>*>  a, ::ArrayW<uint32_t,::Array<uint32_t>*>  b) ;

/// @brief Method AreEqual, addr 0x2598af4, size 0xa8, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<uint8_t,::Array<uint8_t>*>  a, int32_t  aFromIndex, int32_t  aToIndex, ::ArrayW<uint8_t,::Array<uint8_t>*>  b, int32_t  bFromIndex, int32_t  bToIndex) ;

/// @brief Method AreEqual, addr 0x2598a08, size 0x80, virtual false, abstract: false, final false
static inline bool AreEqual(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method AreSame, addr 0x2598b9c, size 0x64, virtual false, abstract: false, final false
static inline bool AreSame(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method Clear, addr 0x259ab60, size 0x18, virtual false, abstract: false, final false
static inline void Clear(::ArrayW<int32_t,::Array<int32_t>*>  data) ;

/// @brief Method Clear, addr 0x259ab48, size 0x18, virtual false, abstract: false, final false
static inline void Clear(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Clone, addr 0x259941c, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<bool,::Array<bool>*> Clone(::ArrayW<bool,::Array<bool>*>  data) ;

/// @brief Method Clone, addr 0x259950c, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Clone(::ArrayW<int32_t,::Array<int32_t>*>  data) ;

/// @brief Method Clone, addr 0x25995fc, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> Clone(::ArrayW<int64_t,::Array<int64_t>*>  data) ;

/// @brief Method Clone, addr 0x2599584, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint32_t,::Array<uint32_t>*> Clone(::ArrayW<uint32_t,::Array<uint32_t>*>  data) ;

/// @brief Method Clone, addr 0x2599674, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Clone(::ArrayW<uint64_t,::Array<uint64_t>*>  data) ;

/// @brief Method Clone, addr 0x259978c, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint64_t,::Array<uint64_t>*> Clone(::ArrayW<uint64_t,::Array<uint64_t>*>  data, ::ArrayW<uint64_t,::Array<uint64_t>*>  existing) ;

/// @brief Method Clone, addr 0x2599494, size 0x78, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Clone(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Clone, addr 0x25996ec, size 0xa0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Clone(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::ArrayW<uint8_t,::Array<uint8_t>*>  existing) ;

/// @brief Method Concatenate, addr 0x259a6e0, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Concatenate(::ArrayW<int32_t,::Array<int32_t>*>  a, ::ArrayW<int32_t,::Array<int32_t>*>  b) ;

/// @brief Method Concatenate, addr 0x259a480, size 0xf4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Concatenate(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method ConcatenateAll, addr 0x259a574, size 0x16c, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ConcatenateAll(::ArrayW<::ArrayW<uint8_t,::Array<uint8_t>*>,::Array<::ArrayW<uint8_t,::Array<uint8_t>*>>*>  vs) ;

/// @brief Method ConstantTimeAreEqual, addr 0x2598c00, size 0x10c, virtual false, abstract: false, final false
static inline bool ConstantTimeAreEqual(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method ConstantTimeAreEqual, addr 0x2598d0c, size 0x1c0, virtual false, abstract: false, final false
static inline bool ConstantTimeAreEqual(int32_t  len, ::ArrayW<uint8_t,::Array<uint8_t>*>  a, int32_t  aOff, ::ArrayW<uint8_t,::Array<uint8_t>*>  b, int32_t  bOff) ;

/// @brief Method Contains, addr 0x2599888, size 0x5c, virtual false, abstract: false, final false
static inline bool Contains(::ArrayW<int16_t,::Array<int16_t>*>  a, int16_t  n) ;

/// @brief Method Contains, addr 0x25998e4, size 0x5c, virtual false, abstract: false, final false
static inline bool Contains(::ArrayW<int32_t,::Array<int32_t>*>  a, int32_t  n) ;

/// @brief Method Contains, addr 0x259982c, size 0x5c, virtual false, abstract: false, final false
static inline bool Contains(::ArrayW<uint8_t,::Array<uint8_t>*>  a, uint8_t  n) ;

/// @brief Method CopyOf, addr 0x2599cc8, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> CopyOf(::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  data, int32_t  newLength) ;

/// @brief Method CopyOf, addr 0x2599aa0, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> CopyOf(::ArrayW<char16_t,::Array<char16_t>*>  data, int32_t  newLength) ;

/// @brief Method CopyOf, addr 0x2599b58, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> CopyOf(::ArrayW<int32_t,::Array<int32_t>*>  data, int32_t  newLength) ;

/// @brief Method CopyOf, addr 0x2599c10, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> CopyOf(::ArrayW<int64_t,::Array<int64_t>*>  data, int32_t  newLength) ;

/// @brief Method CopyOf, addr 0x25999e8, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CopyOf(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  newLength) ;

/// @brief Method CopyOfRange, addr 0x259a11c, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*> CopyOfRange(::ArrayW<::Org::BouncyCastle::Math::BigInteger*,::Array<::Org::BouncyCastle::Math::BigInteger*>*>  data, int32_t  from, int32_t  to) ;

/// @brief Method CopyOfRange, addr 0x2599f2c, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> CopyOfRange(::ArrayW<int32_t,::Array<int32_t>*>  data, int32_t  from, int32_t  to) ;

/// @brief Method CopyOfRange, addr 0x259a024, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<int64_t,::Array<int64_t>*> CopyOfRange(::ArrayW<int64_t,::Array<int64_t>*>  data, int32_t  from, int32_t  to) ;

/// @brief Method CopyOfRange, addr 0x2599d80, size 0xf8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> CopyOfRange(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  from, int32_t  to) ;

/// @brief Method Fill, addr 0x2599940, size 0x5c, virtual false, abstract: false, final false
static inline void Fill(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, uint8_t  b) ;

/// @brief Method Fill, addr 0x259999c, size 0x4c, virtual false, abstract: false, final false
static inline void Fill(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  from, int32_t  to, uint8_t  b) ;

/// @brief Method GetHashCode, addr 0x2599258, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<int32_t,::Array<int32_t>*>  data) ;

/// @brief Method GetHashCode, addr 0x2599294, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<int32_t,::Array<int32_t>*>  data, int32_t  off, int32_t  len) ;

/// @brief Method GetHashCode, addr 0x25992e8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint32_t,::Array<uint32_t>*>  data) ;

/// @brief Method GetHashCode, addr 0x2599324, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint32_t,::Array<uint32_t>*>  data, int32_t  off, int32_t  len) ;

/// @brief Method GetHashCode, addr 0x2599378, size 0x48, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint64_t,::Array<uint64_t>*>  data) ;

/// @brief Method GetHashCode, addr 0x25993c0, size 0x5c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint64_t,::Array<uint64_t>*>  data, int32_t  off, int32_t  len) ;

/// @brief Method GetHashCode, addr 0x25991c8, size 0x3c, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method GetHashCode, addr 0x2599204, size 0x54, virtual false, abstract: false, final false
static inline int32_t GetHashCode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  len) ;

/// @brief Method GetLength, addr 0x2599e78, size 0xb4, virtual false, abstract: false, final false
static inline int32_t GetLength(int32_t  from, int32_t  to) ;

/// @brief Method HaveSameContents, addr 0x25988a0, size 0x7c, virtual false, abstract: false, final false
static inline bool HaveSameContents(::ArrayW<bool,::Array<bool>*>  a, ::ArrayW<bool,::Array<bool>*>  b) ;

/// @brief Method HaveSameContents, addr 0x259899c, size 0x6c, virtual false, abstract: false, final false
static inline bool HaveSameContents(::ArrayW<char16_t,::Array<char16_t>*>  a, ::ArrayW<char16_t,::Array<char16_t>*>  b) ;

/// @brief Method HaveSameContents, addr 0x2598f4c, size 0x6c, virtual false, abstract: false, final false
static inline bool HaveSameContents(::ArrayW<int32_t,::Array<int32_t>*>  a, ::ArrayW<int32_t,::Array<int32_t>*>  b) ;

/// @brief Method HaveSameContents, addr 0x2599038, size 0x6c, virtual false, abstract: false, final false
static inline bool HaveSameContents(::ArrayW<uint32_t,::Array<uint32_t>*>  a, ::ArrayW<uint32_t,::Array<uint32_t>*>  b) ;

/// @brief Method HaveSameContents, addr 0x2598a88, size 0x6c, virtual false, abstract: false, final false
static inline bool HaveSameContents(::ArrayW<uint8_t,::Array<uint8_t>*>  a, ::ArrayW<uint8_t,::Array<uint8_t>*>  b) ;

/// @brief Method IsNullOrContainsNull, addr 0x259ab78, size 0x4c, virtual false, abstract: false, final false
static inline bool IsNullOrContainsNull(::ArrayW<::System::Object*,::Array<::System::Object*>*>  array) ;

/// @brief Method IsNullOrEmpty, addr 0x259abe0, size 0x1c, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::ArrayW<::System::Object*,::Array<::System::Object*>*>  array) ;

/// @brief Method IsNullOrEmpty, addr 0x259abc4, size 0x1c, virtual false, abstract: false, final false
static inline bool IsNullOrEmpty(::ArrayW<uint8_t,::Array<uint8_t>*>  array) ;

static inline ::Org::BouncyCastle::Utilities::Arrays* New_ctor() ;

/// @brief Method Prepend, addr 0x259a888, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<int16_t,::Array<int16_t>*> Prepend(::ArrayW<int16_t,::Array<int16_t>*>  a, int16_t  b) ;

/// @brief Method Prepend, addr 0x259a93c, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Prepend(::ArrayW<int32_t,::Array<int32_t>*>  a, int32_t  b) ;

/// @brief Method Prepend, addr 0x259a7d4, size 0xb4, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Prepend(::ArrayW<uint8_t,::Array<uint8_t>*>  a, uint8_t  b) ;

/// @brief Method Reverse, addr 0x259aa9c, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<int32_t,::Array<int32_t>*> Reverse(::ArrayW<int32_t,::Array<int32_t>*>  a) ;

/// @brief Method Reverse, addr 0x259a9f0, size 0xac, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Reverse(::ArrayW<uint8_t,::Array<uint8_t>*>  a) ;

/// @brief Method ToString, addr 0x25990a4, size 0x124, virtual false, abstract: false, final false
static inline ::StringW ToString(::ArrayW<::System::Object*,::Array<::System::Object*>*>  a) ;

/// @brief Method .ctor, addr 0x259ac98, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<uint8_t,::Array<uint8_t>*> getStaticF_EmptyBytes() ;

static inline ::ArrayW<int32_t,::Array<int32_t>*> getStaticF_EmptyInts() ;

static inline void setStaticF_EmptyBytes(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

static inline void setStaticF_EmptyInts(::ArrayW<int32_t,::Array<int32_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Arrays() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Arrays(Arrays && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Arrays", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Arrays(Arrays const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Arrays, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Arrays);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Arrays*, "Org.BouncyCastle.Utilities", "Arrays");
