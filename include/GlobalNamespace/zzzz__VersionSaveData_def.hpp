#pragma once
// IWYU pragma private; include "GlobalNamespace/VersionSaveData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(VersionSaveData)
// Forward declare root types
namespace GlobalNamespace {
class VersionSaveData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::VersionSaveData);
// Type: ::VersionSaveData
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::VersionSaveData*
class CORDL_TYPE VersionSaveData : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_version, put=__cordl_internal_set_version)) ::StringW  version;

static inline ::GlobalNamespace::VersionSaveData* New_ctor() ;

constexpr ::StringW const& __cordl_internal_get_version() const;

constexpr ::StringW& __cordl_internal_get_version() ;

constexpr void __cordl_internal_set_version(::StringW  value) ;

/// @brief Method .ctor, addr 0x26aea30, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VersionSaveData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
VersionSaveData(VersionSaveData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VersionSaveData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
VersionSaveData(VersionSaveData const& ) = delete;

/// @brief Field version, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___version;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::VersionSaveData, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::VersionSaveData, ___version) == 0x10, "Offset mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::VersionSaveData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::VersionSaveData*, "", "VersionSaveData");
