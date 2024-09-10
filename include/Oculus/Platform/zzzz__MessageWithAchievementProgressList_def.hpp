#pragma once
// IWYU pragma private; include "Oculus/Platform/MessageWithAchievementProgressList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAchievementProgressList)
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAchievementProgressList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAchievementProgressList);
// Type: Oculus.Platform::MessageWithAchievementProgressList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// CS Name: ::Oculus.Platform::MessageWithAchievementProgressList*
class CORDL_TYPE MessageWithAchievementProgressList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AchievementProgressList*> {
public:
// Declarations
/// @brief Method GetAchievementProgressList, addr 0x3eecc70, size 0x3c, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AchievementProgressList* GetAchievementProgressList() ;

/// @brief Method GetDataFromMessage, addr 0x3eeccac, size 0x94, virtual true, abstract: false, final false
inline ::Oculus::Platform::Models::AchievementProgressList* GetDataFromMessage(::System::IntPtr  c_message) ;

static inline ::Oculus::Platform::MessageWithAchievementProgressList* New_ctor(::System::IntPtr  c_message) ;

/// @brief Method .ctor, addr 0x3eeacf0, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::System::IntPtr  c_message) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MessageWithAchievementProgressList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAchievementProgressList(MessageWithAchievementProgressList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAchievementProgressList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAchievementProgressList(MessageWithAchievementProgressList const& ) = delete;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAchievementProgressList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAchievementProgressList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAchievementProgressList*, "Oculus.Platform", "MessageWithAchievementProgressList");
