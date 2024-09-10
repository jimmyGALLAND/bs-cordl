#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/UserAttributeSubpacket.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__UserAttributeSubpacketTag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserAttributeSubpacket)
namespace Org::BouncyCastle::Bcpg {
struct UserAttributeSubpacketTag;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class UserAttributeSubpacket;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket);
// Type: Org.BouncyCastle.Bcpg::UserAttributeSubpacket
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg::UserAttributeSubpacket*
class CORDL_TYPE UserAttributeSubpacket : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_SubpacketType)) ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  SubpacketType;

/// @brief Field data, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<uint8_t,::Array<uint8_t>*>  data;

/// @brief Field longLength, offset 0x14, size 0x1 
 __declspec(property(get=__cordl_internal_get_longLength, put=__cordl_internal_set_longLength)) bool  longLength;

/// @brief Field type, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_type, put=__cordl_internal_set_type)) ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type;

/// @brief Method Encode, addr 0x25f1428, size 0x138, virtual true, abstract: false, final false
inline void Encode(::System::IO::Stream*  os) ;

/// @brief Method Equals, addr 0x25f1560, size 0xe8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetData, addr 0x25f1420, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetData() ;

/// @brief Method GetHashCode, addr 0x25f1648, size 0xa4, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

static inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacket* New_ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_longLength() const;

constexpr bool& __cordl_internal_get_longLength() ;

constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag const& __cordl_internal_get_type() const;

constexpr ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag& __cordl_internal_get_type() ;

constexpr void __cordl_internal_set_data(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

constexpr void __cordl_internal_set_longLength(bool  value) ;

constexpr void __cordl_internal_set_type(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  value) ;

/// @brief Method .ctor, addr 0x25f13a4, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method .ctor, addr 0x25f13d8, size 0x40, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  type, bool  forceLongLength, ::ArrayW<uint8_t,::Array<uint8_t>*>  data) ;

/// @brief Method get_SubpacketType, addr 0x25f1418, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag get_SubpacketType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserAttributeSubpacket() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserAttributeSubpacket(UserAttributeSubpacket && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserAttributeSubpacket", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserAttributeSubpacket(UserAttributeSubpacket const& ) = delete;

/// @brief Field type, offset: 0x10, size: 0x4, def value: None
 ::Org::BouncyCastle::Bcpg::UserAttributeSubpacketTag  ___type;

/// @brief Field longLength, offset: 0x14, size: 0x1, def value: None
 bool  ___longLength;

/// @brief Field data, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::UserAttributeSubpacket, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket, ___longLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket, ___data) == 0x18, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::UserAttributeSubpacket*, "Org.BouncyCastle.Bcpg", "UserAttributeSubpacket");
