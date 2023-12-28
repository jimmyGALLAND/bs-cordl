#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(X509Chain)
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainImpl;
}
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainPolicy;
}
namespace System::Security::Cryptography::X509Certificates {
class X509ChainElementCollection;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509ChainStatus;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Chain;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Chain);
// Type: System.Security.Cryptography.X509Certificates::X509Chain
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9002))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Chain*
class CORDL_TYPE X509Chain : public ::System::Object {
public:
  // Declarations
  /// @brief Field impl, offset 0x10, size 0x8
  __declspec(property(get = __get_impl, put = __set_impl))::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl;

  __declspec(property(get = get_Impl))::System::Security::Cryptography::X509Certificates::X509ChainImpl* Impl;

  __declspec(property(get = get_ChainElements))::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* ChainElements;

  __declspec(property(get = get_ChainPolicy))::System::Security::Cryptography::X509Certificates::X509ChainPolicy* ChainPolicy;

  __declspec(property(
      get = get_ChainStatus))::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> ChainStatus;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  constexpr ::System::Security::Cryptography::X509Certificates::X509ChainImpl*& __get_impl();

  constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509ChainImpl*> const& __get_impl() const;

  constexpr void __set_impl(::System::Security::Cryptography::X509Certificates::X509ChainImpl* value);

  /// @brief Method get_Impl addr 0x297f8f0 size 0x20 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainImpl* get_Impl();

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor();

  /// @brief Method .ctor addr 0x297f910 size 0x28 virtual false final false
  inline void _ctor();

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(bool useMachineContext);

  /// @brief Method .ctor addr 0x297f938 size 0x34 virtual false final false
  inline void _ctor(bool useMachineContext);

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  /// @brief Method .ctor addr 0x297f96c size 0x34 virtual false final false
  inline void _ctor(::System::Security::Cryptography::X509Certificates::X509ChainImpl* impl);

  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* New_ctor(void* chainContext);

  /// @brief Method .ctor addr 0x297f9a0 size 0x48 virtual false final false
  inline void _ctor(void* chainContext);

  /// @brief Method get_ChainElements addr 0x297f9e8 size 0x30 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainElementCollection* get_ChainElements();

  /// @brief Method get_ChainPolicy addr 0x297fa18 size 0x30 virtual false final false
  inline ::System::Security::Cryptography::X509Certificates::X509ChainPolicy* get_ChainPolicy();

  /// @brief Method get_ChainStatus addr 0x297fa48 size 0x30 virtual false final false
  inline ::ArrayW<::System::Security::Cryptography::X509Certificates::X509ChainStatus, ::Array<::System::Security::Cryptography::X509Certificates::X509ChainStatus>*> get_ChainStatus();

  /// @brief Method Build addr 0x297e748 size 0x40 virtual false final false
  inline bool Build(::System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);

  /// @brief Method Reset addr 0x297fa78 size 0x30 virtual false final false
  inline void Reset();

  /// @brief Method Create addr 0x297e6dc size 0x6c virtual false final false
  static inline ::System::Security::Cryptography::X509Certificates::X509Chain* Create();

  /// @brief Method Dispose addr 0x297faa8 size 0x6c virtual true final true
  inline void Dispose();

  /// @brief Method Dispose addr 0x297fb14 size 0x20 virtual true final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize addr 0x297fba0 size 0xa0 virtual true final false
  inline void Finalize();

  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  X509Chain(X509Chain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "X509Chain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  X509Chain(X509Chain const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr X509Chain();

public:
  /// @brief Field impl, offset: 0x10, size: 0x8, def value: None
  ::System::Security::Cryptography::X509Certificates::X509ChainImpl* ___impl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Chain, 0x18>, "Size mismatch!");

} // namespace System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Chain);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Chain*, "System.Security.Cryptography.X509Certificates", "X509Chain");
