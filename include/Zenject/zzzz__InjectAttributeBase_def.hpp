#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/Internal/zzzz__PreserveAttribute_def.hpp"
#include "Zenject/zzzz__InjectSources_def.hpp"
CORDL_MODULE_EXPORT(InjectAttributeBase)
namespace Zenject {
struct InjectSources;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class InjectAttributeBase;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectAttributeBase);
// Type: Zenject::InjectAttributeBase
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15707)), TypeDefinitionIndex(TypeDefinitionIndex(15712))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15708))
// CS Name: ::Zenject::InjectAttributeBase*
class CORDL_TYPE InjectAttributeBase : public ::Zenject::Internal::PreserveAttribute {
public:
  // Declarations
  /// @brief Field <Optional>k__BackingField, offset 0x10, size 0x1
  __declspec(property(get = __get__Optional_k__BackingField, put = __set__Optional_k__BackingField)) bool _Optional_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Id_k__BackingField, put = __set__Id_k__BackingField))::System::Object* _Id_k__BackingField;

  /// @brief Field <Source>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__Source_k__BackingField, put = __set__Source_k__BackingField))::Zenject::InjectSources _Source_k__BackingField;

  __declspec(property(get = get_Optional, put = set_Optional)) bool Optional;

  __declspec(property(get = get_Id, put = set_Id))::System::Object* Id;

  __declspec(property(get = get_Source, put = set_Source))::Zenject::InjectSources Source;

  constexpr bool& __get__Optional_k__BackingField();

  constexpr bool const& __get__Optional_k__BackingField() const;

  constexpr void __set__Optional_k__BackingField(bool value);

  constexpr ::System::Object*& __get__Id_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__Id_k__BackingField() const;

  constexpr void __set__Id_k__BackingField(::System::Object* value);

  constexpr ::Zenject::InjectSources& __get__Source_k__BackingField();

  constexpr ::Zenject::InjectSources const& __get__Source_k__BackingField() const;

  constexpr void __set__Source_k__BackingField(::Zenject::InjectSources value);

  /// @brief Method get_Optional addr 0x2eb97b0 size 0x8 virtual false final false
  inline bool get_Optional();

  /// @brief Method set_Optional addr 0x2eb97b8 size 0xc virtual false final false
  inline void set_Optional(bool value);

  /// @brief Method get_Id addr 0x2eb97c4 size 0x8 virtual false final false
  inline ::System::Object* get_Id();

  /// @brief Method set_Id addr 0x2eb97cc size 0x8 virtual false final false
  inline void set_Id(::System::Object* value);

  /// @brief Method get_Source addr 0x2eb97d4 size 0x8 virtual false final false
  inline ::Zenject::InjectSources get_Source();

  /// @brief Method set_Source addr 0x2eb97dc size 0x8 virtual false final false
  inline void set_Source(::Zenject::InjectSources value);

  static inline ::Zenject::InjectAttributeBase* New_ctor();

  /// @brief Method .ctor addr 0x2eb97e4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectAttributeBase(InjectAttributeBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectAttributeBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectAttributeBase(InjectAttributeBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectAttributeBase();

public:
  /// @brief Field <Optional>k__BackingField, offset: 0x10, size: 0x1, def value: None
  bool ____Optional_k__BackingField;

  /// @brief Field <Id>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ____Id_k__BackingField;

  /// @brief Field <Source>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::Zenject::InjectSources ____Source_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectAttributeBase, 0x28>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectAttributeBase);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectAttributeBase*, "Zenject", "InjectAttributeBase");
