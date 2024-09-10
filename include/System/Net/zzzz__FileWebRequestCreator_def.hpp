#pragma once
// IWYU pragma private; include "System/Net/FileWebRequestCreator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(FileWebRequestCreator)
namespace System::Net {
class IWebRequestCreate;
}
namespace System::Net {
class WebRequest;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Net {
class FileWebRequestCreator;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::FileWebRequestCreator);
// Type: System.Net::FileWebRequestCreator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::FileWebRequestCreator*
class CORDL_TYPE FileWebRequestCreator : public ::System::Object {
public:
// Declarations
/// @brief Convert operator to "::System::Net::IWebRequestCreate"
constexpr operator  ::System::Net::IWebRequestCreate*() noexcept;

/// @brief Method Create, addr 0x44259f0, size 0x58, virtual true, abstract: false, final true
inline ::System::Net::WebRequest* Create(::System::Uri*  uri) ;

static inline ::System::Net::FileWebRequestCreator* New_ctor() ;

/// @brief Method .ctor, addr 0x44259e8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Net::IWebRequestCreate"
constexpr ::System::Net::IWebRequestCreate* i___System__Net__IWebRequestCreate() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FileWebRequestCreator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FileWebRequestCreator(FileWebRequestCreator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FileWebRequestCreator", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FileWebRequestCreator(FileWebRequestCreator const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::FileWebRequestCreator, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::FileWebRequestCreator);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::FileWebRequestCreator*, "System.Net", "FileWebRequestCreator");
