#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/Encoders/Hex.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Hex)
namespace Org::BouncyCastle::Utilities::Encoders {
class HexEncoder;
}
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class Hex;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::Hex);
// Type: Org.BouncyCastle.Utilities.Encoders::Hex
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::Hex*
class CORDL_TYPE Hex : public ::System::Object {
public:
// Declarations
/// @brief Field encoder, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_encoder, put=setStaticF_encoder)) ::Org::BouncyCastle::Utilities::Encoders::HexEncoder*  encoder;

/// @brief Method Decode, addr 0x258b980, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Decode, addr 0x258bd44, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Decode(::StringW  data) ;

/// @brief Method Decode, addr 0x258c100, size 0x78, virtual false, abstract: false, final false
static inline int32_t Decode(::StringW  data, ::System::IO::Stream*  outStream) ;

/// @brief Method DecodeStrict, addr 0x258c178, size 0x74, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeStrict(::StringW  str) ;

/// @brief Method DecodeStrict, addr 0x258c424, size 0x80, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> DecodeStrict(::StringW  str, int32_t  off, int32_t  len) ;

/// @brief Method Encode, addr 0x258b6f8, size 0x64, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method Encode, addr 0x258b628, size 0xd0, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length) ;

/// @brief Method Encode, addr 0x258b8f0, size 0x90, virtual false, abstract: false, final false
static inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length, ::System::IO::Stream*  outStream) ;

/// @brief Method Encode, addr 0x258b86c, size 0x84, virtual false, abstract: false, final false
static inline int32_t Encode(::ArrayW<uint8_t,::Array<uint8_t>*>  data, ::System::IO::Stream*  outStream) ;

static inline ::Org::BouncyCastle::Utilities::Encoders::Hex* New_ctor() ;

/// @brief Method ToHexString, addr 0x258b550, size 0x64, virtual false, abstract: false, final false
static inline ::StringW ToHexString(::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method ToHexString, addr 0x258b5b4, size 0x74, virtual false, abstract: false, final false
static inline ::StringW ToHexString(::ArrayW<uint8_t,::Array<uint8_t>*>  data, int32_t  off, int32_t  length) ;

/// @brief Method .ctor, addr 0x258b548, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Org::BouncyCastle::Utilities::Encoders::HexEncoder* getStaticF_encoder() ;

static inline void setStaticF_encoder(::Org::BouncyCastle::Utilities::Encoders::HexEncoder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Hex() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Hex(Hex && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Hex", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Hex(Hex const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::Hex, 0x10>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::Hex);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::Hex*, "Org.BouncyCastle.Utilities.Encoders", "Hex");
