#pragma once
// IWYU pragma private; include "System/Security/AccessControl/QualifiedAce.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/AccessControl/zzzz__KnownAce_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(QualifiedAce)
namespace System::Security::AccessControl {
struct AceFlags;
}
namespace System::Security::AccessControl {
struct AceQualifier;
}
namespace System::Security::AccessControl {
struct AceType;
}
// Forward declare root types
namespace System::Security::AccessControl {
class QualifiedAce;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::AccessControl::QualifiedAce);
// Type: System.Security.AccessControl::QualifiedAce
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::AccessControl {
// Is value type: false
// CS Name: ::System.Security.AccessControl::QualifiedAce*
class CORDL_TYPE QualifiedAce : public ::System::Security::AccessControl::KnownAce {
public:
// Declarations
 __declspec(property(get=get_AceQualifier)) ::System::Security::AccessControl::AceQualifier  AceQualifier;

 __declspec(property(get=get_IsCallback)) bool  IsCallback;

 __declspec(property(get=get_OpaqueLength)) int32_t  OpaqueLength;

/// @brief Field opaque, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_opaque, put=__cordl_internal_set_opaque)) ::ArrayW<uint8_t,::Array<uint8_t>*>  opaque;

/// @brief Method GetOpaque, addr 0x3c328ec, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetOpaque() ;

static inline ::System::Security::AccessControl::QualifiedAce* New_ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  binaryForm, int32_t  offset) ;

static inline ::System::Security::AccessControl::QualifiedAce* New_ctor(::System::Security::AccessControl::AceType  type, ::System::Security::AccessControl::AceFlags  flags, ::ArrayW<uint8_t,::Array<uint8_t>*>  opaque) ;

/// @brief Method SetOpaque, addr 0x3c32648, size 0xa8, virtual false, abstract: false, final false
inline void SetOpaque(::ArrayW<uint8_t,::Array<uint8_t>*>  opaque) ;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*> const& __cordl_internal_get_opaque() const;

constexpr ::ArrayW<uint8_t,::Array<uint8_t>*>& __cordl_internal_get_opaque() ;

constexpr void __cordl_internal_set_opaque(::ArrayW<uint8_t,::Array<uint8_t>*>  value) ;

/// @brief Method .ctor, addr 0x3c32590, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<uint8_t,::Array<uint8_t>*>  binaryForm, int32_t  offset) ;

/// @brief Method .ctor, addr 0x3c32380, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::System::Security::AccessControl::AceType  type, ::System::Security::AccessControl::AceFlags  flags, ::ArrayW<uint8_t,::Array<uint8_t>*>  opaque) ;

/// @brief Method get_AceQualifier, addr 0x3c33368, size 0xb4, virtual false, abstract: false, final false
inline ::System::Security::AccessControl::AceQualifier get_AceQualifier() ;

/// @brief Method get_IsCallback, addr 0x3c33b44, size 0x14, virtual false, abstract: false, final false
inline bool get_IsCallback() ;

/// @brief Method get_OpaqueLength, addr 0x3c32728, size 0x18, virtual false, abstract: false, final false
inline int32_t get_OpaqueLength() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr QualifiedAce() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
QualifiedAce(QualifiedAce && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "QualifiedAce", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
QualifiedAce(QualifiedAce const& ) = delete;

/// @brief Field opaque, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<uint8_t,::Array<uint8_t>*>  ___opaque;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::AccessControl::QualifiedAce, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Security::AccessControl::QualifiedAce, ___opaque) == 0x20, "Offset mismatch!");

} // namespace end def System::Security::AccessControl
NEED_NO_BOX(::System::Security::AccessControl::QualifiedAce);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::AccessControl::QualifiedAce*, "System.Security.AccessControl", "QualifiedAce");
