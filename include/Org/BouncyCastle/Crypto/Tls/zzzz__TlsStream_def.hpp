#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/TlsStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TlsStream)
namespace Org::BouncyCastle::Crypto::Tls {
class TlsProtocol;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class TlsStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::TlsStream);
// Type: Org.BouncyCastle.Crypto.Tls::TlsStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::TlsStream*
class CORDL_TYPE TlsStream : public ::System::IO::Stream {
public:
// Declarations
 __declspec(property(get=get_CanRead)) bool  CanRead;

 __declspec(property(get=get_CanSeek)) bool  CanSeek;

 __declspec(property(get=get_CanWrite)) bool  CanWrite;

 __declspec(property(get=get_Length)) int64_t  Length;

 __declspec(property(get=get_Position, put=set_Position)) int64_t  Position;

/// @brief Field handler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_handler, put=__cordl_internal_set_handler)) ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  handler;

/// @brief Method Close, addr 0x23f1864, size 0x34, virtual true, abstract: false, final false
inline void Close() ;

/// @brief Method Flush, addr 0x23f1898, size 0x24, virtual true, abstract: false, final false
inline void Flush() ;

static inline ::Org::BouncyCastle::Crypto::Tls::TlsStream* New_ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  handler) ;

/// @brief Method Read, addr 0x23f1964, size 0x24, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method ReadByte, addr 0x23f1988, size 0x98, virtual true, abstract: false, final false
inline int32_t ReadByte() ;

/// @brief Method Seek, addr 0x23f1a20, size 0x38, virtual true, abstract: false, final false
inline int64_t Seek(int64_t  offset, ::System::IO::SeekOrigin  origin) ;

/// @brief Method SetLength, addr 0x23f1a58, size 0x38, virtual true, abstract: false, final false
inline void SetLength(int64_t  value) ;

/// @brief Method Write, addr 0x23f1a90, size 0x24, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buf, int32_t  off, int32_t  len) ;

/// @brief Method WriteByte, addr 0x23f1ab4, size 0x94, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  b) ;

constexpr ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*& __cordl_internal_get_handler() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Tls::TlsProtocol*> const& __cordl_internal_get_handler() const;

constexpr void __cordl_internal_set_handler(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  value) ;

/// @brief Method .ctor, addr 0x23f1790, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  handler) ;

/// @brief Method get_CanRead, addr 0x23f17fc, size 0x30, virtual true, abstract: false, final false
inline bool get_CanRead() ;

/// @brief Method get_CanSeek, addr 0x23f182c, size 0x8, virtual true, abstract: false, final false
inline bool get_CanSeek() ;

/// @brief Method get_CanWrite, addr 0x23f1834, size 0x30, virtual true, abstract: false, final false
inline bool get_CanWrite() ;

/// @brief Method get_Length, addr 0x23f18bc, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Length() ;

/// @brief Method get_Position, addr 0x23f18f4, size 0x38, virtual true, abstract: false, final false
inline int64_t get_Position() ;

/// @brief Method set_Position, addr 0x23f192c, size 0x38, virtual true, abstract: false, final false
inline void set_Position(int64_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TlsStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TlsStream(TlsStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TlsStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TlsStream(TlsStream const& ) = delete;

/// @brief Field handler, offset: 0x28, size: 0x8, def value: None
 ::Org::BouncyCastle::Crypto::Tls::TlsProtocol*  ___handler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::TlsStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::TlsStream, ___handler) == 0x28, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::TlsStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::TlsStream*, "Org.BouncyCastle.Crypto.Tls", "TlsStream");
