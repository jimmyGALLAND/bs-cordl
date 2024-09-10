#pragma once
// IWYU pragma private; include "Oculus/Platform/Models/UserCapabilityList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserCapabilityList)
namespace Oculus::Platform::Models {
class UserCapability;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserCapabilityList);
// Type: Oculus.Platform.Models::UserCapabilityList
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// CS Name: ::Oculus.Platform.Models::UserCapabilityList*
class CORDL_TYPE UserCapabilityList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::UserCapability*> {
public:
// Declarations
static inline ::Oculus::Platform::Models::UserCapabilityList* New_ctor(::System::IntPtr  a) ;

/// @brief Method .ctor, addr 0x3f03234, size 0x210, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  a) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UserCapabilityList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UserCapabilityList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserCapabilityList(UserCapabilityList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserCapabilityList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserCapabilityList(UserCapabilityList const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserCapabilityList, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserCapabilityList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserCapabilityList*, "Oculus.Platform.Models", "UserCapabilityList");
