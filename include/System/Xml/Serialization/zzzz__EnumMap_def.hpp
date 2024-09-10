#pragma once
// IWYU pragma private; include "System/Xml/Serialization/EnumMap.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EnumMap)
namespace System::Xml::Serialization {
class __EnumMap__EnumMapMember;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class EnumMap;
}
namespace System::Xml::Serialization {
class __EnumMap__EnumMapMember;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::EnumMap);
MARK_REF_PTR_T(::System::Xml::Serialization::__EnumMap__EnumMapMember);
// Type: ::EnumMapMember
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::EnumMap::EnumMapMember*
class CORDL_TYPE __EnumMap__EnumMapMember : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_EnumName)) ::StringW  EnumName;

 __declspec(property(get=get_Value)) int64_t  Value;

 __declspec(property(get=get_XmlName)) ::StringW  XmlName;

/// @brief Field _enumName, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__enumName, put=__cordl_internal_set__enumName)) ::StringW  _enumName;

/// @brief Field _value, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__value, put=__cordl_internal_set__value)) int64_t  _value;

/// @brief Field _xmlName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__xmlName, put=__cordl_internal_set__xmlName)) ::StringW  _xmlName;

static inline ::System::Xml::Serialization::__EnumMap__EnumMapMember* New_ctor(::StringW  xmlName, ::StringW  enumName, int64_t  value) ;

constexpr ::StringW const& __cordl_internal_get__enumName() const;

constexpr ::StringW& __cordl_internal_get__enumName() ;

constexpr int64_t const& __cordl_internal_get__value() const;

constexpr int64_t& __cordl_internal_get__value() ;

constexpr ::StringW const& __cordl_internal_get__xmlName() const;

constexpr ::StringW& __cordl_internal_get__xmlName() ;

constexpr void __cordl_internal_set__enumName(::StringW  value) ;

constexpr void __cordl_internal_set__value(int64_t  value) ;

constexpr void __cordl_internal_set__xmlName(::StringW  value) ;

/// @brief Method .ctor, addr 0x43018d4, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::StringW  xmlName, ::StringW  enumName, int64_t  value) ;

/// @brief Method get_EnumName, addr 0x4301918, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_EnumName() ;

/// @brief Method get_Value, addr 0x4301920, size 0x8, virtual false, abstract: false, final false
inline int64_t get_Value() ;

/// @brief Method get_XmlName, addr 0x4301910, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_XmlName() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr __EnumMap__EnumMapMember() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "__EnumMap__EnumMapMember", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__EnumMap__EnumMapMember(__EnumMap__EnumMapMember && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__EnumMap__EnumMapMember", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__EnumMap__EnumMapMember(__EnumMap__EnumMapMember const& ) = delete;

/// @brief Field _xmlName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ____xmlName;

/// @brief Field _enumName, offset: 0x18, size: 0x8, def value: None
 ::StringW  ____enumName;

/// @brief Field _value, offset: 0x20, size: 0x8, def value: None
 int64_t  ____value;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::__EnumMap__EnumMapMember, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__EnumMap__EnumMapMember, ____xmlName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__EnumMap__EnumMapMember, ____enumName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::__EnumMap__EnumMapMember, ____value) == 0x20, "Offset mismatch!");

} // namespace end def System::Xml::Serialization
// Type: System.Xml.Serialization::EnumMap
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::EnumMap*
class CORDL_TYPE EnumMap : public ::System::Xml::Serialization::ObjectMap {
public:
// Declarations
using EnumMapMember = ::System::Xml::Serialization::__EnumMap__EnumMapMember;

 __declspec(property(get=get_EnumNames)) ::ArrayW<::StringW,::Array<::StringW>*>  EnumNames;

 __declspec(property(get=get_IsFlags)) bool  IsFlags;

 __declspec(property(get=get_Values)) ::ArrayW<int64_t,::Array<int64_t>*>  Values;

 __declspec(property(get=get_XmlNames)) ::ArrayW<::StringW,::Array<::StringW>*>  XmlNames;

/// @brief Field _enumNames, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__enumNames, put=__cordl_internal_set__enumNames)) ::ArrayW<::StringW,::Array<::StringW>*>  _enumNames;

/// @brief Field _isFlags, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFlags, put=__cordl_internal_set__isFlags)) bool  _isFlags;

/// @brief Field _members, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__members, put=__cordl_internal_set__members)) ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>  _members;

/// @brief Field _values, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__values, put=__cordl_internal_set__values)) ::ArrayW<int64_t,::Array<int64_t>*>  _values;

/// @brief Field _xmlNames, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__xmlNames, put=__cordl_internal_set__xmlNames)) ::ArrayW<::StringW,::Array<::StringW>*>  _xmlNames;

/// @brief Method GetEnumName, addr 0x43015f8, size 0x2dc, virtual false, abstract: false, final false
inline ::StringW GetEnumName(::StringW  typeName, ::StringW  xmlName) ;

/// @brief Method GetXmlName, addr 0x42fb7f8, size 0x374, virtual false, abstract: false, final false
inline ::StringW GetXmlName(::StringW  typeName, ::System::Object*  enumValue) ;

static inline ::System::Xml::Serialization::EnumMap* New_ctor(::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>  members, bool  isFlags) ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__enumNames() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__enumNames() ;

constexpr bool const& __cordl_internal_get__isFlags() const;

constexpr bool& __cordl_internal_get__isFlags() ;

constexpr ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*> const& __cordl_internal_get__members() const;

constexpr ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>& __cordl_internal_get__members() ;

constexpr ::ArrayW<int64_t,::Array<int64_t>*> const& __cordl_internal_get__values() const;

constexpr ::ArrayW<int64_t,::Array<int64_t>*>& __cordl_internal_get__values() ;

constexpr ::ArrayW<::StringW,::Array<::StringW>*> const& __cordl_internal_get__xmlNames() const;

constexpr ::ArrayW<::StringW,::Array<::StringW>*>& __cordl_internal_get__xmlNames() ;

constexpr void __cordl_internal_set__enumNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

constexpr void __cordl_internal_set__isFlags(bool  value) ;

constexpr void __cordl_internal_set__members(::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>  value) ;

constexpr void __cordl_internal_set__values(::ArrayW<int64_t,::Array<int64_t>*>  value) ;

constexpr void __cordl_internal_set__xmlNames(::ArrayW<::StringW,::Array<::StringW>*>  value) ;

/// @brief Method .ctor, addr 0x4301488, size 0x150, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>  members, bool  isFlags) ;

/// @brief Method get_EnumNames, addr 0x43015e0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_EnumNames() ;

/// @brief Method get_IsFlags, addr 0x43015d8, size 0x8, virtual false, abstract: false, final false
inline bool get_IsFlags() ;

/// @brief Method get_Values, addr 0x43015f0, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<int64_t,::Array<int64_t>*> get_Values() ;

/// @brief Method get_XmlNames, addr 0x43015e8, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::StringW,::Array<::StringW>*> get_XmlNames() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr EnumMap() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "EnumMap", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
EnumMap(EnumMap && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "EnumMap", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
EnumMap(EnumMap const& ) = delete;

/// @brief Field _members, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Xml::Serialization::__EnumMap__EnumMapMember*,::Array<::System::Xml::Serialization::__EnumMap__EnumMapMember*>*>  ____members;

/// @brief Field _isFlags, offset: 0x18, size: 0x1, def value: None
 bool  ____isFlags;

/// @brief Field _enumNames, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____enumNames;

/// @brief Field _xmlNames, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::StringW,::Array<::StringW>*>  ____xmlNames;

/// @brief Field _values, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<int64_t,::Array<int64_t>*>  ____values;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::EnumMap, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::EnumMap, ____members) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::EnumMap, ____isFlags) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::EnumMap, ____enumNames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::EnumMap, ____xmlNames) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::EnumMap, ____values) == 0x30, "Offset mismatch!");

} // namespace end def System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::EnumMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::EnumMap*, "System.Xml.Serialization", "EnumMap");
NEED_NO_BOX(::System::Xml::Serialization::__EnumMap__EnumMapMember);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::__EnumMap__EnumMapMember*, "System.Xml.Serialization", "EnumMap/EnumMapMember");
