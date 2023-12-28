#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/Utilities/zzzz__PrimitiveValue_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NamedValue)
namespace System {
struct TypeCode;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
// Write type traits
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::NamedValue);
// Type: UnityEngine.InputSystem.Utilities::NamedValue
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6699))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6683))
// CS Name: ::UnityEngine.InputSystem.Utilities::NamedValue
struct CORDL_TYPE NamedValue {
public:
  // Declarations
  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_value, put = set_value))::UnityEngine::InputSystem::Utilities::PrimitiveValue value;

  __declspec(property(get = get_type))::System::TypeCode type;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::InputSystem::Utilities::NamedValue>*();

  /// @brief Method get_name addr 0x2b149b0 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2b149b8 size 0x8 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_value addr 0x2b149c0 size 0xc virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::PrimitiveValue get_value();

  /// @brief Method set_value addr 0x2b149cc size 0x8 virtual false final false
  inline void set_value(::UnityEngine::InputSystem::Utilities::PrimitiveValue value);

  /// @brief Method get_type addr 0x2b149d4 size 0x8 virtual false final false
  inline ::System::TypeCode get_type();

  /// @brief Method ConvertTo addr 0x2b149dc size 0x3c virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::NamedValue ConvertTo(::System::TypeCode type);

  /// @brief Method From addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TValue> static inline ::UnityEngine::InputSystem::Utilities::NamedValue From(::StringW name, TValue value);

  /// @brief Method ToString addr 0x2b1491c size 0x94 virtual true final false
  inline ::StringW ToString();

  /// @brief Method Equals addr 0x2b14c10 size 0x5c virtual true final true
  inline bool Equals(::UnityEngine::InputSystem::Utilities::NamedValue other);

  /// @brief Method Equals addr 0x2b14c98 size 0x90 virtual true final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode addr 0x2b14d28 size 0x5c virtual true final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality addr 0x2b14e0c size 0x30 virtual false final false
  static inline bool op_Equality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right);

  /// @brief Method op_Inequality addr 0x2b14e3c size 0x34 virtual false final false
  static inline bool op_Inequality(::UnityEngine::InputSystem::Utilities::NamedValue left, ::UnityEngine::InputSystem::Utilities::NamedValue right);

  /// @brief Method ParseMultiple addr 0x2b14710 size 0x198 virtual false final false
  static inline ::ArrayW<::UnityEngine::InputSystem::Utilities::NamedValue, ::Array<::UnityEngine::InputSystem::Utilities::NamedValue>*> ParseMultiple(::StringW parameterString);

  /// @brief Method Parse addr 0x2b15234 size 0x38 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::NamedValue Parse(::StringW str);

  /// @brief Method ParseParameter addr 0x2b14ee0 size 0x354 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::NamedValue ParseParameter(::StringW parameterString, ByRef<int32_t> index);

  /// @brief Method ApplyToObject addr 0x2b15574 size 0x2e8 virtual false final false
  inline void ApplyToObject(::System::Object* instance);

  /// @brief Method ApplyAllToObject addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TParameterList> static inline void ApplyAllToObject(::System::Object* instance, TParameterList parameters);

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_value_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
  constexpr NamedValue(::StringW _name_k__BackingField, ::UnityEngine::InputSystem::Utilities::PrimitiveValue _value_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NamedValue();

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  /// @brief Field <value>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::PrimitiveValue _value_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field Separator offset 0xffffffff size 0x8
  static constexpr ::ConstString Separator{ u"," };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::NamedValue, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NamedValue, "UnityEngine.InputSystem.Utilities", "NamedValue");
