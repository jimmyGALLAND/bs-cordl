#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__DrawIfAttribute_def.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DrawIfAttribute)
namespace System {
class Object;
}
namespace GlobalNamespace {
struct __DrawIfAttribute__DisablingType;
}
// Forward declare root types
namespace GlobalNamespace {
struct __DrawIfAttribute__DisablingType;
}
namespace GlobalNamespace {
class DrawIfAttribute;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__DrawIfAttribute__DisablingType);
MARK_REF_PTR_T(::GlobalNamespace::DrawIfAttribute);
// Type: ::DisablingType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16249))
// CS Name: ::DrawIfAttribute::DisablingType
struct CORDL_TYPE __DrawIfAttribute__DisablingType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____DrawIfAttribute__DisablingType_Unwrapped
  enum struct ____DrawIfAttribute__DisablingType_Unwrapped : int32_t {
    __E_ReadOnly = static_cast<int32_t>(0x0),
    __E_DontDraw = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____DrawIfAttribute__DisablingType_Unwrapped() const noexcept {
    return static_cast<____DrawIfAttribute__DisablingType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __DrawIfAttribute__DisablingType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __DrawIfAttribute__DisablingType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ReadOnly value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__DrawIfAttribute__DisablingType const ReadOnly;

  /// @brief Field DontDraw value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__DrawIfAttribute__DisablingType const DontDraw;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__DrawIfAttribute__DisablingType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::DrawIfAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10170)), TypeDefinitionIndex(TypeDefinitionIndex(16249))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16250))
// CS Name: ::DrawIfAttribute*
class CORDL_TYPE DrawIfAttribute : public ::UnityEngine::PropertyAttribute {
public:
  // Declarations
  using DisablingType = ::GlobalNamespace::__DrawIfAttribute__DisablingType;

  /// @brief Field propertyName, offset 0x10, size 0x8
  __declspec(property(get = __get_propertyName, put = __set_propertyName))::StringW propertyName;

  /// @brief Field value, offset 0x18, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::System::Object* value;

  /// @brief Field orValue, offset 0x20, size 0x8
  __declspec(property(get = __get_orValue, put = __set_orValue))::System::Object* orValue;

  /// @brief Field disablingType, offset 0x28, size 0x4
  __declspec(property(get = __get_disablingType, put = __set_disablingType))::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType;

  constexpr ::StringW& __get_propertyName();

  constexpr ::StringW const& __get_propertyName() const;

  constexpr void __set_propertyName(::StringW value);

  constexpr ::System::Object*& __get_value();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_value() const;

  constexpr void __set_value(::System::Object* value);

  constexpr ::System::Object*& __get_orValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_orValue() const;

  constexpr void __set_orValue(::System::Object* value);

  constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType& __get_disablingType();

  constexpr ::GlobalNamespace::__DrawIfAttribute__DisablingType const& __get_disablingType() const;

  constexpr void __set_disablingType(::GlobalNamespace::__DrawIfAttribute__DisablingType value);

  static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType);

  /// @brief Method .ctor addr 0x2101038 size 0x3c virtual false final false
  inline void _ctor(::StringW propertyName, ::System::Object* value, ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType);

  static inline ::GlobalNamespace::DrawIfAttribute* New_ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue,
                                                             ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType);

  /// @brief Method .ctor addr 0x2101074 size 0x44 virtual false final false
  inline void _ctor(::StringW propertyName, ::System::Object* value, ::System::Object* orValue, ::GlobalNamespace::__DrawIfAttribute__DisablingType disablingType);

  // Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DrawIfAttribute(DrawIfAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DrawIfAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DrawIfAttribute(DrawIfAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DrawIfAttribute();

public:
  /// @brief Field propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___propertyName;

  /// @brief Field value, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___value;

  /// @brief Field orValue, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ___orValue;

  /// @brief Field disablingType, offset: 0x28, size: 0x4, def value: None
  ::GlobalNamespace::__DrawIfAttribute__DisablingType ___disablingType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DrawIfAttribute, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__DrawIfAttribute__DisablingType, "", "DrawIfAttribute/DisablingType");
NEED_NO_BOX(::GlobalNamespace::DrawIfAttribute);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DrawIfAttribute*, "", "DrawIfAttribute");
