#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/BurstRuntime.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BurstRuntime)
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct __BurstRuntime__HashCode64_1;
}
// Forward declare root types
namespace Unity::Collections::LowLevel::Unsafe {
class BurstRuntime;
}
namespace Unity::Collections::LowLevel::Unsafe {
template<typename T>
struct __BurstRuntime__HashCode64_1;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Collections::LowLevel::Unsafe::BurstRuntime);
MARK_GEN_VAL_T(::Unity::Collections::LowLevel::Unsafe::__BurstRuntime__HashCode64_1);
// Type: ::HashCode64`1
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 16, minimum_alignment: 1, packing: None, specified_packing: Some(0) }
namespace Unity::Collections::LowLevel::Unsafe {
// cpp template
template<typename T>
// Is value type: true
// CS Name: ::BurstRuntime::HashCode64`1<T>
#pragma pack(push, 0)
struct CORDL_TYPE __BurstRuntime__HashCode64_1 {
public:
// Declarations
/// @brief Field Value, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Value, put=setStaticF_Value)) int64_t  Value;

static inline int64_t getStaticF_Value() ;

static inline void setStaticF_Value(int64_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr __BurstRuntime__HashCode64_1() ;

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
} // namespace end def Unity::Collections::LowLevel::Unsafe
// Type: Unity.Collections.LowLevel.Unsafe::BurstRuntime
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Collections::LowLevel::Unsafe {
// Is value type: false
// CS Name: ::Unity.Collections.LowLevel.Unsafe::BurstRuntime*
class CORDL_TYPE BurstRuntime : public ::System::Object {
public:
// Declarations
template<typename T>
using HashCode64_1 = ::Unity::Collections::LowLevel::Unsafe::__BurstRuntime__HashCode64_1<T>;

/// @brief Method GetHashCode64, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline int64_t GetHashCode64() ;

/// @brief Method HashStringWithFNV1A64, addr 0x47ce114, size 0x8c, virtual false, abstract: false, final false
static inline int64_t HashStringWithFNV1A64(::StringW  text) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BurstRuntime() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BurstRuntime(BurstRuntime && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BurstRuntime", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BurstRuntime(BurstRuntime const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Collections::LowLevel::Unsafe::BurstRuntime, 0x10>, "Size mismatch!");

} // namespace end def Unity::Collections::LowLevel::Unsafe
NEED_NO_BOX(::Unity::Collections::LowLevel::Unsafe::BurstRuntime);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Collections::LowLevel::Unsafe::BurstRuntime*, "Unity.Collections.LowLevel.Unsafe", "BurstRuntime");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Collections::LowLevel::Unsafe::__BurstRuntime__HashCode64_1, "Unity.Collections.LowLevel.Unsafe", "BurstRuntime/HashCode64`1");
