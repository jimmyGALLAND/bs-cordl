#pragma once
// IWYU pragma private; include "System/Xml/Ucs4Encoding4321.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__Ucs4Encoding_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Ucs4Encoding4321)
// Forward declare root types
namespace System::Xml {
class Ucs4Encoding4321;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Ucs4Encoding4321);
// Type: System.Xml::Ucs4Encoding4321
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::Ucs4Encoding4321*
class CORDL_TYPE Ucs4Encoding4321 : public ::System::Xml::Ucs4Encoding {
public:
// Declarations
 __declspec(property(get=get_EncodingName)) ::StringW  EncodingName;

/// @brief Method GetPreamble, addr 0x42cde20, size 0x74, virtual true, abstract: false, final false
inline ::ArrayW<uint8_t,::Array<uint8_t>*> GetPreamble() ;

static inline ::System::Xml::Ucs4Encoding4321* New_ctor() ;

/// @brief Method .ctor, addr 0x42cdaa8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_EncodingName, addr 0x42cdde0, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_EncodingName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Ucs4Encoding4321() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding4321", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Ucs4Encoding4321(Ucs4Encoding4321 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Ucs4Encoding4321", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Ucs4Encoding4321(Ucs4Encoding4321 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Ucs4Encoding4321, 0x40>, "Size mismatch!");

} // namespace end def System::Xml
NEED_NO_BOX(::System::Xml::Ucs4Encoding4321);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Ucs4Encoding4321*, "System.Xml", "Ucs4Encoding4321");
