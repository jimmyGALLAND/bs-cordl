#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__NamedValue_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NameAndParameters)
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Utilities {
template <typename TValue> struct ReadOnlyArray_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::InputSystem::Utilities {
class __NameAndParameters____c;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Utilities {
class __NameAndParameters____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::InputSystem::Utilities::__NameAndParameters____c);
MARK_VAL_T(::UnityEngine::InputSystem::Utilities::NameAndParameters);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6681))
// CS Name: ::NameAndParameters::<>c*
class CORDL_TYPE __NameAndParameters____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::InputSystem::Utilities::__NameAndParameters____c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0))::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* __9__8_0;

  static inline void setStaticF___9(::UnityEngine::InputSystem::Utilities::__NameAndParameters____c* value);

  static inline ::UnityEngine::InputSystem::Utilities::__NameAndParameters____c* getStaticF___9();

  static inline void setStaticF___9__8_0(::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* value);

  static inline ::System::Func_2<::UnityEngine::InputSystem::Utilities::NamedValue, ::StringW>* getStaticF___9__8_0();

  static inline ::UnityEngine::InputSystem::Utilities::__NameAndParameters____c* New_ctor();

  /// @brief Method .ctor addr 0x2b1490c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ToString>b__8_0 addr 0x2b14914 size 0x8 virtual false final false
  inline ::StringW _ToString_b__8_0(::UnityEngine::InputSystem::Utilities::NamedValue x);

  // Ctor Parameters [CppParam { name: "", ty: "__NameAndParameters____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NameAndParameters____c(__NameAndParameters____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NameAndParameters____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NameAndParameters____c(__NameAndParameters____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NameAndParameters____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::__NameAndParameters____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
// Type: UnityEngine.InputSystem.Utilities::NameAndParameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::InputSystem::Utilities {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6683)), TypeDefinitionIndex(TypeDefinitionIndex(6701)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(6701), inst: 3114
// })} Self: TypeDefinitionIndex(TypeDefinitionIndex(6682)) CS Name: ::UnityEngine.InputSystem.Utilities::NameAndParameters
struct CORDL_TYPE NameAndParameters {
public:
  // Declarations
  using __c = ::UnityEngine::InputSystem::Utilities::__NameAndParameters____c;

  __declspec(property(get = get_name, put = set_name))::StringW name;

  __declspec(property(get = get_parameters, put = set_parameters))::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> parameters;

  /// @brief Method get_name addr 0x2b13df0 size 0x8 virtual false final false
  inline ::StringW get_name();

  /// @brief Method set_name addr 0x2b13df8 size 0x8 virtual false final false
  inline void set_name(::StringW value);

  /// @brief Method get_parameters addr 0x2b13e00 size 0xc virtual false final false
  inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> get_parameters();

  /// @brief Method set_parameters addr 0x2b13e0c size 0x8 virtual false final false
  inline void set_parameters(::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> value);

  /// @brief Method ToString addr 0x2b13e14 size 0x1e8 virtual true final false
  inline ::StringW ToString();

  /// @brief Method ParseMultiple addr 0x2b13ffc size 0x9c virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>* ParseMultiple(::StringW text);

  /// @brief Method ParseMultiple addr 0x2b14098 size 0x1dc virtual false final false
  static inline bool ParseMultiple(::StringW text, ByRef<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Utilities::NameAndParameters>*> list);

  /// @brief Method ParseName addr 0x2b14600 size 0x80 virtual false final false
  static inline ::StringW ParseName(::StringW text);

  /// @brief Method Parse addr 0x2b14680 size 0x90 virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters Parse(::StringW text);

  /// @brief Method ParseNameAndParameters addr 0x2b14274 size 0x38c virtual false final false
  static inline ::UnityEngine::InputSystem::Utilities::NameAndParameters ParseNameAndParameters(::StringW text, ByRef<int32_t> index, bool nameOnly);

  // Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_parameters_k__BackingField", ty:
  // "::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }]
  constexpr NameAndParameters(::StringW _name_k__BackingField,
                              ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NameAndParameters();

  /// @brief Field <name>k__BackingField, offset: 0x0, size: 0x8, def value: None
  ::StringW _name_k__BackingField;

  /// @brief Field <parameters>k__BackingField, offset: 0x8, size: 0x10, def value: None
  ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::InputSystem::Utilities::NameAndParameters, 0x18>, "Size mismatch!");

} // namespace UnityEngine::InputSystem::Utilities
NEED_NO_BOX(::UnityEngine::InputSystem::Utilities::__NameAndParameters____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::__NameAndParameters____c*, "UnityEngine.InputSystem.Utilities", "NameAndParameters/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::InputSystem::Utilities::NameAndParameters, "UnityEngine.InputSystem.Utilities", "NameAndParameters");
