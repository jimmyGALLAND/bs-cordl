#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(Lazy_1)
namespace System {
class LazyHelper;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System::Threading {
struct LazyThreadSafetyMode;
}
// Forward declare root types
namespace System {
template <typename T> class Lazy_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::System::Lazy_1);
// Type: System::Lazy`1
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2432))
// CS Name: ::System::Lazy`1<T>*
class CORDL_TYPE Lazy_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _state, offset 0x10, size 0x8
  __declspec(property(get = __get__state, put = __set__state))::System::LazyHelper* _state;

  /// @brief Field _factory, offset 0x18, size 0x8
  __declspec(property(get = __get__factory, put = __set__factory))::System::Func_1<T>* _factory;

  /// @brief Field _value, offset 0x20, size 0x8
  __declspec(property(get = __get__value, put = __set__value)) T _value;

  __declspec(property(get = get_IsValueCreated)) bool IsValueCreated;

  __declspec(property(get = get_Value)) T Value;

  constexpr ::System::LazyHelper*& __get__state();

  constexpr ::cordl_internals::to_const_pointer<::System::LazyHelper*> const& __get__state() const;

  constexpr void __set__state(::System::LazyHelper* value);

  constexpr ::System::Func_1<T>*& __get__factory();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_1<T>*> const& __get__factory() const;

  constexpr void __set__factory(::System::Func_1<T>* value);

  constexpr T& __get__value();

  constexpr T const& __get__value() const;

  constexpr void __set__value(T value);

  /// @brief Method CreateViaDefaultConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline T CreateViaDefaultConstructor();

  static inline ::System::Lazy_1<T>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Func_1<T>* valueFactory);

  static inline ::System::Lazy_1<T>* New_ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::System::Func_1<T>* valueFactory, ::System::Threading::LazyThreadSafetyMode mode, bool useDefaultConstructor);

  /// @brief Method ViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ViaConstructor();

  /// @brief Method ViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ViaFactory(::System::Threading::LazyThreadSafetyMode mode);

  /// @brief Method ExecutionAndPublication addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void ExecutionAndPublication(::System::LazyHelper* executionAndPublication, bool useDefaultConstructor);

  /// @brief Method PublicationOnly addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PublicationOnly(::System::LazyHelper* publicationOnly, T possibleValue);

  /// @brief Method PublicationOnlyViaConstructor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PublicationOnlyViaConstructor(::System::LazyHelper* initializer);

  /// @brief Method PublicationOnlyViaFactory addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PublicationOnlyViaFactory(::System::LazyHelper* initializer);

  /// @brief Method PublicationOnlyWaitForOtherThreadToPublish addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void PublicationOnlyWaitForOtherThreadToPublish();

  /// @brief Method CreateValue addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T CreateValue();

  /// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW ToString();

  /// @brief Method get_IsValueCreated addr 0x0 size 0xffffffffffffffff virtual false final false
  inline bool get_IsValueCreated();

  /// @brief Method get_Value addr 0x0 size 0xffffffffffffffff virtual false final false
  inline T get_Value();

  // Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Lazy_1(Lazy_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Lazy_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Lazy_1(Lazy_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Lazy_1();

public:
  /// @brief Field _state, offset: 0x10, size: 0x8, def value: None
  ::System::LazyHelper* ____state;

  /// @brief Field _factory, offset: 0x18, size: 0x8, def value: None
  ::System::Func_1<T>* ____factory;

  /// @brief Field _value, offset: 0x20, size: 0x8, def value: None
  T ____value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::System::Lazy_1, "System", "Lazy`1");
