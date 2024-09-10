#pragma once
// IWYU pragma private; include "System/Data/XSDSchema.hpp"
#include "System/Data/zzzz__XMLSchema_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__XSDSchema_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/zzzz__AcceptRejectRule_def.hpp"
#include "System/Data/zzzz__DataColumn_def.hpp"
#include "System/Data/zzzz__DataSet_def.hpp"
#include "System/Data/zzzz__DataTable_def.hpp"
#include "System/Data/zzzz__Rule_def.hpp"
#include "System/Data/zzzz__XSDSchema_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotation_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttributeGroup_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAttribute_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaComplexType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaElement_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaKeyref_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObjectCollection_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSet_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchema_def.hpp"
#include "System/Xml/zzzz__XmlAttributeCollection_def.hpp"
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "System/Xml/zzzz__XmlElement_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::__XSDSchema__NameType._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::__XSDSchema__NameType::*)(::StringW, ::System::Type*)>(&::System::Data::__XSDSchema__NameType::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4110318;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XSDSchema__NameType*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::__XSDSchema__NameType.CompareTo
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::__XSDSchema__NameType::*)(::System::Object*)>(&::System::Data::__XSDSchema__NameType::CompareTo)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4110344;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XSDSchema__NameType*>::get(),
                        "CompareTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IComparable"
constexpr  System::Data::__XSDSchema__NameType::operator ::System::IComparable*() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* System::Data::__XSDSchema__NameType::i___System__IComparable() noexcept {
return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
constexpr ::StringW& System::Data::__XSDSchema__NameType::__cordl_internal_get_name()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr ::StringW const& System::Data::__XSDSchema__NameType::__cordl_internal_get_name() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___name;
}
constexpr void System::Data::__XSDSchema__NameType::__cordl_internal_set_name(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Data::__XSDSchema__NameType::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& System::Data::__XSDSchema__NameType::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void System::Data::__XSDSchema__NameType::__cordl_internal_set_type(::System::Type*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Data::__XSDSchema__NameType* System::Data::__XSDSchema__NameType::New_ctor(::StringW  n, ::System::Type*  t)  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::__XSDSchema__NameType*>(n, t));
}
inline void System::Data::__XSDSchema__NameType::_ctor(::StringW  n, ::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XSDSchema__NameType*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, t);
}
inline int32_t System::Data::__XSDSchema__NameType::CompareTo(::System::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::__XSDSchema__NameType*>::get(),
                        "CompareTo",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, obj);
}
// Ctor Parameters []
constexpr ::System::Data::__XSDSchema__NameType::__XSDSchema__NameType()   {
}
//  Writing Method size for method: ::System::Data::XSDSchema.get_FromInference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XSDSchema::*)()>(&::System::Data::XSDSchema::get_FromInference)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41001f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "get_FromInference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.set_FromInference
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(bool)>(&::System::Data::XSDSchema::set_FromInference)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x41001fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "set_FromInference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.CollectElementsAnnotations
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchema*)>(&::System::Data::XSDSchema::CollectElementsAnnotations)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x4100208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "CollectElementsAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.CollectElementsAnnotations
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchema*, ::System::Collections::ArrayList*)>(&::System::Data::XSDSchema::CollectElementsAnnotations)> {
  constexpr static std::size_t size = 0x994;
  constexpr static std::size_t addrs = 0x4100290;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "CollectElementsAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.QualifiedName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::System::Data::XSDSchema::QualifiedName)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4100d3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "QualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>)>(&::System::Data::XSDSchema::SetProperties)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x4100db8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetExtProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>)>(&::System::Data::XSDSchema::SetExtProperties)> {
  constexpr static std::size_t size = 0x390;
  constexpr static std::size_t addrs = 0x4101320;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetExtProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleColumnExpression
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Object*, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>)>(&::System::Data::XSDSchema::HandleColumnExpression)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x41016b0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleColumnExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetMsdataAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW)>(&::System::Data::XSDSchema::GetMsdataAttribute)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x4100c24;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetMsdataAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.SetExtProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Object*, ::System::Xml::XmlAttributeCollection*)>(&::System::Data::XSDSchema::SetExtProperties)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x410189c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetExtProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttributeCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRefTableProperties
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Collections::ArrayList*, ::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::HandleRefTableProperties)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x4101ae0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRefTableProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRelation
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::XmlElement*, bool)>(&::System::Data::XSDSchema::HandleRelation)> {
  constexpr static std::size_t size = 0x840;
  constexpr static std::size_t addrs = 0x4101c9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRelation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HasAttributes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Data::XSDSchema::HasAttributes)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x41024dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HasAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsDatasetParticle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Data::XSDSchema::IsDatasetParticle)> {
  constexpr static std::size_t size = 0x5ac;
  constexpr static std::size_t addrs = 0x410275c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsDatasetParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.DatasetElementCount
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Data::XSDSchema::DatasetElementCount)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x4103184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "DatasetElementCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindDatasetElement
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaElement* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*)>(&::System::Data::XSDSchema::FindDatasetElement)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x410351c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindDatasetElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.LoadSchema
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataTable*)>(&::System::Data::XSDSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x4103b08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "LoadSchema",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.LoadSchema
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSet*, ::System::Data::DataSet*)>(&::System::Data::XSDSchema::LoadSchema)> {
  constexpr static std::size_t size = 0x2024;
  constexpr static std::size_t addrs = 0x4103b2c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "LoadSchema",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleRelations
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotation*, bool)>(&::System::Data::XSDSchema::HandleRelations)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x41072d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRelations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetParticleItems
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaObjectCollection* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*)>(&::System::Data::XSDSchema::GetParticleItems)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x4102d08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetParticleItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleParticle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaParticle*, ::System::Data::DataTable*, ::System::Collections::ArrayList*, bool)>(&::System::Data::XSDSchema::HandleParticle)> {
  constexpr static std::size_t size = 0x9c8;
  constexpr static std::size_t addrs = 0x41075fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributes
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaObjectCollection*, ::System::Data::DataTable*, bool)>(&::System::Data::XSDSchema::HandleAttributes)> {
  constexpr static std::size_t size = 0x2fc;
  constexpr static std::size_t addrs = 0x4108cc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributeGroup
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAttributeGroup*, ::System::Data::DataTable*, bool)>(&::System::Data::XSDSchema::HandleAttributeGroup)> {
  constexpr static std::size_t size = 0x3e8;
  constexpr static std::size_t addrs = 0x4109974;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributeGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleComplexType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaComplexType*, ::System::Data::DataTable*, ::System::Collections::ArrayList*, bool)>(&::System::Data::XSDSchema::HandleComplexType)> {
  constexpr static std::size_t size = 0x5ec;
  constexpr static std::size_t addrs = 0x4109d5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleComplexType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetParticle
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaParticle* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaComplexType*)>(&::System::Data::XSDSchema::GetParticle)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x41039ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindField
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataColumn* (::System::Data::XSDSchema::*)(::System::Data::DataTable*, ::StringW)>(&::System::Data::XSDSchema::FindField)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x410b44c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.BuildKey
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Data::DataColumn*,::Array<::System::Data::DataColumn*>*> (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Data::DataTable*)>(&::System::Data::XSDSchema::BuildKey)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x410b5c8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "BuildKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetBooleanAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW, bool)>(&::System::Data::XSDSchema::GetBooleanAttribute)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x41033c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetBooleanAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetStringAttribute
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*, ::StringW, ::StringW)>(&::System::Data::XSDSchema::GetStringAttribute)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4105b50;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetStringAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.TranslateAcceptRejectRule
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::AcceptRejectRule (*)(::StringW)>(&::System::Data::XSDSchema::TranslateAcceptRejectRule)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x410b89c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "TranslateAcceptRejectRule",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.TranslateRule
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::Rule (*)(::StringW)>(&::System::Data::XSDSchema::TranslateRule)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x410b920;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "TranslateRule",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleKeyref
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaKeyref*)>(&::System::Data::XSDSchema::HandleKeyref)> {
  constexpr static std::size_t size = 0x7ac;
  constexpr static std::size_t addrs = 0x410ba0c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleKeyref",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaKeyref*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleConstraint
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::HandleConstraint)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x410c2d0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleConstraint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.InstantiateSimpleTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::InstantiateSimpleTable)> {
  constexpr static std::size_t size = 0x740;
  constexpr static std::size_t addrs = 0x410c708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "InstantiateSimpleTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetInstanceName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*)>(&::System::Data::XSDSchema::GetInstanceName)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4101bc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetInstanceName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.InstantiateTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Xml::Schema::XmlSchemaComplexType*, bool)>(&::System::Data::XSDSchema::InstantiateTable)> {
  constexpr static std::size_t size = 0x14d8;
  constexpr static std::size_t addrs = 0x410d258;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "InstantiateTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.XsdtoClr
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::System::Data::XSDSchema::XsdtoClr)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x410e8c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "XsdtoClr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindNameType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::__XSDSchema__NameType* (*)(::StringW)>(&::System::Data::XSDSchema::FindNameType)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x410e99c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindNameType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.ParseDataType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::ParseDataType)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x410ea70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "ParseDataType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsXsdType
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Data::XSDSchema::IsXsdType)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x410ebd8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsXsdType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.FindTypeNode
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaAnnotated* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAnnotated*)>(&::System::Data::XSDSchema::FindTypeNode)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x4105bd4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindTypeNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleSimpleTypeSimpleContentColumn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaSimpleType*, ::StringW, ::System::Data::DataTable*, bool, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>, bool)>(&::System::Data::XSDSchema::HandleSimpleTypeSimpleContentColumn)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x410aac4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleSimpleTypeSimpleContentColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleSimpleContentColumn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::StringW, ::System::Data::DataTable*, bool, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>, bool)>(&::System::Data::XSDSchema::HandleSimpleContentColumn)> {
  constexpr static std::size_t size = 0x77c;
  constexpr static std::size_t addrs = 0x410a348;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleSimpleContentColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleAttributeColumn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaAttribute*, ::System::Data::DataTable*, bool)>(&::System::Data::XSDSchema::HandleAttributeColumn)> {
  constexpr static std::size_t size = 0x9b4;
  constexpr static std::size_t addrs = 0x4108fc0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributeColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleElementColumn
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, ::System::Data::DataTable*, bool)>(&::System::Data::XSDSchema::HandleElementColumn)> {
  constexpr static std::size_t size = 0xd00;
  constexpr static std::size_t addrs = 0x4107fc4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleElementColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleDataSet
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*, bool)>(&::System::Data::XSDSchema::HandleDataSet)> {
  constexpr static std::size_t size = 0x12d8;
  constexpr static std::size_t addrs = 0x4105ff8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleDataSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.AddTablesToList
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)(::System::Collections::Generic::List_1<::System::Data::DataTable*>*, ::System::Data::DataTable*)>(&::System::Data::XSDSchema::AddTablesToList)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x410ec48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "AddTablesToList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetPrefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::GetPrefix)> {
  constexpr static std::size_t size = 0x410;
  constexpr static std::size_t addrs = 0x410ce48;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetNamespaceFromPrefix
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::StringW)>(&::System::Data::XSDSchema::GetNamespaceFromPrefix)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x410ee54;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetNamespaceFromPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetTableNamespace
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::GetTableNamespace)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x410e730;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetTableNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.GetTableName
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaIdentityConstraint*)>(&::System::Data::XSDSchema::GetTableName)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x410c1b8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetTableName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.IsTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::IsTable)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x4102f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema.HandleTable
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Data::DataTable* (::System::Data::XSDSchema::*)(::System::Xml::Schema::XmlSchemaElement*)>(&::System::Data::XSDSchema::HandleTable)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x4105e80;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::XSDSchema._ctor
template<>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Data::XSDSchema::*)()>(&::System::Data::XSDSchema::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x410f26c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::XmlSchemaSet*& System::Data::XSDSchema::__cordl_internal_get__schemaSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaSet;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSet*> const& System::Data::XSDSchema::__cordl_internal_get__schemaSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaSet;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaSet(::System::Xml::Schema::XmlSchemaSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaElement*& System::Data::XSDSchema::__cordl_internal_get__dsElement()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dsElement;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaElement*> const& System::Data::XSDSchema::__cordl_internal_get__dsElement() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dsElement;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__dsElement(::System::Xml::Schema::XmlSchemaElement*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dsElement)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Data::DataSet*& System::Data::XSDSchema::__cordl_internal_get__ds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Data::DataSet*> const& System::Data::XSDSchema::__cordl_internal_get__ds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ds;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__ds(::System::Data::DataSet*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Data::XSDSchema::__cordl_internal_get__schemaName()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaName;
}
constexpr ::StringW const& System::Data::XSDSchema::__cordl_internal_get__schemaName() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaName;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaName(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__columnExpressions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____columnExpressions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Data::XSDSchema::__cordl_internal_get__columnExpressions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____columnExpressions;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__columnExpressions(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____columnExpressions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__constraintNodes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraintNodes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__constraintNodes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____constraintNodes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__constraintNodes(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____constraintNodes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__refTables()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refTables;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Data::XSDSchema::__cordl_internal_get__refTables() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____refTables;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__refTables(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____refTables)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::ArrayList*& System::Data::XSDSchema::__cordl_internal_get__complexTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::ArrayList*> const& System::Data::XSDSchema::__cordl_internal_get__complexTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____complexTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__complexTypes(::System::Collections::ArrayList*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____complexTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Data::XSDSchema::__cordl_internal_get__annotations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& System::Data::XSDSchema::__cordl_internal_get__annotations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____annotations;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__annotations(::System::Xml::Schema::XmlSchemaObjectCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____annotations)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Xml::Schema::XmlSchemaObjectCollection*& System::Data::XSDSchema::__cordl_internal_get__elements()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaObjectCollection*> const& System::Data::XSDSchema::__cordl_internal_get__elements() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elements;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__elements(::System::Xml::Schema::XmlSchemaObjectCollection*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__attributes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__attributes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__attributes(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__elementsTable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementsTable;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__elementsTable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____elementsTable;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__elementsTable(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____elementsTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__attributeGroups()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeGroups;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__attributeGroups() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____attributeGroups;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__attributeGroups(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____attributeGroups)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__schemaTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__schemaTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____schemaTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__schemaTypes(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____schemaTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__expressions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expressions;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__expressions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____expressions;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__expressions(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____expressions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*,::System::Collections::Generic::List_1<::System::Data::DataTable*>*>*& System::Data::XSDSchema::__cordl_internal_get__tableDictionary()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableDictionary;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*,::System::Collections::Generic::List_1<::System::Data::DataTable*>*>*> const& System::Data::XSDSchema::__cordl_internal_get__tableDictionary() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tableDictionary;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__tableDictionary(::System::Collections::Generic::Dictionary_2<::System::Data::DataTable*,::System::Collections::Generic::List_1<::System::Data::DataTable*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____tableDictionary)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__udSimpleTypes()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udSimpleTypes;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__udSimpleTypes() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____udSimpleTypes;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__udSimpleTypes(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____udSimpleTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Hashtable*& System::Data::XSDSchema::__cordl_internal_get__existingSimpleTypeMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingSimpleTypeMap;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Hashtable*> const& System::Data::XSDSchema::__cordl_internal_get__existingSimpleTypeMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____existingSimpleTypeMap;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__existingSimpleTypeMap(::System::Collections::Hashtable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____existingSimpleTypeMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Data::XSDSchema::__cordl_internal_get__fromInference()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromInference;
}
constexpr bool const& System::Data::XSDSchema::__cordl_internal_get__fromInference() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fromInference;
}
constexpr void System::Data::XSDSchema::__cordl_internal_set__fromInference(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fromInference = value;
}
inline void System::Data::XSDSchema::setStaticF_s_mapNameTypeXsd(::ArrayW<::System::Data::__XSDSchema__NameType*,::Array<::System::Data::__XSDSchema__NameType*>*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::System::Data::__XSDSchema__NameType*,::Array<::System::Data::__XSDSchema__NameType*>*>, "s_mapNameTypeXsd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get>(std::forward<::ArrayW<::System::Data::__XSDSchema__NameType*,::Array<::System::Data::__XSDSchema__NameType*>*>>(value));
}
inline ::ArrayW<::System::Data::__XSDSchema__NameType*,::Array<::System::Data::__XSDSchema__NameType*>*> System::Data::XSDSchema::getStaticF_s_mapNameTypeXsd()  {
return ::cordl_internals::getStaticField<::ArrayW<::System::Data::__XSDSchema__NameType*,::Array<::System::Data::__XSDSchema__NameType*>*>, "s_mapNameTypeXsd", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get>();
}
inline bool System::Data::XSDSchema::get_FromInference()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "get_FromInference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Data::XSDSchema::set_FromInference(bool  value)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "set_FromInference",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Data::XSDSchema::CollectElementsAnnotations(::System::Xml::Schema::XmlSchema*  schema)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "CollectElementsAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema);
}
inline void System::Data::XSDSchema::CollectElementsAnnotations(::System::Xml::Schema::XmlSchema*  schema, ::System::Collections::ArrayList*  schemaList)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "CollectElementsAnnotations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchema*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schema, schemaList);
}
inline ::StringW System::Data::XSDSchema::QualifiedName(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "QualifiedName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, name);
}
inline void System::Data::XSDSchema::SetProperties(::System::Object*  instance, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::SetExtProperties(::System::Object*  instance, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetExtProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::HandleColumnExpression(::System::Object*  instance, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>  attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleColumnExpression",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, instance, attrs);
}
inline ::StringW System::Data::XSDSchema::GetMsdataAttribute(::System::Xml::Schema::XmlSchemaAnnotated*  node, ::StringW  ln)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetMsdataAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, node, ln);
}
inline void System::Data::XSDSchema::SetExtProperties(::System::Object*  instance, ::System::Xml::XmlAttributeCollection*  attrs)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "SetExtProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlAttributeCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, instance, attrs);
}
inline void System::Data::XSDSchema::HandleRefTableProperties(::System::Collections::ArrayList*  RefTables, ::System::Xml::Schema::XmlSchemaElement*  element)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRefTableProperties",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, RefTables, element);
}
inline void System::Data::XSDSchema::HandleRelation(::System::Xml::XmlElement*  node, bool  fNested)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRelation",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, fNested);
}
inline bool System::Data::XSDSchema::HasAttributes(::System::Xml::Schema::XmlSchemaObjectCollection*  attributes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HasAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, attributes);
}
inline bool System::Data::XSDSchema::IsDatasetParticle(::System::Xml::Schema::XmlSchemaParticle*  pt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsDatasetParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pt);
}
inline int32_t System::Data::XSDSchema::DatasetElementCount(::System::Xml::Schema::XmlSchemaObjectCollection*  elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "DatasetElementCount",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, elements);
}
inline ::System::Xml::Schema::XmlSchemaElement* System::Data::XSDSchema::FindDatasetElement(::System::Xml::Schema::XmlSchemaObjectCollection*  elements)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindDatasetElement",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaElement*, false>(this, ___internal_method, elements);
}
inline void System::Data::XSDSchema::LoadSchema(::System::Xml::Schema::XmlSchemaSet*  schemaSet, ::System::Data::DataTable*  dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "LoadSchema",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaSet, dt);
}
inline void System::Data::XSDSchema::LoadSchema(::System::Xml::Schema::XmlSchemaSet*  schemaSet, ::System::Data::DataSet*  ds)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "LoadSchema",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSet*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataSet*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaSet, ds);
}
inline void System::Data::XSDSchema::HandleRelations(::System::Xml::Schema::XmlSchemaAnnotation*  ann, bool  fNested)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleRelations",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotation*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ann, fNested);
}
inline ::System::Xml::Schema::XmlSchemaObjectCollection* System::Data::XSDSchema::GetParticleItems(::System::Xml::Schema::XmlSchemaParticle*  pt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetParticleItems",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaObjectCollection*, false>(this, ___internal_method, pt);
}
inline void System::Data::XSDSchema::HandleParticle(::System::Xml::Schema::XmlSchemaParticle*  pt, ::System::Data::DataTable*  table, ::System::Collections::ArrayList*  tableChildren, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaParticle*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pt, table, tableChildren, isBase);
}
inline void System::Data::XSDSchema::HandleAttributes(::System::Xml::Schema::XmlSchemaObjectCollection*  attributes, ::System::Data::DataTable*  table, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributes",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaObjectCollection*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributes, table, isBase);
}
inline void System::Data::XSDSchema::HandleAttributeGroup(::System::Xml::Schema::XmlSchemaAttributeGroup*  attributeGroup, ::System::Data::DataTable*  table, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributeGroup",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttributeGroup*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attributeGroup, table, isBase);
}
inline void System::Data::XSDSchema::HandleComplexType(::System::Xml::Schema::XmlSchemaComplexType*  ct, ::System::Data::DataTable*  table, ::System::Collections::ArrayList*  tableChildren, bool  isNillable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleComplexType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 4>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::ArrayList*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ct, table, tableChildren, isNillable);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Data::XSDSchema::GetParticle(::System::Xml::Schema::XmlSchemaComplexType*  ct)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetParticle",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaParticle*, false>(this, ___internal_method, ct);
}
inline ::System::Data::DataColumn* System::Data::XSDSchema::FindField(::System::Data::DataTable*  table, ::StringW  field)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindField",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataColumn*, false>(this, ___internal_method, table, field);
}
inline ::ArrayW<::System::Data::DataColumn*,::Array<::System::Data::DataColumn*>*> System::Data::XSDSchema::BuildKey(::System::Xml::Schema::XmlSchemaIdentityConstraint*  keyNode, ::System::Data::DataTable*  table)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "BuildKey",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Data::DataColumn*,::Array<::System::Data::DataColumn*>*>, false>(this, ___internal_method, keyNode, table);
}
inline bool System::Data::XSDSchema::GetBooleanAttribute(::System::Xml::Schema::XmlSchemaAnnotated*  element, ::StringW  attrName, bool  defVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetBooleanAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, element, attrName, defVal);
}
inline ::StringW System::Data::XSDSchema::GetStringAttribute(::System::Xml::Schema::XmlSchemaAnnotated*  element, ::StringW  attrName, ::StringW  defVal)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetStringAttribute",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, element, attrName, defVal);
}
inline ::System::Data::AcceptRejectRule System::Data::XSDSchema::TranslateAcceptRejectRule(::StringW  strRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "TranslateAcceptRejectRule",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::AcceptRejectRule, false>(nullptr, ___internal_method, strRule);
}
inline ::System::Data::Rule System::Data::XSDSchema::TranslateRule(::StringW  strRule)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "TranslateRule",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::Rule, false>(nullptr, ___internal_method, strRule);
}
inline void System::Data::XSDSchema::HandleKeyref(::System::Xml::Schema::XmlSchemaKeyref*  keyref)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleKeyref",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaKeyref*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyref);
}
inline void System::Data::XSDSchema::HandleConstraint(::System::Xml::Schema::XmlSchemaIdentityConstraint*  keyNode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleConstraint",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyNode);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::InstantiateSimpleTable(::System::Xml::Schema::XmlSchemaElement*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "InstantiateSimpleTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, node);
}
inline ::StringW System::Data::XSDSchema::GetInstanceName(::System::Xml::Schema::XmlSchemaAnnotated*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetInstanceName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, node);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::InstantiateTable(::System::Xml::Schema::XmlSchemaElement*  node, ::System::Xml::Schema::XmlSchemaComplexType*  typeNode, bool  isRef)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "InstantiateTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaComplexType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, node, typeNode, isRef);
}
inline ::System::Type* System::Data::XSDSchema::XsdtoClr(::StringW  xsdTypeName)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "XsdtoClr",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, xsdTypeName);
}
inline ::System::Data::__XSDSchema__NameType* System::Data::XSDSchema::FindNameType(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindNameType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::__XSDSchema__NameType*, false>(nullptr, ___internal_method, name);
}
inline ::System::Type* System::Data::XSDSchema::ParseDataType(::StringW  dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "ParseDataType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, dt);
}
inline bool System::Data::XSDSchema::IsXsdType(::StringW  name)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsXsdType",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, name);
}
inline ::System::Xml::Schema::XmlSchemaAnnotated* System::Data::XSDSchema::FindTypeNode(::System::Xml::Schema::XmlSchemaAnnotated*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "FindTypeNode",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAnnotated*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaAnnotated*, false>(this, ___internal_method, node);
}
inline void System::Data::XSDSchema::HandleSimpleTypeSimpleContentColumn(::System::Xml::Schema::XmlSchemaSimpleType*  typeNode, ::StringW  strType, ::System::Data::DataTable*  table, bool  isBase, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>  attrs, bool  isNillable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleSimpleTypeSimpleContentColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 6>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaSimpleType*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, typeNode, strType, table, isBase, attrs, isNillable);
}
inline void System::Data::XSDSchema::HandleSimpleContentColumn(::StringW  strType, ::System::Data::DataTable*  table, bool  isBase, ::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>  attrs, bool  isNillable)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleSimpleContentColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 5>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::XmlAttribute*,::Array<::System::Xml::XmlAttribute*>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strType, table, isBase, attrs, isNillable);
}
inline void System::Data::XSDSchema::HandleAttributeColumn(::System::Xml::Schema::XmlSchemaAttribute*  attrib, ::System::Data::DataTable*  table, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleAttributeColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaAttribute*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attrib, table, isBase);
}
inline void System::Data::XSDSchema::HandleElementColumn(::System::Xml::Schema::XmlSchemaElement*  elem, ::System::Data::DataTable*  table, bool  isBase)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleElementColumn",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 3>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, elem, table, isBase);
}
inline void System::Data::XSDSchema::HandleDataSet(::System::Xml::Schema::XmlSchemaElement*  node, bool  isNewDataSet)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleDataSet",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, node, isNewDataSet);
}
inline void System::Data::XSDSchema::AddTablesToList(::System::Collections::Generic::List_1<::System::Data::DataTable*>*  tableList, ::System::Data::DataTable*  dt)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "AddTablesToList",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 2>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Data::DataTable*>*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Data::DataTable*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tableList, dt);
}
inline ::StringW System::Data::XSDSchema::GetPrefix(::StringW  ns)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, ns);
}
inline ::StringW System::Data::XSDSchema::GetNamespaceFromPrefix(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetNamespaceFromPrefix",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, prefix);
}
inline ::StringW System::Data::XSDSchema::GetTableNamespace(::System::Xml::Schema::XmlSchemaIdentityConstraint*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetTableNamespace",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline ::StringW System::Data::XSDSchema::GetTableName(::System::Xml::Schema::XmlSchemaIdentityConstraint*  key)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "GetTableName",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, key);
}
inline bool System::Data::XSDSchema::IsTable(::System::Xml::Schema::XmlSchemaElement*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "IsTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, node);
}
inline ::System::Data::DataTable* System::Data::XSDSchema::HandleTable(::System::Xml::Schema::XmlSchemaElement*  node)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        "HandleTable",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::array<const Il2CppType*, 1>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaElement*>::get()}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Data::DataTable*, false>(this, ___internal_method, node);
}
inline ::System::Data::XSDSchema* System::Data::XSDSchema::New_ctor()  {
return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Data::XSDSchema*>());
}
inline void System::Data::XSDSchema::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Data::XSDSchema*>::get(),
                        ".ctor",
                        std::span<const Il2CppClass* const, 0>(),
                        ::std::span<const Il2CppType* const, 0>()
                    )));
return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Data::XSDSchema::XSDSchema()   {
}
