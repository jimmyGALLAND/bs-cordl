#pragma once
// IWYU pragma private; include "OVRSimpleJSON/JSONNumber.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVRSimpleJSON/zzzz__JSONNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(JSONNumber)
namespace OVRSimpleJSON {
struct JSONNodeType;
}
namespace OVRSimpleJSON {
struct JSONTextMode;
}
namespace OVRSimpleJSON {
struct __JSONNode__Enumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVRSimpleJSON {
class JSONNumber;
}
// Write type traits
MARK_REF_PTR_T(::OVRSimpleJSON::JSONNumber);
// Type: OVRSimpleJSON::JSONNumber
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVRSimpleJSON {
// Is value type: false
// CS Name: ::OVRSimpleJSON::JSONNumber*
class CORDL_TYPE JSONNumber : public ::OVRSimpleJSON::JSONNode {
public:
// Declarations
 __declspec(property(get=get_AsDouble, put=set_AsDouble)) double_t  AsDouble;

 __declspec(property(get=get_AsLong, put=set_AsLong)) int64_t  AsLong;

 __declspec(property(get=get_IsNumber)) bool  IsNumber;

 __declspec(property(get=get_Tag)) ::OVRSimpleJSON::JSONNodeType  Tag;

 __declspec(property(get=get_Value, put=set_Value)) ::StringW  Value;

/// @brief Field m_Data, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Data, put=__cordl_internal_set_m_Data)) double_t  m_Data;

/// @brief Method Equals, addr 0x3fc2c9c, size 0x10c, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method GetEnumerator, addr 0x3fc2950, size 0x14, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::__JSONNode__Enumerator GetEnumerator() ;

/// @brief Method GetHashCode, addr 0x3fc2da8, size 0x20, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method IsNumeric, addr 0x3fc2afc, size 0x1a0, virtual false, abstract: false, final false
static inline bool IsNumeric(::System::Object*  value) ;

static inline ::OVRSimpleJSON::JSONNumber* New_ctor(::StringW  aData) ;

static inline ::OVRSimpleJSON::JSONNumber* New_ctor(double_t  aData) ;

/// @brief Method WriteToStringBuilder, addr 0x3fc2ac8, size 0x34, virtual true, abstract: false, final false
inline void WriteToStringBuilder(::System::Text::StringBuilder*  aSB, int32_t  aIndent, int32_t  aIndentInc, ::OVRSimpleJSON::JSONTextMode  aMode) ;

constexpr double_t const& __cordl_internal_get_m_Data() const;

constexpr double_t& __cordl_internal_get_m_Data() ;

constexpr void __cordl_internal_set_m_Data(double_t  value) ;

/// @brief Method .ctor, addr 0x3fc2a94, size 0x34, virtual false, abstract: false, final false
inline void _ctor(::StringW  aData) ;

/// @brief Method .ctor, addr 0x3fb7b9c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(double_t  aData) ;

/// @brief Method get_AsDouble, addr 0x3fc2a58, size 0x8, virtual true, abstract: false, final false
inline double_t get_AsDouble() ;

/// @brief Method get_AsLong, addr 0x3fc2a68, size 0x20, virtual true, abstract: false, final false
inline int64_t get_AsLong() ;

/// @brief Method get_IsNumber, addr 0x3fc2948, size 0x8, virtual true, abstract: false, final false
inline bool get_IsNumber() ;

/// @brief Method get_Tag, addr 0x3fc2940, size 0x8, virtual true, abstract: false, final false
inline ::OVRSimpleJSON::JSONNodeType get_Tag() ;

/// @brief Method get_Value, addr 0x3fc2964, size 0x68, virtual true, abstract: false, final false
inline ::StringW get_Value() ;

/// @brief Method set_AsDouble, addr 0x3fc2a60, size 0x8, virtual true, abstract: false, final false
inline void set_AsDouble(double_t  value) ;

/// @brief Method set_AsLong, addr 0x3fc2a88, size 0xc, virtual true, abstract: false, final false
inline void set_AsLong(int64_t  value) ;

/// @brief Method set_Value, addr 0x3fc29cc, size 0x8c, virtual true, abstract: false, final false
inline void set_Value(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr JSONNumber() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
JSONNumber(JSONNumber && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "JSONNumber", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
JSONNumber(JSONNumber const& ) = delete;

/// @brief Field m_Data, offset: 0x10, size: 0x8, def value: None
 double_t  ___m_Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVRSimpleJSON::JSONNumber, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVRSimpleJSON::JSONNumber, ___m_Data) == 0x10, "Offset mismatch!");

} // namespace end def OVRSimpleJSON
NEED_NO_BOX(::OVRSimpleJSON::JSONNumber);
DEFINE_IL2CPP_ARG_TYPE(::OVRSimpleJSON::JSONNumber*, "OVRSimpleJSON", "JSONNumber");
