#pragma once
// IWYU pragma private; include "Unity/Properties/IMemberInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(IMemberInfo)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
class Attribute;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Properties {
class IMemberInfo;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Properties::IMemberInfo);
// Type: Unity.Properties::IMemberInfo
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Unity::Properties {
// Is value type: false
// CS Name: ::Unity.Properties::IMemberInfo*
class CORDL_TYPE IMemberInfo {
public:
// Declarations
 __declspec(property(get=get_IsReadOnly)) bool  IsReadOnly;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_ValueType)) ::System::Type*  ValueType;

/// @brief Method GetCustomAttributes, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Attribute*>* GetCustomAttributes() ;

/// @brief Method get_IsReadOnly, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_IsReadOnly() ;

/// @brief Method get_Name, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_Name() ;

/// @brief Method get_ValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Type* get_ValueType() ;

// Ctor Parameters [CppParam { name: "", ty: "IMemberInfo", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
IMemberInfo(IMemberInfo && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "IMemberInfo", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMemberInfo(IMemberInfo const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::Properties
NEED_NO_BOX(::Unity::Properties::IMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Properties::IMemberInfo*, "Unity.Properties", "IMemberInfo");
