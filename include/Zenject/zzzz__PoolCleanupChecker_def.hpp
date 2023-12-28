#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PoolCleanupChecker)
namespace Zenject {
class ILateDisposable;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace Zenject {
class __PoolCleanupChecker____c;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace Zenject {
class PoolCleanupChecker;
}
namespace Zenject {
class __PoolCleanupChecker____c;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::PoolCleanupChecker);
MARK_REF_PTR_T(::Zenject::__PoolCleanupChecker____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11098))
// CS Name: ::PoolCleanupChecker::<>c*
class CORDL_TYPE __PoolCleanupChecker____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::__PoolCleanupChecker____c* __9;

  /// @brief Field <>9__2_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__2_0, put = setStaticF___9__2_0))::System::Func_2<::System::Type*, bool>* __9__2_0;

  static inline void setStaticF___9(::Zenject::__PoolCleanupChecker____c* value);

  static inline ::Zenject::__PoolCleanupChecker____c* getStaticF___9();

  static inline void setStaticF___9__2_0(::System::Func_2<::System::Type*, bool>* value);

  static inline ::System::Func_2<::System::Type*, bool>* getStaticF___9__2_0();

  static inline ::Zenject::__PoolCleanupChecker____c* New_ctor();

  /// @brief Method .ctor addr 0x2ee9424 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <.ctor>b__2_0 addr 0x2ee942c size 0x6c virtual false final false
  inline bool __ctor_b__2_0(::System::Type* x);

  /// @brief Method __zenCreate addr 0x2ee9498 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee94f4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__PoolCleanupChecker____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __PoolCleanupChecker____c(__PoolCleanupChecker____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__PoolCleanupChecker____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __PoolCleanupChecker____c(__PoolCleanupChecker____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __PoolCleanupChecker____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__PoolCleanupChecker____c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::PoolCleanupChecker
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11099))
// CS Name: ::Zenject::PoolCleanupChecker*
class CORDL_TYPE PoolCleanupChecker : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::__PoolCleanupChecker____c;

  /// @brief Field _poolFactories, offset 0x10, size 0x8
  __declspec(property(get = __get__poolFactories, put = __set__poolFactories))::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* _poolFactories;

  /// @brief Field _ignoredPools, offset 0x18, size 0x8
  __declspec(property(get = __get__ignoredPools, put = __set__ignoredPools))::System::Collections::Generic::List_1<::System::Type*>* _ignoredPools;

  /// @brief Convert operator to "::Zenject::ILateDisposable"
  constexpr operator ::Zenject::ILateDisposable*() noexcept;

  constexpr ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*& __get__poolFactories();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>*> const& __get__poolFactories() const;

  constexpr void __set__poolFactories(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Type*>*& __get__ignoredPools();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Type*>*> const& __get__ignoredPools() const;

  constexpr void __set__ignoredPools(::System::Collections::Generic::List_1<::System::Type*>* value);

  static inline ::Zenject::PoolCleanupChecker* New_ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories,
                                                        ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  /// @brief Method .ctor addr 0x2ee8ab0 size 0x11c virtual false final false
  inline void _ctor(::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* poolFactories, ::System::Collections::Generic::List_1<::System::Type*>* ignoredPools);

  /// @brief Method LateDispose addr 0x2ee8bcc size 0x3d4 virtual true final true
  inline void LateDispose();

  /// @brief Method __zenCreate addr 0x2ee8fa0 size 0x11c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ee90bc size 0x304 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PoolCleanupChecker(PoolCleanupChecker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PoolCleanupChecker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PoolCleanupChecker(PoolCleanupChecker const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PoolCleanupChecker();

public:
  /// @brief Field _poolFactories, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::IMemoryPool*>* ____poolFactories;

  /// @brief Field _ignoredPools, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Type*>* ____ignoredPools;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::PoolCleanupChecker, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::PoolCleanupChecker);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::PoolCleanupChecker*, "Zenject", "PoolCleanupChecker");
NEED_NO_BOX(::Zenject::__PoolCleanupChecker____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__PoolCleanupChecker____c*, "Zenject", "PoolCleanupChecker/<>c");
