#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/DownloadOnlyLocation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/ResourceManagement/ResourceLocations/zzzz__LocationWrapper_def.hpp"
CORDL_MODULE_EXPORT(DownloadOnlyLocation)
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class DownloadOnlyLocation;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation);
// Type: UnityEngine.ResourceManagement.ResourceProviders::DownloadOnlyLocation
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// CS Name: ::UnityEngine.ResourceManagement.ResourceProviders::DownloadOnlyLocation*
class CORDL_TYPE DownloadOnlyLocation : public ::UnityEngine::ResourceManagement::ResourceLocations::LocationWrapper {
public:
// Declarations
static inline ::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation* New_ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

/// @brief Method .ctor, addr 0x47073bc, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*  location) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DownloadOnlyLocation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DownloadOnlyLocation", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DownloadOnlyLocation(DownloadOnlyLocation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DownloadOnlyLocation", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DownloadOnlyLocation(DownloadOnlyLocation const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation, 0x18>, "Size mismatch!");

} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::DownloadOnlyLocation*, "UnityEngine.ResourceManagement.ResourceProviders", "DownloadOnlyLocation");
