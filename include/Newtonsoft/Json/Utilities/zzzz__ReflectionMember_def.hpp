#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionMember)
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class ReflectionMember;
}
// Write type traits
MARK_REF_PTR_T(::Newtonsoft::Json::Utilities::ReflectionMember);
// Type: Newtonsoft.Json.Utilities::ReflectionMember
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11861))
// CS Name: ::Newtonsoft.Json.Utilities::ReflectionMember*
class CORDL_TYPE ReflectionMember : public ::System::Object {
public:
  // Declarations
  /// @brief Field <MemberType>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__MemberType_k__BackingField, put = __set__MemberType_k__BackingField))::System::Type* _MemberType_k__BackingField;

  /// @brief Field <Getter>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__Getter_k__BackingField, put = __set__Getter_k__BackingField))::System::Func_2<::System::Object*, ::System::Object*>* _Getter_k__BackingField;

  /// @brief Field <Setter>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __get__Setter_k__BackingField, put = __set__Setter_k__BackingField))::System::Action_2<::System::Object*, ::System::Object*>* _Setter_k__BackingField;

  __declspec(property(get = get_MemberType, put = set_MemberType))::System::Type* MemberType;

  __declspec(property(get = get_Getter, put = set_Getter))::System::Func_2<::System::Object*, ::System::Object*>* Getter;

  __declspec(property(get = get_Setter, put = set_Setter))::System::Action_2<::System::Object*, ::System::Object*>* Setter;

  constexpr ::System::Type*& __get__MemberType_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get__MemberType_k__BackingField() const;

  constexpr void __set__MemberType_k__BackingField(::System::Type* value);

  constexpr ::System::Func_2<::System::Object*, ::System::Object*>*& __get__Getter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Object*, ::System::Object*>*> const& __get__Getter_k__BackingField() const;

  constexpr void __set__Getter_k__BackingField(::System::Func_2<::System::Object*, ::System::Object*>* value);

  constexpr ::System::Action_2<::System::Object*, ::System::Object*>*& __get__Setter_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::System::Object*, ::System::Object*>*> const& __get__Setter_k__BackingField() const;

  constexpr void __set__Setter_k__BackingField(::System::Action_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method get_MemberType addr 0x265a740 size 0x8 virtual false final false
  inline ::System::Type* get_MemberType();

  /// @brief Method set_MemberType addr 0x265a748 size 0x8 virtual false final false
  inline void set_MemberType(::System::Type* value);

  /// @brief Method get_Getter addr 0x265a750 size 0x8 virtual false final false
  inline ::System::Func_2<::System::Object*, ::System::Object*>* get_Getter();

  /// @brief Method set_Getter addr 0x265a758 size 0x8 virtual false final false
  inline void set_Getter(::System::Func_2<::System::Object*, ::System::Object*>* value);

  /// @brief Method get_Setter addr 0x265a760 size 0x8 virtual false final false
  inline ::System::Action_2<::System::Object*, ::System::Object*>* get_Setter();

  /// @brief Method set_Setter addr 0x265a768 size 0x8 virtual false final false
  inline void set_Setter(::System::Action_2<::System::Object*, ::System::Object*>* value);

  static inline ::Newtonsoft::Json::Utilities::ReflectionMember* New_ctor();

  /// @brief Method .ctor addr 0x265a770 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionMember(ReflectionMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionMember(ReflectionMember const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionMember();

public:
  /// @brief Field <MemberType>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ____MemberType_k__BackingField;

  /// @brief Field <Getter>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Object*, ::System::Object*>* ____Getter_k__BackingField;

  /// @brief Field <Setter>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Action_2<::System::Object*, ::System::Object*>* ____Setter_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Utilities::ReflectionMember, 0x28>, "Size mismatch!");

} // namespace Newtonsoft::Json::Utilities
NEED_NO_BOX(::Newtonsoft::Json::Utilities::ReflectionMember);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::ReflectionMember*, "Newtonsoft.Json.Utilities", "ReflectionMember");
