#pragma once
// IWYU pragma private; include "System/IO/Directory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/IO/zzzz__Directory_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/IO/zzzz__DirectoryInfo_def.hpp"
#include "System/IO/zzzz__EnumerationOptions_def.hpp"
#include "System/IO/zzzz__SearchOption_def.hpp"
#include "System/IO/zzzz__SearchTarget_def.hpp"
#include "System/Security/AccessControl/zzzz__AccessControlSections_def.hpp"
#include "System/Security/AccessControl/zzzz__DirectorySecurity_def.hpp"
//  Writing Method size for method: ::System::IO::Directory.GetParent
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&::System::IO::Directory::GetParent)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x3cd452c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.CreateDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IO::DirectoryInfo* (*)(::StringW)>(&::System::IO::Directory::CreateDirectory)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3cd46e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "CreateDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.Exists
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::IO::Directory::Exists)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x3cd4e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "Exists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)(::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3cd4fe0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)(::StringW, ::StringW)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3cd50f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x3cd5190;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetFiles
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::GetFiles)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3cd5088;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalEnumeratePaths
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchTarget, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::InternalEnumeratePaths)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x3cd533c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InternalEnumeratePaths",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateDirectories
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::SearchOption)>(&::System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3cd54fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateDirectories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateDirectories
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateDirectories)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cd5574;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateDirectories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x3cd5580;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateFileSystemEntries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.EnumerateFileSystemEntries
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW, ::StringW, ::System::IO::EnumerationOptions*)>(&::System::IO::Directory::EnumerateFileSystemEntries)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3cd562c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateFileSystemEntries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InternalGetDirectoryRoot
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::IO::Directory::InternalGetDirectoryRoot)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x3cd5638;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InternalGetDirectoryRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetCurrentDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::IO::Directory::GetCurrentDirectory)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd56f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetCurrentDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetLogicalDrives
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::StringW,::Array<::StringW>*> (*)()>(&::System::IO::Directory::GetLogicalDrives)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd56fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetLogicalDrives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetAccessControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::DirectorySecurity* (*)(::StringW, ::System::Security::AccessControl::AccessControlSections)>(&::System::IO::Directory::GetAccessControl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3cd570c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetAccessControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.GetAccessControl
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Security::AccessControl::DirectorySecurity* (*)(::StringW)>(&::System::IO::Directory::GetAccessControl)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3cd5778;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetAccessControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IO::Directory.InsecureGetCurrentDirectory
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::System::IO::Directory::InsecureGetCurrentDirectory)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3cd5780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InsecureGetCurrentDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
inline ::System::IO::DirectoryInfo* System::IO::Directory::GetParent(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetParent",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*, false>(nullptr, ___internal_method, path);
}
inline ::System::IO::DirectoryInfo* System::IO::Directory::CreateDirectory(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "CreateDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IO::DirectoryInfo*, false>(nullptr, ___internal_method, path);
}
inline bool System::IO::Directory::Exists(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "Exists",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::IO::Directory::GetFiles(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method, path);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method, path, searchPattern);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::IO::Directory::GetFiles(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetFiles",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::InternalEnumeratePaths(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchTarget  searchTarget, ::System::IO::EnumerationOptions*  options)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InternalEnumeratePaths",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchTarget>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path, searchPattern, searchTarget, options);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::SearchOption  searchOption)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateDirectories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::SearchOption>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path, searchPattern, searchOption);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateDirectories(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateDirectories",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateFileSystemEntries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* System::IO::Directory::EnumerateFileSystemEntries(::StringW  path, ::StringW  searchPattern, ::System::IO::EnumerationOptions*  enumerationOptions)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "EnumerateFileSystemEntries",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::EnumerationOptions*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, path, searchPattern, enumerationOptions);
}
inline ::StringW System::IO::Directory::InternalGetDirectoryRoot(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InternalGetDirectoryRoot",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Directory::GetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetCurrentDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::ArrayW<::StringW,::Array<::StringW>*> System::IO::Directory::GetLogicalDrives()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetLogicalDrives",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::StringW,::Array<::StringW>*>, false>(nullptr, ___internal_method);
}
inline ::System::Security::AccessControl::DirectorySecurity* System::IO::Directory::GetAccessControl(::StringW  path, ::System::Security::AccessControl::AccessControlSections  includeSections)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetAccessControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Security::AccessControl::AccessControlSections>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::DirectorySecurity*, false>(nullptr, ___internal_method, path, includeSections);
}
inline ::System::Security::AccessControl::DirectorySecurity* System::IO::Directory::GetAccessControl(::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "GetAccessControl",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Security::AccessControl::DirectorySecurity*, false>(nullptr, ___internal_method, path);
}
inline ::StringW System::IO::Directory::InsecureGetCurrentDirectory()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::IO::Directory*>::get(),
                        "InsecureGetCurrentDirectory",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::IO::Directory::Directory()   {
}
