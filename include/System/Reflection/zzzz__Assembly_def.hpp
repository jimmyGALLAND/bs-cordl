#pragma once
// IWYU pragma private; include "System/Reflection/Assembly.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Assembly)
namespace System::Reflection {
class AssemblyName;
}
namespace System::Reflection {
class ICustomAttributeProvider;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
namespace System::Runtime::InteropServices {
class _Assembly;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Security::Policy {
class Evidence;
}
namespace System {
class Exception;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class __Assembly__ResolveEventHolder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Assembly);
MARK_REF_PTR_T(::System::Reflection::__Assembly__ResolveEventHolder);
// Type: ::ResolveEventHolder
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::Assembly::ResolveEventHolder*
class CORDL_TYPE __Assembly__ResolveEventHolder : public ::System::Object {
public:
// Declarations
static inline ::System::Reflection::__Assembly__ResolveEventHolder* New_ctor() ;

/// @brief Method .ctor, addr 0x3c9adac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __Assembly__ResolveEventHolder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__Assembly__ResolveEventHolder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__Assembly__ResolveEventHolder(__Assembly__ResolveEventHolder const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::__Assembly__ResolveEventHolder, 0x10>, "Size mismatch!");

} // namespace end def System::Reflection
// Type: System.Reflection::Assembly
// SizeInfo { instance_size: 16, native_size: 1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection {
// Is value type: false
// CS Name: ::System.Reflection::Assembly*
class CORDL_TYPE Assembly : public ::System::Object {
public:
// Declarations
using ResolveEventHolder = ::System::Reflection::__Assembly__ResolveEventHolder;

 __declspec(property(get=get_CodeBase)) ::StringW  CodeBase;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_IsFullyTrusted)) bool  IsFullyTrusted;

 __declspec(property(get=get_Location)) ::StringW  Location;

 __declspec(property(get=get_MonoAssembly)) ::System::IntPtr  MonoAssembly;

/// @brief Convert operator to "::System::Reflection::ICustomAttributeProvider"
constexpr operator  ::System::Reflection::ICustomAttributeProvider*() noexcept;

/// @brief Convert operator to "::System::Runtime::InteropServices::_Assembly"
constexpr operator  ::System::Runtime::InteropServices::_Assembly*() noexcept;

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

/// @brief Method CreateNIE, addr 0x3c9ac6c, size 0x6c, virtual false, abstract: false, final false
static inline ::System::Exception* CreateNIE() ;

/// @brief Method Equals, addr 0x3c9ac64, size 0x8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetAssembly, addr 0x3c9aa30, size 0xc4, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* GetAssembly(::System::Type*  type) ;

/// @brief Method GetCallingAssembly, addr 0x3c8cb20, size 0x4, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* GetCallingAssembly() ;

/// @brief Method GetCustomAttributes, addr 0x3c9a964, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x3c9a92c, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetExecutingAssembly, addr 0x3c9ac1c, size 0x40, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* GetExecutingAssembly() ;

/// @brief Method GetHashCode, addr 0x3c9ac5c, size 0x8, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetModule, addr 0x3c9ad04, size 0x24, virtual true, abstract: false, final false
inline ::System::Reflection::Module* GetModule(::StringW  name) ;

/// @brief Method GetModules, addr 0x3c9ad28, size 0x24, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::Module*,::Array<::System::Reflection::Module*>*> GetModules(bool  getResourceModules) ;

/// @brief Method GetModulesInternal, addr 0x3c9abe4, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::Module*,::Array<::System::Reflection::Module*>*> GetModulesInternal() ;

/// @brief Method GetName, addr 0x3c9aa14, size 0x14, virtual true, abstract: false, final false
inline ::System::Reflection::AssemblyName* GetName() ;

/// @brief Method GetName, addr 0x3c9a9dc, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::AssemblyName* GetName(bool  copiedName) ;

/// @brief Method GetObjectData, addr 0x3c9a8bc, size 0x38, virtual true, abstract: false, final false
inline void GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method GetType, addr 0x3c9a9b8, size 0x18, virtual true, abstract: false, final false
inline ::System::Type* GetType(::StringW  name) ;

/// @brief Method GetType, addr 0x3c9ace0, size 0x24, virtual true, abstract: false, final false
inline ::System::Type* GetType(::StringW  name, bool  throwOnError, bool  ignoreCase) ;

/// @brief Method GetTypes, addr 0x3c9a9a4, size 0x14, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetTypes() ;

/// @brief Method GetTypes, addr 0x3c9a99c, size 0x8, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetTypes(bool  exportedOnly) ;

/// @brief Method InternalGetType, addr 0x3c9a9d0, size 0xc, virtual false, abstract: false, final false
inline ::System::Type* InternalGetType(::System::Reflection::Module*  _cordl_module, ::StringW  name, bool  throwOnError, bool  ignoreCase) ;

/// @brief Method IsDefined, addr 0x3c9a8f4, size 0x38, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method Load, addr 0x3c9aaf4, size 0x28, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* Load(::StringW  assemblyString) ;

/// @brief Method LoadWithPartialName, addr 0x3c9ab64, size 0xc, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW  partialName) ;

/// @brief Method LoadWithPartialName, addr 0x3c9ab70, size 0x8, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW  partialName, ::System::Security::Policy::Evidence*  securityEvidence) ;

/// @brief Method LoadWithPartialName, addr 0x3c9ab7c, size 0x68, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* LoadWithPartialName(::StringW  partialName, ::System::Security::Policy::Evidence*  securityEvidence, bool  oldBehavior) ;

static inline ::System::Reflection::Assembly* New_ctor() ;

/// @brief Method ReflectionOnlyLoad, addr 0x3c9ab1c, size 0x48, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* ReflectionOnlyLoad(::StringW  assemblyString) ;

/// @brief Method ToString, addr 0x3c9aa28, size 0x8, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method .ctor, addr 0x3c9ada4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CodeBase, addr 0x3c9a7dc, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_CodeBase() ;

/// @brief Method get_FullName, addr 0x3c9a814, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_IsFullyTrusted, addr 0x3c9acd8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFullyTrusted() ;

/// @brief Method get_Location, addr 0x3c9a884, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Location() ;

/// @brief Method get_MonoAssembly, addr 0x3c9a84c, size 0x38, virtual true, abstract: false, final false
inline ::System::IntPtr get_MonoAssembly() ;

/// @brief Convert to "::System::Reflection::ICustomAttributeProvider"
constexpr ::System::Reflection::ICustomAttributeProvider* i___System__Reflection__ICustomAttributeProvider() noexcept;

/// @brief Convert to "::System::Runtime::InteropServices::_Assembly"
constexpr ::System::Runtime::InteropServices::_Assembly* i___System__Runtime__InteropServices___Assembly() noexcept;

/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* i___System__Runtime__Serialization__ISerializable() noexcept;

/// @brief Method load_with_partial_name, addr 0x3c9ab78, size 0x4, virtual false, abstract: false, final false
static inline ::System::Reflection::Assembly* load_with_partial_name(::StringW  name, ::System::Security::Policy::Evidence*  e) ;

/// @brief Method op_Equality, addr 0x3c8c9b8, size 0x50, virtual false, abstract: false, final false
static inline bool op_Equality(::System::Reflection::Assembly*  left, ::System::Reflection::Assembly*  right) ;

/// @brief Method op_Inequality, addr 0x3c9ad4c, size 0x58, virtual false, abstract: false, final false
static inline bool op_Inequality(::System::Reflection::Assembly*  left, ::System::Reflection::Assembly*  right) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Assembly() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Assembly(Assembly && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Assembly", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Assembly(Assembly const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Assembly, 0x10>, "Size mismatch!");

} // namespace end def System::Reflection
NEED_NO_BOX(::System::Reflection::Assembly);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Assembly*, "System.Reflection", "Assembly");
NEED_NO_BOX(::System::Reflection::__Assembly__ResolveEventHolder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::__Assembly__ResolveEventHolder*, "System.Reflection", "Assembly/ResolveEventHolder");
