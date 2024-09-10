#pragma once
// IWYU pragma private; include "System/IO/Path.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Path)
namespace System::Buffers {
template<typename T,typename TArg>
class SpanAction_2;
}
namespace System::IO {
class __Path____c;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace System {
template<typename T>
struct Span_1;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
// Forward declare root types
namespace System::IO {
class Path;
}
namespace System::IO {
class __Path____c;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Path);
MARK_REF_PTR_T(::System::IO::__Path____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::Path::<>c*
class CORDL_TYPE __Path____c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::System::IO::__Path____c*  __9;

/// @brief Field <>9__56_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__56_0, put=setStaticF___9__56_0)) ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  __9__56_0;

/// @brief Field <>9__57_0, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF___9__57_0, put=setStaticF___9__57_0)) ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  __9__57_0;

static inline ::System::IO::__Path____c* New_ctor() ;

/// @brief Method <JoinInternal>b__56_0, addr 0x3cf22ac, size 0x15c, virtual false, abstract: false, final false
inline void _JoinInternal_b__56_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>  state) ;

/// @brief Method <JoinInternal>b__57_0, addr 0x3cf2408, size 0x1fc, virtual false, abstract: false, final false
inline void _JoinInternal_b__57_0(::System::Span_1<char16_t>  destination, ::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>  state) ;

/// @brief Method .ctor, addr 0x3cf22a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::IO::__Path____c* getStaticF___9() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>* getStaticF___9__56_0() ;

static inline ::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>* getStaticF___9__57_0() ;

static inline void setStaticF___9(::System::IO::__Path____c*  value) ;

static inline void setStaticF___9__56_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_5<::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool>>*  value) ;

static inline void setStaticF___9__57_0(::System::Buffers::SpanAction_2<char16_t,::System::ValueTuple_8<::System::IntPtr,int32_t,::System::IntPtr,int32_t,::System::IntPtr,int32_t,bool,::System::ValueTuple_1<bool>>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Path____c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Path____c", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Path____c(__Path____c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Path____c", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Path____c(__Path____c const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::__Path____c, 0x10>, "Size mismatch!");

} // namespace end def System::IO
// Type: System.IO::Path
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// CS Name: ::System.IO::Path*
class CORDL_TYPE Path : public ::System::Object {
public:
// Declarations
using __c = ::System::IO::__Path____c;

/// @brief Field AltDirectorySeparatorChar, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_AltDirectorySeparatorChar, put=setStaticF_AltDirectorySeparatorChar)) char16_t  AltDirectorySeparatorChar;

/// @brief Field DirectorySeparatorChar, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_DirectorySeparatorChar, put=setStaticF_DirectorySeparatorChar)) char16_t  DirectorySeparatorChar;

/// @brief Field DirectorySeparatorStr, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_DirectorySeparatorStr, put=setStaticF_DirectorySeparatorStr)) ::StringW  DirectorySeparatorStr;

/// @brief Field InvalidPathChars, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_InvalidPathChars, put=setStaticF_InvalidPathChars)) ::ArrayW<char16_t,::Array<char16_t>*>  InvalidPathChars;

/// @brief Field PathSeparator, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_PathSeparator, put=setStaticF_PathSeparator)) char16_t  PathSeparator;

/// @brief Field PathSeparatorChars, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_PathSeparatorChars, put=setStaticF_PathSeparatorChars)) ::ArrayW<char16_t,::Array<char16_t>*>  PathSeparatorChars;

/// @brief Field VolumeSeparatorChar, offset 0xffffffff, size 0x2 
static __declspec(property(get=getStaticF_VolumeSeparatorChar, put=setStaticF_VolumeSeparatorChar)) char16_t  VolumeSeparatorChar;

/// @brief Field dirEqualsVolume, offset 0xffffffff, size 0x1 
static __declspec(property(get=getStaticF_dirEqualsVolume, put=setStaticF_dirEqualsVolume)) bool  dirEqualsVolume;

/// @brief Field trimEndCharsUnix, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_trimEndCharsUnix, put=setStaticF_trimEndCharsUnix)) ::ArrayW<char16_t,::Array<char16_t>*>  trimEndCharsUnix;

/// @brief Field trimEndCharsWindows, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_trimEndCharsWindows, put=setStaticF_trimEndCharsWindows)) ::ArrayW<char16_t,::Array<char16_t>*>  trimEndCharsWindows;

/// @brief Method CanonicalizePath, addr 0x3cf0798, size 0x3dc, virtual false, abstract: false, final false
static inline ::StringW CanonicalizePath(::StringW  path) ;

/// @brief Method ChangeExtension, addr 0x3ceea54, size 0x1f0, virtual false, abstract: false, final false
static inline ::StringW ChangeExtension(::StringW  path, ::StringW  extension) ;

/// @brief Method CleanPath, addr 0x3cef05c, size 0x450, virtual false, abstract: false, final false
static inline ::StringW CleanPath(::StringW  s) ;

/// @brief Method Combine, addr 0x3ceecd8, size 0x260, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2) ;

/// @brief Method Combine, addr 0x3cf143c, size 0x14c, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2, ::StringW  path3) ;

/// @brief Method Combine, addr 0x3cf1588, size 0x180, virtual false, abstract: false, final false
static inline ::StringW Combine(::StringW  path1, ::StringW  path2, ::StringW  path3, ::StringW  path4) ;

/// @brief Method Combine, addr 0x3cf114c, size 0x2f0, virtual false, abstract: false, final false
static inline ::StringW Combine(::ArrayW<::StringW,::Array<::StringW>*>  paths) ;

/// @brief Method GetDirectoryName, addr 0x3cef4ac, size 0x390, virtual false, abstract: false, final false
static inline ::StringW GetDirectoryName(::StringW  path) ;

/// @brief Method GetDirectoryName, addr 0x3cefc68, size 0xd0, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GetDirectoryName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetExtension, addr 0x3cefd38, size 0x128, virtual false, abstract: false, final false
static inline ::StringW GetExtension(::StringW  path) ;

/// @brief Method GetFileName, addr 0x3cefe60, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW GetFileName(::StringW  path) ;

/// @brief Method GetFileName, addr 0x3cf1708, size 0x144, virtual false, abstract: false, final false
static inline ::System::ReadOnlySpan_1<char16_t> GetFileName(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method GetFileNameWithoutExtension, addr 0x3ceff6c, size 0x5c, virtual false, abstract: false, final false
static inline ::StringW GetFileNameWithoutExtension(::StringW  path) ;

/// @brief Method GetFullPath, addr 0x3ceffc8, size 0x68, virtual false, abstract: false, final false
static inline ::StringW GetFullPath(::StringW  path) ;

/// @brief Method GetFullPathInternal, addr 0x3cf06b8, size 0x54, virtual false, abstract: false, final false
static inline ::StringW GetFullPathInternal(::StringW  path) ;

/// @brief Method GetInvalidPathChars, addr 0x3cf0d88, size 0x94, virtual false, abstract: false, final false
static inline ::ArrayW<char16_t,::Array<char16_t>*> GetInvalidPathChars() ;

/// @brief Method GetPathRoot, addr 0x3cef83c, size 0x42c, virtual false, abstract: false, final false
static inline ::StringW GetPathRoot(::StringW  path) ;

/// @brief Method GetRandomFileName, addr 0x3cf0e1c, size 0x164, virtual false, abstract: false, final false
static inline ::StringW GetRandomFileName() ;

/// @brief Method GetTempPath, addr 0x3cf0b74, size 0x10c, virtual false, abstract: false, final false
static inline ::StringW GetTempPath() ;

/// @brief Method InsecureGetFullPath, addr 0x3cf0030, size 0x688, virtual false, abstract: false, final false
static inline ::StringW InsecureGetFullPath(::StringW  path) ;

/// @brief Method IsDirectorySeparator, addr 0x3cf070c, size 0x8c, virtual false, abstract: false, final false
static inline bool IsDirectorySeparator(char16_t  c) ;

/// @brief Method IsPathRooted, addr 0x3ceef38, size 0x124, virtual false, abstract: false, final false
static inline bool IsPathRooted(::StringW  path) ;

/// @brief Method IsPathRooted, addr 0x3cf0c84, size 0x104, virtual false, abstract: false, final false
static inline bool IsPathRooted(::System::ReadOnlySpan_1<char16_t>  path) ;

/// @brief Method Join, addr 0x3cf184c, size 0xb8, virtual false, abstract: false, final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2) ;

/// @brief Method Join, addr 0x3cf1b74, size 0x110, virtual false, abstract: false, final false
static inline ::StringW Join(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::ReadOnlySpan_1<char16_t>  path3) ;

/// @brief Method JoinInternal, addr 0x3cf1904, size 0x270, virtual false, abstract: false, final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second) ;

/// @brief Method JoinInternal, addr 0x3cf1c84, size 0x358, virtual false, abstract: false, final false
static inline ::StringW JoinInternal(::System::ReadOnlySpan_1<char16_t>  first, ::System::ReadOnlySpan_1<char16_t>  second, ::System::ReadOnlySpan_1<char16_t>  third) ;

/// @brief Method TryJoin, addr 0x3cf1fdc, size 0x26c, virtual false, abstract: false, final false
static inline bool TryJoin(::System::ReadOnlySpan_1<char16_t>  path1, ::System::ReadOnlySpan_1<char16_t>  path2, ::System::Span_1<char16_t>  destination, ByRef<int32_t>  charsWritten) ;

/// @brief Method findExtension, addr 0x3ceec44, size 0x94, virtual false, abstract: false, final false
static inline int32_t findExtension(::StringW  path) ;

static inline char16_t getStaticF_AltDirectorySeparatorChar() ;

static inline char16_t getStaticF_DirectorySeparatorChar() ;

static inline ::StringW getStaticF_DirectorySeparatorStr() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_InvalidPathChars() ;

static inline char16_t getStaticF_PathSeparator() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_PathSeparatorChars() ;

static inline char16_t getStaticF_VolumeSeparatorChar() ;

static inline bool getStaticF_dirEqualsVolume() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_trimEndCharsUnix() ;

static inline ::ArrayW<char16_t,::Array<char16_t>*> getStaticF_trimEndCharsWindows() ;

/// @brief Method get_temp_path, addr 0x3cf0c80, size 0x4, virtual false, abstract: false, final false
static inline ::StringW get_temp_path() ;

static inline void setStaticF_AltDirectorySeparatorChar(char16_t  value) ;

static inline void setStaticF_DirectorySeparatorChar(char16_t  value) ;

static inline void setStaticF_DirectorySeparatorStr(::StringW  value) ;

static inline void setStaticF_InvalidPathChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_PathSeparator(char16_t  value) ;

static inline void setStaticF_PathSeparatorChars(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_VolumeSeparatorChar(char16_t  value) ;

static inline void setStaticF_dirEqualsVolume(bool  value) ;

static inline void setStaticF_trimEndCharsUnix(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

static inline void setStaticF_trimEndCharsWindows(::ArrayW<char16_t,::Array<char16_t>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Path() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Path(Path && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Path", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Path(Path const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Path, 0x10>, "Size mismatch!");

} // namespace end def System::IO
NEED_NO_BOX(::System::IO::Path);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Path*, "System.IO", "Path");
NEED_NO_BOX(::System::IO::__Path____c);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::__Path____c*, "System.IO", "Path/<>c");
