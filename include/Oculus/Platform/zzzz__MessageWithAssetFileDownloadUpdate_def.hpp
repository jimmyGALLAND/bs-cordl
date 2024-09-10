#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAssetFileDownloadUpdate.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAssetFileDownloadUpdate)
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAssetFileDownloadUpdate;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAssetFileDownloadUpdate);
// Type: Oculus.Platform::MessageWithAssetFileDownloadUpdate
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAssetFileDownloadUpdate*
class CORDL_TYPE MessageWithAssetFileDownloadUpdate : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AssetFileDownloadUpdate*> {
public:
// Declarations
/// @brief Method GetAssetFileDownloadUpdate, addr 0x3eed560, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetAssetFileDownloadUpdate() ;

/// @brief Method GetDataFromMessage, addr 0x3eed59c, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AssetFileDownloadUpdate* GetDataFromMessage(::System::IntPtr  c_message) ;

static inline ::Oculus::Platform::MessageWithAssetFileDownloadUpdate* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeb0b8, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithAssetFileDownloadUpdate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadUpdate", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAssetFileDownloadUpdate(MessageWithAssetFileDownloadUpdate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAssetFileDownloadUpdate", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAssetFileDownloadUpdate(MessageWithAssetFileDownloadUpdate const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAssetFileDownloadUpdate, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAssetFileDownloadUpdate);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAssetFileDownloadUpdate*, "Oculus.Platform", "MessageWithAssetFileDownloadUpdate");
