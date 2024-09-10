#pragma once
// IWYU pragma private; include "Unity/IO/Archive/ArchiveFileInterface.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ArchiveFileInterface)
// Forward declare root types
namespace Unity::IO::Archive {
class ArchiveFileInterface;
}
// Write type traits
MARK_REF_PTR_T(::Unity::IO::Archive::ArchiveFileInterface);
// Type: Unity.IO.Archive::ArchiveFileInterface
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::IO::Archive {
// Is value type: false
// CS Name: ::Unity.IO.Archive::ArchiveFileInterface*
class CORDL_TYPE ArchiveFileInterface : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr ArchiveFileInterface() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ArchiveFileInterface", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ArchiveFileInterface(ArchiveFileInterface && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ArchiveFileInterface", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ArchiveFileInterface(ArchiveFileInterface const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::IO::Archive::ArchiveFileInterface, 0x10>, "Size mismatch!");

} // namespace end def Unity::IO::Archive
NEED_NO_BOX(::Unity::IO::Archive::ArchiveFileInterface);
DEFINE_IL2CPP_ARG_TYPE(::Unity::IO::Archive::ArchiveFileInterface*, "Unity.IO.Archive", "ArchiveFileInterface");
