#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalDeclarationAsyncInitializer)
namespace Zenject {
class SignalDeclaration;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class TickableManager;
}
namespace Zenject {
template <typename T> class LazyInject_1;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace Zenject {
class SignalDeclarationAsyncInitializer;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalDeclarationAsyncInitializer);
// Type: Zenject::SignalDeclarationAsyncInitializer
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10668))
// CS Name: ::Zenject::SignalDeclarationAsyncInitializer*
class CORDL_TYPE SignalDeclarationAsyncInitializer : public ::System::Object {
public:
  // Declarations
  /// @brief Field _tickManager, offset 0x10, size 0x8
  __declspec(property(get = __get__tickManager, put = __set__tickManager))::Zenject::LazyInject_1<::Zenject::TickableManager*>* _tickManager;

  /// @brief Field _declarations, offset 0x18, size 0x8
  __declspec(property(get = __get__declarations, put = __set__declarations))::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* _declarations;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  constexpr ::Zenject::LazyInject_1<::Zenject::TickableManager*>*& __get__tickManager();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::LazyInject_1<::Zenject::TickableManager*>*> const& __get__tickManager() const;

  constexpr void __set__tickManager(::Zenject::LazyInject_1<::Zenject::TickableManager*>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*& __get__declarations();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>*> const& __get__declarations() const;

  constexpr void __set__declarations(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* value);

  static inline ::Zenject::SignalDeclarationAsyncInitializer* New_ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations,
                                                                       ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager);

  /// @brief Method .ctor addr 0x2ec61dc size 0x2c virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* declarations, ::Zenject::LazyInject_1<::Zenject::TickableManager*>* tickManager);

  /// @brief Method Initialize addr 0x2ec6208 size 0x104 virtual true final true
  inline void Initialize();

  /// @brief Method __zenCreate addr 0x2ec630c size 0x11c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec6428 size 0x304 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignalDeclarationAsyncInitializer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignalDeclarationAsyncInitializer(SignalDeclarationAsyncInitializer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignalDeclarationAsyncInitializer();

public:
  /// @brief Field _tickManager, offset: 0x10, size: 0x8, def value: None
  ::Zenject::LazyInject_1<::Zenject::TickableManager*>* ____tickManager;

  /// @brief Field _declarations, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::SignalDeclaration*>* ____declarations;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalDeclarationAsyncInitializer, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SignalDeclarationAsyncInitializer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalDeclarationAsyncInitializer*, "Zenject", "SignalDeclarationAsyncInitializer");
