#pragma once
// IWYU pragma private; include "System/Security/Cryptography/RIPEMD160Managed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Cryptography/zzzz__RIPEMD160_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RIPEMD160Managed)
// Forward declare root types
namespace System::Security::Cryptography {
class RIPEMD160Managed;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RIPEMD160Managed);
// Type: System.Security.Cryptography::RIPEMD160Managed
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RIPEMD160Managed*
class CORDL_TYPE RIPEMD160Managed : public ::System::Security::Cryptography::RIPEMD160 {
public:
// Declarations
/// @brief Field _blockDWords, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__blockDWords, put=__cordl_internal_set__blockDWords)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _blockDWords;

/// @brief Field _buffer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<uint8_t,::Array<uint8_t>*>  _buffer;

/// @brief Field _count, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__count, put=__cordl_internal_set__count)) int64_t  _count;

/// @brief Field _stateMD160, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__stateMD160, put=__cordl_internal_set__stateMD160)) ::ArrayW<uint32_t,::Array<uint32_t>*>  _stateMD160;

/// @brief Method F, addr 0x3c172a4, size 0xc, virtual false, abstract: false, final false
static inline uint32_t F(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method G, addr 0x3c172b0, size 0x10, virtual false, abstract: false, final false
static inline uint32_t G(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method H, addr 0x3c172c0, size 0xc, virtual false, abstract: false, final false
static inline uint32_t H(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method HashCore, addr 0x3c158ac, size 0x4, virtual true, abstract: false, final false
inline void HashCore(::ArrayW<uint8_t,::Array<uint8_t>*>  rgb, int32_t  ibStart, int32_t  cbSize) ;

/// @brief Method HashFinal, addr 0x3c15a30, size 0x4, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> HashFinal() ;

/// @brief Method I, addr 0x3c172cc, size 0x10, virtual false, abstract: false, final false
static inline uint32_t I(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method Initialize, addr 0x3c15868, size 0x44, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InitializeState, addr 0x3c157e4, size 0x84, virtual false, abstract: false, final false
inline void InitializeState() ;

/// @brief Method J, addr 0x3c172dc, size 0xc, virtual false, abstract: false, final false
static inline uint32_t J(uint32_t  x, uint32_t  y, uint32_t  z) ;

/// @brief Method MDTransform, addr 0x3c15bd8, size 0x16cc, virtual false, abstract: false, final false
static inline void MDTransform(::cordl_internals::Ptr<uint32_t>  blockDWords, ::cordl_internals::Ptr<uint32_t>  state, ::cordl_internals::Ptr<uint8_t>  block) ;

static inline ::System::Security::Cryptography::RIPEMD160Managed* New_ctor() ;

/// @brief Method _EndHash, addr 0x3c15a34, size 0x1a4, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> _EndHash() ;

/// @brief Method _HashData, addr 0x3c158b0, size 0x180, virtual false, abstract: false, final false
inline void _HashData(::ArrayW<uint8_t,::Array<uint8_t>*>  partIn, int32_t  ibStart, int32_t  cbSize) ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get__blockDWords() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get__blockDWords() ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get__buffer() ;

constexpr int64_t const& __cordl_internal_get__count() const;

constexpr int64_t& __cordl_internal_get__count() ;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*> const& __cordl_internal_get__stateMD160() const;

constexpr ::ArrayW<uint32_t,::Array<uint32_t>*>& __cordl_internal_get__stateMD160() ;

constexpr void __cordl_internal_set__blockDWords(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set__count(int64_t  value) ;

constexpr void __cordl_internal_set__stateMD160(::ArrayW<uint32_t,::Array<uint32_t>*>  value) ;

/// @brief Method .ctor, addr 0x3c10b80, size 0x11c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RIPEMD160Managed() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160Managed", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RIPEMD160Managed(RIPEMD160Managed && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RIPEMD160Managed", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RIPEMD160Managed(RIPEMD160Managed const& ) = delete;

/// @brief Field _buffer, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ____buffer;

/// @brief Field _count, offset: 0x30, size: 0x8, def value: None
 int64_t  ____count;

/// @brief Field _stateMD160, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ____stateMD160;

/// @brief Field _blockDWords, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<uint32_t,::Array<uint32_t>*>  ____blockDWords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RIPEMD160Managed, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RIPEMD160Managed, ____buffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RIPEMD160Managed, ____count) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RIPEMD160Managed, ____stateMD160) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RIPEMD160Managed, ____blockDWords) == 0x40, "Offset mismatch!");

} // namespace end def System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RIPEMD160Managed);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RIPEMD160Managed*, "System.Security.Cryptography", "RIPEMD160Managed");
