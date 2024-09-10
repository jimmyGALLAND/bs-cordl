#pragma once
// IWYU pragma private; include "GlobalNamespace/AssemblyInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(AssemblyInfo)
// Forward declare root types
namespace GlobalNamespace {
class AssemblyInfo;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AssemblyInfo);
// Type: ::AssemblyInfo
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::AssemblyInfo*
class CORDL_TYPE AssemblyInfo : public ::System::Object {
public:
// Declarations
/// @brief Field version, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_version, put=setStaticF_version)) ::StringW  version;

static inline ::GlobalNamespace::AssemblyInfo* New_ctor() ;

/// @brief Method .ctor, addr 0x25b4d38, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_version() ;

/// @brief Method get_Version, addr 0x25b4bc4, size 0x12c, virtual false, abstract: false, final false
static inline ::StringW get_Version() ;

static inline void setStaticF_version(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AssemblyInfo() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AssemblyInfo(AssemblyInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AssemblyInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AssemblyInfo(AssemblyInfo const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AssemblyInfo, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AssemblyInfo);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AssemblyInfo*, "", "AssemblyInfo");
