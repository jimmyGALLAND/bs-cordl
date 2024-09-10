#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ReflectionValueProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionValueProvider)
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class ReflectionValueProvider;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Serialization::ReflectionValueProvider);
// Type: Newtonsoft.Json.Serialization::ReflectionValueProvider
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// CS Name: ::Newtonsoft.Json.Serialization::ReflectionValueProvider*
class CORDL_TYPE ReflectionValueProvider : public ::System::Object {
public:
// Declarations
/// @brief Field _memberInfo, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__memberInfo, put=__cordl_internal_set__memberInfo)) ::System::Reflection::MemberInfo*  _memberInfo;

/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr operator  ::Newtonsoft::Json::Serialization::IValueProvider*() noexcept;

/// @brief Method GetValue, addr 0x3e6dcd4, size 0x298, virtual true, abstract: false, final true
inline ::System::Object* GetValue(::System::Object*  target) ;

static inline ::Newtonsoft::Json::Serialization::ReflectionValueProvider* New_ctor(::System::Reflection::MemberInfo*  memberInfo) ;

/// @brief Method SetValue, addr 0x3e6db38, size 0x19c, virtual true, abstract: false, final true
inline void SetValue(::System::Object*  target, ::System::Object*  value) ;

constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__memberInfo() ;

constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MemberInfo*> const& __cordl_internal_get__memberInfo() const;

constexpr void __cordl_internal_set__memberInfo(::System::Reflection::MemberInfo*  value) ;

/// @brief Method .ctor, addr 0x3e6dacc, size 0x6c, virtual false, abstract: false, final false
inline void _ctor(::System::Reflection::MemberInfo*  memberInfo) ;

/// @brief Convert to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr ::Newtonsoft::Json::Serialization::IValueProvider* i___Newtonsoft__Json__Serialization__IValueProvider() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReflectionValueProvider() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReflectionValueProvider(ReflectionValueProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReflectionValueProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReflectionValueProvider(ReflectionValueProvider const& ) = delete;

/// @brief Field _memberInfo, offset: 0x10, size: 0x8, def value: None
 ::System::Reflection::MemberInfo*  ____memberInfo;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Serialization::ReflectionValueProvider, 0x18>, "Size mismatch!");

static_assert(offsetof(::Newtonsoft::Json::Serialization::ReflectionValueProvider, ____memberInfo) == 0x10, "Offset mismatch!");

} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(::Newtonsoft::Json::Serialization::ReflectionValueProvider);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::ReflectionValueProvider*, "Newtonsoft.Json.Serialization", "ReflectionValueProvider");
