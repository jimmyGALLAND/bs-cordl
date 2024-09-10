#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Asn1/Cmp/PkiMessages.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Asn1/zzzz__Asn1Encodable_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PkiMessages)
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessage;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Object;
}
namespace Org::BouncyCastle::Asn1 {
class Asn1Sequence;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Cmp {
class PkiMessages;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Cmp::PkiMessages);
// Type: Org.BouncyCastle.Asn1.Cmp::PkiMessages
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Cmp {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Asn1.Cmp::PkiMessages*
class CORDL_TYPE PkiMessages : public ::Org::BouncyCastle::Asn1::Asn1Encodable {
public:
// Declarations
/// @brief Field content, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_content, put=__cordl_internal_set_content)) ::Org::BouncyCastle::Asn1::Asn1Sequence*  content;

/// @brief Method GetInstance, addr 0x22ac9bc, size 0x180, virtual false, abstract: false, final false
static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* GetInstance(::System::Object*  obj) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* New_ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*>  msgs) ;

static inline ::Org::BouncyCastle::Asn1::Cmp::PkiMessages* New_ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

/// @brief Method ToAsn1Object, addr 0x22afd94, size 0x8, virtual true, abstract: false, final false
inline ::Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object() ;

/// @brief Method ToPkiMessageArray, addr 0x22afca0, size 0xf4, virtual true, abstract: false, final false
inline ::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*> ToPkiMessageArray() ;

constexpr ::Org::BouncyCastle::Asn1::Asn1Sequence*& __cordl_internal_get_content() ;

constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Asn1::Asn1Sequence*> const& __cordl_internal_get_content() const;

constexpr void __cordl_internal_set_content(::Org::BouncyCastle::Asn1::Asn1Sequence*  value) ;

/// @brief Method .ctor, addr 0x22afc2c, size 0x74, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*,::Array<::Org::BouncyCastle::Asn1::Cmp::PkiMessage*>*>  msgs) ;

/// @brief Method .ctor, addr 0x22afc04, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Org::BouncyCastle::Asn1::Asn1Sequence*  seq) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PkiMessages() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PkiMessages(PkiMessages && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PkiMessages", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PkiMessages(PkiMessages const& ) = delete;

/// @brief Field content, offset: 0x10, size: 0x8, def value: None
 ::Org::BouncyCastle::Asn1::Asn1Sequence*  ___content;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Cmp::PkiMessages, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Asn1::Cmp::PkiMessages, ___content) == 0x10, "Offset mismatch!");

} // namespace end def Org::BouncyCastle::Asn1::Cmp
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Cmp::PkiMessages);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Cmp::PkiMessages*, "Org.BouncyCastle.Asn1.Cmp", "PkiMessages");
