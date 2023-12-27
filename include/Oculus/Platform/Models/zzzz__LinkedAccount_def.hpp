#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__ServiceProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LinkedAccount)
// Forward declare root types
namespace Oculus::Platform::Models {
class LinkedAccount;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::LinkedAccount);
// Type: Oculus.Platform.Models::LinkedAccount
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(13386))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13451))
// CS Name: ::Oculus.Platform.Models::LinkedAccount*
class CORDL_TYPE LinkedAccount : public ::System::Object {
public:
  // Declarations
  /// @brief Field AccessToken, offset 0x10, size 0x8
  __declspec(property(get = __get_AccessToken, put = __set_AccessToken))::StringW AccessToken;

  /// @brief Field ServiceProvider, offset 0x18, size 0x4
  __declspec(property(get = __get_ServiceProvider, put = __set_ServiceProvider))::Oculus::Platform::ServiceProvider ServiceProvider;

  /// @brief Field UserId, offset 0x20, size 0x8
  __declspec(property(get = __get_UserId, put = __set_UserId))::StringW UserId;

  constexpr ::StringW& __get_AccessToken();

  constexpr ::StringW const& __get_AccessToken() const;

  constexpr void __set_AccessToken(::StringW value);

  constexpr ::Oculus::Platform::ServiceProvider& __get_ServiceProvider();

  constexpr ::Oculus::Platform::ServiceProvider const& __get_ServiceProvider() const;

  constexpr void __set_ServiceProvider(::Oculus::Platform::ServiceProvider value);

  constexpr ::StringW& __get_UserId();

  constexpr ::StringW const& __get_UserId() const;

  constexpr void __set_UserId(::StringW value);

  static inline ::Oculus::Platform::Models::LinkedAccount* New_ctor(void* o);

  /// @brief Method .ctor addr 0x2706f3c size 0x98 virtual false final false
  inline void _ctor(void* o);

  // Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LinkedAccount(LinkedAccount&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LinkedAccount", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LinkedAccount(LinkedAccount const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LinkedAccount();

public:
  /// @brief Field AccessToken, offset: 0x10, size: 0x8, def value: None
  ::StringW ___AccessToken;

  /// @brief Field ServiceProvider, offset: 0x18, size: 0x4, def value: None
  ::Oculus::Platform::ServiceProvider ___ServiceProvider;

  /// @brief Field UserId, offset: 0x20, size: 0x8, def value: None
  ::StringW ___UserId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::LinkedAccount, 0x28>, "Size mismatch!");

} // namespace Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::LinkedAccount);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::LinkedAccount*, "Oculus.Platform.Models", "LinkedAccount");
