#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LaunchFriendRequestFlowResult)
// Forward declare root types
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
// Type: Oculus.Platform.Models::LaunchFriendRequestFlowResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 18, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13443))
// CS Name: ::Oculus.Platform.Models::LaunchFriendRequestFlowResult*
class CORDL_TYPE LaunchFriendRequestFlowResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field DidCancel, offset 0x10, size 0x1
  __declspec(property(get = __get_DidCancel, put = __set_DidCancel)) bool DidCancel;

  /// @brief Field DidSendRequest, offset 0x11, size 0x1
  __declspec(property(get = __get_DidSendRequest, put = __set_DidSendRequest)) bool DidSendRequest;

  constexpr bool& __get_DidCancel();

  constexpr bool const& __get_DidCancel() const;

  constexpr void __set_DidCancel(bool value);

  constexpr bool& __get_DidSendRequest();

  constexpr bool const& __get_DidSendRequest() const;

  constexpr void __set_DidSendRequest(bool value);

  static inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* New_ctor(void* o);

  /// @brief Method .ctor addr 0x27065d4 size 0x90 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LaunchFriendRequestFlowResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LaunchFriendRequestFlowResult(LaunchFriendRequestFlowResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LaunchFriendRequestFlowResult();

public:
  /// @brief Field DidCancel, offset: 0x10, size: 0x1, def value: None
  bool ___DidCancel;

  /// @brief Field DidSendRequest, offset: 0x11, size: 0x1, def value: None
  bool ___DidSendRequest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LaunchFriendRequestFlowResult, 0x18>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LaunchFriendRequestFlowResult*, "Oculus.Platform.Models", "LaunchFriendRequestFlowResult");
