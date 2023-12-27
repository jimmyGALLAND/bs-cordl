#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Remoting/zzzz__TypeEntry_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ActivatedServiceTypeEntry)
namespace System {
class Type;
}
// Forward declare root types
namespace System::Runtime::Remoting {
class ActivatedServiceTypeEntry;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Remoting::ActivatedServiceTypeEntry);
// Type: System.Runtime.Remoting::ActivatedServiceTypeEntry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::Remoting {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3079))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3054))
// CS Name: ::System.Runtime.Remoting::ActivatedServiceTypeEntry*
class CORDL_TYPE ActivatedServiceTypeEntry : public ::System::Runtime::Remoting::TypeEntry {
public:
  // Declarations
  /// @brief Field obj_type, offset 0x20, size 0x8
  __declspec(property(get = __get_obj_type, put = __set_obj_type))::System::Type* obj_type;

  __declspec(property(get = get_ObjectType))::System::Type* ObjectType;

  constexpr ::System::Type*& __get_obj_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_obj_type() const;

  constexpr void __set_obj_type(::System::Type* value);

  static inline ::System::Runtime::Remoting::ActivatedServiceTypeEntry* New_ctor(::StringW typeName, ::StringW assemblyName);

  /// @brief Method .ctor addr 0x2484ef8 size 0x128 virtual false final false
  inline void _ctor(::StringW typeName, ::StringW assemblyName);

  /// @brief Method get_ObjectType addr 0x2485020 size 0x8 virtual false final false
  inline ::System::Type* get_ObjectType();

  /// @brief Method ToString addr 0x2485028 size 0x10 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ActivatedServiceTypeEntry(ActivatedServiceTypeEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ActivatedServiceTypeEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ActivatedServiceTypeEntry(ActivatedServiceTypeEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ActivatedServiceTypeEntry();

public:
  /// @brief Field obj_type, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___obj_type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::ActivatedServiceTypeEntry, 0x28>, "Size mismatch!");

} // namespace System::Runtime::Remoting
NEED_NO_BOX(::System::Runtime::Remoting::ActivatedServiceTypeEntry);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::ActivatedServiceTypeEntry*, "System.Runtime.Remoting", "ActivatedServiceTypeEntry");
