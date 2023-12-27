#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GroupPresenceLeaveIntent)
// Forward declare root types
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::GroupPresenceLeaveIntent);
// Type: Oculus.Platform.Models::GroupPresenceLeaveIntent
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13435))
// CS Name: ::Oculus.Platform.Models::GroupPresenceLeaveIntent*
class CORDL_TYPE GroupPresenceLeaveIntent : public ::System::Object {
public:
  // Declarations
  /// @brief Field DestinationApiName, offset 0x10, size 0x8
  __declspec(property(get = __get_DestinationApiName, put = __set_DestinationApiName))::StringW DestinationApiName;

  /// @brief Field LobbySessionId, offset 0x18, size 0x8
  __declspec(property(get = __get_LobbySessionId, put = __set_LobbySessionId))::StringW LobbySessionId;

  /// @brief Field MatchSessionId, offset 0x20, size 0x8
  __declspec(property(get = __get_MatchSessionId, put = __set_MatchSessionId))::StringW MatchSessionId;

  constexpr ::StringW& __get_DestinationApiName();

  constexpr ::StringW const& __get_DestinationApiName() const;

  constexpr void __set_DestinationApiName(::StringW value);

  constexpr ::StringW& __get_LobbySessionId();

  constexpr ::StringW const& __get_LobbySessionId() const;

  constexpr void __set_LobbySessionId(::StringW value);

  constexpr ::StringW& __get_MatchSessionId();

  constexpr ::StringW const& __get_MatchSessionId() const;

  constexpr void __set_MatchSessionId(::StringW value);

  static inline ::Oculus::Platform::Models::GroupPresenceLeaveIntent* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2705ea4 size 0x98 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceLeaveIntent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GroupPresenceLeaveIntent(GroupPresenceLeaveIntent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GroupPresenceLeaveIntent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GroupPresenceLeaveIntent(GroupPresenceLeaveIntent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GroupPresenceLeaveIntent();

public:
  /// @brief Field DestinationApiName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___DestinationApiName;

  /// @brief Field LobbySessionId, offset: 0x18, size: 0x8, def value: None
  ::StringW ___LobbySessionId;

  /// @brief Field MatchSessionId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___MatchSessionId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::GroupPresenceLeaveIntent, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::GroupPresenceLeaveIntent);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::GroupPresenceLeaveIntent*, "Oculus.Platform.Models", "GroupPresenceLeaveIntent");
