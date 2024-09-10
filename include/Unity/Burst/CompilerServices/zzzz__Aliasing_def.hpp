#pragma once
// IWYU pragma private; include "Unity/Burst/CompilerServices/Aliasing.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(Aliasing)
// Forward declare root types
namespace Unity::Burst::CompilerServices {
class Aliasing;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Burst::CompilerServices::Aliasing);
// Type: Unity.Burst.CompilerServices::Aliasing
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Burst::CompilerServices {
// Is value type: false
// CS Name: ::Unity.Burst.CompilerServices::Aliasing*
class CORDL_TYPE Aliasing : public ::System::Object {
public:
// Declarations
/// @brief Method ExpectAliased, addr 0x44a96d4, size 0x4, virtual false, abstract: false, final false
static inline void ExpectAliased(::cordl_internals::Ptr<void>  a, ::cordl_internals::Ptr<void>  b) ;

/// @brief Method ExpectAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename B>
static inline void ExpectAliased(::cordl_internals::Ptr<void>  a, ByRef<B>  b) ;

/// @brief Method ExpectAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A>
static inline void ExpectAliased(ByRef<A>  a, ::cordl_internals::Ptr<void>  b) ;

/// @brief Method ExpectAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A,typename B>
static inline void ExpectAliased(ByRef<A>  a, ByRef<B>  b) ;

/// @brief Method ExpectNotAliased, addr 0x44a96d8, size 0x4, virtual false, abstract: false, final false
static inline void ExpectNotAliased(::cordl_internals::Ptr<void>  a, ::cordl_internals::Ptr<void>  b) ;

/// @brief Method ExpectNotAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename B>
static inline void ExpectNotAliased(::cordl_internals::Ptr<void>  a, ByRef<B>  b) ;

/// @brief Method ExpectNotAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A>
static inline void ExpectNotAliased(ByRef<A>  a, ::cordl_internals::Ptr<void>  b) ;

/// @brief Method ExpectNotAliased, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename A,typename B>
static inline void ExpectNotAliased(ByRef<A>  a, ByRef<B>  b) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Aliasing() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Aliasing", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Aliasing(Aliasing && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Aliasing", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Aliasing(Aliasing const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Burst::CompilerServices::Aliasing, 0x10>, "Size mismatch!");

} // namespace end def Unity::Burst::CompilerServices
NEED_NO_BOX(::Unity::Burst::CompilerServices::Aliasing);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Burst::CompilerServices::Aliasing*, "Unity.Burst.CompilerServices", "Aliasing");
