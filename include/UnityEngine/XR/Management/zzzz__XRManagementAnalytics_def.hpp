#pragma once
// IWYU pragma private; include "UnityEngine/XR/Management/XRManagementAnalytics.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRManagementAnalytics)
namespace UnityEngine::XR::Management {
struct __XRManagementAnalytics__BuildEvent;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRManagementAnalytics;
}
namespace UnityEngine::XR::Management {
struct __XRManagementAnalytics__BuildEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::XR::Management::XRManagementAnalytics);
MARK_VAL_T(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent);
// Type: ::BuildEvent
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: true
// CS Name: ::XRManagementAnalytics::BuildEvent
struct CORDL_TYPE __XRManagementAnalytics__BuildEvent {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr __XRManagementAnalytics__BuildEvent() ;

// Ctor Parameters [CppParam { name: "buildGuid", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTarget", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildTargetGroup", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "assigned_loaders", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: None }]
constexpr __XRManagementAnalytics__BuildEvent(::StringW  buildGuid, ::StringW  buildTarget, ::StringW  buildTargetGroup, ::ArrayW<::StringW,::Array<::StringW>*>  assigned_loaders) noexcept;

/// @brief Field buildGuid, offset: 0x0, size: 0x8, def value: None
 ::StringW  buildGuid;

/// @brief Field buildTarget, offset: 0x8, size: 0x8, def value: None
 ::StringW  buildTarget;

/// @brief Field buildTargetGroup, offset: 0x10, size: 0x8, def value: None
 ::StringW  buildTargetGroup;

/// @brief Field assigned_loaders, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  assigned_loaders;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, buildGuid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, buildTarget) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, buildTargetGroup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, assigned_loaders) == 0x18, "Offset mismatch!");

} // namespace end def UnityEngine::XR::Management
// Type: UnityEngine.XR.Management::XRManagementAnalytics
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::XR::Management {
// Is value type: false
// CS Name: ::UnityEngine.XR.Management::XRManagementAnalytics*
class CORDL_TYPE XRManagementAnalytics : public ::System::Object {
public:
// Declarations
using BuildEvent = ::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent;

/// @brief Method Initialize, addr 0x479fc24, size 0x8, virtual false, abstract: false, final false
static inline bool Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRManagementAnalytics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
XRManagementAnalytics(XRManagementAnalytics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRManagementAnalytics", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRManagementAnalytics(XRManagementAnalytics const& ) = delete;

/// @brief Field kEventBuild offset 0xffffffff size 0x8
static constexpr ::ConstString  kEventBuild{u"xrmanagment_build"};

/// @brief Field kMaxEventsPerHour offset 0xffffffff size 0x4
static constexpr int32_t  kMaxEventsPerHour{static_cast<int32_t>(0x3e8)};

/// @brief Field kMaxNumberOfElements offset 0xffffffff size 0x4
static constexpr int32_t  kMaxNumberOfElements{static_cast<int32_t>(0x3e8)};

/// @brief Field kVendorKey offset 0xffffffff size 0x8
static constexpr ::ConstString  kVendorKey{u"unity.xrmanagement"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::XR::Management::XRManagementAnalytics, 0x10>, "Size mismatch!");

} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(::UnityEngine::XR::Management::XRManagementAnalytics);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRManagementAnalytics*, "UnityEngine.XR.Management", "XRManagementAnalytics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::__XRManagementAnalytics__BuildEvent, "UnityEngine.XR.Management", "XRManagementAnalytics/BuildEvent");
