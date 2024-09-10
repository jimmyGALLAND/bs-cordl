#pragma once
// IWYU pragma private; include "Oculus/Platform/NetSyncOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncOptions)
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class NetSyncOptions;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::NetSyncOptions);
// Type: Oculus.Platform::NetSyncOptions
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::NetSyncOptions*
class CORDL_TYPE NetSyncOptions : public ::System::Object {
public:
// Declarations
/// @brief Field Handle, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Handle, put=__cordl_internal_set_Handle)) ::System::IntPtr  Handle;

/// @brief Method Finalize, addr 0x3ef096c, size 0xd4, virtual true, abstract: false, final false
inline void Finalize() ;

static inline ::Oculus::Platform::NetSyncOptions* New_ctor() ;

/// @brief Method SetVoipGroup, addr 0x3ef0828, size 0x68, virtual false, abstract: false, final false
inline void SetVoipGroup(::StringW  value) ;

/// @brief Method SetVoipStreamDefault, addr 0x3ef0890, size 0x68, virtual false, abstract: false, final false
inline void SetVoipStreamDefault(::Oculus::Platform::NetSyncVoipStreamMode  value) ;

/// @brief Method SetZoneId, addr 0x3ef08f8, size 0x68, virtual false, abstract: false, final false
inline void SetZoneId(::StringW  value) ;

constexpr ::System::IntPtr const& __cordl_internal_get_Handle() const;

constexpr ::System::IntPtr& __cordl_internal_get_Handle() ;

constexpr void __cordl_internal_set_Handle(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0x3ef07c4, size 0x64, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method op_Explicit, addr 0x3ef0960, size 0xc, virtual false, abstract: false, final false
static inline ::System::IntPtr op_Explicit___System__IntPtr(::Oculus::Platform::NetSyncOptions*  options) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NetSyncOptions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSyncOptions(NetSyncOptions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncOptions", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSyncOptions(NetSyncOptions const& ) = delete;

/// @brief Field Handle, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___Handle;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::NetSyncOptions, 0x18>, "Size mismatch!");

static_assert(offsetof(::Oculus::Platform::NetSyncOptions, ___Handle) == 0x10, "Offset mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::NetSyncOptions);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::NetSyncOptions*, "Oculus.Platform", "NetSyncOptions");
