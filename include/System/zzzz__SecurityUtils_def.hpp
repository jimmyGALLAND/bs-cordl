#pragma once
// IWYU pragma private; include "System/SecurityUtils.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SecurityUtils)
namespace System::Reflection {
class Assembly;
}
namespace System::Reflection {
struct BindingFlags;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System {
class SecurityUtils;
}
// Write type traits
MARK_REF_PTR_T(::System::SecurityUtils);
// Type: System::SecurityUtils
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// CS Name: ::System::SecurityUtils*
class CORDL_TYPE SecurityUtils : public ::System::Object {
public:
// Declarations
/// @brief Method DemandGrantSet, addr 0x43781d8, size 0x4, virtual false, abstract: false, final false
static inline void DemandGrantSet(::System::Reflection::Assembly*  assembly) ;

/// @brief Method DemandReflectionAccess, addr 0x43781d4, size 0x4, virtual false, abstract: false, final false
static inline void DemandReflectionAccess(::System::Type*  type) ;

/// @brief Method GenericArgumentsAreVisible, addr 0x437846c, size 0xb0, virtual false, abstract: false, final false
static inline bool GenericArgumentsAreVisible(::System::Reflection::MethodInfo*  method) ;

/// @brief Method HasReflectionPermission, addr 0x43781dc, size 0x8, virtual false, abstract: false, final false
static inline bool HasReflectionPermission(::System::Type*  type) ;

/// @brief Method MethodInfoInvoke, addr 0x437851c, size 0x110, virtual false, abstract: false, final false
static inline ::System::Object* MethodInfoInvoke(::System::Reflection::MethodInfo*  method, ::System::Object*  target, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method SecureConstructorInvoke, addr 0x43782ec, size 0xc, virtual false, abstract: false, final false
static inline ::System::Object* SecureConstructorInvoke(::System::Type*  type, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  argTypes, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  allowNonPublic) ;

/// @brief Method SecureConstructorInvoke, addr 0x43782f8, size 0x174, virtual false, abstract: false, final false
static inline ::System::Object* SecureConstructorInvoke(::System::Type*  type, ::ArrayW<::System::Type*,::Array<::System::Type*>*>  argTypes, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  allowNonPublic, ::System::Reflection::BindingFlags  extraFlags) ;

/// @brief Method SecureCreateInstance, addr 0x43781e4, size 0xc, virtual false, abstract: false, final false
static inline ::System::Object* SecureCreateInstance(::System::Type*  type) ;

/// @brief Method SecureCreateInstance, addr 0x43782e4, size 0x8, virtual false, abstract: false, final false
static inline ::System::Object* SecureCreateInstance(::System::Type*  type, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args) ;

/// @brief Method SecureCreateInstance, addr 0x43781f0, size 0xf4, virtual false, abstract: false, final false
static inline ::System::Object* SecureCreateInstance(::System::Type*  type, ::ArrayW<::System::Object*,::Array<::System::Object*>*>  args, bool  allowNonPublic) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SecurityUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SecurityUtils(SecurityUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SecurityUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SecurityUtils(SecurityUtils const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::SecurityUtils, 0x10>, "Size mismatch!");

} // namespace end def System
NEED_NO_BOX(::System::SecurityUtils);
DEFINE_IL2CPP_ARG_TYPE(::System::SecurityUtils*, "System", "SecurityUtils");
