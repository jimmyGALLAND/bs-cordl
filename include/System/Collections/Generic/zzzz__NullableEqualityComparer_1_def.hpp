#pragma once
// IWYU pragma private; include "System/Collections/Generic/NullableEqualityComparer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__EqualityComparer_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NullableEqualityComparer_1)
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Collections::Generic {
template<typename T>
class NullableEqualityComparer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Collections::Generic::NullableEqualityComparer_1);
// Type: System.Collections.Generic::NullableEqualityComparer`1
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Collections::Generic {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ::System.Collections.Generic::NullableEqualityComparer`1<T>*
class CORDL_TYPE NullableEqualityComparer_1 : public ::System::Collections::Generic::EqualityComparer_1<::System::Nullable_1<T>> {
public:
// Declarations
/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Nullable_1<T>  x, ::System::Nullable_1<T>  y) ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode(::System::Nullable_1<T>  obj) ;

/// @brief Method IndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IndexOf(::ArrayW<::System::Nullable_1<T>,::Array<::System::Nullable_1<T>>*>  array, ::System::Nullable_1<T>  value, int32_t  startIndex, int32_t  count) ;

/// @brief Method LastIndexOf, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t LastIndexOf(::ArrayW<::System::Nullable_1<T>,::Array<::System::Nullable_1<T>>*>  array, ::System::Nullable_1<T>  value, int32_t  startIndex, int32_t  count) ;

static inline ::System::Collections::Generic::NullableEqualityComparer_1<T>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NullableEqualityComparer_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NullableEqualityComparer_1(NullableEqualityComparer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NullableEqualityComparer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NullableEqualityComparer_1(NullableEqualityComparer_1 const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Generic
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Collections::Generic::NullableEqualityComparer_1, "System.Collections.Generic", "NullableEqualityComparer`1");
