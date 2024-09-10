#pragma once
// IWYU pragma private; include "System/Net/FileWebStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__FileStream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FileWebStream)
namespace System::IO {
struct FileAccess;
}
namespace System::IO {
struct FileMode;
}
namespace System::IO {
struct FileShare;
}
namespace System::Net {
struct CloseExState;
}
namespace System::Net {
class FileWebRequest;
}
namespace System::Net {
class ICloseEx;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Net {
class FileWebStream;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebStream);
// Type: System.Net::FileWebStream
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::FileWebStream*
class CORDL_TYPE FileWebStream : public ::System::IO::FileStream {
public:
// Declarations
/// @brief Field m_request, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_request, put=__cordl_internal_set_m_request)) ::System::Net::FileWebRequest*  m_request;

/// @brief Convert operator to "::System::Net::ICloseEx"
constexpr operator  ::System::Net::ICloseEx*() noexcept;

/// @brief Method BeginRead, addr 0x4425df8, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginRead(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method BeginWrite, addr 0x4425f78, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginWrite(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size, ::System::AsyncCallback*  callback, ::System::Object*  state) ;

/// @brief Method CheckError, addr 0x4425cb0, size 0x80, virtual false, abstract: false, final false
inline void CheckError() ;

/// @brief Method Dispose, addr 0x4425afc, size 0xb0, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method EndRead, addr 0x4425ed8, size 0xa0, virtual true, abstract: false, final false
inline int32_t EndRead(::System::IAsyncResult*  ar) ;

/// @brief Method EndWrite, addr 0x4426058, size 0xa0, virtual true, abstract: false, final false
inline void EndWrite(::System::IAsyncResult*  ar) ;

static inline ::System::Net::FileWebStream* New_ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing) ;

static inline ::System::Net::FileWebStream* New_ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing, int32_t  length, bool  async) ;

/// @brief Method Read, addr 0x4425be8, size 0xc8, virtual true, abstract: false, final false
inline int32_t Read(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method System.Net.ICloseEx.CloseEx, addr 0x4425bac, size 0x3c, virtual true, abstract: false, final true
inline void System_Net_ICloseEx_CloseEx(::System::Net::CloseExState  closeState) ;

/// @brief Method Write, addr 0x4425d30, size 0xc8, virtual true, abstract: false, final false
inline void Write(::ArrayW<uint8_t,::Array<uint8_t>*>  buffer, int32_t  offset, int32_t  size) ;

constexpr ::System::Net::FileWebRequest*& __cordl_internal_get_m_request() ;

constexpr ::cordl_internals::to_const_pointer<::System::Net::FileWebRequest*> const& __cordl_internal_get_m_request() const;

constexpr void __cordl_internal_set_m_request(::System::Net::FileWebRequest*  value) ;

/// @brief Method .ctor, addr 0x4424e3c, size 0x9c, virtual false, abstract: false, final false
inline void _ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing) ;

/// @brief Method .ctor, addr 0x4425a48, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Net::FileWebRequest*  request, ::StringW  path, ::System::IO::FileMode  mode, ::System::IO::FileAccess  access, ::System::IO::FileShare  sharing, int32_t  length, bool  async) ;

/// @brief Convert to "::System::Net::ICloseEx"
constexpr ::System::Net::ICloseEx* i___System__Net__ICloseEx() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWebStream() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWebStream(FileWebStream && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWebStream", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWebStream(FileWebStream const& ) = delete;

/// @brief Field m_request, offset: 0x70, size: 0x8, def value: None
 ::System::Net::FileWebRequest*  ___m_request;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebStream, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Net::FileWebStream, ___m_request) == 0x70, "Offset mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::FileWebStream);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebStream*, "System.Net", "FileWebStream");
