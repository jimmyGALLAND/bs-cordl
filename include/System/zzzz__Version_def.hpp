#pragma once
// IWYU pragma private; include "System/Version.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Version)
namespace System::Text {
class StringBuilder;
}
namespace System {
class ICloneable;
}
namespace System {
template<typename T>
class IComparable_1;
}
namespace System {
class IComparable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class IFormatProvider;
}
namespace System {
class ISpanFormattable;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
// Forward declare root types
namespace System {
class Version;
}
// Write type traits
MARK_REF_PTR_T(::System::Version);
// Type: System::Version
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::Version*
class CORDL_TYPE Version : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Build)) int32_t  Build;

 __declspec(property(get=get_DefaultFormatFieldCount)) int32_t  DefaultFormatFieldCount;

 __declspec(property(get=get_Major)) int32_t  Major;

 __declspec(property(get=get_Minor)) int32_t  Minor;

 __declspec(property(get=get_Revision)) int32_t  Revision;

/// @brief Field _Build, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__Build, put=__cordl_internal_set__Build)) int32_t  _Build;

/// @brief Field _Major, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__Major, put=__cordl_internal_set__Major)) int32_t  _Major;

/// @brief Field _Minor, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get__Minor, put=__cordl_internal_set__Minor)) int32_t  _Minor;

/// @brief Field _Revision, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Revision, put=__cordl_internal_set__Revision)) int32_t  _Revision;

/// @brief Convert operator to "::System::ICloneable"
constexpr operator  ::System::ICloneable*() noexcept;

/// @brief Convert operator to "::System::IComparable"
constexpr operator  ::System::IComparable*() noexcept;

/// @brief Convert operator to "::System::IComparable_1<::System::Version*>"
constexpr operator  ::System::IComparable_1<::System::Version*>*() noexcept;

/// @brief Convert operator to "::System::IEquatable_1<::System::Version*>"
constexpr operator  ::System::IEquatable_1<::System::Version*>*() noexcept;

/// @brief Convert operator to "::System::ISpanFormattable"
constexpr operator  ::System::ISpanFormattable*() noexcept;

/// @brief Method Clone, addr 0x3d7a1f8, size 0x58, virtual true, abstract: false, final true
inline ::System::Object* Clone() ;

/// @brief Method CompareTo, addr 0x3d7a33c, size 0x68, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Version*  value) ;

/// @brief Method CompareTo, addr 0x3d7a270, size 0xb8, virtual true, abstract: false, final true
inline int32_t CompareTo(::System::Object*  version) ;

/// @brief Method Equals, addr 0x3d7a3a4, size 0x64, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x3d7a408, size 0x60, virtual true, abstract: false, final true
inline bool Equals(::System::Version*  obj) ;

/// @brief Method GetHashCode, addr 0x3d7a468, size 0x1c, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

static inline ::System::Version* New_ctor() ;

static inline ::System::Version* New_ctor(int32_t  major, int32_t  minor) ;

static inline ::System::Version* New_ctor(int32_t  major, int32_t  minor, int32_t  build) ;

static inline ::System::Version* New_ctor(int32_t  major, int32_t  minor, int32_t  build, int32_t  revision) ;

static inline ::System::Version* New_ctor(::StringW  version) ;

static inline ::System::Version* New_ctor(::System::Version*  version) ;

/// @brief Method Parse, addr 0x3d7a100, size 0x98, virtual false, abstract: false, final false
static inline ::System::Version* Parse(::StringW  input) ;

/// @brief Method ParseVersion, addr 0x3d7a928, size 0x44c, virtual false, abstract: false, final false
static inline ::System::Version* ParseVersion(::System::ReadOnlySpan_1<char16_t>  input, bool  throwOnFailure) ;

/// @brief Method System.ISpanFormattable.TryFormat, addr 0x3d7a8fc, size 0x2c, virtual true, abstract: false, final true
inline bool System_ISpanFormattable_TryFormat(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten, ::System::ReadOnlySpan_1<char16_t>  format, ::System::IFormatProvider*  provider) ;

/// @brief Method ToCachedStringBuilder, addr 0x3d7a560, size 0x248, virtual false, abstract: false, final false
inline ::System::Text::StringBuilder* ToCachedStringBuilder(int32_t  fieldCount) ;

/// @brief Method ToString, addr 0x3d7a484, size 0x28, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToString, addr 0x3d7a4d4, size 0x8c, virtual false, abstract: false, final false
inline ::StringW ToString(int32_t  fieldCount) ;

/// @brief Method TryFormat, addr 0x3d7a7a8, size 0x2c, virtual false, abstract: false, final false
inline bool TryFormat(::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten) ;

/// @brief Method TryFormat, addr 0x3d7a7d4, size 0x128, virtual false, abstract: false, final false
inline bool TryFormat(::System::Span_1<char16_t>  destination, int32_t  fieldCount, ByRef<int32_t>  charsWritten) ;

/// @brief Method TryParse, addr 0x3d7ad74, size 0x6c, virtual false, abstract: false, final false
static inline bool TryParse(::StringW  input, ByRef<::System::Version*>  result) ;

/// @brief Method TryParseComponent, addr 0x3d7ae08, size 0x114, virtual false, abstract: false, final false
static inline bool TryParseComponent(::System::ReadOnlySpan_1<char16_t>  component, ::StringW  componentName, bool  throwOnFailure, ByRef<int32_t>  parsedComponent) ;

constexpr int32_t const& __cordl_internal_get__Build() const;

constexpr int32_t& __cordl_internal_get__Build() ;

constexpr int32_t const& __cordl_internal_get__Major() const;

constexpr int32_t& __cordl_internal_get__Major() ;

constexpr int32_t const& __cordl_internal_get__Minor() const;

constexpr int32_t& __cordl_internal_get__Minor() ;

constexpr int32_t const& __cordl_internal_get__Revision() const;

constexpr int32_t& __cordl_internal_get__Revision() ;

constexpr void __cordl_internal_set__Build(int32_t  value) ;

constexpr void __cordl_internal_set__Major(int32_t  value) ;

constexpr void __cordl_internal_set__Minor(int32_t  value) ;

constexpr void __cordl_internal_set__Revision(int32_t  value) ;

/// @brief Method .ctor, addr 0x3d7a198, size 0x24, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x3d7a004, size 0xb8, virtual false, abstract: false, final false
inline void _ctor(int32_t  major, int32_t  minor) ;

/// @brief Method .ctor, addr 0x3d79f18, size 0xec, virtual false, abstract: false, final false
inline void _ctor(int32_t  major, int32_t  minor, int32_t  build) ;

/// @brief Method .ctor, addr 0x3d79e04, size 0x114, virtual false, abstract: false, final false
inline void _ctor(int32_t  major, int32_t  minor, int32_t  build, int32_t  revision) ;

/// @brief Method .ctor, addr 0x3d7a0bc, size 0x44, virtual false, abstract: false, final false
inline void _ctor(::StringW  version) ;

/// @brief Method .ctor, addr 0x3d7a1bc, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Version*  version) ;

/// @brief Method get_Build, addr 0x3d7a260, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Build() ;

/// @brief Method get_DefaultFormatFieldCount, addr 0x3d7a4ac, size 0x28, virtual false, abstract: false, final false
inline int32_t get_DefaultFormatFieldCount() ;

/// @brief Method get_Major, addr 0x3d7a250, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Major() ;

/// @brief Method get_Minor, addr 0x3d7a258, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Minor() ;

/// @brief Method get_Revision, addr 0x3d7a268, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Revision() ;

/// @brief Convert to "::System::ICloneable"
constexpr ::System::ICloneable* i___System__ICloneable() noexcept;

/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* i___System__IComparable() noexcept;

/// @brief Convert to "::System::IComparable_1<::System::Version*>"
constexpr ::System::IComparable_1<::System::Version*>* i___System__IComparable_1___System__Version__() noexcept;

/// @brief Convert to "::System::IEquatable_1<::System::Version*>"
constexpr ::System::IEquatable_1<::System::Version*>* i___System__IEquatable_1___System__Version__() noexcept;

/// @brief Convert to "::System::ISpanFormattable"
constexpr ::System::ISpanFormattable* i___System__ISpanFormattable() noexcept;

/// @brief Method op_Equality, addr 0x3d7a328, size 0x14, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Version*  v1, ::System::Version*  v2) ;

/// @brief Method op_GreaterThan, addr 0x3d7afe0, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThan(::System::Version*  v1, ::System::Version*  v2) ;

/// @brief Method op_GreaterThanOrEqual, addr 0x3d7aff0, size 0x10, virtual false, abstract: false, final false
static inline bool op_GreaterThanOrEqual(::System::Version*  v1, ::System::Version*  v2) ;

/// @brief Method op_Inequality, addr 0x3d7ade0, size 0x28, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Version*  v1, ::System::Version*  v2) ;

/// @brief Method op_LessThan, addr 0x3d7af1c, size 0x60, virtual false, abstract: false, final false
static inline bool op_LessThan(::System::Version*  v1, ::System::Version*  v2) ;

/// @brief Method op_LessThanOrEqual, addr 0x3d7af7c, size 0x64, virtual false, abstract: false, final false
static inline bool op_LessThanOrEqual(::System::Version*  v1, ::System::Version*  v2) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Version() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Version(Version && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Version", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Version(Version const& ) = delete;

/// @brief Field _Major, offset: 0x10, size: 0x4, def value: None
 int32_t  ____Major;

/// @brief Field _Minor, offset: 0x14, size: 0x4, def value: None
 int32_t  ____Minor;

/// @brief Field _Build, offset: 0x18, size: 0x4, def value: None
 int32_t  ____Build;

/// @brief Field _Revision, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Revision;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Version, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Version, ____Major) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Version, ____Minor) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Version, ____Build) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Version, ____Revision) == 0x1c, "Offset mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::Version);
DEFINE_IL2CPP_ARG_TYPE(::System::Version*, "System", "Version");
