#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ChallengeList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithChallengeList)
namespace Oculus::Platform::Models {
class ChallengeList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallengeList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallengeList);
// Type: Oculus.Platform::MessageWithChallengeList
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13427)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst:
// 4584 })} Self: TypeDefinitionIndex(TypeDefinitionIndex(13284)) CS Name: ::Oculus.Platform::MessageWithChallengeList*
class CORDL_TYPE MessageWithChallengeList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeList*> {
public:
  // Declarations
  static inline ::Oculus::Platform::MessageWithChallengeList* New_ctor(void* c_message);

  /// @brief Method .ctor addr 0x26eee78 size 0x58 virtual false final false
  inline void _ctor(void* c_message);

  /// @brief Method GetChallengeList addr 0x26f1608 size 0x3c virtual true final false
  inline ::Oculus::Platform::Models::ChallengeList* GetChallengeList();

  /// @brief Method GetDataFromMessage addr 0x26f1644 size 0x9c virtual true final false
  inline ::Oculus::Platform::Models::ChallengeList* GetDataFromMessage(void* c_message);

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MessageWithChallengeList(MessageWithChallengeList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MessageWithChallengeList(MessageWithChallengeList const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MessageWithChallengeList();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallengeList, 0x30>, "Size mismatch!");

} // namespace Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeList*, "Oculus.Platform", "MessageWithChallengeList");
