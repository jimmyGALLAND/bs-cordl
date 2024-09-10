#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/NullOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/IO/zzzz__BaseOutputStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullOutputStream)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class NullOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::NullOutputStream);
// Type: Org.BouncyCastle.Utilities.IO::NullOutputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::NullOutputStream*
class CORDL_TYPE NullOutputStream : public ::Org::BouncyCastle::Utilities::IO::BaseOutputStream {
public:
// Declarations
static inline ::Org::BouncyCastle::Utilities::IO::NullOutputStream* New_ctor() ;

/// @brief Method Write, addr 0x258d8a8, size 0x4, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  count) ;

/// @brief Method WriteByte, addr 0x258d8a4, size 0x4, virtual true, abstract: false, final false
inline void WriteByte(uint8_t  b) ;

/// @brief Method .ctor, addr 0x258d8ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullOutputStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullOutputStream(NullOutputStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullOutputStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullOutputStream(NullOutputStream const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::NullOutputStream, 0x30>, "Size mismatch!");

} // namespace end def Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::NullOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::NullOutputStream*, "Org.BouncyCastle.Utilities.IO", "NullOutputStream");
