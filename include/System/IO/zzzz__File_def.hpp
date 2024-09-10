#pragma once
// IWYU pragma private; include "System/IO/File.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(File)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileAttributes;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::IO {
class FileStream;
}
namespace System::IO {
class StreamReader;
}
namespace System::IO {
class StreamWriter;
}
namespace System::IO {
class TextWriter;
}
namespace System::Security::AccessControl {
struct AccessControlSections;
}
namespace System::Security::AccessControl {
class FileSecurity;
}
namespace System::Text {
class Encoding;
}
// Forward declare root types
namespace System::IO {
class File;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::File);
// Type: System.IO::File
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::File*
class CORDL_TYPE File : public ::System::Object {
public:
// Declarations
/// @brief Method AppendText, addr 0x3cd63e0, size 0xac, virtual false, abstract: false, final false
static inline ::System::IO::StreamWriter* AppendText(::StringW  path) ;

/// @brief Method Create, addr 0x3cd648c, size 0x8, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path) ;

/// @brief Method Create, addr 0x3cd6494, size 0x84, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Create(::StringW  path, int32_t  bufferSize) ;

/// @brief Method CreateText, addr 0x3cd6334, size 0xac, virtual false, abstract: false, final false
static inline ::System::IO::StreamWriter* CreateText(::StringW  path) ;

/// @brief Method Delete, addr 0x3cd6538, size 0xa8, virtual false, abstract: false, final false
static inline void Delete(::StringW  path) ;

/// @brief Method Exists, addr 0x3cd6790, size 0x1c4, virtual false, abstract: false, final false
static inline bool Exists(::StringW  path) ;

/// @brief Method GetAccessControl, addr 0x3cd8bd8, size 0x8, virtual false, abstract: false, final false
static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW  path) ;

/// @brief Method GetAccessControl, addr 0x3cd8be0, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Security::AccessControl::FileSecurity* GetAccessControl(::StringW  path, ::System::Security::AccessControl::AccessControlSections  includeSections) ;

/// @brief Method GetAttributes, addr 0x3cd6aa0, size 0x5c, virtual false, abstract: false, final false
static inline ::System::IO::FileAttributes GetAttributes(::StringW  path) ;

/// @brief Method InternalReadAllLines, addr 0x3cd7e38, size 0x294, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> InternalReadAllLines(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalReadAllText, addr 0x3cd6d30, size 0x1b8, virtual false, abstract: false, final false
static inline ::StringW InternalReadAllText(::StringW  path, ::System::Text::Encoding*  encoding) ;

/// @brief Method InternalWriteAllBytes, addr 0x3cd7ba4, size 0x1d0, virtual false, abstract: false, final false
static inline void InternalWriteAllBytes(::StringW  path, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method InternalWriteAllLines, addr 0x3cd81f4, size 0x400, virtual false, abstract: false, final false
static inline void InternalWriteAllLines(::System::IO::TextWriter*  writer, ::System::Collections::Generic::IEnumerable_1<::StringW>*  contents) ;

/// @brief Method Move, addr 0x3cd8894, size 0x22c, virtual false, abstract: false, final false
static inline void Move(::StringW  sourceFileName, ::StringW  destFileName) ;

/// @brief Method Open, addr 0x3cd69d4, size 0x14, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode) ;

/// @brief Method Open, addr 0x3cd69e8, size 0x94, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* Open(::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  share) ;

/// @brief Method OpenRead, addr 0x3cd6b7c, size 0x78, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenRead(::StringW  path) ;

/// @brief Method OpenText, addr 0x3cd628c, size 0xa8, virtual false, abstract: false, final false
static inline ::System::IO::StreamReader* OpenText(::StringW  path) ;

/// @brief Method OpenWrite, addr 0x3cd6bf4, size 0x78, virtual false, abstract: false, final false
static inline ::System::IO::FileStream* OpenWrite(::StringW  path) ;

/// @brief Method ReadAllBytes, addr 0x3cd7398, size 0x2c8, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAllBytes(::StringW  path) ;

/// @brief Method ReadAllBytesUnknownLength, addr 0x3cd7660, size 0x448, virtual false, abstract: false, final false
static inline ::ArrayW<uint8_t,::Array<uint8_t>*> ReadAllBytesUnknownLength(::System::IO::FileStream*  fs) ;

/// @brief Method ReadAllLines, addr 0x3cd7d74, size 0xc4, virtual false, abstract: false, final false
static inline ::ArrayW<::StringW,::Array<::StringW>*> ReadAllLines(::StringW  path) ;

/// @brief Method ReadAllText, addr 0x3cd6c6c, size 0xc4, virtual false, abstract: false, final false
static inline ::StringW ReadAllText(::StringW  path) ;

/// @brief Method Replace, addr 0x3cd85f4, size 0x8, virtual false, abstract: false, final false
static inline void Replace(::StringW  sourceFileName, ::StringW  destinationFileName, ::StringW  destinationBackupFileName) ;

/// @brief Method Replace, addr 0x3cd85fc, size 0x128, virtual false, abstract: false, final false
static inline void Replace(::StringW  sourceFileName, ::StringW  destinationFileName, ::StringW  destinationBackupFileName, bool  ignoreMetadataErrors) ;

/// @brief Method WriteAllBytes, addr 0x3cd7aa8, size 0xfc, virtual false, abstract: false, final false
static inline void WriteAllBytes(::StringW  path, ::ArrayW<uint8_t,::Array<uint8_t>*>  bytes) ;

/// @brief Method WriteAllLines, addr 0x3cd80cc, size 0x4, virtual false, abstract: false, final false
static inline void WriteAllLines(::StringW  path, ::ArrayW<::StringW,::Array<::StringW>*>  contents) ;

/// @brief Method WriteAllLines, addr 0x3cd80d0, size 0x124, virtual false, abstract: false, final false
static inline void WriteAllLines(::StringW  path, ::System::Collections::Generic::IEnumerable_1<::StringW>*  contents) ;

/// @brief Method WriteAllText, addr 0x3cd6ee8, size 0x240, virtual false, abstract: false, final false
static inline void WriteAllText(::StringW  path, ::StringW  contents) ;

/// @brief Method WriteAllText, addr 0x3cd7128, size 0x270, virtual false, abstract: false, final false
static inline void WriteAllText(::StringW  path, ::StringW  contents, ::System::Text::Encoding*  encoding) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr File() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
File(File && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "File", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
File(File const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::File, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::File);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::File*, "System.IO", "File");
