#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DefaultSerializationBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DefaultSerializationBinder)
namespace Newtonsoft::Json::Serialization {
class ISerializationBinder;
}
namespace Newtonsoft::Json::Utilities {
template<typename T1,typename T2>
struct StructMultiKey_2;
}
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class DefaultSerializationBinder;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::DefaultSerializationBinder);
// Type: Newtonsoft.Json.Serialization::DefaultSerializationBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::DefaultSerializationBinder*
class CORDL_TYPE DefaultSerializationBinder : public ::System::Runtime::Serialization::SerializationBinder {
public:
// Declarations
/// @brief Field Instance, offset 0xffffffff, size 0x8 
static __declspec(property(get=getStaticF_Instance, put=setStaticF_Instance)) ::Newtonsoft::Json::Serialization::DefaultSerializationBinder*  Instance;

/// @brief Field _typeCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__typeCache, put=__cordl_internal_set__typeCache)) ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>,::System::Type*>*  _typeCache;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr operator  ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept;

/// @brief Method BindToName, addr 0x3e53b04, size 0x68, virtual true, abstract: false, final false
inline void BindToName(::System::Type*  serializedType, ByRef<::StringW>  assemblyName, ByRef<::StringW>  typeName) ;

/// @brief Method BindToType, addr 0x3e53a88, size 0x7c, virtual true, abstract: false, final false
inline ::System::Type* BindToType(::StringW  assemblyName, ::StringW  typeName) ;

/// @brief Method GetGenericTypeFromTypeName, addr 0x3e53760, size 0x2c0, virtual false, abstract: false, final false
inline ::System::Type* GetGenericTypeFromTypeName(::StringW  typeName, ::System::Reflection::Assembly*  assembly) ;

/// @brief Method GetTypeByName, addr 0x3e53a20, size 0x68, virtual false, abstract: false, final false
inline ::System::Type* GetTypeByName(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>  typeNameKey) ;

/// @brief Method GetTypeFromTypeNameKey, addr 0x3e53370, size 0x3f0, virtual false, abstract: false, final false
inline ::System::Type* GetTypeFromTypeNameKey(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>  typeNameKey) ;

static inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* New_ctor() ;

constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>,::System::Type*>*& __cordl_internal_get__typeCache() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>,::System::Type*>*> const& __cordl_internal_get__typeCache() const;

constexpr void __cordl_internal_set__typeCache(::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>,::System::Type*>*  value) ;

/// @brief Method .ctor, addr 0x3e532a0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* getStaticF_Instance() ;

/// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept;

static inline void setStaticF_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DefaultSerializationBinder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultSerializationBinder(DefaultSerializationBinder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultSerializationBinder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultSerializationBinder(DefaultSerializationBinder const& ) = delete;

/// @brief Field _typeCache, offset: 0x10, size: 0x8, def value: None
 ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW,::StringW>,::System::Type*>*  ____typeCache;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::DefaultSerializationBinder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::DefaultSerializationBinder, ____typeCache) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::DefaultSerializationBinder);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Newtonsoft.Json.Serialization", "DefaultSerializationBinder");
