#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LookupId)
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct BindingId;
}
// Forward declare root types
namespace Zenject::Internal {
class LookupId;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::LookupId);
// Type: Zenject.Internal::LookupId
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11158))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11367))
// CS Name: ::Zenject.Internal::LookupId*
class CORDL_TYPE LookupId : public ::System::Object {
public:
  // Declarations
  /// @brief Field Provider, offset 0x10, size 0x8
  __declspec(property(get = __get_Provider, put = __set_Provider))::Zenject::IProvider* Provider;

  /// @brief Field BindingId, offset 0x18, size 0x10
  __declspec(property(get = __get_BindingId, put = __set_BindingId))::Zenject::BindingId BindingId;

  constexpr ::Zenject::IProvider*& __get_Provider();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::IProvider*> const& __get_Provider() const;

  constexpr void __set_Provider(::Zenject::IProvider* value);

  constexpr ::Zenject::BindingId& __get_BindingId();

  constexpr ::Zenject::BindingId const& __get_BindingId() const;

  constexpr void __set_BindingId(::Zenject::BindingId value);

  static inline ::Zenject::Internal::LookupId* New_ctor();

  /// @brief Method .ctor addr 0x2f213bc size 0x8 virtual false final false
  inline void _ctor();

  static inline ::Zenject::Internal::LookupId* New_ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId);

  /// @brief Method .ctor addr 0x2f213c4 size 0x9c virtual false final false
  inline void _ctor(::Zenject::IProvider* provider, ::Zenject::BindingId bindingId);

  /// @brief Method GetHashCode addr 0x2f21460 size 0x50 virtual true final false
  inline int32_t GetHashCode();

  // Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LookupId(LookupId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LookupId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LookupId(LookupId const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LookupId();

public:
  /// @brief Field Provider, offset: 0x10, size: 0x8, def value: None
  ::Zenject::IProvider* ___Provider;

  /// @brief Field BindingId, offset: 0x18, size: 0x10, def value: None
  ::Zenject::BindingId ___BindingId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::LookupId, 0x28>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::LookupId);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::LookupId*, "Zenject.Internal", "LookupId");
