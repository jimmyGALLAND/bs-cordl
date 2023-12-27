#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(AssemblyLoadEventArgs)
namespace System::Reflection {
class Assembly;
}
// Forward declare root types
namespace System {
class AssemblyLoadEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::AssemblyLoadEventArgs);
// Type: System::AssemblyLoadEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2351))
// CS Name: ::System::AssemblyLoadEventArgs*
class CORDL_TYPE AssemblyLoadEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field <LoadedAssembly>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__LoadedAssembly_k__BackingField, put = __set__LoadedAssembly_k__BackingField))::System::Reflection::Assembly* _LoadedAssembly_k__BackingField;

  constexpr ::System::Reflection::Assembly*& __get__LoadedAssembly_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __get__LoadedAssembly_k__BackingField() const;

  constexpr void __set__LoadedAssembly_k__BackingField(::System::Reflection::Assembly* value);

  static inline ::System::AssemblyLoadEventArgs* New_ctor(::System::Reflection::Assembly* loadedAssembly);

  /// @brief Method .ctor addr 0x2521160 size 0x6c virtual false final false
  inline void _ctor(::System::Reflection::Assembly* loadedAssembly);

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AssemblyLoadEventArgs(AssemblyLoadEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AssemblyLoadEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AssemblyLoadEventArgs(AssemblyLoadEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AssemblyLoadEventArgs();

public:
  /// @brief Field <LoadedAssembly>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ____LoadedAssembly_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::AssemblyLoadEventArgs, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::AssemblyLoadEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::AssemblyLoadEventArgs*, "System", "AssemblyLoadEventArgs");
