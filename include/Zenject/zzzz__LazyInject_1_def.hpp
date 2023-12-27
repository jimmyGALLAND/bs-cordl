#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LazyInject_1)
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template <typename T> class LazyInject_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::LazyInject_1);
// Type: Zenject::LazyInject`1
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11117))
// CS Name: ::Zenject::LazyInject`1<T>*
class CORDL_TYPE LazyInject_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _container, offset 0x10, size 0x8
  __declspec(property(get = __get__container, put = __set__container))::Zenject::DiContainer* _container;

  /// @brief Field _context, offset 0x18, size 0x8
  __declspec(property(get = __get__context, put = __set__context))::Zenject::InjectContext* _context;

  /// @brief Field _hasValue, offset 0x20, size 0x1
  __declspec(property(get = __get__hasValue, put = __set__hasValue)) bool _hasValue;

  /// @brief Field _value, offset 0x28, size 0x8
  __declspec(property(get = __get__value, put = __set__value)) T _value;

  __declspec(property(get = get_Value)) T Value;

  /// @brief Convert operator to "::Zenject::IValidatable"
  constexpr operator ::Zenject::IValidatable*() noexcept;

  constexpr ::Zenject::DiContainer*& __get__container();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get__container() const;

  constexpr void __set__container(::Zenject::DiContainer* value);

  constexpr ::Zenject::InjectContext*& __get__context();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> const& __get__context() const;

  constexpr void __set__context(::Zenject::InjectContext* value);

  constexpr bool& __get__hasValue();

  constexpr bool const& __get__hasValue() const;

  constexpr void __set__hasValue(bool value);

  constexpr T& __get__value();

  constexpr T const& __get__value() const;

  constexpr void __set__value(T value);

  static inline ::Zenject::LazyInject_1<T>* New_ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::InjectContext* context);

  /// @brief Method Zenject.IValidatable.Validate addr 0x0 size 0xffffffffffffffff virtual true final true
  inline void Zenject_IValidatable_Validate();

  /// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LazyInject_1(LazyInject_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LazyInject_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LazyInject_1(LazyInject_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyInject_1();

public:
  /// @brief Field _container, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ____container;

  /// @brief Field _context, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectContext* ____context;

  /// @brief Field _hasValue, offset: 0x20, size: 0x1, def value: None
  bool ____hasValue;

  /// @brief Field _value, offset: 0x28, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::LazyInject_1, "Zenject", "LazyInject`1");
