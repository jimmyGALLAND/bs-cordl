#pragma once
// IWYU pragma private; include "UnityEngine/AssemblyVersion.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AssemblyVersion)
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine {
struct AssemblyVersion;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AssemblyVersion);
// Type: UnityEngine::AssemblyVersion
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 2, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AssemblyVersion
struct CORDL_TYPE AssemblyVersion {
public:
// Declarations
/// @brief Method Equals, addr 0x4816918, size 0xa8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  other) ;

/// @brief Method GetHashCode, addr 0x48169c0, size 0x90, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method ToString, addr 0x481676c, size 0x1ac, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method op_Equality, addr 0x481673c, size 0x30, virtual false, abstract: false, final false
static inline bool op_Equality(::UnityEngine::AssemblyVersion  lhs, ::UnityEngine::AssemblyVersion  rhs) ;

// Ctor Parameters []
// @brief default ctor
constexpr AssemblyVersion() ;

// Ctor Parameters [CppParam { name: "major", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "minor", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "build", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "revision", ty: "uint16_t", modifiers: "", def_value: None }]
constexpr AssemblyVersion(uint16_t  major, uint16_t  minor, uint16_t  build, uint16_t  revision) noexcept;

/// @brief Field major, offset: 0x0, size: 0x2, def value: None
 uint16_t  major;

/// @brief Field minor, offset: 0x2, size: 0x2, def value: None
 uint16_t  minor;

/// @brief Field build, offset: 0x4, size: 0x2, def value: None
 uint16_t  build;

/// @brief Field revision, offset: 0x6, size: 0x2, def value: None
 uint16_t  revision;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AssemblyVersion, 0x8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyVersion, major) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyVersion, minor) == 0x2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyVersion, build) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::AssemblyVersion, revision) == 0x6, "Offset mismatch!");

} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AssemblyVersion, "UnityEngine", "AssemblyVersion");
