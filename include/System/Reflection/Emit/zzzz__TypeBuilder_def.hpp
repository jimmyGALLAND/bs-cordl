#pragma once
// IWYU pragma private; include "System/Reflection/Emit/TypeBuilder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Reflection/zzzz__TypeInfo_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TypeBuilder)
namespace System::Globalization {
class CultureInfo;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
class Binder;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
struct CallingConventions;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class EventInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class Module;
}
namespace System::Reflection {
struct ParameterModifier;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Reflection {
struct TypeAttributes;
}
namespace System {
struct Guid;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Reflection::Emit {
class TypeBuilder;
}
// Write type traits
MARK_REF_PTR_T(::System::Reflection::Emit::TypeBuilder);
// Type: System.Reflection.Emit::TypeBuilder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Reflection::Emit {
// Is value type: false
// CS Name: ::System.Reflection.Emit::TypeBuilder*
class CORDL_TYPE TypeBuilder : public ::System::Reflection::TypeInfo {
public:
// Declarations
 __declspec(property(get=get_Assembly)) ::System::Reflection::Assembly*  Assembly;

 __declspec(property(get=get_AssemblyQualifiedName)) ::StringW  AssemblyQualifiedName;

 __declspec(property(get=get_BaseType)) ::System::Type*  BaseType;

 __declspec(property(get=get_FullName)) ::StringW  FullName;

 __declspec(property(get=get_GUID)) ::System::Guid  GUID;

 __declspec(property(get=get_Module)) ::System::Reflection::Module*  Module;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_Namespace)) ::StringW  Namespace;

 __declspec(property(get=get_UnderlyingSystemType)) ::System::Type*  UnderlyingSystemType;

/// @brief Method GetAttributeFlagsImpl, addr 0x3ca6060, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::TypeAttributes GetAttributeFlagsImpl() ;

/// @brief Method GetConstructorImpl, addr 0x3ca6098, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::ConstructorInfo* GetConstructorImpl(::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetConstructors, addr 0x3ca60d0, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::ConstructorInfo*,::Array<::System::Reflection::ConstructorInfo*>*> GetConstructors(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetCustomAttributes, addr 0x3ca6140, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method GetCustomAttributes, addr 0x3ca6108, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Object*,::Array<::System::Object*>*> GetCustomAttributes(bool  inherit) ;

/// @brief Method GetElementType, addr 0x3ca6178, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* GetElementType() ;

/// @brief Method GetEvent, addr 0x3ca61b0, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::EventInfo* GetEvent(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetEvents, addr 0x3ca61e8, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::EventInfo*,::Array<::System::Reflection::EventInfo*>*> GetEvents(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetField, addr 0x3ca6220, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::FieldInfo* GetField(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetFields, addr 0x3ca6258, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::FieldInfo*,::Array<::System::Reflection::FieldInfo*>*> GetFields(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetInterfaces, addr 0x3ca6290, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Type*,::Array<::System::Type*>*> GetInterfaces() ;

/// @brief Method GetMembers, addr 0x3ca62c8, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MemberInfo*,::Array<::System::Reflection::MemberInfo*>*> GetMembers(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetMethodImpl, addr 0x3ca6300, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::MethodInfo* GetMethodImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Reflection::CallingConventions  callConvention, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method GetMethods, addr 0x3ca6338, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::MethodInfo*,::Array<::System::Reflection::MethodInfo*>*> GetMethods(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetNestedType, addr 0x3ca6370, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* GetNestedType(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetProperties, addr 0x3ca63a8, size 0x38, virtual true, abstract: false, final false
inline ::ArrayW<::System::Reflection::PropertyInfo*,::Array<::System::Reflection::PropertyInfo*>*> GetProperties(::System::Reflection::BindingFlags  bindingAttr) ;

/// @brief Method GetPropertyImpl, addr 0x3ca63e0, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::PropertyInfo* GetPropertyImpl(::StringW  name, ::System::Reflection::BindingFlags  bindingAttr, ::System::Reflection::Binder*  binder, ::System::Type*  returnType, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  types, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers) ;

/// @brief Method HasElementTypeImpl, addr 0x3ca6418, size 0x38, virtual true, abstract: false, final false
inline bool HasElementTypeImpl() ;

/// @brief Method InvokeMember, addr 0x3ca6450, size 0x38, virtual true, abstract: false, final false
inline ::System::Object* InvokeMember(::StringW  name, ::System::Reflection::BindingFlags  invokeAttr, ::System::Reflection::Binder*  binder, ::System::Object*  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, ::ArrayW<::System::Reflection::ParameterModifier,::Array<::System::Reflection::ParameterModifier>*>  modifiers, ::System::Globalization::CultureInfo*  culture, ::ArrayW<::StringW,::Array<::StringW>*>  namedParameters) ;

/// @brief Method IsArrayImpl, addr 0x3ca6488, size 0x38, virtual true, abstract: false, final false
inline bool IsArrayImpl() ;

/// @brief Method IsByRefImpl, addr 0x3ca64c0, size 0x38, virtual true, abstract: false, final false
inline bool IsByRefImpl() ;

/// @brief Method IsCOMObjectImpl, addr 0x3ca64f8, size 0x38, virtual true, abstract: false, final false
inline bool IsCOMObjectImpl() ;

/// @brief Method IsDefined, addr 0x3ca6530, size 0x38, virtual true, abstract: false, final false
inline bool IsDefined(::System::Type*  attributeType, bool  inherit) ;

/// @brief Method IsPointerImpl, addr 0x3ca6568, size 0x38, virtual true, abstract: false, final false
inline bool IsPointerImpl() ;

/// @brief Method IsPrimitiveImpl, addr 0x3ca65a0, size 0x38, virtual true, abstract: false, final false
inline bool IsPrimitiveImpl() ;

/// @brief Method get_Assembly, addr 0x3ca5e68, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::Assembly* get_Assembly() ;

/// @brief Method get_AssemblyQualifiedName, addr 0x3ca5ea0, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_AssemblyQualifiedName() ;

/// @brief Method get_BaseType, addr 0x3ca5ed8, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* get_BaseType() ;

/// @brief Method get_FullName, addr 0x3ca5f10, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_FullName() ;

/// @brief Method get_GUID, addr 0x3ca5f48, size 0x38, virtual true, abstract: false, final false
inline ::System::Guid get_GUID() ;

/// @brief Method get_Module, addr 0x3ca5f80, size 0x38, virtual true, abstract: false, final false
inline ::System::Reflection::Module* get_Module() ;

/// @brief Method get_Name, addr 0x3ca5fb8, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_Namespace, addr 0x3ca5ff0, size 0x38, virtual true, abstract: false, final false
inline ::StringW get_Namespace() ;

/// @brief Method get_UnderlyingSystemType, addr 0x3ca6028, size 0x38, virtual true, abstract: false, final false
inline ::System::Type* get_UnderlyingSystemType() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TypeBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TypeBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeBuilder(TypeBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeBuilder(TypeBuilder const& ) = delete;

/// @brief Field UnspecifiedTypeSize offset 0xffffffff size 0x4
static constexpr int32_t  UnspecifiedTypeSize{static_cast<int32_t>(0x0)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Reflection::Emit::TypeBuilder, 0x18>, "Size mismatch!");

} // namespace end def System::Reflection::Emit
NEED_NO_BOX(::System::Reflection::Emit::TypeBuilder);
DEFINE_IL2CPP_ARG_TYPE(::System::Reflection::Emit::TypeBuilder*, "System.Reflection.Emit", "TypeBuilder");
