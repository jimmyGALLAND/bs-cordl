#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/JsonContract.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Newtonsoft/Json/Serialization/zzzz__JsonContractType_def.hpp"
#include "Newtonsoft/Json/zzzz__ReadType_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(JsonContract)
namespace Newtonsoft::Json::Serialization {
class ErrorContext;
}
namespace Newtonsoft::Json::Serialization {
class SerializationCallback;
}
namespace Newtonsoft::Json::Serialization {
class SerializationErrorCallback;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass57_0;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass58_0;
}
namespace Newtonsoft::Json {
class JsonConverter;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass57_0;
}
namespace Newtonsoft::Json::Serialization {
class __JsonContract____c__DisplayClass58_0;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::JsonContract);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0);
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0);
// Type: ::<>c__DisplayClass57_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonContract::<>c__DisplayClass57_0*
class CORDL_TYPE __JsonContract____c__DisplayClass57_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callbackMethodInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackMethodInfo, put=__cordl_internal_set_callbackMethodInfo)) ::System::Reflection::MethodInfo*  callbackMethodInfo;

static inline ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0* New_ctor() ;

/// @brief Method <CreateSerializationCallback>b__0, addr 0x3e55898, size 0xf4, virtual false, abstract: false, final false
inline void _CreateSerializationCallback_b__0(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_callbackMethodInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_callbackMethodInfo() const;

constexpr void __cordl_internal_set_callbackMethodInfo(::System::Reflection::MethodInfo*  value) ;

/// @brief Method .ctor, addr 0x3e55888, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __JsonContract____c__DisplayClass57_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass57_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__JsonContract____c__DisplayClass57_0(__JsonContract____c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass57_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__JsonContract____c__DisplayClass57_0(__JsonContract____c__DisplayClass57_0 const& ) = delete;

/// @brief Field callbackMethodInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___callbackMethodInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0, ___callbackMethodInfo) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
// Type: ::<>c__DisplayClass58_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::JsonContract::<>c__DisplayClass58_0*
class CORDL_TYPE __JsonContract____c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field callbackMethodInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_callbackMethodInfo, put=__cordl_internal_set_callbackMethodInfo)) ::System::Reflection::MethodInfo*  callbackMethodInfo;

static inline ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0* New_ctor() ;

/// @brief Method <CreateSerializationErrorCallback>b__0, addr 0x3e5598c, size 0x128, virtual false, abstract: false, final false
inline void _CreateSerializationErrorCallback_b__0(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::Newtonsoft::Json::Serialization::ErrorContext*  econtext) ;

constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_callbackMethodInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_callbackMethodInfo() const;

constexpr void __cordl_internal_set_callbackMethodInfo(::System::Reflection::MethodInfo*  value) ;

/// @brief Method .ctor, addr 0x3e55890, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __JsonContract____c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass58_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__JsonContract____c__DisplayClass58_0(__JsonContract____c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__JsonContract____c__DisplayClass58_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__JsonContract____c__DisplayClass58_0(__JsonContract____c__DisplayClass58_0 const& ) = delete;

/// @brief Field callbackMethodInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MethodInfo*  ___callbackMethodInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0, ___callbackMethodInfo) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
// Type: Newtonsoft.Json.Serialization::JsonContract
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 137, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::JsonContract*
class CORDL_TYPE JsonContract : public ::System::Object {
public:
// Declarations
using __c__DisplayClass57_0 = ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0;

using __c__DisplayClass58_0 = ::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0;

/// @brief Field ContractType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_ContractType, put=__cordl_internal_set_ContractType)) ::Newtonsoft::Json::Serialization::JsonContractType  ContractType;

 __declspec(property(get=get_Converter, put=set_Converter)) ::Newtonsoft::Json::JsonConverter*  Converter;

 __declspec(property(get=get_CreatedType, put=set_CreatedType)) ::System::Type*  CreatedType;

 __declspec(property(get=get_DefaultCreator, put=set_DefaultCreator)) ::System::Func_1<::System::Object*>*  DefaultCreator;

 __declspec(property(get=get_DefaultCreatorNonPublic, put=set_DefaultCreatorNonPublic)) bool  DefaultCreatorNonPublic;

 __declspec(property(get=get_InternalConverter, put=set_InternalConverter)) ::Newtonsoft::Json::JsonConverter*  InternalConverter;

/// @brief Field InternalReadType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_InternalReadType, put=__cordl_internal_set_InternalReadType)) ::Newtonsoft::Json::ReadType  InternalReadType;

/// @brief Field IsConvertable, offset 0x11, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsConvertable, put=__cordl_internal_set_IsConvertable)) bool  IsConvertable;

/// @brief Field IsEnum, offset 0x12, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsEnum, put=__cordl_internal_set_IsEnum)) bool  IsEnum;

/// @brief Field IsInstantiable, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsInstantiable, put=__cordl_internal_set_IsInstantiable)) bool  IsInstantiable;

/// @brief Field IsNullable, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsNullable, put=__cordl_internal_set_IsNullable)) bool  IsNullable;

/// @brief Field IsReadOnlyOrFixedSize, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsReadOnlyOrFixedSize, put=__cordl_internal_set_IsReadOnlyOrFixedSize)) bool  IsReadOnlyOrFixedSize;

 __declspec(property(get=get_IsReference, put=set_IsReference)) ::System::Nullable_1<bool>  IsReference;

/// @brief Field IsSealed, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_IsSealed, put=__cordl_internal_set_IsSealed)) bool  IsSealed;

/// @brief Field NonNullableUnderlyingType, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_NonNullableUnderlyingType, put=__cordl_internal_set_NonNullableUnderlyingType)) ::System::Type*  NonNullableUnderlyingType;

 __declspec(property(get=get_OnDeserializedCallbacks)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  OnDeserializedCallbacks;

 __declspec(property(get=get_OnDeserializingCallbacks)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  OnDeserializingCallbacks;

 __declspec(property(get=get_OnErrorCallbacks)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*  OnErrorCallbacks;

 __declspec(property(get=get_OnSerializedCallbacks)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  OnSerializedCallbacks;

 __declspec(property(get=get_OnSerializingCallbacks)) ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  OnSerializingCallbacks;

 __declspec(property(get=get_UnderlyingType)) ::System::Type*  UnderlyingType;

/// @brief Field <Converter>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__Converter_k__BackingField, put=__cordl_internal_set__Converter_k__BackingField)) ::Newtonsoft::Json::JsonConverter*  _Converter_k__BackingField;

/// @brief Field <DefaultCreatorNonPublic>k__BackingField, offset 0x88, size 0x1 
 __declspec(property(get=__cordl_internal_get__DefaultCreatorNonPublic_k__BackingField, put=__cordl_internal_set__DefaultCreatorNonPublic_k__BackingField)) bool  _DefaultCreatorNonPublic_k__BackingField;

/// @brief Field <DefaultCreator>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__DefaultCreator_k__BackingField, put=__cordl_internal_set__DefaultCreator_k__BackingField)) ::System::Func_1<::System::Object*>*  _DefaultCreator_k__BackingField;

/// @brief Field <InternalConverter>k__BackingField, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__InternalConverter_k__BackingField, put=__cordl_internal_set__InternalConverter_k__BackingField)) ::Newtonsoft::Json::JsonConverter*  _InternalConverter_k__BackingField;

/// @brief Field <IsReference>k__BackingField, offset 0x68, size 0x2 
 __declspec(property(get=__cordl_internal_get__IsReference_k__BackingField, put=__cordl_internal_set__IsReference_k__BackingField)) ::System::Nullable_1<bool>  _IsReference_k__BackingField;

/// @brief Field <UnderlyingType>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderlyingType_k__BackingField, put=__cordl_internal_set__UnderlyingType_k__BackingField)) ::System::Type*  _UnderlyingType_k__BackingField;

/// @brief Field _createdType, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__createdType, put=__cordl_internal_set__createdType)) ::System::Type*  _createdType;

/// @brief Field _onDeserializedCallbacks, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDeserializedCallbacks, put=__cordl_internal_set__onDeserializedCallbacks)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  _onDeserializedCallbacks;

/// @brief Field _onDeserializingCallbacks, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__onDeserializingCallbacks, put=__cordl_internal_set__onDeserializingCallbacks)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  _onDeserializingCallbacks;

/// @brief Field _onErrorCallbacks, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__onErrorCallbacks, put=__cordl_internal_set__onErrorCallbacks)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*  _onErrorCallbacks;

/// @brief Field _onSerializedCallbacks, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSerializedCallbacks, put=__cordl_internal_set__onSerializedCallbacks)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  _onSerializedCallbacks;

/// @brief Field _onSerializingCallbacks, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__onSerializingCallbacks, put=__cordl_internal_set__onSerializingCallbacks)) ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  _onSerializingCallbacks;

/// @brief Method CreateSerializationCallback, addr 0x3e4df4c, size 0xa4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Serialization::SerializationCallback* CreateSerializationCallback(::System::Reflection::MethodInfo*  callbackMethodInfo) ;

/// @brief Method CreateSerializationErrorCallback, addr 0x3e4dff0, size 0xa4, virtual false, abstract: false, final false
static inline ::Newtonsoft::Json::Serialization::SerializationErrorCallback* CreateSerializationErrorCallback(::System::Reflection::MethodInfo*  callbackMethodInfo) ;

/// @brief Method InvokeOnDeserialized, addr 0x3e555b8, size 0x160, virtual false, abstract: false, final false
inline void InvokeOnDeserialized(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InvokeOnDeserializing, addr 0x3e55458, size 0x160, virtual false, abstract: false, final false
inline void InvokeOnDeserializing(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InvokeOnError, addr 0x3e55718, size 0x170, virtual false, abstract: false, final false
inline void InvokeOnError(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context, ::Newtonsoft::Json::Serialization::ErrorContext*  errorContext) ;

/// @brief Method InvokeOnSerialized, addr 0x3e552f8, size 0x160, virtual false, abstract: false, final false
inline void InvokeOnSerialized(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method InvokeOnSerializing, addr 0x3e55198, size 0x160, virtual false, abstract: false, final false
inline void InvokeOnSerializing(::System::Object*  o, ::System::Runtime::Serialization::StreamingContext  context) ;

static inline ::Newtonsoft::Json::Serialization::JsonContract* New_ctor(::System::Type*  underlyingType) ;

constexpr ::Newtonsoft::Json::Serialization::JsonContractType const& __cordl_internal_get_ContractType() const;

constexpr ::Newtonsoft::Json::Serialization::JsonContractType& __cordl_internal_get_ContractType() ;

constexpr ::Newtonsoft::Json::ReadType const& __cordl_internal_get_InternalReadType() const;

constexpr ::Newtonsoft::Json::ReadType& __cordl_internal_get_InternalReadType() ;

constexpr bool const& __cordl_internal_get_IsConvertable() const;

constexpr bool& __cordl_internal_get_IsConvertable() ;

constexpr bool const& __cordl_internal_get_IsEnum() const;

constexpr bool& __cordl_internal_get_IsEnum() ;

constexpr bool const& __cordl_internal_get_IsInstantiable() const;

constexpr bool& __cordl_internal_get_IsInstantiable() ;

constexpr bool const& __cordl_internal_get_IsNullable() const;

constexpr bool& __cordl_internal_get_IsNullable() ;

constexpr bool const& __cordl_internal_get_IsReadOnlyOrFixedSize() const;

constexpr bool& __cordl_internal_get_IsReadOnlyOrFixedSize() ;

constexpr bool const& __cordl_internal_get_IsSealed() const;

constexpr bool& __cordl_internal_get_IsSealed() ;

constexpr ::System::Type*& __cordl_internal_get_NonNullableUnderlyingType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_NonNullableUnderlyingType() const;

constexpr ::Newtonsoft::Json::JsonConverter*& __cordl_internal_get__Converter_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __cordl_internal_get__Converter_k__BackingField() const;

constexpr bool const& __cordl_internal_get__DefaultCreatorNonPublic_k__BackingField() const;

constexpr bool& __cordl_internal_get__DefaultCreatorNonPublic_k__BackingField() ;

constexpr ::System::Func_1<::System::Object*>*& __cordl_internal_get__DefaultCreator_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Func_1<::System::Object*>*> const& __cordl_internal_get__DefaultCreator_k__BackingField() const;

constexpr ::Newtonsoft::Json::JsonConverter*& __cordl_internal_get__InternalConverter_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Newtonsoft::Json::JsonConverter*> const& __cordl_internal_get__InternalConverter_k__BackingField() const;

constexpr ::System::Nullable_1<bool> const& __cordl_internal_get__IsReference_k__BackingField() const;

constexpr ::System::Nullable_1<bool>& __cordl_internal_get__IsReference_k__BackingField() ;

constexpr ::System::Type*& __cordl_internal_get__UnderlyingType_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__UnderlyingType_k__BackingField() const;

constexpr ::System::Type*& __cordl_internal_get__createdType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get__createdType() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __cordl_internal_get__onDeserializedCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __cordl_internal_get__onDeserializedCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __cordl_internal_get__onDeserializingCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __cordl_internal_get__onDeserializingCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*& __cordl_internal_get__onErrorCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*> const& __cordl_internal_get__onErrorCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __cordl_internal_get__onSerializedCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __cordl_internal_get__onSerializedCallbacks() const;

constexpr ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*& __cordl_internal_get__onSerializingCallbacks() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*> const& __cordl_internal_get__onSerializingCallbacks() const;

constexpr void __cordl_internal_set_ContractType(::Newtonsoft::Json::Serialization::JsonContractType  value) ;

constexpr void __cordl_internal_set_InternalReadType(::Newtonsoft::Json::ReadType  value) ;

constexpr void __cordl_internal_set_IsConvertable(bool  value) ;

constexpr void __cordl_internal_set_IsEnum(bool  value) ;

constexpr void __cordl_internal_set_IsInstantiable(bool  value) ;

constexpr void __cordl_internal_set_IsNullable(bool  value) ;

constexpr void __cordl_internal_set_IsReadOnlyOrFixedSize(bool  value) ;

constexpr void __cordl_internal_set_IsSealed(bool  value) ;

constexpr void __cordl_internal_set_NonNullableUnderlyingType(::System::Type*  value) ;

constexpr void __cordl_internal_set__Converter_k__BackingField(::Newtonsoft::Json::JsonConverter*  value) ;

constexpr void __cordl_internal_set__DefaultCreatorNonPublic_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__DefaultCreator_k__BackingField(::System::Func_1<::System::Object*>*  value) ;

constexpr void __cordl_internal_set__InternalConverter_k__BackingField(::Newtonsoft::Json::JsonConverter*  value) ;

constexpr void __cordl_internal_set__IsReference_k__BackingField(::System::Nullable_1<bool>  value) ;

constexpr void __cordl_internal_set__UnderlyingType_k__BackingField(::System::Type*  value) ;

constexpr void __cordl_internal_set__createdType(::System::Type*  value) ;

constexpr void __cordl_internal_set__onDeserializedCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  value) ;

constexpr void __cordl_internal_set__onDeserializingCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  value) ;

constexpr void __cordl_internal_set__onErrorCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*  value) ;

constexpr void __cordl_internal_set__onSerializedCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  value) ;

constexpr void __cordl_internal_set__onSerializingCallbacks(::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  value) ;

/// @brief Method .ctor, addr 0x3e54cdc, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::System::Type*  underlyingType) ;

/// @brief Method get_Converter, addr 0x3e55154, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverter* get_Converter() ;

/// @brief Method get_CreatedType, addr 0x3e5513c, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_CreatedType() ;

/// @brief Method get_DefaultCreator, addr 0x3e55174, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_1<::System::Object*>* get_DefaultCreator() ;

/// @brief Method get_DefaultCreatorNonPublic, addr 0x3e55184, size 0x8, virtual false, abstract: false, final false
inline bool get_DefaultCreatorNonPublic() ;

/// @brief Method get_InternalConverter, addr 0x3e55164, size 0x8, virtual false, abstract: false, final false
inline ::Newtonsoft::Json::JsonConverter* get_InternalConverter() ;

/// @brief Method get_IsReference, addr 0x3e55144, size 0x8, virtual false, abstract: false, final false
inline ::System::Nullable_1<bool> get_IsReference() ;

/// @brief Method get_OnDeserializedCallbacks, addr 0x3e4d654, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializedCallbacks() ;

/// @brief Method get_OnDeserializingCallbacks, addr 0x3e4d5dc, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnDeserializingCallbacks() ;

/// @brief Method get_OnErrorCallbacks, addr 0x3e4d6cc, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>* get_OnErrorCallbacks() ;

/// @brief Method get_OnSerializedCallbacks, addr 0x3e4d564, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializedCallbacks() ;

/// @brief Method get_OnSerializingCallbacks, addr 0x3e4b2b4, size 0x78, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IList_1<::Newtonsoft::Json::Serialization::SerializationCallback*>* get_OnSerializingCallbacks() ;

/// @brief Method get_UnderlyingType, addr 0x3e55134, size 0x8, virtual false, abstract: false, final false
inline ::System::Type* get_UnderlyingType() ;

/// @brief Method set_Converter, addr 0x3e5515c, size 0x8, virtual false, abstract: false, final false
inline void set_Converter(::Newtonsoft::Json::JsonConverter*  value) ;

/// @brief Method set_CreatedType, addr 0x3e54464, size 0xb4, virtual false, abstract: false, final false
inline void set_CreatedType(::System::Type*  value) ;

/// @brief Method set_DefaultCreator, addr 0x3e5517c, size 0x8, virtual false, abstract: false, final false
inline void set_DefaultCreator(::System::Func_1<::System::Object*>*  value) ;

/// @brief Method set_DefaultCreatorNonPublic, addr 0x3e5518c, size 0xc, virtual false, abstract: false, final false
inline void set_DefaultCreatorNonPublic(bool  value) ;

/// @brief Method set_InternalConverter, addr 0x3e5516c, size 0x8, virtual false, abstract: false, final false
inline void set_InternalConverter(::Newtonsoft::Json::JsonConverter*  value) ;

/// @brief Method set_IsReference, addr 0x3e5514c, size 0x8, virtual false, abstract: false, final false
inline void set_IsReference(::System::Nullable_1<bool>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JsonContract() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JsonContract", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JsonContract(JsonContract && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JsonContract", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JsonContract(JsonContract const& ) = delete;

/// @brief Field IsNullable, offset: 0x10, size: 0x1, def value: None
 bool  ___IsNullable;

/// @brief Field IsConvertable, offset: 0x11, size: 0x1, def value: None
 bool  ___IsConvertable;

/// @brief Field IsEnum, offset: 0x12, size: 0x1, def value: None
 bool  ___IsEnum;

/// @brief Field NonNullableUnderlyingType, offset: 0x18, size: 0x8, def value: None
 ::System::Type*  ___NonNullableUnderlyingType;

/// @brief Field InternalReadType, offset: 0x20, size: 0x4, def value: None
 ::Newtonsoft::Json::ReadType  ___InternalReadType;

/// @brief Field ContractType, offset: 0x24, size: 0x4, def value: None
 ::Newtonsoft::Json::Serialization::JsonContractType  ___ContractType;

/// @brief Field IsReadOnlyOrFixedSize, offset: 0x28, size: 0x1, def value: None
 bool  ___IsReadOnlyOrFixedSize;

/// @brief Field IsSealed, offset: 0x29, size: 0x1, def value: None
 bool  ___IsSealed;

/// @brief Field IsInstantiable, offset: 0x2a, size: 0x1, def value: None
 bool  ___IsInstantiable;

/// @brief Field _onDeserializedCallbacks, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  ____onDeserializedCallbacks;

/// @brief Field _onDeserializingCallbacks, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  ____onDeserializingCallbacks;

/// @brief Field _onSerializedCallbacks, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  ____onSerializedCallbacks;

/// @brief Field _onSerializingCallbacks, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationCallback*>*  ____onSerializingCallbacks;

/// @brief Field _onErrorCallbacks, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Newtonsoft::Json::Serialization::SerializationErrorCallback*>*  ____onErrorCallbacks;

/// @brief Field _createdType, offset: 0x58, size: 0x8, def value: None
 ::System::Type*  ____createdType;

/// @brief Field <UnderlyingType>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::System::Type*  ____UnderlyingType_k__BackingField;

/// @brief Field <IsReference>k__BackingField, offset: 0x68, size: 0x2, def value: None
 ::System::Nullable_1<bool>  ____IsReference_k__BackingField;

/// @brief Field <Converter>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonConverter*  ____Converter_k__BackingField;

/// @brief Field <InternalConverter>k__BackingField, offset: 0x78, size: 0x8, def value: None
 ::Newtonsoft::Json::JsonConverter*  ____InternalConverter_k__BackingField;

/// @brief Field <DefaultCreator>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Func_1<::System::Object*>*  ____DefaultCreator_k__BackingField;

/// @brief Field <DefaultCreatorNonPublic>k__BackingField, offset: 0x88, size: 0x1, def value: None
 bool  ____DefaultCreatorNonPublic_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::JsonContract, 0x90>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsNullable) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsConvertable) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsEnum) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___NonNullableUnderlyingType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___InternalReadType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___ContractType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsReadOnlyOrFixedSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsSealed) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ___IsInstantiable) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____onDeserializedCallbacks) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____onDeserializingCallbacks) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____onSerializedCallbacks) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____onSerializingCallbacks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____onErrorCallbacks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____createdType) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____UnderlyingType_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____IsReference_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____Converter_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____InternalConverter_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____DefaultCreator_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::JsonContract, ____DefaultCreatorNonPublic_k__BackingField) == 0x88, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::JsonContract);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::JsonContract*, "Newtonsoft.Json.Serialization", "JsonContract");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass57_0*, "Newtonsoft.Json.Serialization", "JsonContract/<>c__DisplayClass57_0");
NEED_NO_BOX(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::__JsonContract____c__DisplayClass58_0*, "Newtonsoft.Json.Serialization", "JsonContract/<>c__DisplayClass58_0");
